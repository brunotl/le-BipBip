#!/bin/bash

# donwload source
wget http://ftpmirror.gnu.org/binutils/binutils-2.21.1a.tar.bz2
wget http://ftpmirror.gnu.org/gcc/gcc-4.6.3/gcc-core-4.6.3.tar.bz2
wget http://ftpmirror.gnu.org/gdb/gdb-7.2a.tar.bz2

wget http://sourceforge.net/projects/mspgcc/files/mspgcc/mspgcc-20120406.tar.bz2
wget http://sourceforge.net/projects/mspgcc/files/msp430mcu/msp430mcu-20120716.tar.bz2

wget http://sourceforge.net/projects/mspgcc/files/msp430-libc/msp430-libc-20120224.tar.bz2

# need binutils 2.22 ?
#wget http://sourceforge.net/projects/mspgcc/files/msp430-libc/msp430-libc-20120716.tar.bz2

wget http://sourceforge.net/projects/mspdebug/files/mspdebug-0.20.tar.gz

wget http://sourceforge.net/projects/mspgcc/files/Patches/LTS/20120406/msp430-gcc-4.6.3-20120406-sf3540953.patch
wget http://sourceforge.net/projects/mspgcc/files/Patches/LTS/20120406/msp430-gcc-4.6.3-20120406-sf3559978.patch
wget http://sourceforge.net/projects/mspgcc/files/Patches/gdb-7.2a/msp430-gdb-7.2a-20111205.patch

# extract all the following files into the msp430-build directory
tar xvfj binutils-2.21.1a.tar.bz2
tar xvfj gcc-core-4.6.3.tar.bz2
tar xvfj gdb-7.2a.tar.bz2

tar xvfj mspgcc-20120406.tar.bz2
tar xvfj msp430mcu-20120716.tar.bz2
tar xvfj msp430-libc-20120716.tar.bz2

tar xvfz mspdebug-0.20.tar.gz

#download gcc prerequisites
cd gcc-4.6.3
./contrib/download_prerequisites
cd ..

# patch binutils (using the files provided in the Release Files, and repeat for any additional patches or LTS files)
cd binutils-2.21.1
# Patch binutils to bring it to Release 20120406 (still at 20120406)
patch -p1<../mspgcc-20120406/msp430-binutils-2.21.1a-20120406.patch


# Return to the build directory
cd ..

# patch GCC to bring it up to Release 20120406
cd gcc-4.6.3
patch -p1<../mspgcc-20120406/msp430-gcc-4.6.3-20120406.patch

# update with LTS files
patch -p1<../msp430-gcc-4.6.3-20120406-sf3540953.patch
patch -p1<../msp430-gcc-4.6.3-20120406-sf3559978.patch

# Return to the build directory
cd ..

# Patch GDB to bring it to release 20120406
cd gdb-7.2
patch -p1<../mspgcc-20120406/msp430-gdb-7.2a-20120406.patch
patch -p1<../msp430-gdb-7.2a-20111205.patch

# Return to the build directory
cd ..

#Create a sub-set of Build Directories
mkdir binutils-2.21.1-msp430
mkdir gcc-4.6.3-msp430
mkdir gdb-7.2-msp430

# Configure Binutils
cd binutils-2.21.1-msp430
# We need to build binutils for the msp430
../binutils-2.21.1/configure --target=msp430 --program-prefix="msp430-" 

make
# Do the install as root (e.g., sudo)
sudo make install

#Configure GCC
cd ../gcc-4.6.3-msp430
../gcc-4.6.3/configure --target=msp430 --enable-languages=c --program-prefix="msp430-" 

make
# Do the install as root (e.g., sudo)
sudo make install

#Configure GDB
# need zlib-devel

cd ../gdb-7.2-msp430
../gdb-7.2/configure --target=msp430 --program-prefix="msp430-" 

make
# Do the install as root (e.g., sudo)
sudo make install

#Install the mspgcc-mcu files
cd ../msp430mcu-20120716
sudo MSP430MCU_ROOT=`pwd` ./scripts/install.sh /usr/local/

######################################
# Install the mspgcc-libc
cd ../msp430-libc-20120716

#  If you need to disable features, run configure here with any of the following flags to enable/disable features.
#  --disable-printf-int64 : Remove 64-bit integer support to printf formats
#  --disable-printf-int32 : Remove 32-bit integer support from printf formats
#  --enable-ieee754-errors : Use IEEE 754 error checking in libfp functions

cd src
make 
# Do the install as root (e.g., sudo)
sudo PATH=$PATH make PREFIX=/usr/local install
cd ..

# Now let's build the debugger
cd mspdebug-0.20
make
# Do the install as root (e.g., sudo)
sudo make install
cd ../..

# ALL DONE


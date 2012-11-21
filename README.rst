Installing requirements
=======================

* eclipse with CDT. This is not mandatory, but everything has been configured
  for eclipse and using it will make your life easier.
* gcc with msp430 support. 
* the mspdebug for debuging.

On Debian and its derivatives, you can install the previous requirements::

  # apt-get install gcc-msp430 mspdebug eclipse-cdt

You can get these software from their upstream webpage:

* Eclipse CDT : http://www.eclipse.org/cdt/downloads.php
* msp-gcc and mspdebug :
  http://sourceforge.net/apps/mediawiki/mspgcc/index.php?title=MSPGCC_Wiki (you
  can find instructions for building everything from source)

* Unbuntu 12.04 : msp430-gdb from Oneiric repository don't work.
  you need install from source. cf: build-mspgcc.scr


Getting the source
==================

Get the source from git::

   $ git clone git://github.com/lebipbip/le-BipBip.git

Or get a ZIP archive with the latest code directly from the github project page:

  https://github.com/lebipbip/le-BipBip/zipball/master


Configuring Eclipse
===================

You need to import the project in your workspace:

* right click in the project browser and select : ''Import'',
  ''General''>''Existing project into workspace''
* in the ''Select root directory'', select the directory where you have
  extracted the *le bipbip* source code.
* the import wizard should show 1 project named ''solarclimb'': click on
  ''Finish''.

The project as it is provided in the source code does make any asumption on
where the tools are installed. Instead, it relies on the correct configuration
of your system for finding the ''msp430-gcc'' executable (and all its friends)
in your PATH. If it is not the case (for example if you have installed gcc in
''/usr/local/''), you need to either fix your PATH variable::

  $ export PATH=/path/to/msp-gcc/bin:$PATH

Or you can change the settings in the project:

* right click on the project name
* open the properties dialog
* change your settings to fit your configuration in ''C/C++ Build'' > ''Build''.

You may need to change the settings for gcc, ld and gas.


Building the code
=================

Building the code is as simple as clicking on the ''build project'' icon (small
hammer). Be sure to select the ''Debug'' profile, as its currently the only
profile correctly configured.

Loading the code
================

To load the code, you need to use ''mspdebug'' :

  $ mspdebug rf2500 -q "prog solarclimb.elf"

''solarclimb.elf'' being the compiled software (in ELF format) you want to program
on the device.

You should get an output similar to:

  Trying to open interface 1 on 002
  Device: MSP430G2553
  fet: FET returned NAK
  Erasing...
  Programming...
  Done, 11184 bytes written

If instead, you have an error, like:

  usbutil: unable to find a device matching 0451:f432

You may need to fix permission on the jtag USB device (to be sure, try to prefix
the command with ''sudo'').

mspdebug : rf2500: can't open device: Permission denied
==============================================

Create new udev file with the correct id.

	$ mspdebug  --usb-list

find this line: 		 002:004 0451:f432 eZ430-RF2500 [serial: xxxxxxxxxxxxxxxx]
the id 00x:00x corresponds to id of new udev files rules

no you can create file

	$ sudo nano /etc/udev/rules.d/24-ti-launchpad.rules

Add this line into file :

	ATTRS{idVendor}=="0451", ATTRS{idProduct}=="f432", MODE="0660", GROUP="dialout"

saved and rebooted, and it seems to be working.

Eclipse Juno debug configuration
======================
* install plugin : "Eclipse C/C++ GDB hardware debugging"

config :  http://springuin.nl/articles/launchpadwindows




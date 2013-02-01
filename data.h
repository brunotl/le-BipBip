/*
 * data.h
 *
 *  Created on: 19 sept. 2011
 *      Author: timothee
 */

#ifndef DATA_H_
#define DATA_H_
#include "target.h"
#ifdef SENSOR_DATA_SIMU

const uint32_t DataSampleElevator[] =
{
		100532	,
		100529	,
		100533	,
		100528	,
		100530	,
		100529	,
		100530	,
		100532	,
		100528	,
		100533	,
		100527	,
		100530	,
		100534	,
		100535	,
		100531	,
		100533	,
		100532	,
		100532	,
		100533	,
		100533	,
		100532	,
		100529	,
		100533	,
		100530	,
		100533	,
		100531	,
		100532	,
		100532	,
		100533	,
		100537	,
		100535	,
		100536	,
		100530	,
		100536	,
		100532	,
		100531	,
		100530	,
		100535	,
		100532	,
		100533	,
		100529	,
		100531	,
		100528	,
		100532	,
		100530	,
		100533	,
		100533	,
		100531	,
		100531	,
		100532	,
		100533	,
		100529	,
		100532	,
		100532	,
		100531	,
		100534	,
		100530	,
		100531	,
		100530	,
		100533	,
		100531	,
		100533	,
		100531	,
		100531	,
		100529	,
		100531	,
		100532	,
		100533	,
		100530	,
		100531	,
		100530	,
		100531	,
		100532	,
		100532	,
		100530	,
		100529	,
		100533	,
		100530	,
		100529	,
		100530	,
		100532	,
		100530	,
		100528	,
		100528	,
		100532	,
		100528	,
		100529	,
		100524	,
		100532	,
		100528	,
		100528	,
		100530	,
		100528	,
		100528	,
		100523	,
		100529	,
		100528	,
		100530	,
		100528	,
		100526	,
		100527	,
		100528	,
		100527	,
		100527	,
		100527	,
		100528	,
		100526	,
		100532	,
		100527	,
		100526	,
		100526	,
		100525	,
		100528	,
		100525	,
		100523	,
		100526	,
		100525	,
		100528	,
		100523	,
		100529	,
		100527	,
		100529	,
		100523	,
		100524	,
		100524	,
		100523	,
		100524	,
		100524	,
		100521	,
		100522	,
		100523	,
		100526	,
		100524	,
		100523	,
		100522	,
		100522	,
		100523	,
		100519	,
		100518	,
		100520	,
		100521	,
		100521	,
		100520	,
		100524	,
		100522	,
		100519	,
		100523	,
		100520	,
		100518	,
		100516	,
		100516	,
		100518	,
		100515	,
		100519	,
		100517	,
		100518	,
		100515	,
		100517	,
		100515	,
		100516	,
		100514	,
		100515	,
		100513	,
		100515	,
		100514	,
		100513	,
		100516	,
		100515	,
		100513	,
		100516	,
		100513	,
		100514	,
		100513	,
		100514	,
		100516	,
		100513	,
		100511	,
		100510	,
		100510	,
		100513	,
		100511	,
		100511	,
		100512	,
		100510	,
		100507	,
		100509	,
		100507	,
		100509	,
		100508	,
		100506	,
		100508	,
		100506	,
		100507	,
		100504	,
		100505	,
		100508	,
		100506	,
		100505	,
		100504	,
		100505	,
		100505	,
		100508	,
		100504	,
		100504	,
		100503	,
		100507	,
		100507	,
		100504	,
		100503	,
		100503	,
		100502	,
		100501	,
		100503	,
		100504	,
		100506	,
		100502	,
		100504	,
		100505	,
		100498	,
		100501	,
		100498	,
		100502	,
		100501	,
		100501	,
		100499	,
		100502	,
		100499	,
		100502	,
		100500	,
		100500	,
		100500	,
		100498	,
		100496	,
		100498	,
		100499	,
		100500	,
		100498	,
		100497	,
		100498	,
		100496	,
		100496	,
		100497	,
		100498	,
		100496	,
		100496	,
		100494	,
		100489	,
		100490	,
		100495	,
		100492	,
		100494	,
		100495	,
		100492	,
		100491	,
		100493	,
		100491	,
		100492	,
		100493	,
		100493	,
		100491	,
		100491	,
		100491	,
		100492	,
		100488	,
		100490	,
		100490	,
		100486	,
		100489	,
		100488	,
		100488	,
		100489	,
		100485	,
		100486	,
		100490	,
		100489	,
		100485	,
		100487	,
		100486	,
		100485	,
		100486	,
		100484	,
		100482	,
		100483	,
		100482	,
		100484	,
		100482	,
		100484	,
		100483	,
		100479	,
		100481	,
		100484	,
		100484	,
		100483	,
		100477	,
		100484	,
		100479	,
		100477	,
		100478	,
		100477	,
		100477	,
		100477	,
		100479	,
		100480	,
		100477	,
		100480	,
		100477	,
		100480	,
		100478	,
		100477	,
		100476	,
		100478	,
		100475	,
		100475	,
		100474	,
		100474	,
		100475	,
		100474	,
		100478	,
		100479	,
		100474	,
		100476	,
		100475	,
		100473	,
		100474	,
		100475	,
		100473	,
		100476	,
		100476	,
		100473	,
		100474	,
		100475	,
		100472	,
		100473	,
		100475	,
		100470	,
		100468	,
		100475	,
		100474	,
		100472	,
		100474	,
		100470	,
		100472	,
		100470	,
		100472	,
		100472	,
		100473	,
		100471	,
		100475	,
		100473	,
		100471	,
		100470	,
		100471	,
		100475	,
		100470	,
		100472	,
		100472	,
		100469	,
		100470	,
		100471	,
		100468	,
		100474	,
		100469	,
		100471	,
		100469	,
		100472	,
		100471	,
		100469	,
		100471	,
		100468	,
		100467	,
		100471	,
		100469	,
		100469	,
		100467	,
		100468	,
		100471	,
		100467	,
		100467	,
		100468	,
		100470	,
		100470	,
		100470	,
		100472	,
		100470	,
		100470	,
		100471	,
		100468	,
		100470	,
		100474	,
		100469	,
		100474	,
		100467	,
		100468	,
		100469	,
		100467	,
		100466	,
		100470	,
		100468	,
		100466	,
		100472	,
		100466	,
		100471	,
		100469	,
		100470	,
		100467	,
		100470	,
		100471	,
		100471	,
		100468	,
		100468	,
		100468	,
		100469	,
		100468	,
		100470	,
		100471	,
		100471	,
		100467	,
		100469	,
		100472	,
		100470	,
		100471	,
		100470	,
		100467	,
		100469	,
		100469	,
		100469	,
		100471	,
		100471	,
		100468	,
		100469	,
		100467	,
		100466	,
		100468	,
		100470	,
		100470	,
		100469	,
		100471	,
		100469	,
		100469	,
		100474	,
		100469	,
		100469	,
		100470	,
		100469	,
		100468	,
		100470	,
		100471	,
		100470	,
		100474	,
		100468	,
		100471	,
		100474	,
		100472	,
		100467	,
		100469	,
		100473	,
		100471	,
		100471	,
		100471	,
		100469	,
		100467	,
		100470	,
		100471	,
		100472	,
		100470	,
		100472	,
		100471	,
		100470	,
		100472	,
		100469	,
		100473	,
		100467	,
		100470	,
		100469	,
		100470	,
		100468	,
		100467	,
		100469	,
		100468	,
		100471	,
		100474	,
		100470	,
		100469	,
		100468	,
		100470	,
		100474	,
		100469	,
		100468	,
		100469	,
		100469	,
		100467	,
		100467	,
		100472	,
		100472	,
		100470	,
		100468	,
		100472	,
		100467	,
		100472	,
		100475	,
		100472	,
		100468	,
		100473	,
		100471	,
		100469	,
		100469	,
		100473	,
		100468	,
		100469	,
		100470	,
		100470	,
		100472	,
		100469	,
		100468	,
		100468	,
		100472	,
		100467	,
		100469	,
		100470	,
		100470	,
		100471	,
		100469	,
		100469	,
		100471	,
		100467	,
		100470	,
		100470	,
		100471	,
		100473	,
		100471	,
		100470	,
		100466	,
		100469	,
		100466	,
		100471	,
		100469	,
		100470	,
		100471	,
		100464	,
		100467	,
		100468	,
		100467	,
		100467	,
		100469	,
		100469	,
		100470	,
		100470	,
		100474	,
		100472	,
		100468	,
		100467	,
		100469	,
		100470	,
		100469	,
		100469	,
		100468	,
		100469	,
		100470	,
		100467	,
		100469	,
		100470	,
		100469	,
		100465	,
		100469	,
		100469	,
		100472	,
		100471	,
		100469	,
		100474	,
		100473	,
		100470	,
		100471	,
		100470	,
		100471	,
		100470	,
		100469	,
		100471	,
		100472	,
		100470	,
		100468	,
		100469	,
		100468	,
		100471	,
		100468	,
		100467	,
		100471	,
		100470	,
		100472	,
		100472	,
		100470	,
		100471	,
		100471	,
		100475	,
		100472	,
		100472	,
		100470	,
		100471	,
		100470	,
		100474	,
		100470	,
		100472	,
		100469	,
		100466	,
		100471	,
		100473	,
		100471	,
		100469	,
		100469	,
		100470	,
		100470	,
		100472	,
		100469	,
		100472	,
		100472	,
		100473	,
		100468	,
		100465	,
		100473	,
		100466	,
		100466	,
		100469	,
		100471	,
		100468	,
		100470	,
		100468	,
		100470	,
		100471	,
		100470	,
		100468	,
		100468	,
		100468	,
		100468	,
		100469	,
		100464	,
		100470	,
		100466	,
		100467	,
		100467	,
		100467	,
		100469	,
		100468	,
		100467	,
		100469	,
		100466	,
		100469	,
		100467	,
		100468	,
		100465	,
		100468	,
		100469	,
		100467	,
		100470	,
		100467	,
		100467	,
		100467	,
		100466	,
		100469	,
		100466	,
		100465	,
		100467	,
		100468	,
		100465	,
		100465	,
		100468	,
		100469	,
		100463	,
		100468	,
		100465	,
		100470	,
		100465	,
		100466	,
		100466	,
		100465	,
		100466	,
		100469	,
		100466	,
		100463	,
		100465	,
		100469	,
		100466	,
		100468	,
		100466	,
		100466	,
		100464	,
		100465	,
		100470	,
		100464	,
		100465	,
		100463	,
		100466	,
		100467	,
		100461	,
		100467	,
		100467	,
		100468	,
		100464	,
		100469	,
		100467	,
		100466	,
		100468	,
		100472	,
		100466	,
		100470	,
		100467	,
		100464	,
		100468	,
		100466	,
		100463	,
		100466	,
		100468	,
		100467	,
		100467	,
		100467	,
		100466	,
		100468	,
		100469	,
		100468	,
		100470	,
		100467	,
		100467	,
		100468	,
		100468	,
		100470	,
		100468	,
		100468	,
		100469	,
		100467	,
		100469	,
		100467	,
		100470	,
		100467	,
		100466	,
		100463	,
		100468	,
		100466	,
		100463	,
		100470	,
		100464	,
		100468	,
		100466	,
		100469	,
		100469	,
		100465	,
		100467	,
		100469	,
		100467	,
		100465	,
		100469	,
		100470	,
		100470	,
		100465	,
		100465	,
		100471	,
		100466	,
		100470	,
		100470	,
		100470	,
		100471	,
		100468	,
		100468	,
		100468	,
		100466	,
		100471	,
		100469	,
		100471	,
		100471	,
		100468	,
		100468	,
		100471	,
		100471	,
		100468	,
		100467	,
		100470	,
		100471	,
		100469	,
		100473	,
		100467	,
		100471	,
		100467	,
		100471	,
		100470	,
		100465	,
		100471	,
		100466	,
		100471	,
		100470	,
		100466	,
		100465	,
		100468	,
		100468	,
		100472	,
		100464	,
		100468	,
		100464	,
		100467	,
		100468	,
		100469	,
		100465	,
		100469	,
		100469	,
		100468	,
		100473	,
		100469	,
		100465	,
		100468	,
		100467	,
		100462	,
		100466	,
		100468	,
		100467	,
		100467	,
		100467	,
		100473	,
		100468	,
		100468	,
		100466	,
		100470	,
		100472	,
		100471	,
		100467	,
		100469	,
		100473	,
		100469	,
		100473	,
		100471	,
		100471	,
		100471	,
		100467	,
		100469	,
		100470	,
		100469	,
		100467	,
		100472	,
		100468	,
		100469	,
		100472	,
		100465	,
		100469	,
		100467	,
		100472	,
		100470	,
		100467	,
		100468	,
		100467	,
		100468	,
		100466	,
		100470	,
		100467	,
		100465	,
		100465	,
		100467	,
		100468	,
		100474	,
		100470	,
		100469	,
		100467	,
		100470	,
		100473	,
		100472	,
		100466	,
		100469	,
		100468	,
		100466	,
		100470	,
		100467	,
		100471	,
		100466	,
		100469	,
		100468	,
		100471	,
		100468	,
		100465	,
		100469	,
		100467	,
		100466	,
		100469	,
		100466	,
		100470	,
		100471	,
		100466	,
		100466	,
		100469	,
		100469	,
		100468	,
		100469	,
		100469	,
		100470	,
		100469	,
		100466	,
		100470	,
		100470	,
		100467	,
		100469	,
		100472	,
		100469	,
		100469	,
		100469	,
		100467	,
		100470	,
		100471	,
		100466	,
		100470	,
		100468	,
		100470	,
		100470	,
		100468	,
		100470	,
		100469	,
		100471	,
		100468	,
		100469	,
		100472	,
		100472	,
		100475	,
		100468	,
		100473	,
		100470	,
		100472	,
		100470	,
		100475	,
		100474	,
		100475	,
		100471	,
		100470	,
		100472	,
		100470	,
		100465	,
		100473	,
		100474	,
		100469	,
		100468	,
		100469	,
		100474	,
		100472	,
		100473	,
		100470	,
		100472	,
		100473	,
		100471	,
		100470	,
		100477	,
		100473	,
		100470	,
		100469	,
		100471	,
		100468	,
		100470	,
		100472	,
		100471	,
		100470	,
		100472	,
		100472	,
		100469	,
		100467	,
		100469	,
		100469	,
		100475	,
		100470	,
		100470	,
		100468	,
		100470	,
		100474	,
		100469	,
		100471	,
		100468	,
		100470	,
		100470	,
		100470	,
		100473	,
		100472	,
		100475	,
		100473	,
		100469	,
		100474	,
		100472	,
		100471	,
		100474	,
		100471	,
		100473	,
		100473	,
		100470	,
		100474	,
		100475	,
		100473	,
		100472	,
		100474	,
		100475	,
		100474	,
		100473	,
		100470	,
		100472	,
		100470	,
		100470	,
		100472	,
		100472	,
		100469	,
		100472	,
		100473	,
		100470	,
		100470	,
		100470	,
		100473	,
		100470	,
		100470	,
		100472	,
		100470	,
		100471	,
		100471	,
		100473	,
		100472	,
		100475	,
		100470	,
		100471	,
		100471	,
		100472	,
		100472	,
		100472	,
		100472	,
		100468	,
		100472	,
		100473	,
		100468	,
		100473	,
		100471	,
		100473	,
		100472	,
		100469	,
		100471	,
		100472	,
		100472	,
		100472	,
		100471	,
		100470	,
		100472	,
		100474	,
		100475	,
		100471	,
		100469	,
		100472	,
		100471	,
		100468	,
		100472	,
		100470	,
		100471	,
		100471	,
		100471	,
		100472	,
		100469	,
		100473	,
		100471	,
		100470	,
		100472	,
		100472	,
		100466	,
		100473	,
		100469	,
		100471	,
		100472	,
		100473	,
		100471	,
		100470	,
		100468	,
		100473	,
		100471	,
		100472	,
		100473	,
		100472	,
		100472	,
		100475	,
		100473	,
		100474	,
		100468	,
		100474	,
		100474	,
		100472	,
		100476	,
		100473	,
		100475	,
		100472	,
		100474	,
		100475	,
		100474	,
		100477	,
		100472	,
		100474	,
		100474	,
		100473	,
		100477	,
		100474	,
		100477	,
		100477	,
		100477	,
		100474	,
		100474	,
		100472	,
		100474	,
		100475	,
		100474	,
		100475	,
		100479	,
		100478	,
		100474	,
		100480	,
		100477	,
		100477	,
		100478	,
		100475	,
		100477	,
		100478	,
		100478	,
		100478	,
		100477	,
		100479	,
		100481	,
		100479	,
		100480	,
		100478	,
		100482	,
		100482	,
		100484	,
		100479	,
		100480	,
		100481	,
		100482	,
		100483	,
		100481	,
		100483	,
		100481	,
		100480	,
		100481	,
		100484	,
		100482	,
		100487	,
		100482	,
		100485	,
		100484	,
		100483	,
		100483	,
		100484	,
		100482	,
		100488	,
		100487	,
		100486	,
		100488	,
		100487	,
		100490	,
		100484	,
		100488	,
		100489	,
		100490	,
		100491	,
		100491	,
		100488	,
		100489	,
		100487	,
		100488	,
		100488	,
		100487	,
		100491	,
		100490	,
		100489	,
		100490	,
		100489	,
		100488	,
		100489	,
		100490	,
		100492	,
		100490	,
		100490	,
		100490	,
		100491	,
		100492	,
		100492	,
		100495	,
		100490	,
		100493	,
		100491	,
		100492	,
		100495	,
		100492	,
		100493	,
		100495	,
		100496	,
		100495	,
		100496	,
		100490	,
		100496	,
		100496	,
		100497	,
		100498	,
		100496	,
		100493	,
		100499	,
		100500	,
		100497	,
		100496	,
		100497	,
		100498	,
		100498	,
		100500	,
		100500	,
		100502	,
		100504	,
		100502	,
		100499	,
		100504	,
		100504	,
		100502	,
		100503	,
		100508	,
		100506	,
		100506	,
		100505	,
		100503	,
		100505	,
		100504	,
		100506	,
		100507	,
		100507	,
		100506	,
		100502	,
		100509	,
		100506	,
		100510	,
		100505	,
		100509	,
		100512	,
		100508	,
		100511	,
		100511	,
		100510	,
		100507	,
		100508	,
		100514	,
		100512	,
		100509	,
		100513	,
		100511	,
		100510	,
		100511	,
		100506	,
		100510	,
		100510	,
		100511	,
		100509	,
		100514	,
		100515	,
		100514	,
		100513	,
		100517	,
		100514	,
		100515	,
		100516	,
		100515	,
		100514	,
		100515	,
		100516	,
		100515	,
		100518	,
		100518	,
		100519	,
		100518	,
		100515	,
		100514	,
		100521	,
		100518	,
		100518	,
		100521	,
		100521	,
		100516	,
		100521	,
		100523	,
		100521	,
		100518	,
		100523	,
		100524	,
		100521	,
		100518	,
		100521	,
		100523	,
		100526	,
		100523	,
		100522	,
		100527	,
		100526	,
		100525	,
		100523	,
		100526	,
		100524	,
		100524	,
		100526	,
		100524	,
		100528	,
		100527	,
		100526	,
		100523	,
		100529	,
		100528	,
		100527	,
		100528	,
		100527	,
		100528	,
		100527	,
		100527	,
		100529	,
		100530	,
		100529	,
		100533	,
		100527	,
		100528	,
		100532	,
		100532	,
		100531	,
		100525	,
		100529	,
		100528	,
		100531	,
		100529	,
		100528	,
		100530	,
		100533	,
		100531	,
		100532	,
		100535	,
		100532	,
		100530	,
		100536	,
		100528	,
		100532	,
		100532	,
		100531	,
		100532	,
		100533	,
		100532	,
		100534	,
		100531	,
		100533	,
		100534	,
		100533	,
		100530	,
		100533	,
		100532	,
		100533	,
		100532	,
		100531	,
		100534	,
		100535	,
		100534	,
		100533	,
		100533	,
		100537	,
		100534	,
		100535	,
		100534	,
		100533	,
		100532	,
		100535	,
		100535	,
		100532	,
		100540	,
		100534	,
		100538	,
		100537	,
		100534	,
		100537	,
		100534	,
		100536	,
		100537	,
		100538	,
		100532	,
		100536	,
		100533	,
		100536	,
		100535	,
		100535	,
		100530	,
		100535	,
		100538	,
		100536	,
		100537	,
		100538	,
		100536	,
		100535	,
		100537	,
		100535	,
		100535	,
		100538	,
		100536	,
		100532	,
		100535	,
		100536	,
		100536	,
		100534	,
		100531	,
		100531	,
		100534	,
		100535	,
		100536	,
		100535	,
		100532	,
		100536	,
		100536	,
		100534	,
		100530	,
		100536	,
		100535	,
		100535	,
		100537	,
		100536	,
		100537	,
		100534	,
		100537	,
		100536	,
		100538	,
		100538	,
		100535	,
		100533	,
		100539	,
		100536	,
		100535	,
		100538	,
		100534	,
		100538	,
		100542	,
		100537	,
		100538	,
		100537	,
		100534	,
		100536	,
		100537	,
		100538	,
		100538	,
		100540	,
		100538	,
		100536	,
		100538	,
		100535	,
		100535	,
		100538	,
		100540	,
		100535	,
		100538	,
		100537	,
		100539	,
		100536	,
		100537	,
		100533	,
		100537	,
		100540	,
		100537	,
		100535	,
		100537	,
		100539	,
		100538	,
		100541	,
		100541	,
		100539	,
		100536	,
		100537	,
		100538	,
		100536	,
		100533	,
		100538	,
		100536	,
		100535	,
		100536	,
		100534	,
		100532	,
		100537	,
		100537	,
		100536	,
		100536	,
		100538	,
		100535	,
		100539	,
		100537	,
		100540	,
		100538	,
		100538	,
		100533	,
		100535	,
		100536	,
		100539	,
		100535	,
		100538	,
		100535	,
		100533	,
		100536	,
		100536	,
		100532	,
		100536	,
		100536	,
		100537	,
		100538	,
		100535	,
		100534	,
		100537	,
		100538	,
		100539	,
		100533	,
		100538	,
		100538	,
		100542	,
		100541	,
		100539	,
		100542	,
		100541	,
		100536	,
		100539	,
		100543	,
		100540	,
		100539	,
		100541	,
		100536	,
		100539	,
		100535	,
		100537	,
		100536	,
		100539	,
		100538	,
		100535	,
		100539	,
		100536	,
		100538	,
		100539	,
		100535	,
		100537	,
		100537	,
		100540	,
		100540	,
		100539	,
		100540	,
		100538	,
		100540	,
		100537	,
		100538	,
		100535	,
		100539	,
		100539	,
		100539	,
		100539	,
		100535	,
		100538	,
		100538	,
		100536	,
		100535	,
		100537	,
		100538	,
		100536	,
		100541	,
		100538	,
		100536	,
		100539	,
		100539	,
		100538	,
		100538	,
		100539	,
		100537	,
		100538	,
		100543	,
		100536	,
		100537	,
		100539	,
		100538	,
		100539	,
		100540	,
		100540	,
		100536	,
		100540

};

#endif //SENSOR_DATA_SIMU
#endif /* DATA_H_ */

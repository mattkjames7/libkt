#ifndef __CONTTRACE_H__
#define __CONTTRACE_H__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../magnetopause/withinmp.h"
#endif

typedef bool (*CTFuncMP)(double,double,double,double);
typedef bool (*CTFuncTX)(double,double);
typedef bool (*CTFuncSC)(double,double,double);


/***********************************************************************
 * NAME : bool ContTraceMP(x,y,z,Rsm)
 * 
 * DESCRIPTION : Checks whether a position is within the magnetopause.
 * 
 * INPUTS : 
 * 		double x	x-coordinate MSM (Rm)
 * 		double y	y-coordinate MSM (Rm)
 * 		double z	z-coordinate MSM (Rm)
 * 		double Rsm 	Magnetopause standoff distance (Rm)
 *
 * RETURNS :
 *		bool wmp		true if within magnetopause.
 * 
 * ********************************************************************/
bool ContTraceMP(double x, double y, double z, double Rsm);

/***********************************************************************
 * NAME : bool ContTraceMPDummy(x,y,z,Rsm)
 * 
 * DESCRIPTION : Dummy function
 * 
 * INPUTS : 
 * 		double x	x-coordinate MSM (Rm)
 * 		double y	y-coordinate MSM (Rm)
 * 		double z	z-coordinate MSM (Rm)
 * 		double Rsm 	Magnetopause standoff distance (Rm)
 *
 * RETURNS :
 *		bool wmp		true, always
 * 
 * ********************************************************************/
bool ContTraceMPDummy(double x, double y, double z, double Rsm);

/***********************************************************************
 * NAME : bool ContTraceTail(x,TailX)
 * 
 * DESCRIPTION : Checks whether a position is within some range along 
 * 		the tail.
 * 
 * INPUTS : 
 * 		double x		x-coordinate MSM (Rm)
 * 		doubel TailX	Minumum x-coordinate.
 *
 * RETURNS :
 *		bool cont		true if x >= TailX
 *  
 * ********************************************************************/
bool ContTraceTail(double x, double TailX);

/***********************************************************************
 * NAME : bool ContTraceTailDummy(x,TailX)
 * 
 * DESCRIPTION : Dummy function
 * 
 * INPUTS : 
 * 		double x		x-coordinate MSM (Rm)
 * 		doubel TailX	Minumum x-coordinate.
 *
 * RETURNS :
 *		bool cont		true always
 *  
 * ********************************************************************/
bool ContTraceTailDummy(double x, double TailX);

/***********************************************************************
 * NAME : bool ContTraceSurface1(r,rmsm,rmso)
 * 
 * DESCRIPTION : Checks whether is above the actual planetary surface.
 * 
 * INPUTS : 
 * 		double z		z-coordinate MSM (Rm)
 * 		double rmsm		radial coordinate in MSM (Rm)
 * 		double rmso		radial coordinate in MSO (Rm)
 *	
 * RETURNS :
 *		bool cont		true if r_mso > 1
 *  
 * ********************************************************************/
bool ContTraceSurface1(double z, double rmsm, double rmso);

/***********************************************************************
 * NAME : bool ContTraceSurface2(r,rmsm,rmso)
 * 
 * DESCRIPTION : Checks whether is above the actual planetary core.
 * 
 * INPUTS : 
 * 		double z		z-coordinate MSM (Rm)
 * 		double rmsm		radial coordinate in MSM (Rm)
 * 		double rmso		radial coordinate in MSO (Rm)
 *	
 * RETURNS :
 *		bool cont		true if r_mso > 0.832
 *  
 * ********************************************************************/
bool ContTraceSurface2(double z, double rmsm, double rmso);

/***********************************************************************
 * NAME : bool ContTraceSurface3(r,rmsm,rmso)
 * 
 * DESCRIPTION : Checks whether is above the virtual, dipole-centered
 * 		surface at 1 Rm.
 * 
 * INPUTS : 
 * 		double z		z-coordinate MSM (Rm)
 * 		double rmsm		radial coordinate in MSM (Rm)
 * 		double rmso		radial coordinate in MSO (Rm)
 *	
 * RETURNS :
 *		bool cont		true if r_msm > 1
 *  
 * ********************************************************************/
bool ContTraceSurface3(double z, double rmsm, double rmso);

/***********************************************************************
 * NAME : bool ContTraceSurface4(r,rmsm,rmso)
 * 
 * DESCRIPTION : Checks whether is above the virtual, dipole-centered
 * 		core at 0.832 Rm.
 * 
 * INPUTS : 
 * 		double z		z-coordinate MSM (Rm)
 * 		double rmsm		radial coordinate in MSM (Rm)
 * 		double rmso		radial coordinate in MSO (Rm)
 *	
 * RETURNS :
 *		bool cont		true if r_msm > 0.832
 *  
 * ********************************************************************/
bool ContTraceSurface4(double z, double rmsm, double rmso);

/***********************************************************************
 * NAME : bool ContTraceSurface5(r,rmsm,rmso)
 * 
 * DESCRIPTION : Checks whether is above the virtual, dipole-centered
 * 		surface at 1 Rm in the south and the actual planetary surface
 * 		in the north.
 * 
 * INPUTS : 
 * 		double z		z-coordinate MSM (Rm)
 * 		double rmsm		radial coordinate in MSM (Rm)
 * 		double rmso		radial coordinate in MSO (Rm)
 *	
 * RETURNS :
 *		bool cont		true /false
 *  
 * ********************************************************************/
bool ContTraceSurface5(double z, double rmsm, double rmso);

/***********************************************************************
 * NAME : bool ContTraceSurface6(r,rmsm,rmso)
 * 
 * DESCRIPTION : Checks whether is above the virtual, dipole-centered
 * 		core at 0.832 Rm in the south and the actual planetary core
 * 		in the north. (This is the best option to get all footprints)
 * 
 * INPUTS : 
 * 		double z		z-coordinate MSM (Rm)
 * 		double rmsm		radial coordinate in MSM (Rm)
 * 		double rmso		radial coordinate in MSO (Rm)
 *	
 * RETURNS :
 *		bool cont		true /false
 *  
 * ********************************************************************/
bool ContTraceSurface6(double z, double rmsm, double rmso);

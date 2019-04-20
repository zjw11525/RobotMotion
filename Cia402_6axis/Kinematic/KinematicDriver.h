///////////////////////////////////////////////////////////////////////////////
// KinematicDriver.h

#ifndef __KINEMATICDRIVER_H__
#define __KINEMATICDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define KINEMATICDRV_NAME        "KINEMATIC"
#define KINEMATICDRV_Major       1
#define KINEMATICDRV_Minor       0

#define DEVICE_CLASS CKinematicDriver

#include "ObjDriver.h"

class CKinematicDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl KINEMATICDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(KINEMATICDRV)
	VxD_Service( KINEMATICDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __KINEMATICDRIVER_H__
///////////////////////////////////////////////////////////////////////////////
// KinematicDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "KinematicDriver.h"
#include "KinematicClassFactory.h"

DECLARE_GENERIC_DEVICE(KINEMATICDRV)

IOSTATUS CKinematicDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CKinematicClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CKinematicDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CKinematicDriver::KINEMATICDRV_GetVersion( )
{
	return( (KINEMATICDRV_Major << 8) | KINEMATICDRV_Minor );
}


// KinematicCtrl.cpp : Implementation of CTcKinematicCtrl
#include "TcPch.h"
#pragma hdrstop

#include "KinematicW32.h"
#include "KinematicCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CKinematicCtrl

CKinematicCtrl::CKinematicCtrl() 
	: ITcOCFCtrlImpl<CKinematicCtrl, CKinematicClassFactory>() 
{
}

CKinematicCtrl::~CKinematicCtrl()
{
}


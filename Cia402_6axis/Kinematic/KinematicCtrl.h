///////////////////////////////////////////////////////////////////////////////
// KinematicCtrl.h

#ifndef __KINEMATICCTRL_H__
#define __KINEMATICCTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define KINEMATICDRV_NAME "KINEMATIC"

#include "resource.h"       // main symbols
#include "KinematicW32.h"
#include "TcBase.h"
#include "KinematicClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CKinematicCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CKinematicCtrl, &CLSID_KinematicCtrl>
	, public IKinematicCtrl
	, public ITcOCFCtrlImpl<CKinematicCtrl, CKinematicClassFactory>
{
public:
	CKinematicCtrl();
	virtual ~CKinematicCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_KINEMATICCTRL)
DECLARE_NOT_AGGREGATABLE(CKinematicCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CKinematicCtrl)
	COM_INTERFACE_ENTRY(IKinematicCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __KINEMATICCTRL_H__

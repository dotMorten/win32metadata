#define SECURITY_WIN32 // For sspi.h
#define QCC_OS_GROUP_WINDOWS

#include "intrinfix.h"

#include <windows.h>
#include <sdkddkver.h>

#include <wtypes.h>
#include <olectl.h>
#include <vbinterf.h>
#include <ocidl.h>
#include <docobj.h>
#include <oleidl.h>
#include <objidl.h>
#include <oledlg.h>
#include <ole2.h>
#include <objbase.h>
#include <urlmon.h>
#include <accctrl.h>
#include <rpcdce.h>
#include <winerror.h>
#include <combaseapi.h>
#include <objidlbase.h>
#include <callobj.h>
#include <wtypesbase.h>
#include <eventsys.h>
#include <txlogpub.h>
#include <shobjidl.h>
#include <iaccess.h>
#include <comcat.h>
//#include <unknwnbase.h>
//#include <unknwn.h>
#include <ctxtcall.h>
#include <imessagedispatcher.h>
#include <dmerror.h>
#include <messagedispatcherapi.h>
#include <roapi.h>
#include <guiddef.h>
#include <winddi.h>

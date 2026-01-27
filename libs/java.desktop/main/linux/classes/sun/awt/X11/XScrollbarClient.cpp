#include <sun/awt/X11/XScrollbarClient.h>

#include <java/awt/Component.h>
#include <sun/awt/X11/XScrollbar.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollbar = ::sun::awt::X11::XScrollbar;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XScrollbarClient_MethodInfo_[] = {
	{"getEventSource", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XScrollbarClient, getEventSource, $Component*)},
	{"notifyValue", "(Lsun/awt/X11/XScrollbar;IIZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XScrollbarClient, notifyValue, void, $XScrollbar*, int32_t, int32_t, bool)},
	{"repaintScrollbarRequest", "(Lsun/awt/X11/XScrollbar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XScrollbarClient, repaintScrollbarRequest, void, $XScrollbar*)},
	{}
};

$ClassInfo _XScrollbarClient_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.awt.X11.XScrollbarClient",
	nullptr,
	nullptr,
	nullptr,
	_XScrollbarClient_MethodInfo_
};

$Object* allocate$XScrollbarClient($Class* clazz) {
	return $of($alloc(XScrollbarClient));
}

$Class* XScrollbarClient::load$($String* name, bool initialize) {
	$loadClass(XScrollbarClient, name, initialize, &_XScrollbarClient_ClassInfo_, allocate$XScrollbarClient);
	return class$;
}

$Class* XScrollbarClient::class$ = nullptr;

		} // X11
	} // awt
} // sun
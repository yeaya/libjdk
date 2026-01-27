#include <sun/awt/X11/XDragSourceProtocolListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XDragSourceProtocolListener_MethodInfo_[] = {
	{"cleanup", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, cleanup, void, int64_t)},
	{"handleDragFinished", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragFinished, void)},
	{"handleDragFinished", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragFinished, void, bool)},
	{"handleDragFinished", "(ZI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragFinished, void, bool, int32_t)},
	{"handleDragFinished", "(ZIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragFinished, void, bool, int32_t, int32_t, int32_t)},
	{"handleDragReply", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragReply, void, int32_t)},
	{"handleDragReply", "(III)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragReply, void, int32_t, int32_t, int32_t)},
	{"handleDragReply", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XDragSourceProtocolListener, handleDragReply, void, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _XDragSourceProtocolListener_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.awt.X11.XDragSourceProtocolListener",
	nullptr,
	nullptr,
	nullptr,
	_XDragSourceProtocolListener_MethodInfo_
};

$Object* allocate$XDragSourceProtocolListener($Class* clazz) {
	return $of($alloc(XDragSourceProtocolListener));
}

$Class* XDragSourceProtocolListener::load$($String* name, bool initialize) {
	$loadClass(XDragSourceProtocolListener, name, initialize, &_XDragSourceProtocolListener_ClassInfo_, allocate$XDragSourceProtocolListener);
	return class$;
}

$Class* XDragSourceProtocolListener::class$ = nullptr;

		} // X11
	} // awt
} // sun
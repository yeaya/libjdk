#include <sun/awt/X11/ToplevelStateListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _ToplevelStateListener_MethodInfo_[] = {
	{"stateChangedICCCM", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToplevelStateListener, stateChangedICCCM, void, int32_t, int32_t)},
	{"stateChangedJava", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ToplevelStateListener, stateChangedJava, void, int32_t, int32_t)},
	{}
};

$ClassInfo _ToplevelStateListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.X11.ToplevelStateListener",
	nullptr,
	nullptr,
	nullptr,
	_ToplevelStateListener_MethodInfo_
};

$Object* allocate$ToplevelStateListener($Class* clazz) {
	return $of($alloc(ToplevelStateListener));
}

$Class* ToplevelStateListener::load$($String* name, bool initialize) {
	$loadClass(ToplevelStateListener, name, initialize, &_ToplevelStateListener_ClassInfo_, allocate$ToplevelStateListener);
	return class$;
}

$Class* ToplevelStateListener::class$ = nullptr;

		} // X11
	} // awt
} // sun
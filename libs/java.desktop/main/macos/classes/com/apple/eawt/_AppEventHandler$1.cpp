#include <com/apple/eawt/_AppEventHandler$1.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

#undef WINDOW_CLOSING

using $FrameArray = $Array<::java::awt::Frame>;
using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $Frame = ::java::awt::Frame;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$1::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
}

void _AppEventHandler$1::run() {
	$useLocalObjectStack();
	$var($FrameArray, allFrames, $Frame::getFrames());
	for (int32_t i = $nc(allFrames)->length - 1; i >= 0; --i) {
		$var($Frame, frame, allFrames->get(i));
		$nc(frame)->dispatchEvent($$new($WindowEvent, frame, $WindowEvent::WINDOW_CLOSING));
	}
}

_AppEventHandler$1::_AppEventHandler$1() {
}

$Class* _AppEventHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$1, init$, void, $_AppEventHandler*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(_AppEventHandler$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.eawt._AppEventHandler",
		"performQuit",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$1);
	});
	return class$;
}

$Class* _AppEventHandler$1::class$ = nullptr;

		} // eawt
	} // apple
} // com
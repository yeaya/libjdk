#include <GUIZoomFrame$2.h>
#include <GUIZoomFrame.h>
#include <java/awt/Frame.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

#undef MAXIMIZED_BOTH
#undef NORMAL

using $GUIZoomFrame = ::GUIZoomFrame;
using $Frame = ::java::awt::Frame;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GUIZoomFrame$2::init$($GUIZoomFrame* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void GUIZoomFrame$2::windowStateChanged($WindowEvent* e) {
	if ($nc(e)->getNewState() == $Frame::MAXIMIZED_BOTH) {
		this->this$0->maxBoth = true;
	}
	if (e->getNewState() == $Frame::NORMAL) {
		this->this$0->normal = true;
	}
}

GUIZoomFrame$2::GUIZoomFrame$2() {
}

$Class* GUIZoomFrame$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGUIZoomFrame;", nullptr, $FINAL | $SYNTHETIC, $field(GUIZoomFrame$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGUIZoomFrame;)V", nullptr, 0, $method(GUIZoomFrame$2, init$, void, $GUIZoomFrame*)},
		{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(GUIZoomFrame$2, windowStateChanged, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GUIZoomFrame",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GUIZoomFrame$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GUIZoomFrame$2",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GUIZoomFrame"
	};
	$loadClass(GUIZoomFrame$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GUIZoomFrame$2));
	});
	return class$;
}

$Class* GUIZoomFrame$2::class$ = nullptr;
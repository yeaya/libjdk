#include <sun/awt/im/CompositionArea$FrameWindowAdapter.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JComponent.h>
#include <sun/awt/im/CompositionArea.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositionArea = ::sun::awt::im::CompositionArea;

namespace sun {
	namespace awt {
		namespace im {

void CompositionArea$FrameWindowAdapter::init$($CompositionArea* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void CompositionArea$FrameWindowAdapter::windowActivated($WindowEvent* e) {
	this->this$0->requestFocus();
}

CompositionArea$FrameWindowAdapter::CompositionArea$FrameWindowAdapter() {
}

$Class* CompositionArea$FrameWindowAdapter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/im/CompositionArea;", nullptr, $FINAL | $SYNTHETIC, $field(CompositionArea$FrameWindowAdapter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/im/CompositionArea;)V", nullptr, 0, $method(CompositionArea$FrameWindowAdapter, init$, void, $CompositionArea*)},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(CompositionArea$FrameWindowAdapter, windowActivated, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.im.CompositionArea$FrameWindowAdapter", "sun.awt.im.CompositionArea", "FrameWindowAdapter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.im.CompositionArea$FrameWindowAdapter",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.im.CompositionArea"
	};
	$loadClass(CompositionArea$FrameWindowAdapter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CompositionArea$FrameWindowAdapter));
	});
	return class$;
}

$Class* CompositionArea$FrameWindowAdapter::class$ = nullptr;

		} // im
	} // awt
} // sun
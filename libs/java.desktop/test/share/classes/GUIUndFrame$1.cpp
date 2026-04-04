#include <GUIUndFrame$1.h>
#include <GUIUndFrame.h>
#include <java/awt/Component.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $GUIUndFrame = ::GUIUndFrame;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GUIUndFrame$1::init$($GUIUndFrame* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void GUIUndFrame$1::windowActivated($WindowEvent* e) {
	$set(this->this$0, comp, nullptr);
	$set(this->this$0, comp, $nc(e)->getComponent());
	if ($equals(e->getComponent(), this->this$0->jframe1)) {
		this->this$0->win_act = true;
	}
}

void GUIUndFrame$1::windowDeactivated($WindowEvent* e) {
	this->this$0->win_deact = true;
}

GUIUndFrame$1::GUIUndFrame$1() {
}

$Class* GUIUndFrame$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGUIUndFrame;", nullptr, $FINAL | $SYNTHETIC, $field(GUIUndFrame$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGUIUndFrame;)V", nullptr, 0, $method(GUIUndFrame$1, init$, void, $GUIUndFrame*)},
		{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(GUIUndFrame$1, windowActivated, void, $WindowEvent*)},
		{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(GUIUndFrame$1, windowDeactivated, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GUIUndFrame",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GUIUndFrame$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GUIUndFrame$1",
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
		"GUIUndFrame"
	};
	$loadClass(GUIUndFrame$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GUIUndFrame$1));
	});
	return class$;
}

$Class* GUIUndFrame$1::class$ = nullptr;
#include <bug7146377$1$1.h>
#include <bug7146377$1.h>
#include <bug7146377.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $bug7146377 = ::bug7146377;
using $bug7146377$1 = ::bug7146377$1;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7146377$1$1::init$($bug7146377$1* this$0) {
	$set(this, this$0, this$0);
}

void bug7146377$1$1::mouseClicked($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mousePressed($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mouseReleased($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mouseEntered($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

void bug7146377$1$1::mouseExited($MouseEvent* e) {
	$bug7146377::checkEvent(e);
}

bug7146377$1$1::bug7146377$1$1() {
}

$Class* bug7146377$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7146377$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7146377$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7146377$1;)V", nullptr, 0, $method(bug7146377$1$1, init$, void, $bug7146377$1*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7146377$1$1, mouseClicked, void, $MouseEvent*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7146377$1$1, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7146377$1$1, mouseExited, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7146377$1$1, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7146377$1$1, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7146377$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7146377$1", nullptr, nullptr, 0},
		{"bug7146377$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7146377$1$1",
		"java.lang.Object",
		"java.awt.event.MouseListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7146377"
	};
	$loadClass(bug7146377$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7146377$1$1);
	});
	return class$;
}

$Class* bug7146377$1$1::class$ = nullptr;
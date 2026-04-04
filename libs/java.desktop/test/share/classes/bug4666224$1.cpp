#include <bug4666224$1.h>
#include <bug4666224.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug4666224 = ::bug4666224;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4666224$1::init$($bug4666224* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void bug4666224$1::mouseClicked($MouseEvent* e) {
	$useLocalObjectStack();
	$var($Point, pt, $nc(e)->getPoint());
	$nc($System::out)->println($$str({"Index at location: "_s, $$str($nc(this->this$0->tabPane)->indexAtLocation($nc(pt)->x, $nc(pt)->y))}));
}

bug4666224$1::bug4666224$1() {
}

$Class* bug4666224$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4666224;)V", nullptr, 0, $method(bug4666224$1, init$, void, $bug4666224*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4666224$1, mouseClicked, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4666224",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4666224$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4666224$1",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4666224"
	};
	$loadClass(bug4666224$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4666224$1));
	});
	return class$;
}

$Class* bug4666224$1::class$ = nullptr;
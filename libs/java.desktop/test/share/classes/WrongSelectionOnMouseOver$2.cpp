#include <WrongSelectionOnMouseOver$2.h>
#include <WrongSelectionOnMouseOver.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $WrongSelectionOnMouseOver = ::WrongSelectionOnMouseOver;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void WrongSelectionOnMouseOver$2::init$($WrongSelectionOnMouseOver* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void WrongSelectionOnMouseOver$2::mouseEntered($MouseEvent* e) {
	$nc(this->this$0->secondMenuMouseEntered)->countDown();
	$nc($System::out)->println("WrongSelectionOnMouseOver.mouseEntered"_s);
}

WrongSelectionOnMouseOver$2::WrongSelectionOnMouseOver$2() {
}

$Class* WrongSelectionOnMouseOver$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LWrongSelectionOnMouseOver;", nullptr, $FINAL | $SYNTHETIC, $field(WrongSelectionOnMouseOver$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, 0, $method(WrongSelectionOnMouseOver$2, init$, void, $WrongSelectionOnMouseOver*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$2, mouseEntered, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WrongSelectionOnMouseOver",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WrongSelectionOnMouseOver$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WrongSelectionOnMouseOver$2",
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
		"WrongSelectionOnMouseOver"
	};
	$loadClass(WrongSelectionOnMouseOver$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WrongSelectionOnMouseOver$2));
	});
	return class$;
}

$Class* WrongSelectionOnMouseOver$2::class$ = nullptr;
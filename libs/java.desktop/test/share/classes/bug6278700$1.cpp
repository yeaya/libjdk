#include <bug6278700$1.h>
#include <bug6278700.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug6278700 = ::bug6278700;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

void bug6278700$1::init$($bug6278700* this$0) {
	$set(this, this$0, this$0);
}

void bug6278700$1::stateChanged($ChangeEvent* e) {
	++this->this$0->changeCount;
}

bug6278700$1::bug6278700$1() {
}

$Class* bug6278700$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6278700;", nullptr, $FINAL | $SYNTHETIC, $field(bug6278700$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6278700;)V", nullptr, 0, $method(bug6278700$1, init$, void, $bug6278700*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6278700$1, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6278700",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6278700$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6278700$1",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6278700"
	};
	$loadClass(bug6278700$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6278700$1);
	});
	return class$;
}

$Class* bug6278700$1::class$ = nullptr;
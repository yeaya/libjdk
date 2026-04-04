#include <bug6278700$2.h>
#include <bug6278700.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $bug6278700 = ::bug6278700;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JSlider = ::javax::swing::JSlider;

void bug6278700$2::init$($bug6278700* this$0) {
	$set(this, this$0, this$0);
}

void bug6278700$2::run() {
	$useLocalObjectStack();
	$var($JSlider, slider, $new($JSlider, $$new($DefaultBoundedRangeModel, 5, 0, 0, 10)));
	slider->addChangeListener(this->this$0->listener);
	slider->setValue(0);
	if (this->this$0->changeCount != 1) {
		$throwNew($RuntimeException, $$str({"Incorrect stateChanged count: "_s, $($Integer::toString(this->this$0->changeCount))}));
	}
	this->this$0->changeCount = 0;
	$assign(slider, $new($JSlider));
	slider->addChangeListener(this->this$0->listener);
	slider->setValue(0);
	if (this->this$0->changeCount != 1) {
		$throwNew($RuntimeException, $$str({"Incorrect stateChanged count: "_s, $($Integer::toString(this->this$0->changeCount))}));
	}
}

bug6278700$2::bug6278700$2() {
}

$Class* bug6278700$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6278700;", nullptr, $FINAL | $SYNTHETIC, $field(bug6278700$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6278700;)V", nullptr, 0, $method(bug6278700$2, init$, void, $bug6278700*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6278700$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6278700",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6278700$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6278700$2",
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
		"bug6278700"
	};
	$loadClass(bug6278700$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6278700$2);
	});
	return class$;
}

$Class* bug6278700$2::class$ = nullptr;
#include <bug6917744$2.h>
#include <bug6917744.h>
#include <java/awt/Window.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug6917744 = ::bug6917744;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;

void bug6917744$2::init$() {
}

void bug6917744$2::run() {
	$useLocalObjectStack();
	$init($bug6917744);
	$var($BoundedRangeModel, model, $$nc($nc($bug6917744::scrollPane)->getVerticalScrollBar())->getModel());
	int32_t var$1 = $nc(model)->getValue();
	int32_t var$0 = var$1 + model->getExtent();
	if (var$0 != model->getMaximum()) {
		$nc($bug6917744::frame)->dispose();
		$throwNew($RuntimeException, "Invalid HTML position"_s);
	}
}

bug6917744$2::bug6917744$2() {
}

$Class* bug6917744$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6917744$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6917744$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6917744",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6917744$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6917744$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6917744"
	};
	$loadClass(bug6917744$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6917744$2);
	});
	return class$;
}

$Class* bug6917744$2::class$ = nullptr;
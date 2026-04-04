#include <bug7107099$3.h>
#include <bug7107099.h>
#include <java/awt/Window.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug7107099 = ::bug7107099;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;

void bug7107099$3::init$() {
}

void bug7107099$3::run() {
	$useLocalObjectStack();
	$init($bug7107099);
	$var($BoundedRangeModel, model, $$nc($nc($bug7107099::scrollPane)->getVerticalScrollBar())->getModel());
	bool var$2 = $bug7107099::value != $nc(model)->getValue();
	bool var$1 = var$2 || $bug7107099::min != model->getMinimum();
	bool var$0 = var$1 || $bug7107099::max != model->getMaximum();
	if (var$0 || $bug7107099::extent != model->getExtent()) {
		$throwNew($RuntimeException, "Test bug7107099 failed"_s);
	}
	$nc($System::out)->println("Test bug7107099 passed"_s);
	$nc($bug7107099::frame)->dispose();
}

bug7107099$3::bug7107099$3() {
}

$Class* bug7107099$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7107099$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7107099$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7107099",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7107099$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7107099$3",
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
		"bug7107099"
	};
	$loadClass(bug7107099$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7107099$3);
	});
	return class$;
}

$Class* bug7107099$3::class$ = nullptr;
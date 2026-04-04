#include <bug7107099$2.h>
#include <bug7107099.h>
#include <java/awt/Component.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7107099 = ::bug7107099;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;

void bug7107099$2::init$() {
}

void bug7107099$2::run() {
	$useLocalObjectStack();
	$init($bug7107099);
	$var($BoundedRangeModel, model, $$nc($nc($bug7107099::scrollPane)->getVerticalScrollBar())->getModel());
	$bug7107099::value = $nc(model)->getValue();
	$bug7107099::min = model->getMinimum();
	$bug7107099::max = model->getMaximum();
	$bug7107099::extent = model->getExtent();
	$nc($bug7107099::textarea)->setText(nullptr);
	$nc($bug7107099::scrollPane)->setViewportView($bug7107099::textarea);
	$nc($bug7107099::textarea)->setText("after###1###\nafter###1###\nafter###1###\nafter###1###\nafter###1###\n"_s);
	$nc($bug7107099::textarea)->setCaretPosition(0);
}

bug7107099$2::bug7107099$2() {
}

$Class* bug7107099$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7107099$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7107099$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7107099",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7107099$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7107099$2",
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
	$loadClass(bug7107099$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7107099$2);
	});
	return class$;
}

$Class* bug7107099$2::class$ = nullptr;
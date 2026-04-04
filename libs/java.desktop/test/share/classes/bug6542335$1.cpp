#include <bug6542335$1.h>
#include <bug6542335$MyScrollBarUI.h>
#include <bug6542335.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Window.h>
#include <javax/swing/DefaultBoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH

using $bug6542335 = ::bug6542335;
using $bug6542335$MyScrollBarUI = ::bug6542335$MyScrollBarUI;
using $BorderLayout = ::java::awt::BorderLayout;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultBoundedRangeModel = ::javax::swing::DefaultBoundedRangeModel;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;

void bug6542335$1::init$() {
}

void bug6542335$1::run() {
	$useLocalObjectStack();
	$init($bug6542335);
	$assignStatic($bug6542335::frame, $new($JFrame, "bug6542335"_s));
	$bug6542335::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug6542335::sb, $new($JScrollBar, 0, 0, 1, 0, 1));
	$assignStatic($bug6542335::ui, $new($bug6542335$MyScrollBarUI));
	$bug6542335::sb->setUI($bug6542335::ui);
	$nc($bug6542335::sb)->setPreferredSize($$new($Dimension, 200, 17));
	$var($DefaultBoundedRangeModel, rangeModel, $new($DefaultBoundedRangeModel));
	rangeModel->setMaximum(100);
	rangeModel->setMinimum(0);
	rangeModel->setExtent(50);
	rangeModel->setValue(50);
	$nc($bug6542335::sb)->setModel(rangeModel);
	$init($BorderLayout);
	$nc($bug6542335::frame)->add($bug6542335::sb, $BorderLayout::NORTH);
	$nc($bug6542335::frame)->setSize(200, 100);
	$nc($bug6542335::frame)->setVisible(true);
}

bug6542335$1::bug6542335$1() {
}

$Class* bug6542335$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6542335$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6542335$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6542335",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6542335$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6542335$1",
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
		"bug6542335"
	};
	$loadClass(bug6542335$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6542335$1);
	});
	return class$;
}

$Class* bug6542335$1::class$ = nullptr;
#include <Test8003400$2.h>
#include <Test8003400.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/Error.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test8003400 = ::Test8003400;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void Test8003400$2::init$() {
}

void Test8003400$2::run() {
	$useLocalObjectStack();
	$init($Test8003400);
	$var($JTree, tree, $cast($JTree, $$nc($nc($Test8003400::pane)->getViewport())->getView()));
	$var($Rectangle, inner, $nc(tree)->getRowBounds($nc(tree)->getRowCount() - 1));
	$var($Rectangle, outer, $SwingUtilities::convertRectangle(tree, inner, $Test8003400::pane));
	int32_t var$0 = $nc(outer)->y + tree->getRowHeight();
	int32_t heightDifference = var$0 - $$nc($nc($Test8003400::pane)->getVerticalScrollBar())->getHeight();
	if (nullptr != $System::getProperty("test.src"_s, nullptr)) {
		$nc($Test8003400::frame)->dispose();
		if (heightDifference > 3) {
			$throwNew($Error, $$str({"TEST FAILED: "_s, $$str(heightDifference)}));
		}
	}
}

Test8003400$2::Test8003400$2() {
}

$Class* Test8003400$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test8003400$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8003400$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8003400",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8003400$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8003400$2",
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
		"Test8003400"
	};
	$loadClass(Test8003400$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8003400$2);
	});
	return class$;
}

$Class* Test8003400$2::class$ = nullptr;
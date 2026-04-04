#include <bug6608456$TestRepaintManager.h>
#include <bug6608456$TestFuture.h>
#include <bug6608456.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $bug6608456 = ::bug6608456;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;

void bug6608456$TestRepaintManager::init$() {
	$RepaintManager::init$();
}

void bug6608456$TestRepaintManager::addDirtyRegion($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($equals($RepaintManager::currentManager(c), this)) {
		$init($bug6608456);
		$nc($bug6608456::testFuture)->defaultCalled();
	} else {
		$init($bug6608456);
		$nc($bug6608456::testFuture)->delegateCalled();
	}
	$RepaintManager::addDirtyRegion(c, x, y, w, h);
}

bug6608456$TestRepaintManager::bug6608456$TestRepaintManager() {
}

$Class* bug6608456$TestRepaintManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6608456$TestRepaintManager, init$, void)},
		{"addDirtyRegion", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC, $virtualMethod(bug6608456$TestRepaintManager, addDirtyRegion, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6608456$TestRepaintManager", "bug6608456", "TestRepaintManager", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6608456$TestRepaintManager",
		"javax.swing.RepaintManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6608456"
	};
	$loadClass(bug6608456$TestRepaintManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6608456$TestRepaintManager);
	});
	return class$;
}

$Class* bug6608456$TestRepaintManager::class$ = nullptr;
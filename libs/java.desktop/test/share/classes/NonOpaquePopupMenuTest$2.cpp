#include <NonOpaquePopupMenuTest$2.h>
#include <NonOpaquePopupMenuTest.h>
#include <java/awt/Container.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $NonOpaquePopupMenuTest = ::NonOpaquePopupMenuTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NonOpaquePopupMenuTest$2::init$($booleans* val$result) {
	$set(this, val$result, val$result);
}

void NonOpaquePopupMenuTest$2::run() {
	$useLocalObjectStack();
	$init($NonOpaquePopupMenuTest);
	$nc(this->val$result)->set(0, $$nc($$nc($nc($NonOpaquePopupMenuTest::fileMenu)->getPopupMenu())->getParent())->isOpaque());
}

NonOpaquePopupMenuTest$2::NonOpaquePopupMenuTest$2() {
}

$Class* NonOpaquePopupMenuTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(NonOpaquePopupMenuTest$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Z)V", "()V", 0, $method(NonOpaquePopupMenuTest$2, init$, void, $booleans*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NonOpaquePopupMenuTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NonOpaquePopupMenuTest",
		"isParentOpaque",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonOpaquePopupMenuTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonOpaquePopupMenuTest$2",
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
		"NonOpaquePopupMenuTest"
	};
	$loadClass(NonOpaquePopupMenuTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonOpaquePopupMenuTest$2);
	});
	return class$;
}

$Class* NonOpaquePopupMenuTest$2::class$ = nullptr;
#include <NonOpaquePopupMenuTest$3.h>
#include <NonOpaquePopupMenuTest.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $NonOpaquePopupMenuTest = ::NonOpaquePopupMenuTest;
using $PointArray = $Array<::java::awt::Point>;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NonOpaquePopupMenuTest$3::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void NonOpaquePopupMenuTest$3::run() {
	$useLocalObjectStack();
	$init($NonOpaquePopupMenuTest);
	$var($Point, p, $nc($NonOpaquePopupMenuTest::fileMenu)->getLocationOnScreen());
	$var($Dimension, size, $nc($NonOpaquePopupMenuTest::fileMenu)->getSize());
	$nc(this->val$result)->set(0, $$new($Point, $nc(p)->x + $nc(size)->width / 2, $nc(p)->y + $nc(size)->height / 2));
}

NonOpaquePopupMenuTest$3::NonOpaquePopupMenuTest$3() {
}

$Class* NonOpaquePopupMenuTest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(NonOpaquePopupMenuTest$3, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(NonOpaquePopupMenuTest$3, init$, void, $PointArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NonOpaquePopupMenuTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NonOpaquePopupMenuTest",
		"getMenuClickPoint",
		"()Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonOpaquePopupMenuTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonOpaquePopupMenuTest$3",
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
	$loadClass(NonOpaquePopupMenuTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonOpaquePopupMenuTest$3);
	});
	return class$;
}

$Class* NonOpaquePopupMenuTest$3::class$ = nullptr;
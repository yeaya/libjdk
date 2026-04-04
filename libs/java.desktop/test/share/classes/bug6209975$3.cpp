#include <bug6209975$3.h>
#include <bug6209975.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6209975 = ::bug6209975;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6209975$3::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6209975$3::run() {
	$useLocalObjectStack();
	$init($bug6209975);
	$var($Point, p, $nc($bug6209975::menu)->getLocationOnScreen());
	$var($Dimension, size, $nc($bug6209975::menu)->getSize());
	$nc(this->val$result)->set(0, $$new($Point, $nc(p)->x + $nc(size)->width / 2, $nc(p)->y + $nc(size)->height / 2));
}

bug6209975$3::bug6209975$3() {
}

$Class* bug6209975$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6209975$3, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(bug6209975$3, init$, void, $PointArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6209975$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6209975",
		"getMenuClickPoint",
		"()Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6209975$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6209975$3",
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
		"bug6209975"
	};
	$loadClass(bug6209975$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6209975$3);
	});
	return class$;
}

$Class* bug6209975$3::class$ = nullptr;
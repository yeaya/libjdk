#include <bug6462008$2.h>
#include <bug6462008.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JList.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6462008 = ::bug6462008;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6462008$2::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6462008$2::run() {
	$useLocalObjectStack();
	$init($bug6462008);
	$var($Rectangle, r, $nc($bug6462008::list)->getCellBounds(4, 4));
	$var($Point, p, $new($Point, $nc(r)->x + $nc(r)->width / 2, $nc(r)->y + $nc(r)->height / 2));
	$SwingUtilities::convertPointToScreen(p, $bug6462008::list);
	$nc(this->val$result)->set(0, p);
}

bug6462008$2::bug6462008$2() {
}

$Class* bug6462008$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(bug6462008$2, init$, void, $PointArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"clickItem4",
		"()Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$2",
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
		"bug6462008"
	};
	$loadClass(bug6462008$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$2);
	});
	return class$;
}

$Class* bug6462008$2::class$ = nullptr;
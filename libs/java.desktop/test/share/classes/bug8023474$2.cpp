#include <bug8023474$2.h>
#include <bug8023474.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug8023474 = ::bug8023474;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8023474$2::init$(int32_t val$row, $PointArray* val$result) {
	this->val$row = val$row;
	$set(this, val$result, val$result);
}

void bug8023474$2::run() {
	$useLocalObjectStack();
	$init($bug8023474);
	$var($Rectangle, rect, $nc($bug8023474::tree)->getRowBounds(this->val$row));
	$var($Point, point, $new($Point, $nc(rect)->x + 10, $nc(rect)->y + $nc(rect)->height / 2));
	$SwingUtilities::convertPointToScreen(point, $bug8023474::tree);
	$nc(this->val$result)->set(0, point);
}

bug8023474$2::bug8023474$2() {
}

$Class* bug8023474$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug8023474$2, val$result)},
		{"val$row", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug8023474$2, val$row)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[Ljava/awt/Point;)V", "()V", 0, $method(bug8023474$2, init$, void, int32_t, $PointArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8023474$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8023474",
		"getRowPointToClick",
		"(I)Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8023474$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8023474$2",
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
		"bug8023474"
	};
	$loadClass(bug8023474$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8023474$2);
	});
	return class$;
}

$Class* bug8023474$2::class$ = nullptr;
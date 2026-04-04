#include <bug6263446JTree$2.h>
#include <bug6263446JTree.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug6263446JTree = ::bug6263446JTree;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6263446JTree$2::init$($PointArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6263446JTree$2::run() {
	$useLocalObjectStack();
	$init($bug6263446JTree);
	$var($Rectangle, rect, $nc($bug6263446JTree::tree)->getRowBounds(0));
	$var($Point, p, $new($Point, $nc(rect)->x + $nc(rect)->width / 2, $nc(rect)->y + 2));
	$SwingUtilities::convertPointToScreen(p, $bug6263446JTree::tree);
	$nc(this->val$result)->set(0, p);
}

bug6263446JTree$2::bug6263446JTree$2() {
}

$Class* bug6263446JTree$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446JTree$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Point;)V", "()V", 0, $method(bug6263446JTree$2, init$, void, $PointArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6263446JTree$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6263446JTree",
		"getClickPoint",
		"()Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6263446JTree$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6263446JTree$2",
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
		"bug6263446JTree"
	};
	$loadClass(bug6263446JTree$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6263446JTree$2);
	});
	return class$;
}

$Class* bug6263446JTree$2::class$ = nullptr;
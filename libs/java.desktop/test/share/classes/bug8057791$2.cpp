#include <bug8057791$2.h>
#include <bug8057791.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $bug8057791 = ::bug8057791;
using $Color = ::java::awt::Color;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8057791$2::init$() {
}

void bug8057791$2::run() {
	$useLocalObjectStack();
	$init($bug8057791);
	$var($Rectangle, cellBounds, $nc($bug8057791::list)->getCellBounds(0, 0));
	$nc(cellBounds)->x += $nc($($nc($bug8057791::list)->getLocationOnScreen()))->x;
	cellBounds->y += $nc($($nc($bug8057791::list)->getLocationOnScreen()))->y;
	$var($Color, foregroundColor, $nc($bug8057791::list)->getSelectionForeground());
	$var($Color, backgroundColor, $nc($bug8057791::list)->getSelectionBackground());
	$bug8057791::checkColor(foregroundColor, cellBounds);
	$bug8057791::checkColor(backgroundColor, cellBounds);
	$var($Color, changedForegroundColor, $nc(foregroundColor)->darker());
	$var($Color, changedBackgroundColor, $nc(backgroundColor)->brighter());
	$bug8057791::checkNotColor(changedForegroundColor, cellBounds);
	$bug8057791::checkNotColor(changedBackgroundColor, cellBounds);
}

bug8057791$2::bug8057791$2() {
}

$Class* bug8057791$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8057791$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8057791$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8057791",
		"runColorTestCase",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8057791$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8057791$2",
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
		"bug8057791"
	};
	$loadClass(bug8057791$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8057791$2);
	});
	return class$;
}

$Class* bug8057791$2::class$ = nullptr;
#include <bug6987844$2.h>
#include <bug6987844.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6987844 = ::bug6987844;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6987844$2::init$() {
}

void bug6987844$2::run() {
	$useLocalObjectStack();
	$init($bug6987844);
	$var($Dimension, popupSize1, $$nc($nc($bug6987844::menu1)->getPopupMenu())->getSize());
	$var($Dimension, popupSize2, $$nc($nc($bug6987844::menu2)->getPopupMenu())->getSize());
	if ($nc(popupSize1)->equals(popupSize2)) {
		$throwNew($RuntimeException, "First popup unexpedetly changed its size"_s);
	}
}

bug6987844$2::bug6987844$2() {
}

$Class* bug6987844$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6987844$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6987844$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6987844",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6987844$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6987844$2",
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
		"bug6987844"
	};
	$loadClass(bug6987844$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6987844$2);
	});
	return class$;
}

$Class* bug6987844$2::class$ = nullptr;
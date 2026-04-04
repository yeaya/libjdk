#include <bug6263446JTree$4.h>
#include <bug6263446JTree.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $bug6263446JTree = ::bug6263446JTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6263446JTree$4::init$() {
}

void bug6263446JTree$4::run() {
	$init($bug6263446JTree);
	$nc($bug6263446JTree::tree)->startEditingAtPath($($nc($bug6263446JTree::tree)->getPathForRow(0)));
}

bug6263446JTree$4::bug6263446JTree$4() {
}

$Class* bug6263446JTree$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6263446JTree$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6263446JTree$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6263446JTree",
		"startPathEditing",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6263446JTree$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6263446JTree$4",
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
		"bug6263446JTree"
	};
	$loadClass(bug6263446JTree$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6263446JTree$4);
	});
	return class$;
}

$Class* bug6263446JTree$4::class$ = nullptr;
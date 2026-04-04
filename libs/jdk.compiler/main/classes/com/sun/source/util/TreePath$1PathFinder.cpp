#include <com/sun/source/util/TreePath$1PathFinder.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreePath$1Result.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/TreePathScanner.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TreePath = ::com::sun::source::util::TreePath;
using $TreePath$1Result = ::com::sun::source::util::TreePath$1Result;
using $TreePathScanner = ::com::sun::source::util::TreePathScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void TreePath$1PathFinder::init$() {
	$TreePathScanner::init$();
}

$TreePath* TreePath$1PathFinder::scan($Tree* tree, $Tree* target) {
	$useLocalObjectStack();
	if (tree == target) {
		$throwNew($TreePath$1Result, $$new($TreePath, $(getCurrentPath()), target));
	}
	return $cast($TreePath, $TreePathScanner::scan(tree, target));
}

$Object* TreePath$1PathFinder::scan($Tree* tree, Object$* target) {
	return this->scan(tree, $cast($Tree, target));
}

TreePath$1PathFinder::TreePath$1PathFinder() {
}

$Class* TreePath$1PathFinder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TreePath$1PathFinder, init$, void)},
		{"scan", "(Lcom/sun/source/tree/Tree;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreePath$1PathFinder, scan, $TreePath*, $Tree*, $Tree*)},
		{"scan", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(TreePath$1PathFinder, scan, $Object*, $Tree*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.source.util.TreePath",
		"getPath",
		"(Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.TreePath$1PathFinder", nullptr, "PathFinder", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.source.util.TreePath$1PathFinder",
		"com.sun.source.util.TreePathScanner",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/source/util/TreePathScanner<Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.util.TreePath"
	};
	$loadClass(TreePath$1PathFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreePath$1PathFinder);
	});
	return class$;
}

$Class* TreePath$1PathFinder::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com
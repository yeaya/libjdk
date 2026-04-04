#include <com/sun/source/util/DocTreePath$1PathFinder.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/util/DocTreePath$1Result.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTreePathScanner.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTreePath$1Result = ::com::sun::source::util::DocTreePath$1Result;
using $DocTreePathScanner = ::com::sun::source::util::DocTreePathScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void DocTreePath$1PathFinder::init$() {
	$DocTreePathScanner::init$();
}

$DocTreePath* DocTreePath$1PathFinder::scan($DocTree* tree, $DocTree* target) {
	$useLocalObjectStack();
	if (tree == target) {
		$throwNew($DocTreePath$1Result, $$new($DocTreePath, $(getCurrentPath()), target));
	}
	return $cast($DocTreePath, $DocTreePathScanner::scan(tree, target));
}

$Object* DocTreePath$1PathFinder::scan($DocTree* tree, Object$* target) {
	return this->scan(tree, $cast($DocTree, target));
}

DocTreePath$1PathFinder::DocTreePath$1PathFinder() {
}

$Class* DocTreePath$1PathFinder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DocTreePath$1PathFinder, init$, void)},
		{"scan", "(Lcom/sun/source/doctree/DocTree;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC, $virtualMethod(DocTreePath$1PathFinder, scan, $DocTreePath*, $DocTree*, $DocTree*)},
		{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DocTreePath$1PathFinder, scan, $Object*, $DocTree*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.source.util.DocTreePath",
		"getPath",
		"(Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;)Lcom/sun/source/util/DocTreePath;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.DocTreePath$1PathFinder", nullptr, "PathFinder", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.source.util.DocTreePath$1PathFinder",
		"com.sun.source.util.DocTreePathScanner",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/source/util/DocTreePathScanner<Lcom/sun/source/util/DocTreePath;Lcom/sun/source/doctree/DocTree;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.source.util.DocTreePath"
	};
	$loadClass(DocTreePath$1PathFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocTreePath$1PathFinder);
	});
	return class$;
}

$Class* DocTreePath$1PathFinder::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com
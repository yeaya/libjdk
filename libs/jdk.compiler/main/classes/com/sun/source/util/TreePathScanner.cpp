#include <com/sun/source/util/TreePathScanner.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/tree/TreeVisitor.h>
#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/util/TreeScanner.h>
#include <jcpp.h>

using $Tree = ::com::sun::source::tree::Tree;
using $TreePath = ::com::sun::source::util::TreePath;
using $TreeScanner = ::com::sun::source::util::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void TreePathScanner::init$() {
	$TreeScanner::init$();
}

$Object* TreePathScanner::scan($TreePath* path, Object$* p) {
	$useLocalObjectStack();
	$set(this, path, path);
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, $$nc($nc(path)->getLeaf())->accept(this, p));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$set(this, path, nullptr);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$Object* TreePathScanner::scan($Tree* tree, Object$* p) {
	$useLocalObjectStack();
	if (tree == nullptr) {
		return nullptr;
	}
	$var($TreePath, prev, this->path);
	$set(this, path, $new($TreePath, this->path, tree));
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, $nc(tree)->accept(this, p));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$set(this, path, prev);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$TreePath* TreePathScanner::getCurrentPath() {
	return this->path;
}

TreePathScanner::TreePathScanner() {
}

$Class* TreePathScanner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $field(TreePathScanner, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TreePathScanner, init$, void)},
		{"getCurrentPath", "()Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreePathScanner, getCurrentPath, $TreePath*)},
		{"scan", "(Lcom/sun/source/util/TreePath;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/util/TreePath;TP;)TR;", $PUBLIC, $virtualMethod(TreePathScanner, scan, $Object*, $TreePath*, Object$*)},
		{"scan", "(Lcom/sun/source/tree/Tree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/tree/Tree;TP;)TR;", $PUBLIC, $virtualMethod(TreePathScanner, scan, $Object*, $Tree*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.source.util.TreePathScanner",
		"com.sun.source.util.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Lcom/sun/source/util/TreeScanner<TR;TP;>;"
	};
	$loadClass(TreePathScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreePathScanner);
	});
	return class$;
}

$Class* TreePathScanner::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com
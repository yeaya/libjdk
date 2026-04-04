#include <com/sun/source/util/DocTreePathScanner.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/util/DocTreePath.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <jcpp.h>

using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreePath = ::com::sun::source::util::DocTreePath;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

void DocTreePathScanner::init$() {
	$DocTreeScanner::init$();
}

$Object* DocTreePathScanner::scan($DocTreePath* path, Object$* p) {
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

$Object* DocTreePathScanner::scan($DocTree* tree, Object$* p) {
	$useLocalObjectStack();
	if (tree == nullptr) {
		return nullptr;
	}
	$var($DocTreePath, prev, this->path);
	$set(this, path, $new($DocTreePath, this->path, tree));
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

$DocTreePath* DocTreePathScanner::getCurrentPath() {
	return this->path;
}

DocTreePathScanner::DocTreePathScanner() {
}

$Class* DocTreePathScanner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Lcom/sun/source/util/DocTreePath;", nullptr, $PRIVATE, $field(DocTreePathScanner, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DocTreePathScanner, init$, void)},
		{"getCurrentPath", "()Lcom/sun/source/util/DocTreePath;", nullptr, $PUBLIC, $virtualMethod(DocTreePathScanner, getCurrentPath, $DocTreePath*)},
		{"scan", "(Lcom/sun/source/util/DocTreePath;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/util/DocTreePath;TP;)TR;", $PUBLIC, $virtualMethod(DocTreePathScanner, scan, $Object*, $DocTreePath*, Object$*)},
		{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreePathScanner, scan, $Object*, $DocTree*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.source.util.DocTreePathScanner",
		"com.sun.source.util.DocTreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Lcom/sun/source/util/DocTreeScanner<TR;TP;>;"
	};
	$loadClass(DocTreePathScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocTreePathScanner);
	});
	return class$;
}

$Class* DocTreePathScanner::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com
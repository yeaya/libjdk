#include <com/sun/source/util/TreePath.h>
#include <com/sun/source/tree/CompilationUnitTree.h>
#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/source/tree/Tree.h>
#include <com/sun/source/util/TreePath$1.h>
#include <com/sun/source/util/TreePath$1PathFinder.h>
#include <com/sun/source/util/TreePath$1Result.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef COMPILATION_UNIT

using $CompilationUnitTree = ::com::sun::source::tree::CompilationUnitTree;
using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $TreePath$1 = ::com::sun::source::util::TreePath$1;
using $TreePath$1PathFinder = ::com::sun::source::util::TreePath$1PathFinder;
using $TreePath$1Result = ::com::sun::source::util::TreePath$1Result;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

TreePath* TreePath::getPath($CompilationUnitTree* unit, $Tree* target) {
	$init(TreePath);
	return getPath($$new(TreePath, unit), target);
}

TreePath* TreePath::getPath(TreePath* path, $Tree* target) {
	$init(TreePath);
	$Objects::requireNonNull(path);
	$Objects::requireNonNull(target);
	{
	}
	{
	}
	if (path->getLeaf() == target) {
		return path;
	}
	try {
		$$new($TreePath$1PathFinder)->scan(path, target);
	} catch ($TreePath$1Result& result) {
		return result->path;
	}
	return nullptr;
}

void TreePath::init$($CompilationUnitTree* node) {
	TreePath::init$(nullptr, node);
}

void TreePath::init$(TreePath* path, $Tree* tree) {
	$init($Tree$Kind);
	if ($nc(tree)->getKind() == $Tree$Kind::COMPILATION_UNIT) {
		$set(this, compilationUnit, $cast($CompilationUnitTree, tree));
		$set(this, parent, nullptr);
	} else {
		$set(this, compilationUnit, $nc(path)->compilationUnit);
		$set(this, parent, path);
	}
	$set(this, leaf, tree);
}

$CompilationUnitTree* TreePath::getCompilationUnit() {
	return this->compilationUnit;
}

$Tree* TreePath::getLeaf() {
	return this->leaf;
}

TreePath* TreePath::getParentPath() {
	return this->parent;
}

$Iterator* TreePath::iterator() {
	return $new($TreePath$1, this);
}

TreePath::TreePath() {
}

$Class* TreePath::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"compilationUnit", "Lcom/sun/source/tree/CompilationUnitTree;", nullptr, $PRIVATE, $field(TreePath, compilationUnit)},
		{"leaf", "Lcom/sun/source/tree/Tree;", nullptr, $PRIVATE, $field(TreePath, leaf)},
		{"parent", "Lcom/sun/source/util/TreePath;", nullptr, $PRIVATE, $field(TreePath, parent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/source/tree/CompilationUnitTree;)V", nullptr, $PUBLIC, $method(TreePath, init$, void, $CompilationUnitTree*)},
		{"<init>", "(Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;)V", nullptr, $PUBLIC, $method(TreePath, init$, void, TreePath*, $Tree*)},
		{"getCompilationUnit", "()Lcom/sun/source/tree/CompilationUnitTree;", nullptr, $PUBLIC, $virtualMethod(TreePath, getCompilationUnit, $CompilationUnitTree*)},
		{"getLeaf", "()Lcom/sun/source/tree/Tree;", nullptr, $PUBLIC, $virtualMethod(TreePath, getLeaf, $Tree*)},
		{"getParentPath", "()Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreePath, getParentPath, TreePath*)},
		{"getPath", "(Lcom/sun/source/tree/CompilationUnitTree;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC | $STATIC, $staticMethod(TreePath, getPath, TreePath*, $CompilationUnitTree*, $Tree*)},
		{"getPath", "(Lcom/sun/source/util/TreePath;Lcom/sun/source/tree/Tree;)Lcom/sun/source/util/TreePath;", nullptr, $PUBLIC | $STATIC, $staticMethod(TreePath, getPath, TreePath*, TreePath*, $Tree*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/source/tree/Tree;>;", $PUBLIC, $virtualMethod(TreePath, iterator, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.source.util.TreePath$1", nullptr, nullptr, 0},
		{"com.sun.source.util.TreePath$1PathFinder", nullptr, "PathFinder", 0},
		{"com.sun.source.util.TreePath$1Result", nullptr, "Result", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.source.util.TreePath",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<Lcom/sun/source/tree/Tree;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.source.util.TreePath$1,com.sun.source.util.TreePath$1PathFinder,com.sun.source.util.TreePath$1Result"
	};
	$loadClass(TreePath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreePath);
	});
	return class$;
}

$Class* TreePath::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com
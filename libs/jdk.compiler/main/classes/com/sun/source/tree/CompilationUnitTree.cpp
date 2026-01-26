#include <com/sun/source/tree/CompilationUnitTree.h>

#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/LineMap.h>
#include <com/sun/source/tree/ModuleTree.h>
#include <com/sun/source/tree/PackageTree.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/List.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ExpressionTree = ::com::sun::source::tree::ExpressionTree;
using $LineMap = ::com::sun::source::tree::LineMap;
using $ModuleTree = ::com::sun::source::tree::ModuleTree;
using $PackageTree = ::com::sun::source::tree::PackageTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $List = ::java::util::List;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

$MethodInfo _CompilationUnitTree_MethodInfo_[] = {
	{"getImports", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/ImportTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getImports, $List*)},
	{"getLineMap", "()Lcom/sun/source/tree/LineMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getLineMap, $LineMap*)},
	{"getModule", "()Lcom/sun/source/tree/ModuleTree;", nullptr, $PUBLIC, $virtualMethod(CompilationUnitTree, getModule, $ModuleTree*)},
	{"getPackage", "()Lcom/sun/source/tree/PackageTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getPackage, $PackageTree*)},
	{"getPackageAnnotations", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/AnnotationTree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getPackageAnnotations, $List*)},
	{"getPackageName", "()Lcom/sun/source/tree/ExpressionTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getPackageName, $ExpressionTree*)},
	{"getSourceFile", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getSourceFile, $JavaFileObject*)},
	{"getTypeDecls", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/tree/Tree;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CompilationUnitTree, getTypeDecls, $List*)},
	{}
};

$ClassInfo _CompilationUnitTree_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.source.tree.CompilationUnitTree",
	nullptr,
	"com.sun.source.tree.Tree",
	nullptr,
	_CompilationUnitTree_MethodInfo_
};

$Object* allocate$CompilationUnitTree($Class* clazz) {
	return $of($alloc(CompilationUnitTree));
}

$ModuleTree* CompilationUnitTree::getModule() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* CompilationUnitTree::load$($String* name, bool initialize) {
	$loadClass(CompilationUnitTree, name, initialize, &_CompilationUnitTree_ClassInfo_, allocate$CompilationUnitTree);
	return class$;
}

$Class* CompilationUnitTree::class$ = nullptr;

			} // tree
		} // source
	} // sun
} // com
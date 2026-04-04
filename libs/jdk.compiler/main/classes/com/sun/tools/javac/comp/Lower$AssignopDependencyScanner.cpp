#include <com/sun/tools/javac/comp/Lower$AssignopDependencyScanner.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssignOp.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCUnary.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCAssignOp = ::com::sun::tools::javac::tree::JCTree$JCAssignOp;
using $JCTree$JCUnary = ::com::sun::tools::javac::tree::JCTree$JCUnary;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$AssignopDependencyScanner::init$($Lower* this$0, $JCTree$JCAssignOp* tree) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
	this->dependencyFound = false;
	$set(this, sym, $TreeInfo::symbol($nc(tree)->lhs));
}

void Lower$AssignopDependencyScanner::scan($JCTree* tree) {
	if (tree != nullptr && this->sym != nullptr) {
		tree->accept(this);
	}
}

void Lower$AssignopDependencyScanner::visitAssignop($JCTree$JCAssignOp* tree) {
	if ($TreeInfo::symbol($nc(tree)->lhs) == this->sym) {
		this->dependencyFound = true;
		return;
	}
	$TreeScanner::visitAssignop(tree);
}

void Lower$AssignopDependencyScanner::visitUnary($JCTree$JCUnary* tree) {
	if ($TreeInfo::symbol($nc(tree)->arg) == this->sym) {
		this->dependencyFound = true;
		return;
	}
	$TreeScanner::visitUnary(tree);
}

Lower$AssignopDependencyScanner::Lower$AssignopDependencyScanner() {
}

$Class* Lower$AssignopDependencyScanner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$AssignopDependencyScanner, this$0)},
		{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Lower$AssignopDependencyScanner, sym)},
		{"dependencyFound", "Z", nullptr, 0, $field(Lower$AssignopDependencyScanner, dependencyFound)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, 0, $method(Lower$AssignopDependencyScanner, init$, void, $Lower*, $JCTree$JCAssignOp*)},
		{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(Lower$AssignopDependencyScanner, scan, void, $JCTree*)},
		{"visitAssignop", "(Lcom/sun/tools/javac/tree/JCTree$JCAssignOp;)V", nullptr, $PUBLIC, $virtualMethod(Lower$AssignopDependencyScanner, visitAssignop, void, $JCTree$JCAssignOp*)},
		{"visitUnary", "(Lcom/sun/tools/javac/tree/JCTree$JCUnary;)V", nullptr, $PUBLIC, $virtualMethod(Lower$AssignopDependencyScanner, visitUnary, void, $JCTree$JCUnary*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$AssignopDependencyScanner", "com.sun.tools.javac.comp.Lower", "AssignopDependencyScanner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$AssignopDependencyScanner",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$AssignopDependencyScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$AssignopDependencyScanner);
	});
	return class$;
}

$Class* Lower$AssignopDependencyScanner::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
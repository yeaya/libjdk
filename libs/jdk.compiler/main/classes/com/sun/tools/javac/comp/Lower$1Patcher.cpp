#include <com/sun/tools/javac/comp/Lower$1Patcher.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/tree/JCTree$JCBreak.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCContinue.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCYield.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Lower = ::com::sun::tools::javac::comp::Lower;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCBreak = ::com::sun::tools::javac::tree::JCTree$JCBreak;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCContinue = ::com::sun::tools::javac::tree::JCTree$JCContinue;
using $JCTree$JCYield = ::com::sun::tools::javac::tree::JCTree$JCYield;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$1Patcher::init$($Lower* this$0, $JCTree* val$src, $JCTree* val$dest) {
	$set(this, this$0, this$0);
	$set(this, val$src, val$src);
	$set(this, val$dest, val$dest);
	$TreeScanner::init$();
}

void Lower$1Patcher::visitBreak($JCTree$JCBreak* tree) {
	if ($nc(tree)->target == this->val$src) {
		$set(tree, target, this->val$dest);
	}
}

void Lower$1Patcher::visitYield($JCTree$JCYield* tree) {
	if ($nc(tree)->target == this->val$src) {
		$set(tree, target, this->val$dest);
	}
	scan(tree->value);
}

void Lower$1Patcher::visitContinue($JCTree$JCContinue* tree) {
	if ($nc(tree)->target == this->val$src) {
		$set(tree, target, this->val$dest);
	}
}

void Lower$1Patcher::visitClassDef($JCTree$JCClassDecl* tree) {
}

Lower$1Patcher::Lower$1Patcher() {
}

$Class* Lower$1Patcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1Patcher, this$0)},
		{"val$dest", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1Patcher, val$dest)},
		{"val$src", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$1Patcher, val$src)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)V", "()V", 0, $method(Lower$1Patcher, init$, void, $Lower*, $JCTree*, $JCTree*)},
		{"visitBreak", "(Lcom/sun/tools/javac/tree/JCTree$JCBreak;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1Patcher, visitBreak, void, $JCTree$JCBreak*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1Patcher, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitContinue", "(Lcom/sun/tools/javac/tree/JCTree$JCContinue;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1Patcher, visitContinue, void, $JCTree$JCContinue*)},
		{"visitYield", "(Lcom/sun/tools/javac/tree/JCTree$JCYield;)V", nullptr, $PUBLIC, $virtualMethod(Lower$1Patcher, visitYield, void, $JCTree$JCYield*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Lower",
		"patchTargets",
		"(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/tree/JCTree;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$1Patcher", nullptr, "Patcher", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$1Patcher",
		"com.sun.tools.javac.tree.TreeScanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$1Patcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$1Patcher);
	});
	return class$;
}

$Class* Lower$1Patcher::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
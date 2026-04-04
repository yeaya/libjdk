#include <com/sun/tools/javac/comp/Enter$1.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Enter.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree$JCPackageDecl.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Enter = ::com::sun::tools::javac::comp::Enter;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $JCTree$JCPackageDecl = ::com::sun::tools::javac::tree::JCTree$JCPackageDecl;
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

void Enter$1::init$($Enter* this$0) {
	$set(this, this$0, this$0);
	$TreeScanner::init$();
}

void Enter$1::visitIdent($JCTree$JCIdent* tree) {
	$set($nc(tree), sym, this->currentPackage);
	$set(tree, type, $nc(this->currentPackage)->type);
}

void Enter$1::visitSelect($JCTree$JCFieldAccess* tree) {
	$set($nc(tree), sym, this->currentPackage);
	$set(tree, type, $nc(this->currentPackage)->type);
	$set(this, currentPackage, this->currentPackage->owner);
	$TreeScanner::visitSelect(tree);
}

void Enter$1::visitPackageDef($JCTree$JCPackageDecl* tree) {
	$set(this, currentPackage, $nc(tree)->packge);
	scan(tree->pid);
}

Enter$1::Enter$1() {
}

$Class* Enter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Enter;", nullptr, $FINAL | $SYNTHETIC, $field(Enter$1, this$0)},
		{"currentPackage", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Enter$1, currentPackage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Enter;)V", nullptr, 0, $method(Enter$1, init$, void, $Enter*)},
		{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(Enter$1, visitIdent, void, $JCTree$JCIdent*)},
		{"visitPackageDef", "(Lcom/sun/tools/javac/tree/JCTree$JCPackageDecl;)V", nullptr, $PUBLIC, $virtualMethod(Enter$1, visitPackageDef, void, $JCTree$JCPackageDecl*)},
		{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(Enter$1, visitSelect, void, $JCTree$JCFieldAccess*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Enter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Enter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Enter$1",
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
		"com.sun.tools.javac.comp.Enter"
	};
	$loadClass(Enter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Enter$1);
	});
	return class$;
}

$Class* Enter$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
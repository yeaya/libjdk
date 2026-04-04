#include <com/sun/tools/javac/tree/TreeInfo$1DiagScanner.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/tree/JCTree$JCFieldAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCIdent.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo$DeclScanner.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $JCTree$JCFieldAccess = ::com::sun::tools::javac::tree::JCTree$JCFieldAccess;
using $JCTree$JCIdent = ::com::sun::tools::javac::tree::JCTree$JCIdent;
using $TreeInfo$DeclScanner = ::com::sun::tools::javac::tree::TreeInfo$DeclScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

void TreeInfo$1DiagScanner::init$($Symbol* sym) {
	$TreeInfo$DeclScanner::init$(sym);
}

void TreeInfo$1DiagScanner::visitIdent($JCTree$JCIdent* that) {
	if ($nc(that)->sym == this->sym) {
		$set(this, result, that);
	} else {
		$TreeInfo$DeclScanner::visitIdent(that);
	}
}

void TreeInfo$1DiagScanner::visitSelect($JCTree$JCFieldAccess* that) {
	if ($nc(that)->sym == this->sym) {
		$set(this, result, that);
	} else {
		$TreeInfo$DeclScanner::visitSelect(that);
	}
}

TreeInfo$1DiagScanner::TreeInfo$1DiagScanner() {
}

$Class* TreeInfo$1DiagScanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(TreeInfo$1DiagScanner, init$, void, $Symbol*)},
		{"visitIdent", "(Lcom/sun/tools/javac/tree/JCTree$JCIdent;)V", nullptr, $PUBLIC, $virtualMethod(TreeInfo$1DiagScanner, visitIdent, void, $JCTree$JCIdent*)},
		{"visitSelect", "(Lcom/sun/tools/javac/tree/JCTree$JCFieldAccess;)V", nullptr, $PUBLIC, $virtualMethod(TreeInfo$1DiagScanner, visitSelect, void, $JCTree$JCFieldAccess*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.tree.TreeInfo",
		"diagnosticPositionFor",
		"(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/tree/JCTree;Z)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.TreeInfo$1DiagScanner", nullptr, "DiagScanner", 0},
		{"com.sun.tools.javac.tree.TreeInfo$DeclScanner", "com.sun.tools.javac.tree.TreeInfo", "DeclScanner", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.tree.TreeInfo$1DiagScanner",
		"com.sun.tools.javac.tree.TreeInfo$DeclScanner",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.TreeInfo"
	};
	$loadClass(TreeInfo$1DiagScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeInfo$1DiagScanner);
	});
	return class$;
}

$Class* TreeInfo$1DiagScanner::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com
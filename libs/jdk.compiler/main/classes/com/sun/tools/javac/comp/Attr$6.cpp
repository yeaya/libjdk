#include <com/sun/tools/javac/comp/Attr$6.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr$PostAttrAnalyzer.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Attr$PostAttrAnalyzer = ::com::sun::tools::javac::comp::Attr$PostAttrAnalyzer;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
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

void Attr$6::init$($Attr* this$0) {
	$set(this, this$0, this$0);
	$Attr$PostAttrAnalyzer::init$(this$0);
}

void Attr$6::scan($JCTree* tree) {
	$init($Type);
	if (tree == nullptr || (tree->type != nullptr && $equals(tree->type, $Type::stuckType))) {
		return;
	}
	$Attr$PostAttrAnalyzer::scan(tree);
}

void Attr$6::visitClassDef($JCTree$JCClassDecl* that) {
	if ($nc(that)->sym != nullptr) {
		$Attr$PostAttrAnalyzer::visitClassDef(that);
	}
}

void Attr$6::visitLambda($JCTree$JCLambda* that) {
	if ($nc(that)->type != nullptr) {
		$Attr$PostAttrAnalyzer::visitLambda(that);
	}
}

Attr$6::Attr$6() {
}

$Class* Attr$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;)V", nullptr, 0, $method(Attr$6, init$, void, $Attr*)},
		{"scan", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $virtualMethod(Attr$6, scan, void, $JCTree*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(Attr$6, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(Attr$6, visitLambda, void, $JCTree$JCLambda*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Attr",
		"preFlow",
		"(Lcom/sun/tools/javac/tree/JCTree;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$6", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer", "com.sun.tools.javac.comp.Attr", "PostAttrAnalyzer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$6",
		"com.sun.tools.javac.comp.Attr$PostAttrAnalyzer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$6);
	});
	return class$;
}

$Class* Attr$6::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
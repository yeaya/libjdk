#include <com/sun/tools/javac/comp/LambdaToMethod$1LambdaBodyTranslator.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCReturn.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeTranslator.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCReturn = ::com::sun::tools::javac::tree::JCTree$JCReturn;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeTranslator = ::com::sun::tools::javac::tree::TreeTranslator;
using $List = ::com::sun::tools::javac::util::List;
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

void LambdaToMethod$1LambdaBodyTranslator::init$($LambdaToMethod* this$0, bool val$isTarget_void, $JCTree$JCMethodDecl* val$lambdaMethodDecl) {
	$set(this, this$0, this$0);
	this->val$isTarget_void = val$isTarget_void;
	$set(this, val$lambdaMethodDecl, val$lambdaMethodDecl);
	$TreeTranslator::init$();
}

void LambdaToMethod$1LambdaBodyTranslator::visitClassDef($JCTree$JCClassDecl* tree) {
	$set(this, result, tree);
}

void LambdaToMethod$1LambdaBodyTranslator::visitLambda($JCTree$JCLambda* tree) {
	$set(this, result, tree);
}

void LambdaToMethod$1LambdaBodyTranslator::visitReturn($JCTree$JCReturn* tree) {
	$useLocalObjectStack();
	bool isLambda_void = $nc(tree)->expr == nullptr;
	if (this->val$isTarget_void && !isLambda_void) {
		$var($Symbol$VarSymbol, loc, this->this$0->makeSyntheticVar(0, $($nc(this->this$0->names)->fromString("$loc"_s)), $nc(tree->expr)->type, $nc(this->val$lambdaMethodDecl)->sym));
		$var($JCTree$JCVariableDecl, varDef, $nc(this->this$0->make)->VarDef(loc, tree->expr));
		$set(this, result, $nc(this->this$0->make)->Block(0, $($List::of(varDef, $($nc(this->this$0->make)->Return(nullptr))))));
	} else {
		$set(this, result, tree);
	}
}

LambdaToMethod$1LambdaBodyTranslator::LambdaToMethod$1LambdaBodyTranslator() {
}

$Class* LambdaToMethod$1LambdaBodyTranslator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$1LambdaBodyTranslator, this$0)},
		{"val$lambdaMethodDecl", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$1LambdaBodyTranslator, val$lambdaMethodDecl)},
		{"val$isTarget_void", "Z", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$1LambdaBodyTranslator, val$isTarget_void)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod;ZLcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)V", "()V", 0, $method(LambdaToMethod$1LambdaBodyTranslator, init$, void, $LambdaToMethod*, bool, $JCTree$JCMethodDecl*)},
		{"visitClassDef", "(Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$1LambdaBodyTranslator, visitClassDef, void, $JCTree$JCClassDecl*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$1LambdaBodyTranslator, visitLambda, void, $JCTree$JCLambda*)},
		{"visitReturn", "(Lcom/sun/tools/javac/tree/JCTree$JCReturn;)V", nullptr, $PUBLIC, $virtualMethod(LambdaToMethod$1LambdaBodyTranslator, visitReturn, void, $JCTree$JCReturn*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.LambdaToMethod",
		"makeLambdaStatementBody",
		"(Lcom/sun/tools/javac/tree/JCTree$JCBlock;Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;Z)Lcom/sun/tools/javac/tree/JCTree$JCBlock;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.LambdaToMethod$1LambdaBodyTranslator", nullptr, "LambdaBodyTranslator", 0},
		{"com.sun.tools.javac.tree.JCTree$JCBlock", "com.sun.tools.javac.tree.JCTree", "JCBlock", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.JCTree$JCMethodDecl", "com.sun.tools.javac.tree.JCTree", "JCMethodDecl", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.LambdaToMethod$1LambdaBodyTranslator",
		"com.sun.tools.javac.tree.TreeTranslator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.LambdaToMethod"
	};
	$loadClass(LambdaToMethod$1LambdaBodyTranslator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaToMethod$1LambdaBodyTranslator);
	});
	return class$;
}

$Class* LambdaToMethod$1LambdaBodyTranslator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
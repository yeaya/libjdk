#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr$CheckStuckPolicy$2.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr$LambdaReturnScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr$SwitchExpressionScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda$ParameterKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractCollection.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EXPRESSION
#undef IMPLICIT
#undef UNOVERLOADED

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Type = ::com::sun::tools::javac::code::Type;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $DeferredAttr = ::com::sun::tools::javac::comp::DeferredAttr;
using $DeferredAttr$CheckStuckPolicy$1 = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy$1;
using $DeferredAttr$CheckStuckPolicy$2 = ::com::sun::tools::javac::comp::DeferredAttr$CheckStuckPolicy$2;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $DeferredAttr$LambdaReturnScanner = ::com::sun::tools::javac::comp::DeferredAttr$LambdaReturnScanner;
using $DeferredAttr$PolyScanner = ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner;
using $DeferredAttr$SwitchExpressionScanner = ::com::sun::tools::javac::comp::DeferredAttr$SwitchExpressionScanner;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCLambda$ParameterKind = ::com::sun::tools::javac::tree::JCTree$JCLambda$ParameterKind;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMemberReference$OverloadKind = ::com::sun::tools::javac::tree::JCTree$JCMemberReference$OverloadKind;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

int32_t DeferredAttr$CheckStuckPolicy::hashCode() {
	 return this->$DeferredAttr$PolyScanner::hashCode();
}

bool DeferredAttr$CheckStuckPolicy::equals(Object$* arg0) {
	 return this->$DeferredAttr$PolyScanner::equals(arg0);
}

$Object* DeferredAttr$CheckStuckPolicy::clone() {
	 return this->$DeferredAttr$PolyScanner::clone();
}

$String* DeferredAttr$CheckStuckPolicy::toString() {
	 return this->$DeferredAttr$PolyScanner::toString();
}

void DeferredAttr$CheckStuckPolicy::finalize() {
	this->$DeferredAttr$PolyScanner::finalize();
}

bool DeferredAttr$CheckStuckPolicy::isStuck() {
	return !$nc(this->stuckVars$)->isEmpty();
}

$Set* DeferredAttr$CheckStuckPolicy::stuckVars() {
	return this->stuckVars$;
}

$Set* DeferredAttr$CheckStuckPolicy::depVars() {
	return this->depVars$;
}

void DeferredAttr$CheckStuckPolicy::init$($DeferredAttr* this$0, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredType* dt) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$DeferredAttr$PolyScanner::init$();
	$set(this, stuckVars$, $new($LinkedHashSet));
	$set(this, depVars$, $new($LinkedHashSet));
	$set(this, pt, $nc(resultInfo)->pt);
	$set(this, inferenceContext, $nc(resultInfo->checkContext)->inferenceContext());
	scan($nc(dt)->tree);
	if (!$nc(this->stuckVars$)->isEmpty()) {
		$$nc(resultInfo->checkContext->inferenceContext())->addFreeTypeListener($($List::from(this->stuckVars$)), this);
	}
}

void DeferredAttr$CheckStuckPolicy::typesInferred($InferenceContext* inferenceContext) {
	$nc(this->stuckVars$)->clear();
}

void DeferredAttr$CheckStuckPolicy::visitLambda($JCTree$JCLambda* tree) {
	$useLocalObjectStack();
	if ($$nc($nc(this->inferenceContext)->inferenceVars())->contains(this->pt)) {
		$nc(this->stuckVars$)->add(this->pt);
	}
	if (!$nc(this->this$0->types)->isFunctionalInterface(this->pt)) {
		return;
	}
	$var($Type, descType, this->this$0->types->findDescriptorType(this->pt));
	$var($List, freeArgVars, $nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getParameterTypes())));
	$init($JCTree$JCLambda$ParameterKind);
	if ($nc(tree)->paramKind == $JCTree$JCLambda$ParameterKind::IMPLICIT && $nc(freeArgVars)->nonEmpty()) {
		$nc(this->stuckVars$)->addAll($cast($AbstractCollection, freeArgVars));
		$nc(this->depVars$)->addAll($$cast($AbstractCollection, $nc(this->inferenceContext)->freeVarsIn($(descType->getReturnType()))));
		$nc(this->depVars$)->addAll($$cast($AbstractCollection, $nc(this->inferenceContext)->freeVarsIn($(descType->getThrownTypes()))));
	}
	scanLambdaBody(tree, $(descType->getReturnType()));
}

void DeferredAttr$CheckStuckPolicy::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalObjectStack();
	scan($nc(tree)->expr);
	if ($$nc($nc(this->inferenceContext)->inferenceVars())->contains(this->pt)) {
		$nc(this->stuckVars$)->add(this->pt);
		return;
	}
	if (!$nc(this->this$0->types)->isFunctionalInterface(this->pt)) {
		return;
	}
	$var($Type, descType, this->this$0->types->findDescriptorType(this->pt));
	$var($List, freeArgVars, $nc(this->inferenceContext)->freeVarsIn($($nc(descType)->getParameterTypes())));
	bool var$0 = $nc(freeArgVars)->nonEmpty();
	$init($JCTree$JCMemberReference$OverloadKind);
	if (var$0 && tree->getOverloadKind() != $JCTree$JCMemberReference$OverloadKind::UNOVERLOADED) {
		$nc(this->stuckVars$)->addAll($cast($AbstractCollection, freeArgVars));
		$nc(this->depVars$)->addAll($$cast($AbstractCollection, $nc(this->inferenceContext)->freeVarsIn($(descType->getReturnType()))));
		$nc(this->depVars$)->addAll($$cast($AbstractCollection, $nc(this->inferenceContext)->freeVarsIn($(descType->getThrownTypes()))));
	}
}

void DeferredAttr$CheckStuckPolicy::scanLambdaBody($JCTree$JCLambda* lambda, $Type* pt) {
	$useLocalObjectStack();
	$init($LambdaExpressionTree$BodyKind);
	if ($nc(lambda)->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
		$var($Type, prevPt, this->pt);
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, pt, pt);
			scan(lambda->body);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this, pt, prevPt);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} else {
		$var($DeferredAttr$LambdaReturnScanner, lambdaScanner, $new($DeferredAttr$CheckStuckPolicy$1, this, pt));
		lambdaScanner->scan(lambda->body);
	}
}

void DeferredAttr$CheckStuckPolicy::visitSwitchExpression($JCTree$JCSwitchExpression* expr) {
	$var($DeferredAttr$SwitchExpressionScanner, switchScanner, $new($DeferredAttr$CheckStuckPolicy$2, this));
	switchScanner->scan($nc(expr)->cases);
}

DeferredAttr$CheckStuckPolicy::DeferredAttr$CheckStuckPolicy() {
}

$Class* DeferredAttr$CheckStuckPolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/DeferredAttr;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$CheckStuckPolicy, this$0)},
		{"pt", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(DeferredAttr$CheckStuckPolicy, pt)},
		{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(DeferredAttr$CheckStuckPolicy, inferenceContext)},
		{"stuckVars", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(DeferredAttr$CheckStuckPolicy, stuckVars$)},
		{"depVars", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", 0, $field(DeferredAttr$CheckStuckPolicy, depVars$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;)V", nullptr, $PUBLIC, $method(DeferredAttr$CheckStuckPolicy, init$, void, $DeferredAttr*, $Attr$ResultInfo*, $DeferredAttr$DeferredType*)},
		{"depVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, depVars, $Set*)},
		{"isStuck", "()Z", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, isStuck, bool)},
		{"scanLambdaBody", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $virtualMethod(DeferredAttr$CheckStuckPolicy, scanLambdaBody, void, $JCTree$JCLambda*, $Type*)},
		{"stuckVars", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Type;>;", $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, stuckVars, $Set*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, typesInferred, void, $InferenceContext*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, visitLambda, void, $JCTree$JCLambda*)},
		{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, visitReference, void, $JCTree$JCMemberReference*)},
		{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$CheckStuckPolicy, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "CheckStuckPolicy", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$PolyScanner", "com.sun.tools.javac.comp.DeferredAttr", "PolyScanner", $STATIC},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy", "com.sun.tools.javac.comp.DeferredAttr", "DeferredStuckPolicy", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Infer$FreeTypeListener", "com.sun.tools.javac.comp.Infer", "FreeTypeListener", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy",
		"com.sun.tools.javac.comp.DeferredAttr$PolyScanner",
		"com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy,com.sun.tools.javac.comp.Infer$FreeTypeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$CheckStuckPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DeferredAttr$CheckStuckPolicy));
	});
	return class$;
}

$Class* DeferredAttr$CheckStuckPolicy::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
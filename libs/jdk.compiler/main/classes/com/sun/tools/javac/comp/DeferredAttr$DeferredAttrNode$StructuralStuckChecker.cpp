#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$StructuralStuckChecker.h>
#include <com/sun/source/tree/ExpressionTree.h>
#include <com/sun/source/tree/LambdaExpressionTree$BodyKind.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/ArgumentAttr$LocalCacheContext.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/comp/Attr$ResultInfo.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$5.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType$SpeculativeCache.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredType.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$ReferenceChooser.h>
#include <com/sun/tools/javac/comp/Resolve$ResolveError.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/tree/JCTree$JCConditional.h>
#include <com/sun/tools/javac/tree/JCTree$JCErroneous.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference$OverloadKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCMemberReference.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewClass.h>
#include <com/sun/tools/javac/tree/JCTree$JCSwitchExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree$Visitor.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/tree/TreeScanner.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef EXPRESSION
#undef FRAGMENT
#undef VOID

using $LambdaExpressionTree$BodyKind = ::com::sun::source::tree::LambdaExpressionTree$BodyKind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $ArgumentAttr$LocalCacheContext = ::com::sun::tools::javac::comp::ArgumentAttr$LocalCacheContext;
using $Attr$ResultInfo = ::com::sun::tools::javac::comp::Attr$ResultInfo;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $DeferredAttr$5 = ::com::sun::tools::javac::comp::DeferredAttr$5;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $DeferredAttr$DeferredAttrNode = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode;
using $DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker;
using $DeferredAttr$DeferredType = ::com::sun::tools::javac::comp::DeferredAttr$DeferredType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve$ResolveError = ::com::sun::tools::javac::comp::Resolve$ResolveError;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCConditional = ::com::sun::tools::javac::tree::JCTree$JCConditional;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $JCTree$JCMemberReference = ::com::sun::tools::javac::tree::JCTree$JCMemberReference;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewClass = ::com::sun::tools::javac::tree::JCTree$JCNewClass;
using $JCTree$JCSwitchExpression = ::com::sun::tools::javac::tree::JCTree$JCSwitchExpression;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $TreeScanner = ::com::sun::tools::javac::tree::TreeScanner;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0 : public $Function {
	$class(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, $NO_CLASS_INIT, $Function)
public:
	void init$(DeferredAttr$DeferredAttrNode$StructuralStuckChecker* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of($nc(inst$)->lambda$canLambdaBodyCompleteNormally$0($cast($JCTree$JCVariableDecl, vd)));
	}
	DeferredAttr$DeferredAttrNode$StructuralStuckChecker* inst$ = nullptr;
};
$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode$StructuralStuckChecker;)V", nullptr, $PUBLIC, $method(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, init$, void, DeferredAttr$DeferredAttrNode$StructuralStuckChecker*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0);
	});
	return class$;
}
$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::class$ = nullptr;

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::init$($DeferredAttr$DeferredAttrNode* this$1) {
	$set(this, this$1, this$1);
	$TreeScanner::init$();
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::check($DeferredAttr$DeferredType* dt, $Attr$ResultInfo* resultInfo, $DeferredAttr$DeferredAttrContext* deferredAttrContext) {
	$set(this, resultInfo, resultInfo);
	$set(this, inferenceContext, $nc(deferredAttrContext)->inferenceContext);
	$set(this, env, $nc(dt)->env);
	$nc(dt->tree)->accept(this);
	$nc(dt->speculativeCache)->put($nc(this->this$1->this$0)->stuckTree, resultInfo);
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitLambda($JCTree$JCLambda* tree) {
	$useLocalObjectStack();
	$var($Check$CheckContext, checkContext, $nc(this->resultInfo)->checkContext);
	$var($Type, pt, this->resultInfo->pt);
	if (!$nc($nc(this->inferenceContext)->inferencevars)->contains(pt)) {
		$var($Type, descriptorType, nullptr);
		try {
			$assign(descriptorType, $nc($nc(this->this$1->this$0)->types)->findDescriptorType(pt));
		} catch ($Types$FunctionDescriptorLookupError& ex) {
			$nc(checkContext)->report(nullptr, $(ex->getDiagnostic()));
		}
		int32_t var$0 = $$nc($nc(descriptorType)->getParameterTypes())->length();
		if (var$0 != $nc($nc(tree)->params)->length()) {
			$init($CompilerProperties$Fragments);
			$nc(checkContext)->report(tree, $($nc($nc(this->this$1->this$0)->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInLambda)));
		}
		$var($Type, currentReturnType, descriptorType->getReturnType());
		$init($TypeTag);
		bool returnTypeIsVoid = $nc(currentReturnType)->hasTag($TypeTag::VOID);
		$init($LambdaExpressionTree$BodyKind);
		if (tree->getBodyKind() == $LambdaExpressionTree$BodyKind::EXPRESSION) {
			bool isExpressionCompatible = !returnTypeIsVoid || $TreeInfo::isExpressionStatement($$cast($JCTree$JCExpression, tree->getBody()));
			if (!isExpressionCompatible) {
				$var($JCDiagnostic$DiagnosticPosition, var$1, tree->pos());
				$nc($nc(this->resultInfo)->checkContext)->report(var$1, $($nc($nc(this->this$1->this$0)->diags)->fragment($($CompilerProperties$Fragments::IncompatibleRetTypeInLambda($($CompilerProperties$Fragments::MissingRetVal(currentReturnType)))))));
			}
		} else {
			$var($DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, lambdaBodyChecker, $new($DeferredAttr$DeferredAttrNode$LambdaBodyStructChecker, this->this$1));
			$nc(tree->body)->accept(lambdaBodyChecker);
			bool isVoidCompatible = lambdaBodyChecker->isVoidCompatible;
			if (returnTypeIsVoid) {
				if (!isVoidCompatible) {
					$var($JCDiagnostic$DiagnosticPosition, var$2, tree->pos());
					$init($CompilerProperties$Fragments);
					$nc($nc(this->resultInfo)->checkContext)->report(var$2, $($nc($nc(this->this$1->this$0)->diags)->fragment($CompilerProperties$Fragments::UnexpectedRetVal)));
				}
			} else {
				bool isValueCompatible = lambdaBodyChecker->isPotentiallyValueCompatible && !canLambdaBodyCompleteNormally(tree);
				if (!isValueCompatible && !isVoidCompatible) {
					$init($CompilerProperties$Errors);
					$nc($nc(this->this$1->this$0)->log)->error($($nc(tree->body)->pos()), $CompilerProperties$Errors::LambdaBodyNeitherValueNorVoidCompatible);
				}
				if (!isValueCompatible) {
					$var($JCDiagnostic$DiagnosticPosition, var$3, tree->pos());
					$nc($nc(this->resultInfo)->checkContext)->report(var$3, $($nc($nc(this->this$1->this$0)->diags)->fragment($($CompilerProperties$Fragments::IncompatibleRetTypeInLambda($($CompilerProperties$Fragments::MissingRetVal(currentReturnType)))))));
				}
			}
		}
	}
}

bool DeferredAttr$DeferredAttrNode$StructuralStuckChecker::canLambdaBodyCompleteNormally($JCTree$JCLambda* tree) {
	$useLocalObjectStack();
	$var($List, oldParams, $nc(tree)->params);
	$var($ArgumentAttr$LocalCacheContext, localCacheContext, $nc($nc(this->this$1->this$0)->argumentAttr)->withLocalCacheContext());
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		$set(tree, params, $cast($List, $$nc($$nc($nc(tree->params)->stream())->map($$new(DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0, this)))->collect($($List::collector()))));
		var$2 = $nc($(this->this$1->this$0->attribSpeculativeLambda(tree, this->env, $nc(this->this$1->this$0->attr)->unknownExprInfo)))->canCompleteNormally;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(localCacheContext)->leave();
		$set(tree, params, oldParams);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitNewClass($JCTree$JCNewClass* tree) {
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitApply($JCTree$JCMethodInvocation* tree) {
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitConditional($JCTree$JCConditional* tree) {
	scan($nc(tree)->truepart);
	scan(tree->falsepart);
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitSwitchExpression($JCTree$JCSwitchExpression* tree) {
	scan($nc(tree)->cases);
}

void DeferredAttr$DeferredAttrNode$StructuralStuckChecker::visitReference($JCTree$JCMemberReference* tree) {
	$useLocalObjectStack();
	$Assert::checkNonNull($($nc(tree)->getOverloadKind()));
	$var($Check$CheckContext, checkContext, $nc(this->resultInfo)->checkContext);
	$var($Type, pt, this->resultInfo->pt);
	if (!$nc($nc(this->inferenceContext)->inferencevars)->contains(pt)) {
		$var($Type, descriptor, nullptr);
		try {
			$assign(descriptor, $nc($nc(this->this$1->this$0)->types)->findDescriptorType(pt));
		} catch ($Types$FunctionDescriptorLookupError& ex) {
			$nc(checkContext)->report(nullptr, $(ex->getDiagnostic()));
		}
		$var($Env, localEnv, $nc(this->env)->dup(tree));
		$var($JCTree$JCExpression, exprTree, nullptr);
		$var($JCTree, var$0, $cast($JCTree, tree->getQualifierExpression()));
		$var($Attr$ResultInfo, var$1, $nc($nc(this->this$1->this$0)->attr)->memberReferenceQualifierResult(tree));
		$assign(exprTree, $cast($JCTree$JCExpression, $nc(this->this$1->this$0)->attribSpeculative(var$0, localEnv, var$1, $($nc(this->this$1->this$0->argumentAttr)->withLocalCacheContext()))));
		$var($ListBuffer, argtypes, $new($ListBuffer));
		{
			$var($Iterator, i$, $$nc($nc(descriptor)->getParameterTypes())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				{
					argtypes->append($Type::noType);
				}
			}
		}
		$var($JCTree$JCMemberReference, mref2, $cast($JCTree$JCMemberReference, $$new($TreeCopier, this->this$1->this$0->make)->copy(tree)));
		$set($nc(mref2), expr, exprTree);
		$var($Type, var$2, $nc(exprTree)->type);
		$var($Name, var$3, tree->name);
		$var($List, var$4, argtypes->toList());
		$var($Symbol, lookupSym, $cast($Symbol, $nc($($nc(this->this$1->this$0->rs)->resolveMemberReference(localEnv, mref2, var$2, var$3, var$4, $($List::nil()), descriptor, $nc(this->this$1->this$0->rs)->arityMethodCheck, this->inferenceContext, $nc(this->this$1->this$0->rs)->structuralReferenceChooser)))->fst));
		$init($DeferredAttr$5);
		switch ($nc($DeferredAttr$5::$SwitchMap$com$sun$tools$javac$code$Kinds$Kind)->get($nc(($nc(lookupSym)->kind))->ordinal())) {
		case 1:
		case 2:
			$init($CompilerProperties$Fragments);
			$nc(checkContext)->report(tree, $($nc(this->this$1->this$0->diags)->fragment($CompilerProperties$Fragments::IncompatibleArgTypesInMref)));
			break;
		case 3:
		case 4:
			{
				$init($JCDiagnostic$DiagnosticType);
				$var($JCDiagnostic$DiagnosticType, var$5, $JCDiagnostic$DiagnosticType::FRAGMENT);
				$var($Symbol, var$6, $nc(exprTree->type)->tsym);
				$var($Type, var$7, exprTree->type);
				$var($Name, var$8, tree->name);
				$var($List, var$9, argtypes->toList());
				$nc(checkContext)->report(tree, $($cast($Resolve$ResolveError, lookupSym)->getDiagnostic(var$5, tree, var$6, var$7, var$8, var$9, $($List::nil()))));
				break;
			}
		}
	}
}

$JCTree$JCVariableDecl* DeferredAttr$DeferredAttrNode$StructuralStuckChecker::lambda$canLambdaBodyCompleteNormally$0($JCTree$JCVariableDecl* vd) {
	return $nc($nc(this->this$1->this$0)->make)->VarDef($nc(vd)->mods, $nc(vd)->name, $($nc($nc(this->this$1->this$0)->make)->Erroneous()), nullptr);
}

DeferredAttr$DeferredAttrNode$StructuralStuckChecker::DeferredAttr$DeferredAttrNode$StructuralStuckChecker() {
}

$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0")) {
			return DeferredAttr$DeferredAttrNode$StructuralStuckChecker$$Lambda$lambda$canLambdaBodyCompleteNormally$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, this$1)},
		{"resultInfo", "Lcom/sun/tools/javac/comp/Attr$ResultInfo;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, resultInfo)},
		{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, inferenceContext)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $field(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, env)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrNode;)V", nullptr, 0, $method(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, init$, void, $DeferredAttr$DeferredAttrNode*)},
		{"canLambdaBodyCompleteNormally", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)Z", nullptr, 0, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, canLambdaBodyCompleteNormally, bool, $JCTree$JCLambda*)},
		{"check", "(Lcom/sun/tools/javac/comp/DeferredAttr$DeferredType;Lcom/sun/tools/javac/comp/Attr$ResultInfo;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, check, void, $DeferredAttr$DeferredType*, $Attr$ResultInfo*, $DeferredAttr$DeferredAttrContext*)},
		{"lambda$canLambdaBodyCompleteNormally$0", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;", nullptr, $PRIVATE | $SYNTHETIC, $method(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, lambda$canLambdaBodyCompleteNormally$0, $JCTree$JCVariableDecl*, $JCTree$JCVariableDecl*)},
		{"visitApply", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodInvocation;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, visitApply, void, $JCTree$JCMethodInvocation*)},
		{"visitConditional", "(Lcom/sun/tools/javac/tree/JCTree$JCConditional;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, visitConditional, void, $JCTree$JCConditional*)},
		{"visitLambda", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, visitLambda, void, $JCTree$JCLambda*)},
		{"visitNewClass", "(Lcom/sun/tools/javac/tree/JCTree$JCNewClass;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, visitNewClass, void, $JCTree$JCNewClass*)},
		{"visitReference", "(Lcom/sun/tools/javac/tree/JCTree$JCMemberReference;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, visitReference, void, $JCTree$JCMemberReference*)},
		{"visitSwitchExpression", "(Lcom/sun/tools/javac/tree/JCTree$JCSwitchExpression;)V", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, visitSwitchExpression, void, $JCTree$JCSwitchExpression*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrNode", 0},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode", "StructuralStuckChecker", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrNode$StructuralStuckChecker",
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
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$DeferredAttrNode$StructuralStuckChecker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredAttrNode$StructuralStuckChecker);
	});
	return class$;
}

$Class* DeferredAttr$DeferredAttrNode$StructuralStuckChecker::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
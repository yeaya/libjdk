#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Infer$InferenceException.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$InapplicableMethodException.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheck.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionPhase.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeInfo.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef ARITY_MISMATCH
#undef FRAGMENT

using $Type = ::com::sun::tools::javac::code::Type;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Resolve$AbstractMethodCheck$SharedInapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$AbstractMethodCheck$SharedInapplicableMethodException;
using $Resolve$InapplicableMethodException = ::com::sun::tools::javac::comp::Resolve$InapplicableMethodException;
using $Resolve$MethodCheck = ::com::sun::tools::javac::comp::Resolve$MethodCheck;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeInfo = ::com::sun::tools::javac::tree::TreeInfo;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $List = ::com::sun::tools::javac::util::List;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$AbstractMethodCheck::init$($Resolve* this$0) {
	$set(this, this$0, this$0);
	$set(this, methodCheckFailure, $new($Resolve$AbstractMethodCheck$SharedInapplicableMethodException, this));
}

void Resolve$AbstractMethodCheck::argumentsAcceptable($Env* env, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $List* argtypes$renamed, $List* formals$renamed, $Warner* warn) {
	$useLocalObjectStack();
	$var($List, argtypes, argtypes$renamed);
	$var($List, formals, formals$renamed);
	bool useVarargs = $nc(deferredAttrContext)->phase->isVarargsRequired();
	$var($JCTree, callTree, treeForDiagnostics(env));
	$var($List, trees, $TreeInfo::args(callTree));
	$var($InferenceContext, inferenceContext, deferredAttrContext->inferenceContext);
	$var($Type, varargsFormal, useVarargs ? $cast($Type, $nc(formals)->last()) : ($Type*)nullptr);
	bool var$0 = varargsFormal == nullptr;
	if (var$0) {
		int32_t var$1 = $nc(argtypes)->size();
		var$0 = var$1 != $nc(formals)->size();
	}
	if (var$0) {
		$init($Resolve$MethodCheckDiag);
		reportMC(callTree, $Resolve$MethodCheckDiag::ARITY_MISMATCH, inferenceContext, $$new($ObjectArray, 0));
	}
	while ($nc(argtypes)->nonEmpty() && !$equals($nc(formals)->head, varargsFormal)) {
		$var($JCDiagnostic$DiagnosticPosition, pos, trees != nullptr ? $cast($JCDiagnostic$DiagnosticPosition, trees->head) : ($JCDiagnostic$DiagnosticPosition*)nullptr);
		checkArg(pos, false, $cast($Type, argtypes->head), $cast($Type, formals->head), deferredAttrContext, warn);
		$assign(argtypes, argtypes->tail);
		$assign(formals, formals->tail);
		$assign(trees, trees != nullptr ? trees->tail : trees);
	}
	if (!$equals($nc(formals)->head, varargsFormal)) {
		$init($Resolve$MethodCheckDiag);
		reportMC(callTree, $Resolve$MethodCheckDiag::ARITY_MISMATCH, inferenceContext, $$new($ObjectArray, 0));
	}
	if (useVarargs) {
		$var($Type, elt, $nc(this->this$0->types)->elemtype(varargsFormal));
		while ($nc(argtypes)->nonEmpty()) {
			$var($JCDiagnostic$DiagnosticPosition, pos, trees != nullptr ? $cast($JCDiagnostic$DiagnosticPosition, trees->head) : ($JCDiagnostic$DiagnosticPosition*)nullptr);
			checkArg(pos, true, $cast($Type, argtypes->head), elt, deferredAttrContext, warn);
			$assign(argtypes, argtypes->tail);
			$assign(trees, trees != nullptr ? trees->tail : trees);
		}
	}
}

$JCTree* Resolve$AbstractMethodCheck::treeForDiagnostics($Env* env) {
	return $nc(($cast($AttrContext, $nc(env)->info)))->preferredTreeForDiagnostics != nullptr ? ($cast($AttrContext, env->info))->preferredTreeForDiagnostics : env->tree;
}

void Resolve$AbstractMethodCheck::reportMC($JCDiagnostic$DiagnosticPosition* pos, $Resolve$MethodCheckDiag* diag, $InferenceContext* inferenceContext, $ObjectArray* args$renamed) {
	$useLocalObjectStack();
	$var($ObjectArray, args, args$renamed);
	bool inferDiag = inferenceContext != $nc(this->this$0->infer)->emptyContext;
	if (inferDiag && (!$nc($nc(diag)->inferKey)->equals($nc(diag)->basicKey))) {
		$var($ObjectArray, args2, $new($ObjectArray, $nc(args)->length + 1));
		$System::arraycopy(args, 0, args2, 1, args->length);
		args2->set(0, $($nc(inferenceContext)->inferenceVars()));
		$assign(args, args2);
	}
	$var($String, key, inferDiag ? $nc(diag)->inferKey : $nc(diag)->basicKey);
	$init($JCDiagnostic$DiagnosticType);
	$throw(inferDiag ? $$cast($Resolve$InapplicableMethodException, $nc(this->this$0->infer)->error($($nc(this->this$0->diags)->create($JCDiagnostic$DiagnosticType::FRAGMENT, $($nc(this->this$0->log)->currentSource()), pos, key, args)))) : $$cast($Resolve$InapplicableMethodException, $nc(this->methodCheckFailure)->setMessage($($nc(this->this$0->diags)->create($JCDiagnostic$DiagnosticType::FRAGMENT, $($nc(this->this$0->log)->currentSource()), pos, key, args)))));
}

$Resolve$MethodCheck* Resolve$AbstractMethodCheck::mostSpecificCheck($List* actuals) {
	return this->this$0->nilMethodCheck;
}

Resolve$AbstractMethodCheck::Resolve$AbstractMethodCheck() {
}

$Class* Resolve$AbstractMethodCheck::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Resolve;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$AbstractMethodCheck, this$0)},
		{"methodCheckFailure", "Lcom/sun/tools/javac/comp/Resolve$AbstractMethodCheck$SharedInapplicableMethodException;", nullptr, 0, $field(Resolve$AbstractMethodCheck, methodCheckFailure)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve;)V", nullptr, 0, $method(Resolve$AbstractMethodCheck, init$, void, $Resolve*)},
		{"argumentsAcceptable", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/Warner;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/Warner;)V", $PUBLIC, $virtualMethod(Resolve$AbstractMethodCheck, argumentsAcceptable, void, $Env*, $DeferredAttr$DeferredAttrContext*, $List*, $List*, $Warner*)},
		{"checkArg", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)V", nullptr, $ABSTRACT, $virtualMethod(Resolve$AbstractMethodCheck, checkArg, void, $JCDiagnostic$DiagnosticPosition*, bool, $Type*, $Type*, $DeferredAttr$DeferredAttrContext*, $Warner*)},
		{"mostSpecificCheck", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/comp/Resolve$MethodCheck;", $PUBLIC, $virtualMethod(Resolve$AbstractMethodCheck, mostSpecificCheck, $Resolve$MethodCheck*, $List*)},
		{"reportMC", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;Lcom/sun/tools/javac/comp/InferenceContext;[Ljava/lang/Object;)V", nullptr, $PROTECTED | $TRANSIENT, $virtualMethod(Resolve$AbstractMethodCheck, reportMC, void, $JCDiagnostic$DiagnosticPosition*, $Resolve$MethodCheckDiag*, $InferenceContext*, $ObjectArray*)},
		{"treeForDiagnostics", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/tree/JCTree;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/tree/JCTree;", $PRIVATE, $method(Resolve$AbstractMethodCheck, treeForDiagnostics, $JCTree*, $Env*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "com.sun.tools.javac.comp.Resolve", "AbstractMethodCheck", $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$MethodCheck", "com.sun.tools.javac.comp.Resolve", "MethodCheck", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck$SharedInapplicableMethodException", "com.sun.tools.javac.comp.Resolve$AbstractMethodCheck", "SharedInapplicableMethodException", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.comp.Resolve$AbstractMethodCheck",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$MethodCheck",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$AbstractMethodCheck, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$AbstractMethodCheck);
	});
	return class$;
}

$Class* Resolve$AbstractMethodCheck::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
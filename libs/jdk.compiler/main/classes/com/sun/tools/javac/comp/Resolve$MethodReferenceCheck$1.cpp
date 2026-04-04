#include <com/sun/tools/javac/comp/Resolve$MethodReferenceCheck$1.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve$MethodReferenceCheck.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef ARG_MISMATCH
#undef UNDETVAR
#undef VARARG_MISMATCH

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Resolve$MethodCheckContext = ::com::sun::tools::javac::comp::Resolve$MethodCheckContext;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
using $Resolve$MethodReferenceCheck = ::com::sun::tools::javac::comp::Resolve$MethodReferenceCheck;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Warner = ::com::sun::tools::javac::util::Warner;
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

void Resolve$MethodReferenceCheck$1::init$($Resolve$MethodReferenceCheck* this$1, bool strict, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner, bool val$varargsCheck) {
	$set(this, this$1, this$1);
	this->val$varargsCheck = val$varargsCheck;
	$Resolve$MethodCheckContext::init$(this$1->this$0, strict, deferredAttrContext, rsWarner);
	$init($Resolve$MethodCheckDiag);
	$set(this, methodDiag, this->val$varargsCheck ? $Resolve$MethodCheckDiag::VARARG_MISMATCH : $Resolve$MethodCheckDiag::ARG_MISMATCH);
}

bool Resolve$MethodReferenceCheck$1::compatible($Type* found$renamed, $Type* req$renamed, $Warner* warn) {
	$useLocalObjectStack();
	$var($Type, found, found$renamed);
	$var($Type, req, req$renamed);
	$assign(found, $nc(this->this$1->pendingInferenceContext)->asUndetVar(found));
	$init($TypeTag);
	bool var$0 = $nc(found)->hasTag($TypeTag::UNDETVAR);
	if (var$0 && $nc(req)->isPrimitive()) {
		$assign(req, $nc($($nc($nc(this->this$1->this$0)->types)->boxedClass(req)))->type);
	}
	return $Resolve$MethodCheckContext::compatible(found, req, warn);
}

void Resolve$MethodReferenceCheck$1::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	this->this$1->reportMC(pos, this->methodDiag, $nc(this->deferredAttrContext$)->inferenceContext, $$new($ObjectArray, {details}));
}

Resolve$MethodReferenceCheck$1::Resolve$MethodReferenceCheck$1() {
}

$Class* Resolve$MethodReferenceCheck$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/Resolve$MethodReferenceCheck;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodReferenceCheck$1, this$1)},
		{"val$varargsCheck", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$MethodReferenceCheck$1, val$varargsCheck)},
		{"methodDiag", "Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, 0, $field(Resolve$MethodReferenceCheck$1, methodDiag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodReferenceCheck;ZLcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;Z)V", nullptr, 0, $method(Resolve$MethodReferenceCheck$1, init$, void, $Resolve$MethodReferenceCheck*, bool, $DeferredAttr$DeferredAttrContext*, $Warner*, bool)},
		{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$MethodReferenceCheck$1, compatible, bool, $Type*, $Type*, $Warner*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Resolve$MethodReferenceCheck$1, report, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck",
		"methodCheckResult",
		"(ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck", "com.sun.tools.javac.comp.Resolve", "MethodReferenceCheck", 0},
		{"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$MethodCheckContext", "com.sun.tools.javac.comp.Resolve", "MethodCheckContext", $ABSTRACT},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
		{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MethodReferenceCheck$1",
		"com.sun.tools.javac.comp.Resolve$MethodCheckContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$MethodReferenceCheck$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodReferenceCheck$1);
	});
	return class$;
}

$Class* Resolve$MethodReferenceCheck$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
#include <com/sun/tools/javac/comp/Resolve$4$1.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/comp/Resolve$4.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckContext.h>
#include <com/sun/tools/javac/comp/Resolve$MethodCheckDiag.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

#undef ARG_MISMATCH
#undef VARARG_MISMATCH

using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $Resolve$4 = ::com::sun::tools::javac::comp::Resolve$4;
using $Resolve$MethodCheckContext = ::com::sun::tools::javac::comp::Resolve$MethodCheckContext;
using $Resolve$MethodCheckDiag = ::com::sun::tools::javac::comp::Resolve$MethodCheckDiag;
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

void Resolve$4$1::init$($Resolve$4* this$1, bool strict, $DeferredAttr$DeferredAttrContext* deferredAttrContext, $Warner* rsWarner, bool val$varargsCheck) {
	$set(this, this$1, this$1);
	this->val$varargsCheck = val$varargsCheck;
	$Resolve$MethodCheckContext::init$(this$1->this$0, strict, deferredAttrContext, rsWarner);
	$init($Resolve$MethodCheckDiag);
	$set(this, methodDiag, this->val$varargsCheck ? $Resolve$MethodCheckDiag::VARARG_MISMATCH : $Resolve$MethodCheckDiag::ARG_MISMATCH);
}

void Resolve$4$1::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	this->this$1->reportMC(pos, this->methodDiag, $nc(this->deferredAttrContext$)->inferenceContext, $$new($ObjectArray, {details}));
}

Resolve$4$1::Resolve$4$1() {
}

$Class* Resolve$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/comp/Resolve$4;", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$4$1, this$1)},
		{"val$varargsCheck", "Z", nullptr, $FINAL | $SYNTHETIC, $field(Resolve$4$1, val$varargsCheck)},
		{"methodDiag", "Lcom/sun/tools/javac/comp/Resolve$MethodCheckDiag;", nullptr, 0, $field(Resolve$4$1, methodDiag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$4;ZLcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;Z)V", nullptr, 0, $method(Resolve$4$1, init$, void, $Resolve$4*, bool, $DeferredAttr$DeferredAttrContext*, $Warner*, bool)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Resolve$4$1, report, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve$4",
		"methodCheckResult",
		"(ZLcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;Lcom/sun/tools/javac/util/Warner;)Lcom/sun/tools/javac/comp/Attr$ResultInfo;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$4$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$MethodCheckContext", "com.sun.tools.javac.comp.Resolve", "MethodCheckContext", $ABSTRACT},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrContext", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrContext", 0},
		{"com.sun.tools.javac.comp.Attr$ResultInfo", "com.sun.tools.javac.comp.Attr", "ResultInfo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$4$1",
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
	$loadClass(Resolve$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$4$1);
	});
	return class$;
}

$Class* Resolve$4$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
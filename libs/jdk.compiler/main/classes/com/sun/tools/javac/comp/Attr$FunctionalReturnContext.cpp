#include <com/sun/tools/javac/comp/Attr$FunctionalReturnContext.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/comp/Check$NestedCheckContext.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Attr = ::com::sun::tools::javac::comp::Attr;
using $Check$CheckContext = ::com::sun::tools::javac::comp::Check$CheckContext;
using $Check$NestedCheckContext = ::com::sun::tools::javac::comp::Check$NestedCheckContext;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
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

void Attr$FunctionalReturnContext::init$($Attr* this$0, $Check$CheckContext* enclosingContext) {
	$set(this, this$0, this$0);
	$Check$NestedCheckContext::init$(enclosingContext);
}

bool Attr$FunctionalReturnContext::compatible($Type* found, $Type* req, $Warner* warn) {
	$useLocalObjectStack();
	$var($Type, var$0, $$nc(inferenceContext())->asUndetVar(found));
	return $nc($nc(this->this$0->chk)->basicHandler)->compatible(var$0, $($$nc(inferenceContext())->asUndetVar(req)), warn);
}

void Attr$FunctionalReturnContext::report($JCDiagnostic$DiagnosticPosition* pos, $JCDiagnostic* details) {
	$useLocalObjectStack();
	$nc(this->enclosingContext)->report(pos, $($nc(this->this$0->diags)->fragment($($CompilerProperties$Fragments::IncompatibleRetTypeInLambda(details)))));
}

Attr$FunctionalReturnContext::Attr$FunctionalReturnContext() {
}

$Class* Attr$FunctionalReturnContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Attr;", nullptr, $FINAL | $SYNTHETIC, $field(Attr$FunctionalReturnContext, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Attr;Lcom/sun/tools/javac/comp/Check$CheckContext;)V", nullptr, 0, $method(Attr$FunctionalReturnContext, init$, void, $Attr*, $Check$CheckContext*)},
		{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC, $virtualMethod(Attr$FunctionalReturnContext, compatible, bool, $Type*, $Type*, $Warner*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Attr$FunctionalReturnContext, report, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$FunctionalReturnContext", "com.sun.tools.javac.comp.Attr", "FunctionalReturnContext", 0},
		{"com.sun.tools.javac.comp.Check$NestedCheckContext", "com.sun.tools.javac.comp.Check", "NestedCheckContext", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$FunctionalReturnContext",
		"com.sun.tools.javac.comp.Check$NestedCheckContext",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$FunctionalReturnContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$FunctionalReturnContext);
	});
	return class$;
}

$Class* Attr$FunctionalReturnContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
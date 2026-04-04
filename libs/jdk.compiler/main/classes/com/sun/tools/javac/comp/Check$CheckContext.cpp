#include <com/sun/tools/javac/comp/Check$CheckContext.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Warner.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $DeferredAttr$DeferredAttrContext = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrContext;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $Warner = ::com::sun::tools::javac::util::Warner;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Check$CheckContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"checkWarner", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/Warner;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Check$CheckContext, checkWarner, $Warner*, $JCDiagnostic$DiagnosticPosition*, $Type*, $Type*)},
		{"compatible", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Warner;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Check$CheckContext, compatible, bool, $Type*, $Type*, $Warner*)},
		{"deferredAttrContext", "()Lcom/sun/tools/javac/comp/DeferredAttr$DeferredAttrContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Check$CheckContext, deferredAttrContext, $DeferredAttr$DeferredAttrContext*)},
		{"inferenceContext", "()Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Check$CheckContext, inferenceContext, $InferenceContext*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Check$CheckContext, report, void, $JCDiagnostic$DiagnosticPosition*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$CheckContext", "com.sun.tools.javac.comp.Check", "CheckContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Check$CheckContext",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Check"
	};
	$loadClass(Check$CheckContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$CheckContext);
	});
	return class$;
}

$Class* Check$CheckContext::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
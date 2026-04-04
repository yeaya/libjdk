#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$DiagnosticRewriter.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Resolve$MethodResolutionDiagHelper$DiagnosticRewriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"rewriteDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Resolve$MethodResolutionDiagHelper$DiagnosticRewriter, rewriteDiagnostic, $JCDiagnostic*, $JCDiagnostic$Factory*, $JCDiagnostic$DiagnosticPosition*, $DiagnosticSource*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "DiagnosticRewriter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter",
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
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$MethodResolutionDiagHelper$DiagnosticRewriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionDiagHelper$DiagnosticRewriter);
	});
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$DiagnosticRewriter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
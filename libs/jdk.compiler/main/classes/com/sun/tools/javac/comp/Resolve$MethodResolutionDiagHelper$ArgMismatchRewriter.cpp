#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::init$(int32_t causeIndex) {
	this->causeIndex = causeIndex;
}

$JCDiagnostic* Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::rewriteDiagnostic($JCDiagnostic$Factory* diags, $JCDiagnostic$DiagnosticPosition* preferredPos, $DiagnosticSource* preferredSource, $JCDiagnostic$DiagnosticType* preferredKind, $JCDiagnostic* d) {
	$useLocalObjectStack();
	$var($JCDiagnostic, cause, $cast($JCDiagnostic, $nc($($nc(d)->getArgs()))->get(this->causeIndex)));
	$var($JCDiagnostic$DiagnosticPosition, pos, d->getDiagnosticPosition());
	if (pos == nullptr) {
		$assign(pos, preferredPos);
	}
	return $nc(diags)->create(preferredKind, preferredSource, pos, "prob.found.req"_s, $$new($ObjectArray, {cause}));
}

Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter() {
}

$Class* Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"causeIndex", "I", nullptr, 0, $field(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, causeIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, init$, void, int32_t)},
		{"rewriteDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/DiagnosticSource;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC, $virtualMethod(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, rewriteDiagnostic, $JCDiagnostic*, $JCDiagnostic$Factory*, $JCDiagnostic$DiagnosticPosition*, $DiagnosticSource*, $JCDiagnostic$DiagnosticType*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "ArgMismatchRewriter", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "DiagnosticRewriter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$DiagnosticRewriter",
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
	$loadClass(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter);
	});
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$ArgMismatchRewriter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com
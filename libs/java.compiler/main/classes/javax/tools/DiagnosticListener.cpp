#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace javax {
	namespace tools {

$Class* DiagnosticListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+TS;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticListener, report, void, $Diagnostic*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.tools.DiagnosticListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(DiagnosticListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DiagnosticListener);
	});
	return class$;
}

$Class* DiagnosticListener::class$ = nullptr;

	} // tools
} // javax
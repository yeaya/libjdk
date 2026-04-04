#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <java/util/Locale.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Class* DiagnosticFormatter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"displaySource", "(Ljavax/tools/Diagnostic;)Z", "(TD;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, displaySource, bool, $Diagnostic*)},
		{"format", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, format, $String*, $Diagnostic*, $Locale*)},
		{"formatKind", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, formatKind, $String*, $Diagnostic*, $Locale*)},
		{"formatMessage", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, formatMessage, $String*, $Diagnostic*, $Locale*)},
		{"formatPosition", "(Ljavax/tools/Diagnostic;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", "(TD;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, formatPosition, $String*, $Diagnostic*, $DiagnosticFormatter$PositionKind*, $Locale*)},
		{"formatSource", "(Ljavax/tools/Diagnostic;ZLjava/util/Locale;)Ljava/lang/String;", "(TD;ZLjava/util/Locale;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, formatSource, $String*, $Diagnostic*, bool, $Locale*)},
		{"getConfiguration", "()Lcom/sun/tools/javac/api/DiagnosticFormatter$Configuration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DiagnosticFormatter, getConfiguration, $DiagnosticFormatter$Configuration*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.DiagnosticFormatter$Configuration", "com.sun.tools.javac.api.DiagnosticFormatter", "Configuration", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.api.DiagnosticFormatter$PositionKind", "com.sun.tools.javac.api.DiagnosticFormatter", "PositionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.api.DiagnosticFormatter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<D::Ljavax/tools/Diagnostic<*>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.DiagnosticFormatter$Configuration,com.sun.tools.javac.api.DiagnosticFormatter$Configuration$MultilineLimit,com.sun.tools.javac.api.DiagnosticFormatter$Configuration$DiagnosticPart,com.sun.tools.javac.api.DiagnosticFormatter$PositionKind"
	};
	$loadClass(DiagnosticFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DiagnosticFormatter);
	});
	return class$;
}

$Class* DiagnosticFormatter::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com
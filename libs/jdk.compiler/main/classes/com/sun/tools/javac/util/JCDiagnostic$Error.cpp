#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef ERROR

using $JCDiagnostic$DiagnosticInfo = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticInfo;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void JCDiagnostic$Error::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::ERROR, prefix, key, args);
}

JCDiagnostic$Error::JCDiagnostic$Error() {
}

$Class* JCDiagnostic$Error::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(JCDiagnostic$Error, init$, void, $String*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$Error", "com.sun.tools.javac.util.JCDiagnostic", "Error", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.util.JCDiagnostic$Error",
		"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.JCDiagnostic"
	};
	$loadClass(JCDiagnostic$Error, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$Error);
	});
	return class$;
}

$Class* JCDiagnostic$Error::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
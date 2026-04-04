#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef WARNING

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

void JCDiagnostic$Warning::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::WARNING, prefix, key, args);
}

JCDiagnostic$Warning::JCDiagnostic$Warning() {
}

$Class* JCDiagnostic$Warning::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(JCDiagnostic$Warning, init$, void, $String*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$Warning", "com.sun.tools.javac.util.JCDiagnostic", "Warning", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.util.JCDiagnostic$Warning",
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
	$loadClass(JCDiagnostic$Warning, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$Warning);
	});
	return class$;
}

$Class* JCDiagnostic$Warning::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
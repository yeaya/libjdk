#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

#undef NOTE

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

void JCDiagnostic$Note::init$($String* prefix, $String* key, $ObjectArray* args) {
	$init($JCDiagnostic$DiagnosticType);
	$JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType::NOTE, prefix, key, args);
}

JCDiagnostic$Note::JCDiagnostic$Note() {
}

$Class* JCDiagnostic$Note::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(JCDiagnostic$Note, init$, void, $String*, $String*, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$Note", "com.sun.tools.javac.util.JCDiagnostic", "Note", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.util.JCDiagnostic$Note",
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
	$loadClass(JCDiagnostic$Note, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JCDiagnostic$Note);
	});
	return class$;
}

$Class* JCDiagnostic$Note::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
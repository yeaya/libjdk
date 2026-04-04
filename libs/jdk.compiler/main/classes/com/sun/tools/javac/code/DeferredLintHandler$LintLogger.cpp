#include <com/sun/tools/javac/code/DeferredLintHandler$LintLogger.h>
#include <com/sun/tools/javac/code/DeferredLintHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Class* DeferredLintHandler$LintLogger::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"report", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredLintHandler$LintLogger, report, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredLintHandler$LintLogger", "com.sun.tools.javac.code.DeferredLintHandler", "LintLogger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.DeferredLintHandler$LintLogger",
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
		"com.sun.tools.javac.code.DeferredLintHandler"
	};
	$loadClass(DeferredLintHandler$LintLogger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredLintHandler$LintLogger);
	});
	return class$;
}

$Class* DeferredLintHandler$LintLogger::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com
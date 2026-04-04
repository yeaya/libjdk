#include <com/sun/tools/javac/main/Arguments$ErrorReporter.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

$Class* Arguments$ErrorReporter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"report", "(Lcom/sun/tools/javac/main/Option;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Arguments$ErrorReporter, report, void, $Option*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Arguments$ErrorReporter", "com.sun.tools.javac.main.Arguments", "ErrorReporter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.main.Arguments$ErrorReporter",
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
		"com.sun.tools.javac.main.Arguments"
	};
	$loadClass(Arguments$ErrorReporter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Arguments$ErrorReporter);
	});
	return class$;
}

$Class* Arguments$ErrorReporter::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com
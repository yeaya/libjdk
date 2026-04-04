#include <com/sun/tools/javac/util/Log$DiscardDiagnosticHandler.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DiagnosticHandler = ::com::sun::tools::javac::util::Log$DiagnosticHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Log$DiscardDiagnosticHandler::init$($Log* log) {
	$Log$DiagnosticHandler::init$();
	install(log);
}

void Log$DiscardDiagnosticHandler::report($JCDiagnostic* diag) {
}

Log$DiscardDiagnosticHandler::Log$DiscardDiagnosticHandler() {
}

$Class* Log$DiscardDiagnosticHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PUBLIC, $method(Log$DiscardDiagnosticHandler, init$, void, $Log*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC, $virtualMethod(Log$DiscardDiagnosticHandler, report, void, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Log$DiscardDiagnosticHandler", "com.sun.tools.javac.util.Log", "DiscardDiagnosticHandler", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.Log$DiscardDiagnosticHandler",
		"com.sun.tools.javac.util.Log$DiagnosticHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Log"
	};
	$loadClass(Log$DiscardDiagnosticHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$DiscardDiagnosticHandler);
	});
	return class$;
}

$Class* Log$DiscardDiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
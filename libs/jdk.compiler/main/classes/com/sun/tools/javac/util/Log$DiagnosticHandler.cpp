#include <com/sun/tools/javac/util/Log$DiagnosticHandler.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Log$DiagnosticHandler::init$() {
}

void Log$DiagnosticHandler::install($Log* log) {
	$set(this, prev, $nc(log)->diagnosticHandler);
	$set(log, diagnosticHandler, this);
}

Log$DiagnosticHandler::Log$DiagnosticHandler() {
}

$Class* Log$DiagnosticHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prev", "Lcom/sun/tools/javac/util/Log$DiagnosticHandler;", nullptr, $PROTECTED, $field(Log$DiagnosticHandler, prev)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Log$DiagnosticHandler, init$, void)},
		{"install", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PROTECTED, $virtualMethod(Log$DiagnosticHandler, install, void, $Log*)},
		{"report", "(Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log$DiagnosticHandler, report, void, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Log$DiagnosticHandler", "com.sun.tools.javac.util.Log", "DiagnosticHandler", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.util.Log$DiagnosticHandler",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Log"
	};
	$loadClass(Log$DiagnosticHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$DiagnosticHandler);
	});
	return class$;
}

$Class* Log$DiagnosticHandler::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
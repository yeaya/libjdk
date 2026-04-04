#include <com/sun/tools/javac/util/DiagnosticSource$1.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <jcpp.h>

using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void DiagnosticSource$1::init$() {
	$DiagnosticSource::init$();
}

bool DiagnosticSource$1::findLine(int32_t pos) {
	return false;
}

DiagnosticSource$1::DiagnosticSource$1() {
}

$Class* DiagnosticSource$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DiagnosticSource$1, init$, void)},
		{"findLine", "(I)Z", nullptr, $PROTECTED, $virtualMethod(DiagnosticSource$1, findLine, bool, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.DiagnosticSource",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.DiagnosticSource$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.DiagnosticSource$1",
		"com.sun.tools.javac.util.DiagnosticSource",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.DiagnosticSource"
	};
	$loadClass(DiagnosticSource$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DiagnosticSource$1);
	});
	return class$;
}

$Class* DiagnosticSource$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com
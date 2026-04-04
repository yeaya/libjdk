#include <com/sun/tools/sjavac/ProblemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

void ProblemException::init$($String* s) {
	$Exception::init$(s);
}

ProblemException::ProblemException() {
}

ProblemException::ProblemException(const ProblemException& e) : $Exception(e) {
}

void ProblemException::throw$() {
	throw *this;
}

$Class* ProblemException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ProblemException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProblemException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.ProblemException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProblemException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProblemException);
	});
	return class$;
}

$Class* ProblemException::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com
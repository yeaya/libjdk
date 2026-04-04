#include <jdk/security/jarsigner/JarSignerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace security {
		namespace jarsigner {

void JarSignerException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

JarSignerException::JarSignerException() {
}

JarSignerException::JarSignerException(const JarSignerException& e) : $RuntimeException(e) {
}

void JarSignerException::throw$() {
	throw *this;
}

$Class* JarSignerException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JarSignerException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(JarSignerException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.security.jarsigner.JarSignerException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JarSignerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarSignerException);
	});
	return class$;
}

$Class* JarSignerException::class$ = nullptr;

		} // jarsigner
	} // security
} // jdk
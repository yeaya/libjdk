#include <sun/tools/jar/Validator$InvalidJarException.h>
#include <sun/tools/jar/Validator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace tools {
		namespace jar {

void Validator$InvalidJarException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

Validator$InvalidJarException::Validator$InvalidJarException() {
}

Validator$InvalidJarException::Validator$InvalidJarException(const Validator$InvalidJarException& e) : $RuntimeException(e) {
}

void Validator$InvalidJarException::throw$() {
	throw *this;
}

$Class* Validator$InvalidJarException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Validator$InvalidJarException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Validator$InvalidJarException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Validator$InvalidJarException", "sun.tools.jar.Validator", "InvalidJarException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.Validator$InvalidJarException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.Validator"
	};
	$loadClass(Validator$InvalidJarException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Validator$InvalidJarException);
	});
	return class$;
}

$Class* Validator$InvalidJarException::class$ = nullptr;

		} // jar
	} // tools
} // sun
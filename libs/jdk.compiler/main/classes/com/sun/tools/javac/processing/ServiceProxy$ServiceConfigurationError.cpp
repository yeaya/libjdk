#include <com/sun/tools/javac/processing/ServiceProxy$ServiceConfigurationError.h>
#include <com/sun/tools/javac/processing/ServiceProxy.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void ServiceProxy$ServiceConfigurationError::init$($String* msg) {
	$Error::init$(msg);
}

ServiceProxy$ServiceConfigurationError::ServiceProxy$ServiceConfigurationError() {
}

ServiceProxy$ServiceConfigurationError::ServiceProxy$ServiceConfigurationError(const ServiceProxy$ServiceConfigurationError& e) : $Error(e) {
}

void ServiceProxy$ServiceConfigurationError::throw$() {
	throw *this;
}

$Class* ServiceProxy$ServiceConfigurationError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ServiceProxy$ServiceConfigurationError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(ServiceProxy$ServiceConfigurationError, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError", "com.sun.tools.javac.processing.ServiceProxy", "ServiceConfigurationError", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.ServiceProxy$ServiceConfigurationError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.ServiceProxy"
	};
	$loadClass(ServiceProxy$ServiceConfigurationError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceProxy$ServiceConfigurationError);
	});
	return class$;
}

$Class* ServiceProxy$ServiceConfigurationError::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com
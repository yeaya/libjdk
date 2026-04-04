#include <com/sun/org/apache/xerces/internal/utils/ConfigurationError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

void ConfigurationError::init$($String* msg, $Exception* x) {
	$Error::init$(msg);
	$set(this, exception, x);
}

$Exception* ConfigurationError::getException() {
	return this->exception;
}

ConfigurationError::ConfigurationError() {
}

ConfigurationError::ConfigurationError(const ConfigurationError& e) : $Error(e) {
}

void ConfigurationError::throw$() {
	throw *this;
}

$Class* ConfigurationError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConfigurationError, serialVersionUID)},
		{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(ConfigurationError, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, 0, $method(ConfigurationError, init$, void, $String*, $Exception*)},
		{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $method(ConfigurationError, getException, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.utils.ConfigurationError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConfigurationError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConfigurationError);
	});
	return class$;
}

$Class* ConfigurationError::class$ = nullptr;

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
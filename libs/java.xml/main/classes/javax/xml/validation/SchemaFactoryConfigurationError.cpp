#include <javax/xml/validation/SchemaFactoryConfigurationError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace validation {

void SchemaFactoryConfigurationError::init$() {
	$Error::init$();
}

void SchemaFactoryConfigurationError::init$($String* message) {
	$Error::init$(message);
}

void SchemaFactoryConfigurationError::init$($Throwable* cause) {
	$Error::init$(cause);
}

void SchemaFactoryConfigurationError::init$($String* message, $Throwable* cause) {
	$Error::init$(message, cause);
}

SchemaFactoryConfigurationError::SchemaFactoryConfigurationError() {
}

SchemaFactoryConfigurationError::SchemaFactoryConfigurationError(const SchemaFactoryConfigurationError& e) : $Error(e) {
}

void SchemaFactoryConfigurationError::throw$() {
	throw *this;
}

$Class* SchemaFactoryConfigurationError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SchemaFactoryConfigurationError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.validation.SchemaFactoryConfigurationError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SchemaFactoryConfigurationError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SchemaFactoryConfigurationError);
	});
	return class$;
}

$Class* SchemaFactoryConfigurationError::class$ = nullptr;

		} // validation
	} // xml
} // javax
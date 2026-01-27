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

$FieldInfo _SchemaFactoryConfigurationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SchemaFactoryConfigurationError, serialVersionUID)},
	{}
};

$MethodInfo _SchemaFactoryConfigurationError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SchemaFactoryConfigurationError, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _SchemaFactoryConfigurationError_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.validation.SchemaFactoryConfigurationError",
	"java.lang.Error",
	nullptr,
	_SchemaFactoryConfigurationError_FieldInfo_,
	_SchemaFactoryConfigurationError_MethodInfo_
};

$Object* allocate$SchemaFactoryConfigurationError($Class* clazz) {
	return $of($alloc(SchemaFactoryConfigurationError));
}

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
	$loadClass(SchemaFactoryConfigurationError, name, initialize, &_SchemaFactoryConfigurationError_ClassInfo_, allocate$SchemaFactoryConfigurationError);
	return class$;
}

$Class* SchemaFactoryConfigurationError::class$ = nullptr;

		} // validation
	} // xml
} // javax
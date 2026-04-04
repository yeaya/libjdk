#include <javax/management/RuntimeErrorException.h>
#include <java/lang/Error.h>
#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {

void RuntimeErrorException::init$($Error* e) {
	$JMRuntimeException::init$();
	$set(this, error, e);
}

void RuntimeErrorException::init$($Error* e, $String* message) {
	$JMRuntimeException::init$(message);
	$set(this, error, e);
}

$Error* RuntimeErrorException::getTargetError() {
	return this->error;
}

$Throwable* RuntimeErrorException::getCause() {
	return this->error;
}

RuntimeErrorException::RuntimeErrorException() {
}

RuntimeErrorException::RuntimeErrorException(const RuntimeErrorException& e) : $JMRuntimeException(e) {
}

void RuntimeErrorException::throw$() {
	throw *this;
}

$Class* RuntimeErrorException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimeErrorException, serialVersionUID)},
		{"error", "Ljava/lang/Error;", nullptr, $PRIVATE, $field(RuntimeErrorException, error)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Error;)V", nullptr, $PUBLIC, $method(RuntimeErrorException, init$, void, $Error*)},
		{"<init>", "(Ljava/lang/Error;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimeErrorException, init$, void, $Error*, $String*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(RuntimeErrorException, getCause, $Throwable*)},
		{"getTargetError", "()Ljava/lang/Error;", nullptr, $PUBLIC, $virtualMethod(RuntimeErrorException, getTargetError, $Error*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.RuntimeErrorException",
		"javax.management.JMRuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RuntimeErrorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeErrorException);
	});
	return class$;
}

$Class* RuntimeErrorException::class$ = nullptr;

	} // management
} // javax
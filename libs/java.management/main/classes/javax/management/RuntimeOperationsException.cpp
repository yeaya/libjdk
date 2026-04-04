#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {

void RuntimeOperationsException::init$($RuntimeException* e) {
	$JMRuntimeException::init$();
	$set(this, runtimeException, e);
}

void RuntimeOperationsException::init$($RuntimeException* e, $String* message) {
	$JMRuntimeException::init$(message);
	$set(this, runtimeException, e);
}

$RuntimeException* RuntimeOperationsException::getTargetException() {
	return this->runtimeException;
}

$Throwable* RuntimeOperationsException::getCause() {
	return this->runtimeException;
}

RuntimeOperationsException::RuntimeOperationsException() {
}

RuntimeOperationsException::RuntimeOperationsException(const RuntimeOperationsException& e) : $JMRuntimeException(e) {
}

void RuntimeOperationsException::throw$() {
	throw *this;
}

$Class* RuntimeOperationsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimeOperationsException, serialVersionUID)},
		{"runtimeException", "Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $field(RuntimeOperationsException, runtimeException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/RuntimeException;)V", nullptr, $PUBLIC, $method(RuntimeOperationsException, init$, void, $RuntimeException*)},
		{"<init>", "(Ljava/lang/RuntimeException;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimeOperationsException, init$, void, $RuntimeException*, $String*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(RuntimeOperationsException, getCause, $Throwable*)},
		{"getTargetException", "()Ljava/lang/RuntimeException;", nullptr, $PUBLIC, $virtualMethod(RuntimeOperationsException, getTargetException, $RuntimeException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.RuntimeOperationsException",
		"javax.management.JMRuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RuntimeOperationsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeOperationsException);
	});
	return class$;
}

$Class* RuntimeOperationsException::class$ = nullptr;

	} // management
} // javax
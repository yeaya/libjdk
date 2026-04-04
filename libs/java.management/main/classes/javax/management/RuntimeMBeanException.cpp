#include <javax/management/RuntimeMBeanException.h>
#include <javax/management/JMRuntimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;

namespace javax {
	namespace management {

void RuntimeMBeanException::init$($RuntimeException* e) {
	$JMRuntimeException::init$();
	$set(this, runtimeException, e);
}

void RuntimeMBeanException::init$($RuntimeException* e, $String* message) {
	$JMRuntimeException::init$(message);
	$set(this, runtimeException, e);
}

$RuntimeException* RuntimeMBeanException::getTargetException() {
	return this->runtimeException;
}

$Throwable* RuntimeMBeanException::getCause() {
	return this->runtimeException;
}

RuntimeMBeanException::RuntimeMBeanException() {
}

RuntimeMBeanException::RuntimeMBeanException(const RuntimeMBeanException& e) : $JMRuntimeException(e) {
}

void RuntimeMBeanException::throw$() {
	throw *this;
}

$Class* RuntimeMBeanException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RuntimeMBeanException, serialVersionUID)},
		{"runtimeException", "Ljava/lang/RuntimeException;", nullptr, $PRIVATE, $field(RuntimeMBeanException, runtimeException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/RuntimeException;)V", nullptr, $PUBLIC, $method(RuntimeMBeanException, init$, void, $RuntimeException*)},
		{"<init>", "(Ljava/lang/RuntimeException;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RuntimeMBeanException, init$, void, $RuntimeException*, $String*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(RuntimeMBeanException, getCause, $Throwable*)},
		{"getTargetException", "()Ljava/lang/RuntimeException;", nullptr, $PUBLIC, $virtualMethod(RuntimeMBeanException, getTargetException, $RuntimeException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.RuntimeMBeanException",
		"javax.management.JMRuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RuntimeMBeanException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeMBeanException);
	});
	return class$;
}

$Class* RuntimeMBeanException::class$ = nullptr;

	} // management
} // javax
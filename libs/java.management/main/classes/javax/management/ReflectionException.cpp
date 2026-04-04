#include <javax/management/ReflectionException.h>
#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {

void ReflectionException::init$($Exception* e) {
	$JMException::init$();
	$set(this, exception, e);
}

void ReflectionException::init$($Exception* e, $String* message) {
	$JMException::init$(message);
	$set(this, exception, e);
}

$Exception* ReflectionException::getTargetException() {
	return this->exception;
}

$Throwable* ReflectionException::getCause() {
	return this->exception;
}

ReflectionException::ReflectionException() {
}

ReflectionException::ReflectionException(const ReflectionException& e) : $JMException(e) {
}

void ReflectionException::throw$() {
	throw *this;
}

$Class* ReflectionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReflectionException, serialVersionUID)},
		{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(ReflectionException, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ReflectionException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReflectionException, init$, void, $Exception*, $String*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(ReflectionException, getCause, $Throwable*)},
		{"getTargetException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(ReflectionException, getTargetException, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.ReflectionException",
		"javax.management.JMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReflectionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReflectionException);
	});
	return class$;
}

$Class* ReflectionException::class$ = nullptr;

	} // management
} // javax
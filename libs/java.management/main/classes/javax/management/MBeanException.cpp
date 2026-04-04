#include <javax/management/MBeanException.h>
#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {

void MBeanException::init$($Exception* e) {
	$JMException::init$();
	$set(this, exception, e);
}

void MBeanException::init$($Exception* e, $String* message) {
	$JMException::init$(message);
	$set(this, exception, e);
}

$Exception* MBeanException::getTargetException() {
	return this->exception;
}

$Throwable* MBeanException::getCause() {
	return this->exception;
}

MBeanException::MBeanException() {
}

MBeanException::MBeanException(const MBeanException& e) : $JMException(e) {
}

void MBeanException::throw$() {
	throw *this;
}

$Class* MBeanException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanException, serialVersionUID)},
		{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(MBeanException, exception)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(MBeanException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MBeanException, init$, void, $Exception*, $String*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(MBeanException, getCause, $Throwable*)},
		{"getTargetException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(MBeanException, getTargetException, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanException",
		"javax.management.JMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanException);
	});
	return class$;
}

$Class* MBeanException::class$ = nullptr;

	} // management
} // javax
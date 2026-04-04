#include <javax/management/OperationsException.h>
#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {

void OperationsException::init$() {
	$JMException::init$();
}

void OperationsException::init$($String* message) {
	$JMException::init$(message);
}

OperationsException::OperationsException() {
}

OperationsException::OperationsException(const OperationsException& e) : $JMException(e) {
}

void OperationsException::throw$() {
	throw *this;
}

$Class* OperationsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OperationsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OperationsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OperationsException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.OperationsException",
		"javax.management.JMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OperationsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OperationsException);
	});
	return class$;
}

$Class* OperationsException::class$ = nullptr;

	} // management
} // javax
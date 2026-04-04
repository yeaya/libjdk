#include <javax/management/ServiceNotFoundException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void ServiceNotFoundException::init$() {
	$OperationsException::init$();
}

void ServiceNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

ServiceNotFoundException::ServiceNotFoundException() {
}

ServiceNotFoundException::ServiceNotFoundException(const ServiceNotFoundException& e) : $OperationsException(e) {
}

void ServiceNotFoundException::throw$() {
	throw *this;
}

$Class* ServiceNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServiceNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ServiceNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServiceNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.ServiceNotFoundException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceNotFoundException);
	});
	return class$;
}

$Class* ServiceNotFoundException::class$ = nullptr;

	} // management
} // javax
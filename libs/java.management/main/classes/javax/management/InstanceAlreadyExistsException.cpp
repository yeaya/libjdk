#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void InstanceAlreadyExistsException::init$() {
	$OperationsException::init$();
}

void InstanceAlreadyExistsException::init$($String* message) {
	$OperationsException::init$(message);
}

InstanceAlreadyExistsException::InstanceAlreadyExistsException() {
}

InstanceAlreadyExistsException::InstanceAlreadyExistsException(const InstanceAlreadyExistsException& e) : $OperationsException(e) {
}

void InstanceAlreadyExistsException::throw$() {
	throw *this;
}

$Class* InstanceAlreadyExistsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstanceAlreadyExistsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InstanceAlreadyExistsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InstanceAlreadyExistsException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.InstanceAlreadyExistsException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InstanceAlreadyExistsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstanceAlreadyExistsException);
	});
	return class$;
}

$Class* InstanceAlreadyExistsException::class$ = nullptr;

	} // management
} // javax
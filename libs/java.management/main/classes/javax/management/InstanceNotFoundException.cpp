#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void InstanceNotFoundException::init$() {
	$OperationsException::init$();
}

void InstanceNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

InstanceNotFoundException::InstanceNotFoundException() {
}

InstanceNotFoundException::InstanceNotFoundException(const InstanceNotFoundException& e) : $OperationsException(e) {
}

void InstanceNotFoundException::throw$() {
	throw *this;
}

$Class* InstanceNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstanceNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InstanceNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InstanceNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.InstanceNotFoundException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InstanceNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstanceNotFoundException);
	});
	return class$;
}

$Class* InstanceNotFoundException::class$ = nullptr;

	} // management
} // javax
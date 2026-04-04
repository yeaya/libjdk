#include <javax/management/InvalidAttributeValueException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void InvalidAttributeValueException::init$() {
	$OperationsException::init$();
}

void InvalidAttributeValueException::init$($String* message) {
	$OperationsException::init$(message);
}

InvalidAttributeValueException::InvalidAttributeValueException() {
}

InvalidAttributeValueException::InvalidAttributeValueException(const InvalidAttributeValueException& e) : $OperationsException(e) {
}

void InvalidAttributeValueException::throw$() {
	throw *this;
}

$Class* InvalidAttributeValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributeValueException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidAttributeValueException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidAttributeValueException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.InvalidAttributeValueException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidAttributeValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidAttributeValueException);
	});
	return class$;
}

$Class* InvalidAttributeValueException::class$ = nullptr;

	} // management
} // javax
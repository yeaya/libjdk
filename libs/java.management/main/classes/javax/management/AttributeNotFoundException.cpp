#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void AttributeNotFoundException::init$() {
	$OperationsException::init$();
}

void AttributeNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

AttributeNotFoundException::AttributeNotFoundException() {
}

AttributeNotFoundException::AttributeNotFoundException(const AttributeNotFoundException& e) : $OperationsException(e) {
}

void AttributeNotFoundException::throw$() {
	throw *this;
}

$Class* AttributeNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AttributeNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.AttributeNotFoundException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AttributeNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeNotFoundException);
	});
	return class$;
}

$Class* AttributeNotFoundException::class$ = nullptr;

	} // management
} // javax
#include <javax/management/IntrospectionException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void IntrospectionException::init$() {
	$OperationsException::init$();
}

void IntrospectionException::init$($String* message) {
	$OperationsException::init$(message);
}

IntrospectionException::IntrospectionException() {
}

IntrospectionException::IntrospectionException(const IntrospectionException& e) : $OperationsException(e) {
}

void IntrospectionException::throw$() {
	throw *this;
}

$Class* IntrospectionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntrospectionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntrospectionException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IntrospectionException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.IntrospectionException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntrospectionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntrospectionException);
	});
	return class$;
}

$Class* IntrospectionException::class$ = nullptr;

	} // management
} // javax
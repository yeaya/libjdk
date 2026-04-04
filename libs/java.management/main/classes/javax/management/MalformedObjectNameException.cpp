#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void MalformedObjectNameException::init$() {
	$OperationsException::init$();
}

void MalformedObjectNameException::init$($String* message) {
	$OperationsException::init$(message);
}

MalformedObjectNameException::MalformedObjectNameException() {
}

MalformedObjectNameException::MalformedObjectNameException(const MalformedObjectNameException& e) : $OperationsException(e) {
}

void MalformedObjectNameException::throw$() {
	throw *this;
}

$Class* MalformedObjectNameException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedObjectNameException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MalformedObjectNameException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedObjectNameException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MalformedObjectNameException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedObjectNameException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedObjectNameException);
	});
	return class$;
}

$Class* MalformedObjectNameException::class$ = nullptr;

	} // management
} // javax
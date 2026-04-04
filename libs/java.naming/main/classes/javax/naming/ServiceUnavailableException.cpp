#include <javax/naming/ServiceUnavailableException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void ServiceUnavailableException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ServiceUnavailableException::init$() {
	$NamingException::init$();
}

ServiceUnavailableException::ServiceUnavailableException() {
}

ServiceUnavailableException::ServiceUnavailableException(const ServiceUnavailableException& e) : $NamingException(e) {
}

void ServiceUnavailableException::throw$() {
	throw *this;
}

$Class* ServiceUnavailableException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServiceUnavailableException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ServiceUnavailableException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ServiceUnavailableException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.ServiceUnavailableException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceUnavailableException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceUnavailableException);
	});
	return class$;
}

$Class* ServiceUnavailableException::class$ = nullptr;

	} // naming
} // javax
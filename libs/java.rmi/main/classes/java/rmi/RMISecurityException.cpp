#include <java/rmi/RMISecurityException.h>
#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;

namespace java {
	namespace rmi {

void RMISecurityException::init$($String* name) {
	$SecurityException::init$(name);
}

void RMISecurityException::init$($String* name, $String* arg) {
	RMISecurityException::init$(name);
}

RMISecurityException::RMISecurityException() {
}

RMISecurityException::RMISecurityException(const RMISecurityException& e) : $SecurityException(e) {
}

void RMISecurityException::throw$() {
	throw *this;
}

$Class* RMISecurityException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RMISecurityException, serialVersionUID)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(RMISecurityException, init$, void, $String*), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(RMISecurityException, init$, void, $String*, $String*), nullptr, nullptr, init$methodAnnotations$$$1},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.RMISecurityException",
		"java.lang.SecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(RMISecurityException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMISecurityException);
	});
	return class$;
}

$Class* RMISecurityException::class$ = nullptr;

	} // rmi
} // java
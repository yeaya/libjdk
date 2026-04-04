#include <javax/naming/InsufficientResourcesException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void InsufficientResourcesException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InsufficientResourcesException::init$() {
	$NamingException::init$();
}

InsufficientResourcesException::InsufficientResourcesException() {
}

InsufficientResourcesException::InsufficientResourcesException(const InsufficientResourcesException& e) : $NamingException(e) {
}

void InsufficientResourcesException::throw$() {
	throw *this;
}

$Class* InsufficientResourcesException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InsufficientResourcesException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InsufficientResourcesException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InsufficientResourcesException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.InsufficientResourcesException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InsufficientResourcesException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InsufficientResourcesException);
	});
	return class$;
}

$Class* InsufficientResourcesException::class$ = nullptr;

	} // naming
} // javax
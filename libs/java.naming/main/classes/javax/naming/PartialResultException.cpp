#include <javax/naming/PartialResultException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void PartialResultException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void PartialResultException::init$() {
	$NamingException::init$();
}

PartialResultException::PartialResultException() {
}

PartialResultException::PartialResultException(const PartialResultException& e) : $NamingException(e) {
}

void PartialResultException::throw$() {
	throw *this;
}

$Class* PartialResultException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PartialResultException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PartialResultException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(PartialResultException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.PartialResultException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PartialResultException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PartialResultException);
	});
	return class$;
}

$Class* PartialResultException::class$ = nullptr;

	} // naming
} // javax
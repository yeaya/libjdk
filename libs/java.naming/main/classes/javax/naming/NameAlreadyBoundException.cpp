#include <javax/naming/NameAlreadyBoundException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void NameAlreadyBoundException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NameAlreadyBoundException::init$() {
	$NamingException::init$();
}

NameAlreadyBoundException::NameAlreadyBoundException() {
}

NameAlreadyBoundException::NameAlreadyBoundException(const NameAlreadyBoundException& e) : $NamingException(e) {
}

void NameAlreadyBoundException::throw$() {
	throw *this;
}

$Class* NameAlreadyBoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameAlreadyBoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NameAlreadyBoundException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NameAlreadyBoundException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.NameAlreadyBoundException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NameAlreadyBoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NameAlreadyBoundException);
	});
	return class$;
}

$Class* NameAlreadyBoundException::class$ = nullptr;

	} // naming
} // javax
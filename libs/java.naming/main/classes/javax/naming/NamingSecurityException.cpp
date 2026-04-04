#include <javax/naming/NamingSecurityException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void NamingSecurityException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NamingSecurityException::init$() {
	$NamingException::init$();
}

NamingSecurityException::NamingSecurityException() {
}

NamingSecurityException::NamingSecurityException(const NamingSecurityException& e) : $NamingException(e) {
}

void NamingSecurityException::throw$() {
	throw *this;
}

$Class* NamingSecurityException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingSecurityException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NamingSecurityException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NamingSecurityException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.naming.NamingSecurityException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NamingSecurityException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamingSecurityException);
	});
	return class$;
}

$Class* NamingSecurityException::class$ = nullptr;

	} // naming
} // javax
#include <javax/naming/NoPermissionException.h>
#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

void NoPermissionException::init$($String* explanation) {
	$NamingSecurityException::init$(explanation);
}

void NoPermissionException::init$() {
	$NamingSecurityException::init$();
}

NoPermissionException::NoPermissionException() {
}

NoPermissionException::NoPermissionException(const NoPermissionException& e) : $NamingSecurityException(e) {
}

void NoPermissionException::throw$() {
	throw *this;
}

$Class* NoPermissionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoPermissionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoPermissionException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoPermissionException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.NoPermissionException",
		"javax.naming.NamingSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoPermissionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoPermissionException);
	});
	return class$;
}

$Class* NoPermissionException::class$ = nullptr;

	} // naming
} // javax
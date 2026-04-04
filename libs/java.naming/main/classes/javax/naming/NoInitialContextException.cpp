#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void NoInitialContextException::init$() {
	$NamingException::init$();
}

void NoInitialContextException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

NoInitialContextException::NoInitialContextException() {
}

NoInitialContextException::NoInitialContextException(const NoInitialContextException& e) : $NamingException(e) {
}

void NoInitialContextException::throw$() {
	throw *this;
}

$Class* NoInitialContextException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoInitialContextException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoInitialContextException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoInitialContextException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.NoInitialContextException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoInitialContextException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoInitialContextException);
	});
	return class$;
}

$Class* NoInitialContextException::class$ = nullptr;

	} // naming
} // javax
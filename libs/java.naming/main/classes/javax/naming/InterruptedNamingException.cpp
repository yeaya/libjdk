#include <javax/naming/InterruptedNamingException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void InterruptedNamingException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InterruptedNamingException::init$() {
	$NamingException::init$();
}

InterruptedNamingException::InterruptedNamingException() {
}

InterruptedNamingException::InterruptedNamingException(const InterruptedNamingException& e) : $NamingException(e) {
}

void InterruptedNamingException::throw$() {
	throw *this;
}

$Class* InterruptedNamingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedNamingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InterruptedNamingException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InterruptedNamingException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.InterruptedNamingException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InterruptedNamingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptedNamingException);
	});
	return class$;
}

$Class* InterruptedNamingException::class$ = nullptr;

	} // naming
} // javax
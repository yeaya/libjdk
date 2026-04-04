#include <javax/naming/InvalidNameException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void InvalidNameException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidNameException::init$() {
	$NamingException::init$();
}

InvalidNameException::InvalidNameException() {
}

InvalidNameException::InvalidNameException(const InvalidNameException& e) : $NamingException(e) {
}

void InvalidNameException::throw$() {
	throw *this;
}

$Class* InvalidNameException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidNameException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidNameException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidNameException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.InvalidNameException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidNameException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidNameException);
	});
	return class$;
}

$Class* InvalidNameException::class$ = nullptr;

	} // naming
} // javax
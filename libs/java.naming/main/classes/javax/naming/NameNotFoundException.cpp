#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void NameNotFoundException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NameNotFoundException::init$() {
	$NamingException::init$();
}

NameNotFoundException::NameNotFoundException() {
}

NameNotFoundException::NameNotFoundException(const NameNotFoundException& e) : $NamingException(e) {
}

void NameNotFoundException::throw$() {
	throw *this;
}

$Class* NameNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NameNotFoundException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NameNotFoundException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.NameNotFoundException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NameNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NameNotFoundException);
	});
	return class$;
}

$Class* NameNotFoundException::class$ = nullptr;

	} // naming
} // javax
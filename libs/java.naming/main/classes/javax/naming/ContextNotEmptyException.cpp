#include <javax/naming/ContextNotEmptyException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void ContextNotEmptyException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ContextNotEmptyException::init$() {
	$NamingException::init$();
}

ContextNotEmptyException::ContextNotEmptyException() {
}

ContextNotEmptyException::ContextNotEmptyException(const ContextNotEmptyException& e) : $NamingException(e) {
}

void ContextNotEmptyException::throw$() {
	throw *this;
}

$Class* ContextNotEmptyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContextNotEmptyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ContextNotEmptyException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(ContextNotEmptyException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.ContextNotEmptyException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ContextNotEmptyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContextNotEmptyException);
	});
	return class$;
}

$Class* ContextNotEmptyException::class$ = nullptr;

	} // naming
} // javax
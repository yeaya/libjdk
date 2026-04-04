#include <javax/naming/NotContextException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void NotContextException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NotContextException::init$() {
	$NamingException::init$();
}

NotContextException::NotContextException() {
}

NotContextException::NotContextException(const NotContextException& e) : $NamingException(e) {
}

void NotContextException::throw$() {
	throw *this;
}

$Class* NotContextException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotContextException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotContextException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotContextException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.NotContextException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotContextException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotContextException);
	});
	return class$;
}

$Class* NotContextException::class$ = nullptr;

	} // naming
} // javax
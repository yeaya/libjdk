#include <javax/naming/directory/InvalidAttributesException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void InvalidAttributesException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidAttributesException::init$() {
	$NamingException::init$();
}

InvalidAttributesException::InvalidAttributesException() {
}

InvalidAttributesException::InvalidAttributesException(const InvalidAttributesException& e) : $NamingException(e) {
}

void InvalidAttributesException::throw$() {
	throw *this;
}

$Class* InvalidAttributesException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributesException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidAttributesException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidAttributesException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.InvalidAttributesException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidAttributesException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidAttributesException);
	});
	return class$;
}

$Class* InvalidAttributesException::class$ = nullptr;

		} // directory
	} // naming
} // javax
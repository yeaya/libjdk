#include <javax/naming/directory/InvalidAttributeIdentifierException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void InvalidAttributeIdentifierException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidAttributeIdentifierException::init$() {
	$NamingException::init$();
}

InvalidAttributeIdentifierException::InvalidAttributeIdentifierException() {
}

InvalidAttributeIdentifierException::InvalidAttributeIdentifierException(const InvalidAttributeIdentifierException& e) : $NamingException(e) {
}

void InvalidAttributeIdentifierException::throw$() {
	throw *this;
}

$Class* InvalidAttributeIdentifierException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributeIdentifierException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidAttributeIdentifierException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidAttributeIdentifierException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.InvalidAttributeIdentifierException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidAttributeIdentifierException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidAttributeIdentifierException);
	});
	return class$;
}

$Class* InvalidAttributeIdentifierException::class$ = nullptr;

		} // directory
	} // naming
} // javax
#include <javax/naming/directory/InvalidAttributeValueException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void InvalidAttributeValueException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidAttributeValueException::init$() {
	$NamingException::init$();
}

InvalidAttributeValueException::InvalidAttributeValueException() {
}

InvalidAttributeValueException::InvalidAttributeValueException(const InvalidAttributeValueException& e) : $NamingException(e) {
}

void InvalidAttributeValueException::throw$() {
	throw *this;
}

$Class* InvalidAttributeValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributeValueException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidAttributeValueException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidAttributeValueException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.InvalidAttributeValueException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidAttributeValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidAttributeValueException);
	});
	return class$;
}

$Class* InvalidAttributeValueException::class$ = nullptr;

		} // directory
	} // naming
} // javax
#include <javax/naming/directory/AttributeInUseException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void AttributeInUseException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void AttributeInUseException::init$() {
	$NamingException::init$();
}

AttributeInUseException::AttributeInUseException() {
}

AttributeInUseException::AttributeInUseException(const AttributeInUseException& e) : $NamingException(e) {
}

void AttributeInUseException::throw$() {
	throw *this;
}

$Class* AttributeInUseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeInUseException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AttributeInUseException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(AttributeInUseException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.AttributeInUseException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AttributeInUseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeInUseException);
	});
	return class$;
}

$Class* AttributeInUseException::class$ = nullptr;

		} // directory
	} // naming
} // javax
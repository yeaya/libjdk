#include <javax/naming/directory/InvalidSearchControlsException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void InvalidSearchControlsException::init$() {
	$NamingException::init$();
}

void InvalidSearchControlsException::init$($String* msg) {
	$NamingException::init$(msg);
}

InvalidSearchControlsException::InvalidSearchControlsException() {
}

InvalidSearchControlsException::InvalidSearchControlsException(const InvalidSearchControlsException& e) : $NamingException(e) {
}

void InvalidSearchControlsException::throw$() {
	throw *this;
}

$Class* InvalidSearchControlsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidSearchControlsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidSearchControlsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidSearchControlsException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.InvalidSearchControlsException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidSearchControlsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidSearchControlsException);
	});
	return class$;
}

$Class* InvalidSearchControlsException::class$ = nullptr;

		} // directory
	} // naming
} // javax
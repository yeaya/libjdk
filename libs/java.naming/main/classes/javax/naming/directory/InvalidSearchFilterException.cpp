#include <javax/naming/directory/InvalidSearchFilterException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void InvalidSearchFilterException::init$() {
	$NamingException::init$();
}

void InvalidSearchFilterException::init$($String* msg) {
	$NamingException::init$(msg);
}

InvalidSearchFilterException::InvalidSearchFilterException() {
}

InvalidSearchFilterException::InvalidSearchFilterException(const InvalidSearchFilterException& e) : $NamingException(e) {
}

void InvalidSearchFilterException::throw$() {
	throw *this;
}

$Class* InvalidSearchFilterException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidSearchFilterException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidSearchFilterException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidSearchFilterException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.InvalidSearchFilterException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidSearchFilterException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidSearchFilterException);
	});
	return class$;
}

$Class* InvalidSearchFilterException::class$ = nullptr;

		} // directory
	} // naming
} // javax
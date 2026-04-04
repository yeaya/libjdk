#include <javax/naming/directory/NoSuchAttributeException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

void NoSuchAttributeException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NoSuchAttributeException::init$() {
	$NamingException::init$();
}

NoSuchAttributeException::NoSuchAttributeException() {
}

NoSuchAttributeException::NoSuchAttributeException(const NoSuchAttributeException& e) : $NamingException(e) {
}

void NoSuchAttributeException::throw$() {
	throw *this;
}

$Class* NoSuchAttributeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchAttributeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchAttributeException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchAttributeException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.NoSuchAttributeException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchAttributeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchAttributeException);
	});
	return class$;
}

$Class* NoSuchAttributeException::class$ = nullptr;

		} // directory
	} // naming
} // javax
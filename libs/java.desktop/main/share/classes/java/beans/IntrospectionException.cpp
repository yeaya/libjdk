#include <java/beans/IntrospectionException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void IntrospectionException::init$($String* mess) {
	$Exception::init$(mess);
}

IntrospectionException::IntrospectionException() {
}

IntrospectionException::IntrospectionException(const IntrospectionException& e) : $Exception(e) {
}

void IntrospectionException::throw$() {
	throw *this;
}

$Class* IntrospectionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntrospectionException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IntrospectionException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.IntrospectionException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IntrospectionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntrospectionException);
	});
	return class$;
}

$Class* IntrospectionException::class$ = nullptr;

	} // beans
} // java
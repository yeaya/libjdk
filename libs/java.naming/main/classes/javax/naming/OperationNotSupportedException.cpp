#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void OperationNotSupportedException::init$() {
	$NamingException::init$();
}

void OperationNotSupportedException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

OperationNotSupportedException::OperationNotSupportedException() {
}

OperationNotSupportedException::OperationNotSupportedException(const OperationNotSupportedException& e) : $NamingException(e) {
}

void OperationNotSupportedException::throw$() {
	throw *this;
}

$Class* OperationNotSupportedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OperationNotSupportedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OperationNotSupportedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OperationNotSupportedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.OperationNotSupportedException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OperationNotSupportedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OperationNotSupportedException);
	});
	return class$;
}

$Class* OperationNotSupportedException::class$ = nullptr;

	} // naming
} // javax
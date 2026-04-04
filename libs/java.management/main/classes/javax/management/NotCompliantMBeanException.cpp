#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

void NotCompliantMBeanException::init$() {
	$OperationsException::init$();
}

void NotCompliantMBeanException::init$($String* message) {
	$OperationsException::init$(message);
}

NotCompliantMBeanException::NotCompliantMBeanException() {
}

NotCompliantMBeanException::NotCompliantMBeanException(const NotCompliantMBeanException& e) : $OperationsException(e) {
}

void NotCompliantMBeanException::throw$() {
	throw *this;
}

$Class* NotCompliantMBeanException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotCompliantMBeanException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotCompliantMBeanException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotCompliantMBeanException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.NotCompliantMBeanException",
		"javax.management.OperationsException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotCompliantMBeanException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotCompliantMBeanException);
	});
	return class$;
}

$Class* NotCompliantMBeanException::class$ = nullptr;

	} // management
} // javax
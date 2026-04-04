#include <javax/management/MBeanRegistrationException.h>
#include <javax/management/MBeanException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanException = ::javax::management::MBeanException;

namespace javax {
	namespace management {

void MBeanRegistrationException::init$($Exception* e) {
	$MBeanException::init$(e);
}

void MBeanRegistrationException::init$($Exception* e, $String* message) {
	$MBeanException::init$(e, message);
}

MBeanRegistrationException::MBeanRegistrationException() {
}

MBeanRegistrationException::MBeanRegistrationException(const MBeanRegistrationException& e) : $MBeanException(e) {
}

void MBeanRegistrationException::throw$() {
	throw *this;
}

$Class* MBeanRegistrationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanRegistrationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(MBeanRegistrationException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MBeanRegistrationException, init$, void, $Exception*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.MBeanRegistrationException",
		"javax.management.MBeanException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MBeanRegistrationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanRegistrationException);
	});
	return class$;
}

$Class* MBeanRegistrationException::class$ = nullptr;

	} // management
} // javax
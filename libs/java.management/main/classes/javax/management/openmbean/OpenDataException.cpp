#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMException = ::javax::management::JMException;

namespace javax {
	namespace management {
		namespace openmbean {

void OpenDataException::init$() {
	$JMException::init$();
}

void OpenDataException::init$($String* msg) {
	$JMException::init$(msg);
}

OpenDataException::OpenDataException() {
}

OpenDataException::OpenDataException(const OpenDataException& e) : $JMException(e) {
}

void OpenDataException::throw$() {
	throw *this;
}

$Class* OpenDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OpenDataException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OpenDataException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(OpenDataException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.OpenDataException",
		"javax.management.JMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OpenDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenDataException);
	});
	return class$;
}

$Class* OpenDataException::class$ = nullptr;

		} // openmbean
	} // management
} // javax
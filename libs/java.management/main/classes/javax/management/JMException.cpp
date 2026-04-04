#include <javax/management/JMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

void JMException::init$() {
	$Exception::init$();
}

void JMException::init$($String* msg) {
	$Exception::init$(msg);
}

JMException::JMException() {
}

JMException::JMException(const JMException& e) : $Exception(e) {
}

void JMException::throw$() {
	throw *this;
}

$Class* JMException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JMException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JMException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.JMException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JMException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMException);
	});
	return class$;
}

$Class* JMException::class$ = nullptr;

	} // management
} // javax
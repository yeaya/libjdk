#include <java/rmi/NotBoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {

void NotBoundException::init$() {
	$Exception::init$();
}

void NotBoundException::init$($String* s) {
	$Exception::init$(s);
}

NotBoundException::NotBoundException() {
}

NotBoundException::NotBoundException(const NotBoundException& e) : $Exception(e) {
}

void NotBoundException::throw$() {
	throw *this;
}

$Class* NotBoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotBoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotBoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotBoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.NotBoundException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotBoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotBoundException);
	});
	return class$;
}

$Class* NotBoundException::class$ = nullptr;

	} // rmi
} // java
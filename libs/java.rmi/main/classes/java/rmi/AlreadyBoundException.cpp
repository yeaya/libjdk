#include <java/rmi/AlreadyBoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {

void AlreadyBoundException::init$() {
	$Exception::init$();
}

void AlreadyBoundException::init$($String* s) {
	$Exception::init$(s);
}

AlreadyBoundException::AlreadyBoundException() {
}

AlreadyBoundException::AlreadyBoundException(const AlreadyBoundException& e) : $Exception(e) {
}

void AlreadyBoundException::throw$() {
	throw *this;
}

$Class* AlreadyBoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlreadyBoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AlreadyBoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AlreadyBoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.AlreadyBoundException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AlreadyBoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlreadyBoundException);
	});
	return class$;
}

$Class* AlreadyBoundException::class$ = nullptr;

	} // rmi
} // java
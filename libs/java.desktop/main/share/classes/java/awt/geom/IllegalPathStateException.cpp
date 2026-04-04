#include <java/awt/geom/IllegalPathStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace geom {

void IllegalPathStateException::init$() {
	$RuntimeException::init$();
}

void IllegalPathStateException::init$($String* s) {
	$RuntimeException::init$(s);
}

IllegalPathStateException::IllegalPathStateException() {
}

IllegalPathStateException::IllegalPathStateException(const IllegalPathStateException& e) : $RuntimeException(e) {
}

void IllegalPathStateException::throw$() {
	throw *this;
}

$Class* IllegalPathStateException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalPathStateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalPathStateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalPathStateException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.geom.IllegalPathStateException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalPathStateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalPathStateException);
	});
	return class$;
}

$Class* IllegalPathStateException::class$ = nullptr;

		} // geom
	} // awt
} // java
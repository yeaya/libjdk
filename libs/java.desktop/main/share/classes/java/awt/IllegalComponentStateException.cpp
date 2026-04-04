#include <java/awt/IllegalComponentStateException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void IllegalComponentStateException::init$() {
	$IllegalStateException::init$();
}

void IllegalComponentStateException::init$($String* s) {
	$IllegalStateException::init$(s);
}

IllegalComponentStateException::IllegalComponentStateException() {
}

IllegalComponentStateException::IllegalComponentStateException(const IllegalComponentStateException& e) : $IllegalStateException(e) {
}

void IllegalComponentStateException::throw$() {
	throw *this;
}

$Class* IllegalComponentStateException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalComponentStateException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalComponentStateException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalComponentStateException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.IllegalComponentStateException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalComponentStateException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalComponentStateException);
	});
	return class$;
}

$Class* IllegalComponentStateException::class$ = nullptr;

	} // awt
} // java
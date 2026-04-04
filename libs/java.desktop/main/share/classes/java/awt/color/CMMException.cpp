#include <java/awt/color/CMMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace awt {
		namespace color {

void CMMException::init$($String* s) {
	$RuntimeException::init$(s);
}

CMMException::CMMException() {
}

CMMException::CMMException(const CMMException& e) : $RuntimeException(e) {
}

void CMMException::throw$() {
	throw *this;
}

$Class* CMMException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CMMException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CMMException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.color.CMMException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CMMException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMMException);
	});
	return class$;
}

$Class* CMMException::class$ = nullptr;

		} // color
	} // awt
} // java
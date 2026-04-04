#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void ClassGenException::init$() {
	$RuntimeException::init$();
}

void ClassGenException::init$($String* s) {
	$RuntimeException::init$(s);
}

void ClassGenException::init$($String* s, $Throwable* initCause) {
	$RuntimeException::init$(s, initCause);
}

ClassGenException::ClassGenException() {
}

ClassGenException::ClassGenException(const ClassGenException& e) : $RuntimeException(e) {
}

void ClassGenException::throw$() {
	throw *this;
}

$Class* ClassGenException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassGenException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassGenException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassGenException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ClassGenException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.ClassGenException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassGenException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassGenException);
	});
	return class$;
}

$Class* ClassGenException::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com
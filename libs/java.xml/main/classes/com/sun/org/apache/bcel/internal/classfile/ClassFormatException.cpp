#include <com/sun/org/apache/bcel/internal/classfile/ClassFormatException.h>
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
						namespace classfile {

void ClassFormatException::init$() {
	$RuntimeException::init$();
}

void ClassFormatException::init$($String* s) {
	$RuntimeException::init$(s);
}

void ClassFormatException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

ClassFormatException::ClassFormatException() {
}

ClassFormatException::ClassFormatException(const ClassFormatException& e) : $RuntimeException(e) {
}

void ClassFormatException::throw$() {
	throw *this;
}

$Class* ClassFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassFormatException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ClassFormatException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.ClassFormatException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassFormatException);
	});
	return class$;
}

$Class* ClassFormatException::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com
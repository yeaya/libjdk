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

$FieldInfo _ClassFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClassFormatException, serialVersionUID)},
	{}
};

$MethodInfo _ClassFormatException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassFormatException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ClassFormatException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ClassFormatException, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _ClassFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ClassFormatException",
	"java.lang.RuntimeException",
	nullptr,
	_ClassFormatException_FieldInfo_,
	_ClassFormatException_MethodInfo_
};

$Object* allocate$ClassFormatException($Class* clazz) {
	return $of($alloc(ClassFormatException));
}

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
	$loadClass(ClassFormatException, name, initialize, &_ClassFormatException_ClassInfo_, allocate$ClassFormatException);
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
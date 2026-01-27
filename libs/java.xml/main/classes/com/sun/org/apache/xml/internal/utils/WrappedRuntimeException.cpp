#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _WrappedRuntimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrappedRuntimeException, serialVersionUID)},
	{"m_exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(WrappedRuntimeException, m_exception)},
	{}
};

$MethodInfo _WrappedRuntimeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(WrappedRuntimeException, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(WrappedRuntimeException, init$, void, $String*, $Exception*)},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(WrappedRuntimeException, getException, $Exception*)},
	{}
};

$ClassInfo _WrappedRuntimeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.WrappedRuntimeException",
	"java.lang.RuntimeException",
	nullptr,
	_WrappedRuntimeException_FieldInfo_,
	_WrappedRuntimeException_MethodInfo_
};

$Object* allocate$WrappedRuntimeException($Class* clazz) {
	return $of($alloc(WrappedRuntimeException));
}

void WrappedRuntimeException::init$($Exception* e) {
	$RuntimeException::init$($($nc(e)->getMessage()));
	$set(this, m_exception, e);
}

void WrappedRuntimeException::init$($String* msg, $Exception* e) {
	$RuntimeException::init$(msg);
	$set(this, m_exception, e);
}

$Exception* WrappedRuntimeException::getException() {
	return this->m_exception;
}

WrappedRuntimeException::WrappedRuntimeException() {
}

WrappedRuntimeException::WrappedRuntimeException(const WrappedRuntimeException& e) : $RuntimeException(e) {
}

void WrappedRuntimeException::throw$() {
	throw *this;
}

$Class* WrappedRuntimeException::load$($String* name, bool initialize) {
	$loadClass(WrappedRuntimeException, name, initialize, &_WrappedRuntimeException_ClassInfo_, allocate$WrappedRuntimeException);
	return class$;
}

$Class* WrappedRuntimeException::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xerces/internal/xs/XSException.h>

#include <jcpp.h>

#undef INDEX_SIZE_ERR
#undef NOT_SUPPORTED_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$FieldInfo _XSException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XSException, serialVersionUID)},
	{"code", "S", nullptr, $PUBLIC, $field(XSException, code)},
	{"NOT_SUPPORTED_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSException, NOT_SUPPORTED_ERR)},
	{"INDEX_SIZE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSException, INDEX_SIZE_ERR)},
	{}
};

$MethodInfo _XSException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(XSException, init$, void, int16_t, $String*)},
	{}
};

$ClassInfo _XSException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xs.XSException",
	"java.lang.RuntimeException",
	nullptr,
	_XSException_FieldInfo_,
	_XSException_MethodInfo_
};

$Object* allocate$XSException($Class* clazz) {
	return $of($alloc(XSException));
}

void XSException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

XSException::XSException() {
}

XSException::XSException(const XSException& e) : $RuntimeException(e) {
}

void XSException::throw$() {
	throw *this;
}

$Class* XSException::load$($String* name, bool initialize) {
	$loadClass(XSException, name, initialize, &_XSException_ClassInfo_, allocate$XSException);
	return class$;
}

$Class* XSException::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
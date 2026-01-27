#include <com/sun/org/apache/xerces/internal/jaxp/validation/WrappedSAXException.h>

#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _WrappedSAXException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WrappedSAXException, serialVersionUID)},
	{"exception", "Lorg/xml/sax/SAXException;", nullptr, $PUBLIC | $FINAL, $field(WrappedSAXException, exception)},
	{}
};

$MethodInfo _WrappedSAXException_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/SAXException;)V", nullptr, 0, $method(WrappedSAXException, init$, void, $SAXException*)},
	{}
};

$ClassInfo _WrappedSAXException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.WrappedSAXException",
	"java.lang.RuntimeException",
	nullptr,
	_WrappedSAXException_FieldInfo_,
	_WrappedSAXException_MethodInfo_
};

$Object* allocate$WrappedSAXException($Class* clazz) {
	return $of($alloc(WrappedSAXException));
}

void WrappedSAXException::init$($SAXException* e) {
	$RuntimeException::init$();
	$set(this, exception, e);
}

WrappedSAXException::WrappedSAXException() {
}

WrappedSAXException::WrappedSAXException(const WrappedSAXException& e) : $RuntimeException(e) {
}

void WrappedSAXException::throw$() {
	throw *this;
}

$Class* WrappedSAXException::load$($String* name, bool initialize) {
	$loadClass(WrappedSAXException, name, initialize, &_WrappedSAXException_ClassInfo_, allocate$WrappedSAXException);
	return class$;
}

$Class* WrappedSAXException::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
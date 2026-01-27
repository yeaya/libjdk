#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>

#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$FieldInfo _TransletException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TransletException, serialVersionUID)},
	{}
};

$MethodInfo _TransletException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransletException, init$, void)},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(TransletException, init$, void, $Exception*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransletException, init$, void, $String*)},
	{}
};

$ClassInfo _TransletException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.TransletException",
	"org.xml.sax.SAXException",
	nullptr,
	_TransletException_FieldInfo_,
	_TransletException_MethodInfo_
};

$Object* allocate$TransletException($Class* clazz) {
	return $of($alloc(TransletException));
}

void TransletException::init$() {
	$SAXException::init$("Translet error"_s);
}

void TransletException::init$($Exception* e) {
	$SAXException::init$($($nc(e)->toString()));
	initCause(e);
}

void TransletException::init$($String* message) {
	$SAXException::init$(message);
}

TransletException::TransletException() {
}

TransletException::TransletException(const TransletException& e) : $SAXException(e) {
}

void TransletException::throw$() {
	throw *this;
}

$Class* TransletException::load$($String* name, bool initialize) {
	$loadClass(TransletException, name, initialize, &_TransletException_ClassInfo_, allocate$TransletException);
	return class$;
}

$Class* TransletException::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
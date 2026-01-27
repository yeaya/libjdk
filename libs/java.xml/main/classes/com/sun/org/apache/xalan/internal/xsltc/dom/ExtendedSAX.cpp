#include <com/sun/org/apache/xalan/internal/xsltc/dom/ExtendedSAX.h>

#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$MethodInfo _ExtendedSAX_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _ExtendedSAX_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.ExtendedSAX",
	nullptr,
	"org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler,org.xml.sax.ext.DeclHandler",
	nullptr,
	_ExtendedSAX_MethodInfo_
};

$Object* allocate$ExtendedSAX($Class* clazz) {
	return $of($alloc(ExtendedSAX));
}

int32_t ExtendedSAX::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool ExtendedSAX::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* ExtendedSAX::clone() {
	 return this->$ContentHandler::clone();
}

$String* ExtendedSAX::toString() {
	 return this->$ContentHandler::toString();
}

void ExtendedSAX::finalize() {
	this->$ContentHandler::finalize();
}

$Class* ExtendedSAX::load$($String* name, bool initialize) {
	$loadClass(ExtendedSAX, name, initialize, &_ExtendedSAX_ClassInfo_, allocate$ExtendedSAX);
	return class$;
}

$Class* ExtendedSAX::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
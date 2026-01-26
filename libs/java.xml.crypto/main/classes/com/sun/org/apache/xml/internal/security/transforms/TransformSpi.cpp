#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <java/io/OutputStream.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {

$MethodInfo _TransformSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransformSpi, init$, void)},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(TransformSpi, engineGetURI, $String*)},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(TransformSpi, enginePerformTransform, $XMLSignatureInput*, $XMLSignatureInput*, $OutputStream*, $Element*, $String*, bool), "java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException,com.sun.org.apache.xml.internal.security.transforms.TransformationException,javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXException"},
	{}
};

$ClassInfo _TransformSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TransformSpi_MethodInfo_
};

$Object* allocate$TransformSpi($Class* clazz) {
	return $of($alloc(TransformSpi));
}

void TransformSpi::init$() {
}

TransformSpi::TransformSpi() {
}

$Class* TransformSpi::load$($String* name, bool initialize) {
	$loadClass(TransformSpi, name, initialize, &_TransformSpi_ClassInfo_, allocate$TransformSpi);
	return class$;
}

$Class* TransformSpi::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
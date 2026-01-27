#include <com/sun/org/apache/xerces/internal/jaxp/validation/Util.h>

#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Util, init$, void)},
	{"toSAXException", "(Lcom/sun/org/apache/xerces/internal/xni/XNIException;)Lorg/xml/sax/SAXException;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, toSAXException, $SAXException*, $XNIException*)},
	{"toSAXParseException", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)Lorg/xml/sax/SAXParseException;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, toSAXParseException, $SAXParseException*, $XMLParseException*)},
	{"toXMLInputSource", "(Ljavax/xml/transform/stream/StreamSource;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(Util, toXMLInputSource, $XMLInputSource*, $StreamSource*)},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.Util",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

void Util::init$() {
}

$XMLInputSource* Util::toXMLInputSource($StreamSource* in) {
	$useLocalCurrentObjectStackCache();
	if ($nc(in)->getReader() != nullptr) {
		$var($String, var$0, in->getPublicId());
		$var($String, var$1, in->getSystemId());
		$var($String, var$2, in->getSystemId());
		return $new($XMLInputSource, var$0, var$1, var$2, $(in->getReader()), ($String*)nullptr);
	}
	if ($nc(in)->getInputStream() != nullptr) {
		$var($String, var$3, in->getPublicId());
		$var($String, var$4, in->getSystemId());
		$var($String, var$5, in->getSystemId());
		return $new($XMLInputSource, var$3, var$4, var$5, $(in->getInputStream()), ($String*)nullptr);
	}
	$var($String, var$6, $nc(in)->getPublicId());
	$var($String, var$7, in->getSystemId());
	return $new($XMLInputSource, var$6, var$7, $(in->getSystemId()), false);
}

$SAXException* Util::toSAXException($XNIException* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($XMLParseException, e)) {
		return toSAXParseException($cast($XMLParseException, e));
	}
	if ($instanceOf($SAXException, $($nc(e)->getException()))) {
		return $cast($SAXException, e->getException());
	}
	$var($String, var$0, $nc(e)->getMessage());
	return $new($SAXException, var$0, $(e->getException()));
}

$SAXParseException* Util::toSAXParseException($XMLParseException* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SAXParseException, $($nc(e)->getException()))) {
		return $cast($SAXParseException, e->getException());
	}
	$var($String, var$0, $nc(e)->getMessage());
	$var($String, var$1, e->getPublicId());
	$var($String, var$2, e->getExpandedSystemId());
	int32_t var$3 = e->getLineNumber();
	int32_t var$4 = e->getColumnNumber();
	return $new($SAXParseException, var$0, var$1, var$2, var$3, var$4, $(e->getException()));
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$XNI2SAX.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultXMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/util/AttributesProxy.h>
#include <com/sun/org/apache/xerces/internal/util/LocatorProxy.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/Attributes2.h>
#include <org/xml/sax/ext/Locator2.h>
#include <jcpp.h>

using $DefaultXMLDocumentHandler = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler;
using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $AttributesProxy = ::com::sun::org::apache::xerces::internal::util::AttributesProxy;
using $LocatorProxy = ::com::sun::org::apache::xerces::internal::util::LocatorProxy;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $Attributes2 = ::org::xml::sax::ext::Attributes2;
using $Locator2 = ::org::xml::sax::ext::Locator2;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPValidatorComponent$XNI2SAX_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JAXPValidatorComponent$XNI2SAX, this$0)},
	{"fContentHandler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(JAXPValidatorComponent$XNI2SAX, fContentHandler)},
	{"fVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JAXPValidatorComponent$XNI2SAX, fVersion)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED, $field(JAXPValidatorComponent$XNI2SAX, fNamespaceContext)},
	{"fAttributesProxy", "Lcom/sun/org/apache/xerces/internal/util/AttributesProxy;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent$XNI2SAX, fAttributesProxy)},
	{}
};

$MethodInfo _JAXPValidatorComponent$XNI2SAX_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;)V", nullptr, $PRIVATE, $method(JAXPValidatorComponent$XNI2SAX, init$, void, $JAXPValidatorComponent*)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $method(JAXPValidatorComponent$XNI2SAX, getContentHandler, $ContentHandler*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $method(JAXPValidatorComponent$XNI2SAX, setContentHandler, void, $ContentHandler*)},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$XNI2SAX, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _JAXPValidatorComponent$XNI2SAX_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$XNI2SAX", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "XNI2SAX", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _JAXPValidatorComponent$XNI2SAX_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$XNI2SAX",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultXMLDocumentHandler",
	nullptr,
	_JAXPValidatorComponent$XNI2SAX_FieldInfo_,
	_JAXPValidatorComponent$XNI2SAX_MethodInfo_,
	nullptr,
	nullptr,
	_JAXPValidatorComponent$XNI2SAX_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
};

$Object* allocate$JAXPValidatorComponent$XNI2SAX($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent$XNI2SAX));
}

void JAXPValidatorComponent$XNI2SAX::init$($JAXPValidatorComponent* this$0) {
	$set(this, this$0, this$0);
	$DefaultXMLDocumentHandler::init$();
	$set(this, fAttributesProxy, $new($AttributesProxy, nullptr));
}

void JAXPValidatorComponent$XNI2SAX::setContentHandler($ContentHandler* handler) {
	$set(this, fContentHandler, handler);
}

$ContentHandler* JAXPValidatorComponent$XNI2SAX::getContentHandler() {
	return this->fContentHandler;
}

void JAXPValidatorComponent$XNI2SAX::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	$set(this, fVersion, version);
}

void JAXPValidatorComponent$XNI2SAX::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$set(this, fNamespaceContext, namespaceContext);
	$nc(this->fContentHandler)->setDocumentLocator($$new($LocatorProxy, locator));
	try {
		$nc(this->fContentHandler)->startDocument();
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void JAXPValidatorComponent$XNI2SAX::endDocument($Augmentations* augs) {
	try {
		$nc(this->fContentHandler)->endDocument();
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void JAXPValidatorComponent$XNI2SAX::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	try {
		$nc(this->fContentHandler)->processingInstruction(target, $($nc(data)->toString()));
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void JAXPValidatorComponent$XNI2SAX::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		int32_t count = $nc(this->fNamespaceContext)->getDeclaredPrefixCount();
		if (count > 0) {
			$var($String, prefix, nullptr);
			$var($String, uri, nullptr);
			for (int32_t i = 0; i < count; ++i) {
				$assign(prefix, $nc(this->fNamespaceContext)->getDeclaredPrefixAt(i));
				$assign(uri, $nc(this->fNamespaceContext)->getURI(prefix));
				$nc(this->fContentHandler)->startPrefixMapping(prefix, (uri == nullptr) ? ""_s : uri);
			}
		}
		$var($String, uri, $nc(element)->uri != nullptr ? $nc(element)->uri : ""_s);
		$var($String, localpart, element->localpart);
		$nc(this->fAttributesProxy)->setAttributes(attributes);
		$nc(this->fContentHandler)->startElement(uri, localpart, element->rawname, this->fAttributesProxy);
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void JAXPValidatorComponent$XNI2SAX::endElement($QName* element, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, uri, $nc(element)->uri != nullptr ? $nc(element)->uri : ""_s);
		$var($String, localpart, element->localpart);
		$nc(this->fContentHandler)->endElement(uri, localpart, element->rawname);
		int32_t count = $nc(this->fNamespaceContext)->getDeclaredPrefixCount();
		if (count > 0) {
			for (int32_t i = 0; i < count; ++i) {
				$nc(this->fContentHandler)->endPrefixMapping($($nc(this->fNamespaceContext)->getDeclaredPrefixAt(i)));
			}
		}
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void JAXPValidatorComponent$XNI2SAX::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void JAXPValidatorComponent$XNI2SAX::characters($XMLString* text, $Augmentations* augs) {
	try {
		$nc(this->fContentHandler)->characters($nc(text)->ch, text->offset, text->length);
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

void JAXPValidatorComponent$XNI2SAX::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	try {
		$nc(this->fContentHandler)->ignorableWhitespace($nc(text)->ch, text->offset, text->length);
	} catch ($SAXException& e) {
		$throwNew($XNIException, static_cast<$Exception*>(e));
	}
}

JAXPValidatorComponent$XNI2SAX::JAXPValidatorComponent$XNI2SAX() {
}

$Class* JAXPValidatorComponent$XNI2SAX::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent$XNI2SAX, name, initialize, &_JAXPValidatorComponent$XNI2SAX_ClassInfo_, allocate$JAXPValidatorComponent$XNI2SAX);
	return class$;
}

$Class* JAXPValidatorComponent$XNI2SAX::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
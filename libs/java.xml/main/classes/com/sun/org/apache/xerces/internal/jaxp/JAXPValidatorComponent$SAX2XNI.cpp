#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$SAX2XNI.h>

#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPValidatorComponent$SAX2XNI_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JAXPValidatorComponent$SAX2XNI, this$0)},
	{"fAugmentations", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent$SAX2XNI, fAugmentations)},
	{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent$SAX2XNI, fQName)},
	{}
};

$MethodInfo _JAXPValidatorComponent$SAX2XNI_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;)V", nullptr, $PRIVATE, $method(JAXPValidatorComponent$SAX2XNI, init$, void, $JAXPValidatorComponent*)},
	{"aug", "()Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE, $method(JAXPValidatorComponent$SAX2XNI, aug, $Augmentations*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$SAX2XNI, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"elementAug", "()Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE, $method(JAXPValidatorComponent$SAX2XNI, elementAug, $Augmentations*)},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$SAX2XNI, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"handler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PRIVATE, $method(JAXPValidatorComponent$SAX2XNI, handler, $XMLDocumentHandler*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$SAX2XNI, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$SAX2XNI, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"toQName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $method(JAXPValidatorComponent$SAX2XNI, toQName, $QName*, $String*, $String*, $String*)},
	{"toSAXException", "(Lcom/sun/org/apache/xerces/internal/xni/XNIException;)Lorg/xml/sax/SAXException;", nullptr, $PRIVATE, $method(JAXPValidatorComponent$SAX2XNI, toSAXException, $SAXException*, $XNIException*)},
	{}
};

$InnerClassInfo _JAXPValidatorComponent$SAX2XNI_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$SAX2XNI", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "SAX2XNI", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _JAXPValidatorComponent$SAX2XNI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$SAX2XNI",
	"org.xml.sax.helpers.DefaultHandler",
	nullptr,
	_JAXPValidatorComponent$SAX2XNI_FieldInfo_,
	_JAXPValidatorComponent$SAX2XNI_MethodInfo_,
	nullptr,
	nullptr,
	_JAXPValidatorComponent$SAX2XNI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
};

$Object* allocate$JAXPValidatorComponent$SAX2XNI($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent$SAX2XNI));
}

void JAXPValidatorComponent$SAX2XNI::init$($JAXPValidatorComponent* this$0) {
	$set(this, this$0, this$0);
	$DefaultHandler::init$();
	$set(this, fAugmentations, $new($AugmentationsImpl));
	$set(this, fQName, $new($QName));
}

void JAXPValidatorComponent$SAX2XNI::characters($chars* ch, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($XMLString, var$0, $new($XMLString, ch, start, len));
		$nc($(handler()))->characters(var$0, $(aug()));
	} catch ($XNIException& e) {
		$throw($(toSAXException(e)));
	}
}

void JAXPValidatorComponent$SAX2XNI::ignorableWhitespace($chars* ch, int32_t start, int32_t len) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($XMLString, var$0, $new($XMLString, ch, start, len));
		$nc($(handler()))->ignorableWhitespace(var$0, $(aug()));
	} catch ($XNIException& e) {
		$throw($(toSAXException(e)));
	}
}

void JAXPValidatorComponent$SAX2XNI::startElement($String* uri, $String* localName, $String* qname, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	try {
		this->this$0->updateAttributes(atts);
		$var($QName, var$0, toQName(uri, localName, qname));
		$var($XMLAttributes, var$1, this->this$0->fCurrentAttributes);
		$nc($(handler()))->startElement(var$0, var$1, $(elementAug()));
	} catch ($XNIException& e) {
		$throw($(toSAXException(e)));
	}
}

void JAXPValidatorComponent$SAX2XNI::endElement($String* uri, $String* localName, $String* qname) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($QName, var$0, toQName(uri, localName, qname));
		$nc($(handler()))->endElement(var$0, $(aug()));
	} catch ($XNIException& e) {
		$throw($(toSAXException(e)));
	}
}

$Augmentations* JAXPValidatorComponent$SAX2XNI::elementAug() {
	$var($Augmentations, aug, this->aug());
	return aug;
}

$Augmentations* JAXPValidatorComponent$SAX2XNI::aug() {
	if (this->this$0->fCurrentAug != nullptr) {
		$var($Augmentations, r, this->this$0->fCurrentAug);
		$set(this->this$0, fCurrentAug, nullptr);
		return r;
	}
	$nc(this->fAugmentations)->removeAllItems();
	return this->fAugmentations;
}

$XMLDocumentHandler* JAXPValidatorComponent$SAX2XNI::handler() {
	return this->this$0->getDocumentHandler();
}

$SAXException* JAXPValidatorComponent$SAX2XNI::toSAXException($XNIException* xe) {
	$var($Exception, e, $nc(xe)->getException());
	if (e == nullptr) {
		$assign(e, xe);
	}
	if ($instanceOf($SAXException, e)) {
		return $cast($SAXException, e);
	}
	return $new($SAXException, e);
}

$QName* JAXPValidatorComponent$SAX2XNI::toQName($String* uri$renamed, $String* localName$renamed, $String* qname$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	$var($String, qname, qname$renamed);
	$var($String, uri, uri$renamed);
	$var($String, prefix, nullptr);
	int32_t idx = $nc(qname)->indexOf((int32_t)u':');
	if (idx > 0) {
		$assign(prefix, this->this$0->symbolize($(qname->substring(0, idx))));
	}
	$assign(localName, this->this$0->symbolize(localName));
	$assign(qname, this->this$0->symbolize(qname));
	$assign(uri, this->this$0->symbolize(uri));
	$nc(this->fQName)->setValues(prefix, localName, qname, uri);
	return this->fQName;
}

JAXPValidatorComponent$SAX2XNI::JAXPValidatorComponent$SAX2XNI() {
}

$Class* JAXPValidatorComponent$SAX2XNI::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent$SAX2XNI, name, initialize, &_JAXPValidatorComponent$SAX2XNI_ClassInfo_, allocate$JAXPValidatorComponent$SAX2XNI);
	return class$;
}

$Class* JAXPValidatorComponent$SAX2XNI::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
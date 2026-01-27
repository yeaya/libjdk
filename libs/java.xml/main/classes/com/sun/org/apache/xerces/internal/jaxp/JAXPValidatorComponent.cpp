#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultXMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$1.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$2.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$3.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$SAX2XNI.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$XNI2SAX.h>
#include <com/sun/org/apache/xerces/internal/jaxp/TeeXMLDocumentFilterImpl.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <javax/xml/validation/TypeInfoProvider.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $DefaultXMLDocumentHandler = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultXMLDocumentHandler;
using $JAXPValidatorComponent$1 = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$1;
using $JAXPValidatorComponent$2 = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$2;
using $JAXPValidatorComponent$3 = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$3;
using $JAXPValidatorComponent$SAX2XNI = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$SAX2XNI;
using $JAXPValidatorComponent$XNI2SAX = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$XNI2SAX;
using $TeeXMLDocumentFilterImpl = ::com::sun::org::apache::xerces::internal::jaxp::TeeXMLDocumentFilterImpl;
using $ErrorHandlerProxy = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeInfoProvider = ::javax::xml::validation::TypeInfoProvider;
using $ValidatorHandler = ::javax::xml::validation::ValidatorHandler;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPValidatorComponent_FieldInfo_[] = {
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JAXPValidatorComponent, ENTITY_MANAGER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JAXPValidatorComponent, ERROR_REPORTER)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JAXPValidatorComponent, SYMBOL_TABLE)},
	{"validator", "Ljavax/xml/validation/ValidatorHandler;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent, validator)},
	{"xni2sax", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$XNI2SAX;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent, xni2sax)},
	{"sax2xni", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$SAX2XNI;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent, sax2xni)},
	{"typeInfoProvider", "Ljavax/xml/validation/TypeInfoProvider;", nullptr, $PRIVATE | $FINAL, $field(JAXPValidatorComponent, typeInfoProvider)},
	{"fCurrentAug", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE, $field(JAXPValidatorComponent, fCurrentAug)},
	{"fCurrentAttributes", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PRIVATE, $field(JAXPValidatorComponent, fCurrentAttributes)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(JAXPValidatorComponent, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(JAXPValidatorComponent, fErrorReporter)},
	{"fEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PRIVATE, $field(JAXPValidatorComponent, fEntityResolver)},
	{"noInfoProvider", "Ljavax/xml/validation/TypeInfoProvider;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JAXPValidatorComponent, noInfoProvider)},
	{}
};

$MethodInfo _JAXPValidatorComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/xml/validation/ValidatorHandler;)V", nullptr, $PUBLIC, $method(JAXPValidatorComponent, init$, void, $ValidatorHandler*)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, getFeatureDefault, $Boolean*, $String*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, getRecognizedProperties, $StringArray*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"symbolize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(JAXPValidatorComponent, symbolize, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PRIVATE, $method(JAXPValidatorComponent, updateAttributes, void, $Attributes*)},
	{}
};

$InnerClassInfo _JAXPValidatorComponent_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "DraconianErrorHandler", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$XNI2SAX", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "XNI2SAX", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$SAX2XNI", "com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent", "SAX2XNI", $PRIVATE | $FINAL},
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$3", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JAXPValidatorComponent_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent",
	"com.sun.org.apache.xerces.internal.jaxp.TeeXMLDocumentFilterImpl",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent",
	_JAXPValidatorComponent_FieldInfo_,
	_JAXPValidatorComponent_MethodInfo_,
	nullptr,
	nullptr,
	_JAXPValidatorComponent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler,com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$XNI2SAX,com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$SAX2XNI,com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$3,com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$2,com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$1"
};

$Object* allocate$JAXPValidatorComponent($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent));
}

int32_t JAXPValidatorComponent::hashCode() {
	 return this->$TeeXMLDocumentFilterImpl::hashCode();
}

bool JAXPValidatorComponent::equals(Object$* arg0) {
	 return this->$TeeXMLDocumentFilterImpl::equals(arg0);
}

$Object* JAXPValidatorComponent::clone() {
	 return this->$TeeXMLDocumentFilterImpl::clone();
}

$String* JAXPValidatorComponent::toString() {
	 return this->$TeeXMLDocumentFilterImpl::toString();
}

void JAXPValidatorComponent::finalize() {
	this->$TeeXMLDocumentFilterImpl::finalize();
}

$String* JAXPValidatorComponent::ENTITY_MANAGER = nullptr;
$String* JAXPValidatorComponent::ERROR_REPORTER = nullptr;
$String* JAXPValidatorComponent::SYMBOL_TABLE = nullptr;
$TypeInfoProvider* JAXPValidatorComponent::noInfoProvider = nullptr;

void JAXPValidatorComponent::init$($ValidatorHandler* validatorHandler) {
	$useLocalCurrentObjectStackCache();
	$TeeXMLDocumentFilterImpl::init$();
	$set(this, xni2sax, $new($JAXPValidatorComponent$XNI2SAX, this));
	$set(this, sax2xni, $new($JAXPValidatorComponent$SAX2XNI, this));
	$set(this, validator, validatorHandler);
	$var($TypeInfoProvider, tip, $nc(validatorHandler)->getTypeInfoProvider());
	if (tip == nullptr) {
		$assign(tip, JAXPValidatorComponent::noInfoProvider);
	}
	$set(this, typeInfoProvider, tip);
	$nc(this->xni2sax)->setContentHandler(this->validator);
	$nc(this->validator)->setContentHandler(this->sax2xni);
	this->setSide(this->xni2sax);
	$nc(this->validator)->setErrorHandler($$new($JAXPValidatorComponent$1, this));
	$nc(this->validator)->setResourceResolver($$new($JAXPValidatorComponent$2, this));
}

void JAXPValidatorComponent::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$set(this, fCurrentAttributes, attributes);
	$set(this, fCurrentAug, augs);
	$nc(this->xni2sax)->startElement(element, attributes, nullptr);
	$set(this, fCurrentAttributes, nullptr);
}

void JAXPValidatorComponent::endElement($QName* element, $Augmentations* augs) {
	$set(this, fCurrentAug, augs);
	$nc(this->xni2sax)->endElement(element, nullptr);
}

void JAXPValidatorComponent::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	startElement(element, attributes, augs);
	endElement(element, augs);
}

void JAXPValidatorComponent::characters($XMLString* text, $Augmentations* augs) {
	$set(this, fCurrentAug, augs);
	$nc(this->xni2sax)->characters(text, nullptr);
}

void JAXPValidatorComponent::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	$set(this, fCurrentAug, augs);
	$nc(this->xni2sax)->ignorableWhitespace(text, nullptr);
}

void JAXPValidatorComponent::reset($XMLComponentManager* componentManager) {
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(componentManager)->getProperty(JAXPValidatorComponent::SYMBOL_TABLE)));
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(JAXPValidatorComponent::ERROR_REPORTER)));
	try {
		$set(this, fEntityResolver, $cast($XMLEntityResolver, componentManager->getProperty(JAXPValidatorComponent::ENTITY_MANAGER)));
	} catch ($XMLConfigurationException& e) {
		$set(this, fEntityResolver, nullptr);
	}
}

void JAXPValidatorComponent::updateAttributes($Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(atts)->getLength();
	for (int32_t i = 0; i < len; ++i) {
		$var($String, aqn, atts->getQName(i));
		int32_t j = $nc(this->fCurrentAttributes)->getIndex(aqn);
		$var($String, av, atts->getValue(i));
		if (j == -1) {
			$var($String, prefix, nullptr);
			int32_t idx = $nc(aqn)->indexOf((int32_t)u':');
			if (idx < 0) {
				$assign(prefix, nullptr);
			} else {
				$assign(prefix, symbolize($(aqn->substring(0, idx))));
			}
			$var($String, var$1, prefix);
			$var($String, var$2, symbolize($(atts->getLocalName(i))));
			$var($String, var$3, symbolize(aqn));
			$var($QName, var$0, $new($QName, var$1, var$2, var$3, $(symbolize($(atts->getURI(i))))));
			j = $nc(this->fCurrentAttributes)->addAttribute(var$0, $(atts->getType(i)), av);
		} else if (!$nc(av)->equals($($nc(this->fCurrentAttributes)->getValue(j)))) {
			$nc(this->fCurrentAttributes)->setValue(j, av);
		}
	}
}

$String* JAXPValidatorComponent::symbolize($String* s) {
	return $nc(this->fSymbolTable)->addSymbol(s);
}

$StringArray* JAXPValidatorComponent::getRecognizedFeatures() {
	return nullptr;
}

void JAXPValidatorComponent::setFeature($String* featureId, bool state) {
}

$StringArray* JAXPValidatorComponent::getRecognizedProperties() {
	return $new($StringArray, {
		JAXPValidatorComponent::ENTITY_MANAGER,
		JAXPValidatorComponent::ERROR_REPORTER,
		JAXPValidatorComponent::SYMBOL_TABLE
	});
}

void JAXPValidatorComponent::setProperty($String* propertyId, Object$* value) {
}

$Boolean* JAXPValidatorComponent::getFeatureDefault($String* featureId) {
	return nullptr;
}

$Object* JAXPValidatorComponent::getPropertyDefault($String* propertyId) {
	return $of(nullptr);
}

void clinit$JAXPValidatorComponent($Class* class$) {
	$init($Constants);
	$assignStatic(JAXPValidatorComponent::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(JAXPValidatorComponent::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(JAXPValidatorComponent::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(JAXPValidatorComponent::noInfoProvider, $new($JAXPValidatorComponent$3));
}

JAXPValidatorComponent::JAXPValidatorComponent() {
}

$Class* JAXPValidatorComponent::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent, name, initialize, &_JAXPValidatorComponent_ClassInfo_, clinit$JAXPValidatorComponent, allocate$JAXPValidatorComponent);
	return class$;
}

$Class* JAXPValidatorComponent::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
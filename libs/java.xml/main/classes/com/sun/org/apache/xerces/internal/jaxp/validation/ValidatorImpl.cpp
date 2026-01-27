#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/StAXValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/StreamValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <java/util/Locale.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/stax/StAXSource.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <javax/xml/validation/Validator.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <jcpp.h>

#undef CURRENT_ELEMENT_NODE
#undef CURRENT_ELEMENT_NODE_PROPERTY
#undef NOT_ALLOWED
#undef NOT_RECOGNIZED
#undef XERCES_PROPERTY_PREFIX

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $DOMValidatorHelper = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $StAXValidatorHelper = ::com::sun::org::apache::xerces::internal::jaxp::validation::StAXValidatorHelper;
using $StreamValidatorHelper = ::com::sun::org::apache::xerces::internal::jaxp::validation::StreamValidatorHelper;
using $ValidatorHandlerImpl = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl;
using $XMLSchemaValidatorComponentManager = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $StAXSource = ::javax::xml::transform::stax::StAXSource;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $Validator = ::javax::xml::validation::Validator;
using $LSResourceResolver = ::org::w3c::dom::ls::LSResourceResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _ValidatorImpl_FieldInfo_[] = {
	{"fComponentManager", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager;", nullptr, $PRIVATE, $field(ValidatorImpl, fComponentManager)},
	{"fSAXValidatorHelper", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl;", nullptr, $PRIVATE, $field(ValidatorImpl, fSAXValidatorHelper)},
	{"fDOMValidatorHelper", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper;", nullptr, $PRIVATE, $field(ValidatorImpl, fDOMValidatorHelper)},
	{"fStreamValidatorHelper", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/StreamValidatorHelper;", nullptr, $PRIVATE, $field(ValidatorImpl, fStreamValidatorHelper)},
	{"fStaxValidatorHelper", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/StAXValidatorHelper;", nullptr, $PRIVATE, $field(ValidatorImpl, fStaxValidatorHelper)},
	{"fConfigurationChanged", "Z", nullptr, $PRIVATE, $field(ValidatorImpl, fConfigurationChanged)},
	{"fErrorHandlerChanged", "Z", nullptr, $PRIVATE, $field(ValidatorImpl, fErrorHandlerChanged)},
	{"fResourceResolverChanged", "Z", nullptr, $PRIVATE, $field(ValidatorImpl, fResourceResolverChanged)},
	{"CURRENT_ELEMENT_NODE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ValidatorImpl, CURRENT_ELEMENT_NODE)},
	{}
};

$MethodInfo _ValidatorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer;)V", nullptr, $PUBLIC, $method(ValidatorImpl, init$, void, $XSGrammarPoolContainer*)},
	{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getAttributePSVI, $AttributePSVI*, int32_t)},
	{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
	{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getElementPSVI, $ElementPSVI*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getErrorHandler, $ErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getResourceResolver", "()Lorg/w3c/dom/ls/LSResourceResolver;", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, getResourceResolver, $LSResourceResolver*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, reset, void)},
	{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, setErrorHandler, void, $ErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setResourceResolver", "(Lorg/w3c/dom/ls/LSResourceResolver;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, setResourceResolver, void, $LSResourceResolver*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(ValidatorImpl, validate, void, $Source*, $Result*), "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _ValidatorImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorImpl",
	"javax.xml.validation.Validator",
	"com.sun.org.apache.xerces.internal.xs.PSVIProvider",
	_ValidatorImpl_FieldInfo_,
	_ValidatorImpl_MethodInfo_
};

$Object* allocate$ValidatorImpl($Class* clazz) {
	return $of($alloc(ValidatorImpl));
}

int32_t ValidatorImpl::hashCode() {
	 return this->$Validator::hashCode();
}

bool ValidatorImpl::equals(Object$* arg0) {
	 return this->$Validator::equals(arg0);
}

$Object* ValidatorImpl::clone() {
	 return this->$Validator::clone();
}

$String* ValidatorImpl::toString() {
	 return this->$Validator::toString();
}

void ValidatorImpl::finalize() {
	this->$Validator::finalize();
}

$String* ValidatorImpl::CURRENT_ELEMENT_NODE = nullptr;

void ValidatorImpl::init$($XSGrammarPoolContainer* grammarContainer) {
	$Validator::init$();
	this->fConfigurationChanged = false;
	this->fErrorHandlerChanged = false;
	this->fResourceResolverChanged = false;
	$set(this, fComponentManager, $new($XMLSchemaValidatorComponentManager, grammarContainer));
	setErrorHandler(nullptr);
	setResourceResolver(nullptr);
}

void ValidatorImpl::validate($Source* source, $Result* result) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SAXSource, source)) {
		if (this->fSAXValidatorHelper == nullptr) {
			$set(this, fSAXValidatorHelper, $new($ValidatorHandlerImpl, this->fComponentManager));
		}
		$nc(this->fSAXValidatorHelper)->validate(source, result);
	} else if ($instanceOf($DOMSource, source)) {
		if (this->fDOMValidatorHelper == nullptr) {
			$set(this, fDOMValidatorHelper, $new($DOMValidatorHelper, this->fComponentManager));
		}
		$nc(this->fDOMValidatorHelper)->validate(source, result);
	} else if ($instanceOf($StreamSource, source)) {
		if (this->fStreamValidatorHelper == nullptr) {
			$set(this, fStreamValidatorHelper, $new($StreamValidatorHelper, this->fComponentManager));
		}
		$nc(this->fStreamValidatorHelper)->validate(source, result);
	} else if ($instanceOf($StAXSource, source)) {
		if (this->fStaxValidatorHelper == nullptr) {
			$set(this, fStaxValidatorHelper, $new($StAXValidatorHelper, this->fComponentManager));
		}
		$nc(this->fStaxValidatorHelper)->validate(source, result);
	} else if (source == nullptr) {
		$throwNew($NullPointerException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), "SourceParameterNull"_s, nullptr)));
	} else {
		$var($Locale, var$0, $nc(this->fComponentManager)->getLocale());
		$var($String, var$1, "SourceNotAccepted"_s);
		$throwNew($IllegalArgumentException, $($JAXPValidationMessageFormatter::formatMessage(var$0, var$1, $$new($ObjectArray, {$($of($nc($of(source))->getClass()->getName()))}))));
	}
}

void ValidatorImpl::setErrorHandler($ErrorHandler* errorHandler) {
	this->fErrorHandlerChanged = (errorHandler != nullptr);
	$nc(this->fComponentManager)->setErrorHandler(errorHandler);
}

$ErrorHandler* ValidatorImpl::getErrorHandler() {
	return $nc(this->fComponentManager)->getErrorHandler();
}

void ValidatorImpl::setResourceResolver($LSResourceResolver* resourceResolver) {
	this->fResourceResolverChanged = (resourceResolver != nullptr);
	$nc(this->fComponentManager)->setResourceResolver(resourceResolver);
}

$LSResourceResolver* ValidatorImpl::getResourceResolver() {
	return $nc(this->fComponentManager)->getResourceResolver();
}

bool ValidatorImpl::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		return $nc(this->fComponentManager)->getFeature(name);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		$var($String, key, e->getType() == $Status::NOT_RECOGNIZED ? "feature-not-recognized"_s : "feature-not-supported"_s);
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
	$shouldNotReachHere();
}

void ValidatorImpl::setFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		$nc(this->fComponentManager)->setFeature(name, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$var($String, key, nullptr);
		$init($Status);
		if (e->getType() == $Status::NOT_ALLOWED) {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), "jaxp-secureprocessing-feature"_s, nullptr)));
		} else {
			if (e->getType() == $Status::NOT_RECOGNIZED) {
				$assign(key, "feature-not-recognized"_s);
			} else {
				$assign(key, "feature-not-supported"_s);
			}
		}
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
	this->fConfigurationChanged = true;
}

$Object* ValidatorImpl::getProperty($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(ValidatorImpl::CURRENT_ELEMENT_NODE)->equals(name)) {
		return $of((this->fDOMValidatorHelper != nullptr) ? $of($nc(this->fDOMValidatorHelper)->getCurrentElement()) : ($Object*)nullptr);
	}
	try {
		return $of($nc(this->fComponentManager)->getProperty(name));
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		$var($String, key, e->getType() == $Status::NOT_RECOGNIZED ? "property-not-recognized"_s : "property-not-supported"_s);
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
	$shouldNotReachHere();
}

void ValidatorImpl::setProperty($String* name, Object$* object) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	try {
		$nc(this->fComponentManager)->setProperty(name, object);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		$var($String, key, e->getType() == $Status::NOT_RECOGNIZED ? "property-not-recognized"_s : "property-not-supported"_s);
		$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fComponentManager)->getLocale()), key, $$new($ObjectArray, {$of(identifier)}))));
	}
	this->fConfigurationChanged = true;
}

void ValidatorImpl::reset() {
	if (this->fConfigurationChanged) {
		$nc(this->fComponentManager)->restoreInitialState();
		setErrorHandler(nullptr);
		setResourceResolver(nullptr);
		this->fConfigurationChanged = false;
		this->fErrorHandlerChanged = false;
		this->fResourceResolverChanged = false;
	} else {
		if (this->fErrorHandlerChanged) {
			setErrorHandler(nullptr);
			this->fErrorHandlerChanged = false;
		}
		if (this->fResourceResolverChanged) {
			setResourceResolver(nullptr);
			this->fResourceResolverChanged = false;
		}
	}
}

$ElementPSVI* ValidatorImpl::getElementPSVI() {
	return (this->fSAXValidatorHelper != nullptr) ? $nc(this->fSAXValidatorHelper)->getElementPSVI() : ($ElementPSVI*)nullptr;
}

$AttributePSVI* ValidatorImpl::getAttributePSVI(int32_t index) {
	return (this->fSAXValidatorHelper != nullptr) ? $nc(this->fSAXValidatorHelper)->getAttributePSVI(index) : ($AttributePSVI*)nullptr;
}

$AttributePSVI* ValidatorImpl::getAttributePSVIByName($String* uri, $String* localname) {
	return (this->fSAXValidatorHelper != nullptr) ? $nc(this->fSAXValidatorHelper)->getAttributePSVIByName(uri, localname) : ($AttributePSVI*)nullptr;
}

ValidatorImpl::ValidatorImpl() {
}

void clinit$ValidatorImpl($Class* class$) {
	$init($Constants);
	$assignStatic(ValidatorImpl::CURRENT_ELEMENT_NODE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::CURRENT_ELEMENT_NODE_PROPERTY}));
}

$Class* ValidatorImpl::load$($String* name, bool initialize) {
	$loadClass(ValidatorImpl, name, initialize, &_ValidatorImpl_ClassInfo_, clinit$ValidatorImpl, allocate$ValidatorImpl);
	return class$;
}

$Class* ValidatorImpl::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
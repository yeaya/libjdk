#include <com/sun/org/apache/xpath/internal/jaxp/XPathFactoryImpl.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xpath/internal/jaxp/XPathImpl.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/SecurityManager.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/xpath/XPath.h>
#include <javax/xml/xpath/XPathFactory.h>
#include <javax/xml/xpath/XPathFactoryConfigurationException.h>
#include <javax/xml/xpath/XPathFunctionResolver.h>
#include <javax/xml/xpath/XPathVariableResolver.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef CLASS_NAME
#undef DEFAULT_OBJECT_MODEL_URI
#undef ENABLE_EXTENSION_FUNCTION
#undef ER_FEATURE_NAME_NULL
#undef ER_FEATURE_UNKNOWN
#undef ER_GETTING_NULL_FEATURE
#undef ER_GETTING_UNKNOWN_FEATURE
#undef ER_NULL_XPATH_FUNCTION_RESOLVER
#undef ER_NULL_XPATH_VARIABLE_RESOLVER
#undef ER_OBJECT_MODEL_EMPTY
#undef ER_OBJECT_MODEL_NULL
#undef ER_SECUREPROCESSING_FEATURE
#undef FEATURE_SECURE_PROCESSING
#undef FSP
#undef ORACLE_FEATURE_SERVICE_MECHANISM

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $XPathImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathImpl;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $XMLConstants = ::javax::xml::XMLConstants;
using $XPath = ::javax::xml::xpath::XPath;
using $XPathFactory = ::javax::xml::xpath::XPathFactory;
using $XPathFactoryConfigurationException = ::javax::xml::xpath::XPathFactoryConfigurationException;
using $XPathFunctionResolver = ::javax::xml::xpath::XPathFunctionResolver;
using $XPathVariableResolver = ::javax::xml::xpath::XPathVariableResolver;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _XPathFactoryImpl_FieldInfo_[] = {
	{"CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactoryImpl, CLASS_NAME)},
	{"xPathFunctionResolver", "Ljavax/xml/xpath/XPathFunctionResolver;", nullptr, $PRIVATE, $field(XPathFactoryImpl, xPathFunctionResolver)},
	{"xPathVariableResolver", "Ljavax/xml/xpath/XPathVariableResolver;", nullptr, $PRIVATE, $field(XPathFactoryImpl, xPathVariableResolver)},
	{"_isNotSecureProcessing", "Z", nullptr, $PRIVATE, $field(XPathFactoryImpl, _isNotSecureProcessing)},
	{"_isSecureMode", "Z", nullptr, $PRIVATE, $field(XPathFactoryImpl, _isSecureMode)},
	{"_featureManager", "Ljdk/xml/internal/JdkXmlFeatures;", nullptr, $PRIVATE | $FINAL, $field(XPathFactoryImpl, _featureManager)},
	{}
};

$MethodInfo _XPathFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPathFactoryImpl, init$, void)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XPathFactoryImpl, getFeature, bool, $String*), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"isObjectModelSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XPathFactoryImpl, isObjectModelSupported, bool, $String*)},
	{"newXPath", "()Ljavax/xml/xpath/XPath;", nullptr, $PUBLIC, $virtualMethod(XPathFactoryImpl, newXPath, $XPath*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XPathFactoryImpl, setFeature, void, $String*, bool), "javax.xml.xpath.XPathFactoryConfigurationException"},
	{"setXPathFunctionResolver", "(Ljavax/xml/xpath/XPathFunctionResolver;)V", nullptr, $PUBLIC, $virtualMethod(XPathFactoryImpl, setXPathFunctionResolver, void, $XPathFunctionResolver*)},
	{"setXPathVariableResolver", "(Ljavax/xml/xpath/XPathVariableResolver;)V", nullptr, $PUBLIC, $virtualMethod(XPathFactoryImpl, setXPathVariableResolver, void, $XPathVariableResolver*)},
	{}
};

$ClassInfo _XPathFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.XPathFactoryImpl",
	"javax.xml.xpath.XPathFactory",
	nullptr,
	_XPathFactoryImpl_FieldInfo_,
	_XPathFactoryImpl_MethodInfo_
};

$Object* allocate$XPathFactoryImpl($Class* clazz) {
	return $of($alloc(XPathFactoryImpl));
}

$String* XPathFactoryImpl::CLASS_NAME = nullptr;

void XPathFactoryImpl::init$() {
	$XPathFactory::init$();
	$set(this, xPathFunctionResolver, nullptr);
	$set(this, xPathVariableResolver, nullptr);
	this->_isNotSecureProcessing = true;
	this->_isSecureMode = false;
	if ($System::getSecurityManager() != nullptr) {
		this->_isSecureMode = true;
		this->_isNotSecureProcessing = false;
	}
	$set(this, _featureManager, $new($JdkXmlFeatures, !this->_isNotSecureProcessing));
}

bool XPathFactoryImpl::isObjectModelSupported($String* objectModel) {
	$useLocalCurrentObjectStackCache();
	if (objectModel == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_OBJECT_MODEL_NULL, $$new($ObjectArray, {$($of($of(this)->getClass()->getName()))})));
		$throwNew($NullPointerException, fmsg);
	}
	if ($nc(objectModel)->length() == 0) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_OBJECT_MODEL_EMPTY, $$new($ObjectArray, {$($of($of(this)->getClass()->getName()))})));
		$throwNew($IllegalArgumentException, fmsg);
	}
	$init($XPathFactory);
	if ($nc(objectModel)->equals($XPathFactory::DEFAULT_OBJECT_MODEL_URI)) {
		return true;
	}
	return false;
}

$XPath* XPathFactoryImpl::newXPath() {
	return $new($XPathImpl, this->xPathVariableResolver, this->xPathFunctionResolver, !this->_isNotSecureProcessing, this->_featureManager);
}

void XPathFactoryImpl::setFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_FEATURE_NAME_NULL, $$new($ObjectArray, {
			$of(XPathFactoryImpl::CLASS_NAME),
			$($of($Boolean::valueOf(value)))
		})));
		$throwNew($NullPointerException, fmsg);
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		if ((this->_isSecureMode) && (!value)) {
			$init($XPATHErrorResources);
			$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_SECUREPROCESSING_FEATURE, $$new($ObjectArray, {
				$of(name),
				$of(XPathFactoryImpl::CLASS_NAME),
				$($of($Boolean::valueOf(value)))
			})));
			$throwNew($XPathFactoryConfigurationException, fmsg);
		}
		this->_isNotSecureProcessing = !value;
		if (value && this->_featureManager != nullptr) {
			$init($JdkXmlFeatures$XmlFeature);
			$init($JdkProperty$State);
			$nc(this->_featureManager)->setFeature($JdkXmlFeatures$XmlFeature::ENABLE_EXTENSION_FUNCTION, $JdkProperty$State::FSP, false);
		}
		return;
	}
	$init($JdkConstants);
	if ($nc(name)->equals($JdkConstants::ORACLE_FEATURE_SERVICE_MECHANISM)) {
		if (this->_isSecureMode) {
			return;
		}
	}
	$init($JdkProperty$State);
	if (this->_featureManager != nullptr && $nc(this->_featureManager)->setFeature(name, $JdkProperty$State::APIPROPERTY, $($of($Boolean::valueOf(value))))) {
		return;
	}
	$init($XPATHErrorResources);
	$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_FEATURE_UNKNOWN, $$new($ObjectArray, {
		$of(name),
		$of(XPathFactoryImpl::CLASS_NAME),
		$($of($Boolean::valueOf(value)))
	})));
	$throwNew($XPathFactoryConfigurationException, fmsg);
}

bool XPathFactoryImpl::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_GETTING_NULL_FEATURE, $$new($ObjectArray, {$of(XPathFactoryImpl::CLASS_NAME)})));
		$throwNew($NullPointerException, fmsg);
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		return !this->_isNotSecureProcessing;
	}
	int32_t index = $nc(this->_featureManager)->getIndex(name);
	if (index > -1) {
		return $nc(this->_featureManager)->getFeature(index);
	}
	$init($XPATHErrorResources);
	$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_GETTING_UNKNOWN_FEATURE, $$new($ObjectArray, {
		$of(name),
		$of(XPathFactoryImpl::CLASS_NAME)
	})));
	$throwNew($XPathFactoryConfigurationException, fmsg);
}

void XPathFactoryImpl::setXPathFunctionResolver($XPathFunctionResolver* resolver) {
	$useLocalCurrentObjectStackCache();
	if (resolver == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_XPATH_FUNCTION_RESOLVER, $$new($ObjectArray, {$of(XPathFactoryImpl::CLASS_NAME)})));
		$throwNew($NullPointerException, fmsg);
	}
	$set(this, xPathFunctionResolver, resolver);
}

void XPathFactoryImpl::setXPathVariableResolver($XPathVariableResolver* resolver) {
	$useLocalCurrentObjectStackCache();
	if (resolver == nullptr) {
		$init($XPATHErrorResources);
		$var($String, fmsg, $XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_XPATH_VARIABLE_RESOLVER, $$new($ObjectArray, {$of(XPathFactoryImpl::CLASS_NAME)})));
		$throwNew($NullPointerException, fmsg);
	}
	$set(this, xPathVariableResolver, resolver);
}

XPathFactoryImpl::XPathFactoryImpl() {
}

void clinit$XPathFactoryImpl($Class* class$) {
	$assignStatic(XPathFactoryImpl::CLASS_NAME, "XPathFactoryImpl"_s);
}

$Class* XPathFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(XPathFactoryImpl, name, initialize, &_XPathFactoryImpl_ClassInfo_, clinit$XPathFactoryImpl, allocate$XPathFactoryImpl);
	return class$;
}

$Class* XPathFactoryImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
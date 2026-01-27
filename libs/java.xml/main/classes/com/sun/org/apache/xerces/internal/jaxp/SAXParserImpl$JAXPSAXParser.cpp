#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserImpl$JAXPSAXParser.h>

#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/UnparsedEntityHandler.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/Status.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$State.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/validation/Schema.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef FALSE
#undef FEATURE_SECURE_PROCESSING
#undef NOT_RECOGNIZED
#undef TRUE

using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $SAXParserImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl;
using $UnparsedEntityHandler = ::com::sun::org::apache::xerces::internal::jaxp::UnparsedEntityHandler;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $Status = ::com::sun::org::apache::xerces::internal::util::Status;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$State = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$State;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $XMLConstants = ::javax::xml::XMLConstants;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _SAXParserImpl$JAXPSAXParser_FieldInfo_[] = {
	{"fInitFeatures", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(SAXParserImpl$JAXPSAXParser, fInitFeatures)},
	{"fInitProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(SAXParserImpl$JAXPSAXParser, fInitProperties)},
	{"fSAXParser", "Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserImpl;", nullptr, $PRIVATE | $FINAL, $field(SAXParserImpl$JAXPSAXParser, fSAXParser)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(SAXParserImpl$JAXPSAXParser, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE, $field(SAXParserImpl$JAXPSAXParser, fSecurityPropertyMgr)},
	{}
};

$MethodInfo _SAXParserImpl$JAXPSAXParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAXParserImpl$JAXPSAXParser, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserImpl;Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;)V", nullptr, 0, $method(SAXParserImpl$JAXPSAXParser, init$, void, $SAXParserImpl*, $XMLSecurityPropertyManager*, $XMLSecurityManager*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SAXParserImpl$JAXPSAXParser, getFeature, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getFeature0", "(Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(SAXParserImpl$JAXPSAXParser, getFeature0, bool, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, 0, $virtualMethod(SAXParserImpl$JAXPSAXParser, getLocale, $Locale*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SAXParserImpl$JAXPSAXParser, getProperty, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getProperty0", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(SAXParserImpl$JAXPSAXParser, getProperty0, $Object*, $String*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getXMLParserConfiguration", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration;", nullptr, 0, $virtualMethod(SAXParserImpl$JAXPSAXParser, getXMLParserConfiguration, $XMLParserConfiguration*)},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl$JAXPSAXParser, parse, void, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserImpl$JAXPSAXParser, parse, void, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"resetSchemaValidator", "()V", nullptr, $PRIVATE, $method(SAXParserImpl$JAXPSAXParser, resetSchemaValidator, void), "org.xml.sax.SAXException"},
	{"restoreInitState", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(SAXParserImpl$JAXPSAXParser, restoreInitState, void), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SAXParserImpl$JAXPSAXParser, setFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setFeature0", "(Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(SAXParserImpl$JAXPSAXParser, setFeature0, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SAXParserImpl$JAXPSAXParser, setProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setProperty0", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(SAXParserImpl$JAXPSAXParser, setProperty0, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setSchemaValidatorFeature", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(SAXParserImpl$JAXPSAXParser, setSchemaValidatorFeature, void, $String*, bool), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setSchemaValidatorProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(SAXParserImpl$JAXPSAXParser, setSchemaValidatorProperty, void, $String*, Object$*), "org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{}
};

$InnerClassInfo _SAXParserImpl$JAXPSAXParser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl$JAXPSAXParser", "com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl", "JAXPSAXParser", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SAXParserImpl$JAXPSAXParser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl$JAXPSAXParser",
	"com.sun.org.apache.xerces.internal.parsers.SAXParser",
	nullptr,
	_SAXParserImpl$JAXPSAXParser_FieldInfo_,
	_SAXParserImpl$JAXPSAXParser_MethodInfo_,
	nullptr,
	nullptr,
	_SAXParserImpl$JAXPSAXParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.SAXParserImpl"
};

$Object* allocate$SAXParserImpl$JAXPSAXParser($Class* clazz) {
	return $of($alloc(SAXParserImpl$JAXPSAXParser));
}

void SAXParserImpl$JAXPSAXParser::init$() {
	SAXParserImpl$JAXPSAXParser::init$(nullptr, nullptr, nullptr);
}

void SAXParserImpl$JAXPSAXParser::init$($SAXParserImpl* saxParser, $XMLSecurityPropertyManager* securityPropertyMgr, $XMLSecurityManager* securityManager) {
	$useLocalCurrentObjectStackCache();
	$SAXParser::init$();
	$set(this, fInitFeatures, $new($HashMap));
	$set(this, fInitProperties, $new($HashMap));
	$set(this, fSAXParser, saxParser);
	$set(this, fSecurityManager, securityManager);
	$set(this, fSecurityPropertyMgr, securityPropertyMgr);
	if (this->fSecurityManager == nullptr) {
		$set(this, fSecurityManager, $new($XMLSecurityManager, true));
		try {
			$SAXParser::setProperty("http://apache.org/xml/properties/security-manager"_s, this->fSecurityManager);
		} catch ($SAXException& e) {
			$throwNew($UnsupportedOperationException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of("http://apache.org/xml/properties/security-manager"_s)}))), e);
		}
	}
	if (this->fSecurityPropertyMgr == nullptr) {
		$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
		try {
			$SAXParser::setProperty("jdk.xml.xmlSecurityPropertyManager"_s, this->fSecurityPropertyMgr);
		} catch ($SAXException& e) {
			$throwNew($UnsupportedOperationException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of("http://apache.org/xml/properties/security-manager"_s)}))), e);
		}
	}
}

void SAXParserImpl$JAXPSAXParser::setFeature($String* name, bool value) {
	$synchronized(this) {
		if (name == nullptr) {
			$throwNew($NullPointerException);
		}
		$init($XMLConstants);
		if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
			try {
				$nc(this->fSecurityManager)->setSecureProcessing(value);
				setProperty("http://apache.org/xml/properties/security-manager"_s, this->fSecurityManager);
			} catch ($SAXNotRecognizedException& exc) {
				if (value) {
					$throw(exc);
				}
			} catch ($SAXNotSupportedException& exc) {
				if (value) {
					$throw(exc);
				}
			}
			return;
		}
		if (!$nc(this->fInitFeatures)->containsKey(name)) {
			bool current = $SAXParser::getFeature(name);
			$init($Boolean);
			$nc(this->fInitFeatures)->put(name, current ? $Boolean::TRUE : $Boolean::FALSE);
		}
		if (this->fSAXParser != nullptr && $nc(this->fSAXParser)->fSchemaValidator != nullptr) {
			setSchemaValidatorFeature(name, value);
		}
		$SAXParser::setFeature(name, value);
	}
}

bool SAXParserImpl$JAXPSAXParser::getFeature($String* name) {
	$synchronized(this) {
		if (name == nullptr) {
			$throwNew($NullPointerException);
		}
		$init($XMLConstants);
		if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
			return $nc(this->fSecurityManager)->isSecureProcessing();
		}
		return $SAXParser::getFeature(name);
	}
}

void SAXParserImpl$JAXPSAXParser::setProperty($String* name, Object$* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (name == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->fSAXParser != nullptr) {
			if ("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s->equals(name)) {
				if ($nc(this->fSAXParser)->grammar != nullptr) {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "schema-already-specified"_s, $$new($ObjectArray, {$of(name)}))));
				}
				if ("http://www.w3.org/2001/XMLSchema"_s->equals(value)) {
					if ($nc(this->fSAXParser)->isValidating()) {
						$set($nc(this->fSAXParser), schemaLanguage, "http://www.w3.org/2001/XMLSchema"_s);
						setFeature("http://apache.org/xml/features/validation/schema"_s, true);
						if (!$nc(this->fInitProperties)->containsKey("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s)) {
							$nc(this->fInitProperties)->put("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s, $($SAXParser::getProperty("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s)));
						}
						$SAXParser::setProperty("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s, "http://www.w3.org/2001/XMLSchema"_s);
					}
				} else if (value == nullptr) {
					$set($nc(this->fSAXParser), schemaLanguage, nullptr);
					setFeature("http://apache.org/xml/features/validation/schema"_s, false);
				} else {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "schema-not-supported"_s, nullptr)));
				}
				return;
			} else if ("http://java.sun.com/xml/jaxp/properties/schemaSource"_s->equals(name)) {
				if ($nc(this->fSAXParser)->grammar != nullptr) {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "schema-already-specified"_s, $$new($ObjectArray, {$of(name)}))));
				}
				$var($String, val, $cast($String, getProperty("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s)));
				if (val != nullptr && "http://www.w3.org/2001/XMLSchema"_s->equals(val)) {
					if (!$nc(this->fInitProperties)->containsKey("http://java.sun.com/xml/jaxp/properties/schemaSource"_s)) {
						$nc(this->fInitProperties)->put("http://java.sun.com/xml/jaxp/properties/schemaSource"_s, $($SAXParser::getProperty("http://java.sun.com/xml/jaxp/properties/schemaSource"_s)));
					}
					$SAXParser::setProperty(name, value);
				} else {
					$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "jaxp-order-not-supported"_s, $$new($ObjectArray, {
						$of("http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s),
						$of("http://java.sun.com/xml/jaxp/properties/schemaSource"_s)
					}))));
				}
				return;
			}
		}
		if (this->fSAXParser != nullptr && $nc(this->fSAXParser)->fSchemaValidator != nullptr) {
			setSchemaValidatorProperty(name, value);
		}
		$init($JdkProperty$State);
		if (this->fSecurityManager == nullptr || !$nc(this->fSecurityManager)->setLimit(name, $JdkProperty$State::APIPROPERTY, value)) {
			$init($XMLSecurityPropertyManager$State);
			if (this->fSecurityPropertyMgr == nullptr || !$nc(this->fSecurityPropertyMgr)->setValue(name, $XMLSecurityPropertyManager$State::APIPROPERTY, value)) {
				if (!$nc(this->fInitProperties)->containsKey(name)) {
					$nc(this->fInitProperties)->put(name, $($SAXParser::getProperty(name)));
				}
				$SAXParser::setProperty(name, value);
			}
		}
	}
}

$Object* SAXParserImpl$JAXPSAXParser::getProperty($String* name) {
	$synchronized(this) {
		if (name == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->fSAXParser != nullptr && "http://java.sun.com/xml/jaxp/properties/schemaLanguage"_s->equals(name)) {
			return $of($nc(this->fSAXParser)->schemaLanguage);
		}
		$var($String, propertyValue, (this->fSecurityManager != nullptr) ? $nc(this->fSecurityManager)->getLimitAsString(name) : ($String*)nullptr);
		if (propertyValue != nullptr) {
			return $of(propertyValue);
		} else {
			$assign(propertyValue, (this->fSecurityPropertyMgr != nullptr) ? $nc(this->fSecurityPropertyMgr)->getValue(name) : ($String*)nullptr);
			if (propertyValue != nullptr) {
				return $of(propertyValue);
			}
		}
		return $of($SAXParser::getProperty(name));
	}
}

void SAXParserImpl$JAXPSAXParser::restoreInitState() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!$nc(this->fInitFeatures)->isEmpty()) {
			{
				$var($Iterator, i$, $nc($($nc(this->fInitFeatures)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$var($String, name, $cast($String, $nc(entry)->getKey()));
						bool value = $nc(($cast($Boolean, $(entry->getValue()))))->booleanValue();
						$SAXParser::setFeature(name, value);
					}
				}
			}
			$nc(this->fInitFeatures)->clear();
		}
		if (!$nc(this->fInitProperties)->isEmpty()) {
			{
				$var($Iterator, i$, $nc($($nc(this->fInitProperties)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$var($String, name, $cast($String, $nc(entry)->getKey()));
						$var($Object, value, entry->getValue());
						$SAXParser::setProperty(name, value);
					}
				}
			}
			$nc(this->fInitProperties)->clear();
		}
	}
}

void SAXParserImpl$JAXPSAXParser::parse($InputSource* inputSource) {
	if (this->fSAXParser != nullptr && $nc(this->fSAXParser)->fSchemaValidator != nullptr) {
		if ($nc(this->fSAXParser)->fSchemaValidationManager != nullptr) {
			$nc($nc(this->fSAXParser)->fSchemaValidationManager)->reset();
			$nc($nc(this->fSAXParser)->fUnparsedEntityHandler)->reset();
		}
		resetSchemaValidator();
	}
	$SAXParser::parse(inputSource);
}

void SAXParserImpl$JAXPSAXParser::parse($String* systemId) {
	if (this->fSAXParser != nullptr && $nc(this->fSAXParser)->fSchemaValidator != nullptr) {
		if ($nc(this->fSAXParser)->fSchemaValidationManager != nullptr) {
			$nc($nc(this->fSAXParser)->fSchemaValidationManager)->reset();
			$nc($nc(this->fSAXParser)->fUnparsedEntityHandler)->reset();
		}
		resetSchemaValidator();
	}
	$SAXParser::parse(systemId);
}

$XMLParserConfiguration* SAXParserImpl$JAXPSAXParser::getXMLParserConfiguration() {
	return this->fConfiguration;
}

void SAXParserImpl$JAXPSAXParser::setFeature0($String* name, bool value) {
	$SAXParser::setFeature(name, value);
}

bool SAXParserImpl$JAXPSAXParser::getFeature0($String* name) {
	return $SAXParser::getFeature(name);
}

void SAXParserImpl$JAXPSAXParser::setProperty0($String* name, Object$* value) {
	$SAXParser::setProperty(name, value);
}

$Object* SAXParserImpl$JAXPSAXParser::getProperty0($String* name) {
	return $of($SAXParser::getProperty(name));
}

$Locale* SAXParserImpl$JAXPSAXParser::getLocale() {
	return $nc(this->fConfiguration)->getLocale();
}

void SAXParserImpl$JAXPSAXParser::setSchemaValidatorFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($nc(this->fSAXParser)->fSchemaValidator)->setFeature(name, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "feature-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

void SAXParserImpl$JAXPSAXParser::setSchemaValidatorProperty($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($nc(this->fSAXParser)->fSchemaValidator)->setProperty(name, value);
	} catch ($XMLConfigurationException& e) {
		$var($String, identifier, e->getIdentifier());
		$init($Status);
		if (e->getType() == $Status::NOT_RECOGNIZED) {
			$throwNew($SAXNotRecognizedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-recognized"_s, $$new($ObjectArray, {$of(identifier)}))));
		} else {
			$throwNew($SAXNotSupportedException, $($SAXMessageFormatter::formatMessage($($nc(this->fConfiguration)->getLocale()), "property-not-supported"_s, $$new($ObjectArray, {$of(identifier)}))));
		}
	}
}

void SAXParserImpl$JAXPSAXParser::resetSchemaValidator() {
	try {
		$nc($nc(this->fSAXParser)->fSchemaValidator)->reset($nc(this->fSAXParser)->fSchemaValidatorComponentManager);
	} catch ($XMLConfigurationException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

SAXParserImpl$JAXPSAXParser::SAXParserImpl$JAXPSAXParser() {
}

$Class* SAXParserImpl$JAXPSAXParser::load$($String* name, bool initialize) {
	$loadClass(SAXParserImpl$JAXPSAXParser, name, initialize, &_SAXParserImpl$JAXPSAXParser_ClassInfo_, allocate$SAXParserImpl$JAXPSAXParser);
	return class$;
}

$Class* SAXParserImpl$JAXPSAXParser::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
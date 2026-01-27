#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserImpl.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <java/lang/SecurityManager.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <javax/xml/validation/Schema.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef FALSE
#undef FEATURE_SECURE_PROCESSING
#undef NAMESPACES_FEATURE
#undef SAX_FEATURE_PREFIX
#undef TRUE
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XINCLUDE_FEATURE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $SAXParserImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserImpl;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $Schema = ::javax::xml::validation::Schema;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _SAXParserFactoryImpl_FieldInfo_[] = {
	{"VALIDATION_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserFactoryImpl, VALIDATION_FEATURE)},
	{"NAMESPACES_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserFactoryImpl, NAMESPACES_FEATURE)},
	{"XINCLUDE_FEATURE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAXParserFactoryImpl, XINCLUDE_FEATURE)},
	{"features", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE, $field(SAXParserFactoryImpl, features)},
	{"grammar", "Ljavax/xml/validation/Schema;", nullptr, $PRIVATE, $field(SAXParserFactoryImpl, grammar)},
	{"isXIncludeAware", "Z", nullptr, $PRIVATE, $field(SAXParserFactoryImpl, isXIncludeAware$)},
	{"fSecureProcess", "Z", nullptr, $PRIVATE, $field(SAXParserFactoryImpl, fSecureProcess)},
	{}
};

$MethodInfo _SAXParserFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAXParserFactoryImpl, init$, void)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, getFeature, bool, $String*), "javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"getFromFeatures", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(SAXParserFactoryImpl, getFromFeatures, bool, $String*)},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, getSchema, $Schema*)},
	{"isNamespaceAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, isNamespaceAware, bool)},
	{"isValidating", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, isValidating, bool)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, isXIncludeAware, bool)},
	{"newSAXParser", "()Ljavax/xml/parsers/SAXParser;", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, newSAXParser, $SAXParser*), "javax.xml.parsers.ParserConfigurationException"},
	{"newSAXParserImpl", "()Lcom/sun/org/apache/xerces/internal/jaxp/SAXParserImpl;", nullptr, $PRIVATE, $method(SAXParserFactoryImpl, newSAXParserImpl, $SAXParserImpl*), "javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"putInFeatures", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(SAXParserFactoryImpl, putInFeatures, void, $String*, bool)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, setFeature, void, $String*, bool), "javax.xml.parsers.ParserConfigurationException,org.xml.sax.SAXNotRecognizedException,org.xml.sax.SAXNotSupportedException"},
	{"setNamespaceAware", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, setNamespaceAware, void, bool)},
	{"setSchema", "(Ljavax/xml/validation/Schema;)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, setSchema, void, $Schema*)},
	{"setValidating", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, setValidating, void, bool)},
	{"setXIncludeAware", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SAXParserFactoryImpl, setXIncludeAware, void, bool)},
	{}
};

$ClassInfo _SAXParserFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.SAXParserFactoryImpl",
	"javax.xml.parsers.SAXParserFactory",
	nullptr,
	_SAXParserFactoryImpl_FieldInfo_,
	_SAXParserFactoryImpl_MethodInfo_
};

$Object* allocate$SAXParserFactoryImpl($Class* clazz) {
	return $of($alloc(SAXParserFactoryImpl));
}

$String* SAXParserFactoryImpl::VALIDATION_FEATURE = nullptr;
$String* SAXParserFactoryImpl::NAMESPACES_FEATURE = nullptr;
$String* SAXParserFactoryImpl::XINCLUDE_FEATURE = nullptr;

void SAXParserFactoryImpl::init$() {
	$SAXParserFactory::init$();
	this->fSecureProcess = true;
}

$SAXParser* SAXParserFactoryImpl::newSAXParser() {
	$useLocalCurrentObjectStackCache();
	$var($SAXParser, saxParserImpl, nullptr);
	try {
		$assign(saxParserImpl, $new($SAXParserImpl, this, this->features, this->fSecureProcess));
	} catch ($SAXException& se) {
		$throwNew($ParserConfigurationException, $(se->getMessage()));
	}
	return saxParserImpl;
}

$SAXParserImpl* SAXParserFactoryImpl::newSAXParserImpl() {
	$useLocalCurrentObjectStackCache();
	$var($SAXParserImpl, saxParserImpl, nullptr);
	try {
		$assign(saxParserImpl, $new($SAXParserImpl, this, this->features));
	} catch ($SAXNotSupportedException& e) {
		$throw(e);
	} catch ($SAXNotRecognizedException& e) {
		$throw(e);
	} catch ($SAXException& se) {
		$throwNew($ParserConfigurationException, $(se->getMessage()));
	}
	return saxParserImpl;
}

void SAXParserFactoryImpl::setFeature($String* name, bool value) {
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		if ($System::getSecurityManager() != nullptr && (!value)) {
			$throwNew($ParserConfigurationException, $($SAXMessageFormatter::formatMessage(nullptr, "jaxp-secureprocessing-feature"_s, nullptr)));
		}
		this->fSecureProcess = value;
		putInFeatures(name, value);
		return;
	}
	putInFeatures(name, value);
	try {
		newSAXParserImpl();
	} catch ($SAXNotSupportedException& e) {
		$nc(this->features)->remove(name);
		$throw(e);
	} catch ($SAXNotRecognizedException& e) {
		$nc(this->features)->remove(name);
		$throw(e);
	}
}

bool SAXParserFactoryImpl::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		return this->fSecureProcess;
	}
	return $nc($($nc($(newSAXParserImpl()))->getXMLReader()))->getFeature(name);
}

$Schema* SAXParserFactoryImpl::getSchema() {
	return this->grammar;
}

void SAXParserFactoryImpl::setSchema($Schema* grammar) {
	$set(this, grammar, grammar);
}

bool SAXParserFactoryImpl::isXIncludeAware() {
	return getFromFeatures(SAXParserFactoryImpl::XINCLUDE_FEATURE);
}

void SAXParserFactoryImpl::setXIncludeAware(bool state) {
	putInFeatures(SAXParserFactoryImpl::XINCLUDE_FEATURE, state);
}

void SAXParserFactoryImpl::setValidating(bool validating) {
	putInFeatures(SAXParserFactoryImpl::VALIDATION_FEATURE, validating);
}

bool SAXParserFactoryImpl::isValidating() {
	return getFromFeatures(SAXParserFactoryImpl::VALIDATION_FEATURE);
}

void SAXParserFactoryImpl::putInFeatures($String* name, bool value) {
	if (this->features == nullptr) {
		$set(this, features, $new($HashMap));
	}
	$init($Boolean);
	$nc(this->features)->put(name, value ? $Boolean::TRUE : $Boolean::FALSE);
}

bool SAXParserFactoryImpl::getFromFeatures($String* name) {
	if (this->features == nullptr) {
		return false;
	} else {
		$var($Boolean, value, $cast($Boolean, $nc(this->features)->get(name)));
		return (value == nullptr) ? false : $nc(value)->booleanValue();
	}
}

bool SAXParserFactoryImpl::isNamespaceAware() {
	return getFromFeatures(SAXParserFactoryImpl::NAMESPACES_FEATURE);
}

void SAXParserFactoryImpl::setNamespaceAware(bool awareness) {
	putInFeatures(SAXParserFactoryImpl::NAMESPACES_FEATURE, awareness);
}

SAXParserFactoryImpl::SAXParserFactoryImpl() {
}

void clinit$SAXParserFactoryImpl($Class* class$) {
	$init($Constants);
	$assignStatic(SAXParserFactoryImpl::VALIDATION_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(SAXParserFactoryImpl::NAMESPACES_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(SAXParserFactoryImpl::XINCLUDE_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::XINCLUDE_FEATURE}));
}

$Class* SAXParserFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(SAXParserFactoryImpl, name, initialize, &_SAXParserFactoryImpl_ClassInfo_, clinit$SAXParserFactoryImpl, allocate$SAXParserFactoryImpl);
	return class$;
}

$Class* SAXParserFactoryImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
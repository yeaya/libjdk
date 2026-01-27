#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPConstants.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <java/lang/SecurityManager.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/validation/Schema.h>
#include <jdk/xml/internal/JdkProperty$State.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <jcpp.h>

#undef APIPROPERTY
#undef FALSE
#undef FEATURE_SECURE_PROCESSING
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef TRUE

using $DocumentBuilderImpl = ::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderImpl;
using $JAXPConstants = ::com::sun::org::apache::xerces::internal::jaxp::JAXPConstants;
using $DOMParser = ::com::sun::org::apache::xerces::internal::parsers::DOMParser;
using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $Schema = ::javax::xml::validation::Schema;
using $JdkProperty$State = ::jdk::xml::internal::JdkProperty$State;
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

$FieldInfo _DocumentBuilderFactoryImpl_FieldInfo_[] = {
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(DocumentBuilderFactoryImpl, attributes)},
	{"features", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE, $field(DocumentBuilderFactoryImpl, features)},
	{"grammar", "Ljavax/xml/validation/Schema;", nullptr, $PRIVATE, $field(DocumentBuilderFactoryImpl, grammar)},
	{"isXIncludeAware", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactoryImpl, isXIncludeAware$)},
	{"fSecureProcess", "Z", nullptr, $PRIVATE, $field(DocumentBuilderFactoryImpl, fSecureProcess)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, 0, $field(DocumentBuilderFactoryImpl, fSecurityManager)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, 0, $field(DocumentBuilderFactoryImpl, fSecurityPropertyMgr)},
	{}
};

$MethodInfo _DocumentBuilderFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DocumentBuilderFactoryImpl, init$, void)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, getAttribute, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, getFeature, bool, $String*), "javax.xml.parsers.ParserConfigurationException"},
	{"getSchema", "()Ljavax/xml/validation/Schema;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, getSchema, $Schema*)},
	{"isXIncludeAware", "()Z", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, isXIncludeAware, bool)},
	{"newDocumentBuilder", "()Ljavax/xml/parsers/DocumentBuilder;", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, newDocumentBuilder, $DocumentBuilder*), "javax.xml.parsers.ParserConfigurationException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, setAttribute, void, $String*, Object$*), "java.lang.IllegalArgumentException"},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, setFeature, void, $String*, bool), "javax.xml.parsers.ParserConfigurationException"},
	{"setSchema", "(Ljavax/xml/validation/Schema;)V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, setSchema, void, $Schema*)},
	{"setXIncludeAware", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DocumentBuilderFactoryImpl, setXIncludeAware, void, bool)},
	{}
};

$ClassInfo _DocumentBuilderFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.DocumentBuilderFactoryImpl",
	"javax.xml.parsers.DocumentBuilderFactory",
	nullptr,
	_DocumentBuilderFactoryImpl_FieldInfo_,
	_DocumentBuilderFactoryImpl_MethodInfo_
};

$Object* allocate$DocumentBuilderFactoryImpl($Class* clazz) {
	return $of($alloc(DocumentBuilderFactoryImpl));
}

void DocumentBuilderFactoryImpl::init$() {
	$DocumentBuilderFactory::init$();
	this->fSecureProcess = true;
	$set(this, fSecurityManager, $new($XMLSecurityManager, true));
	$set(this, fSecurityPropertyMgr, $new($XMLSecurityPropertyManager));
}

$DocumentBuilder* DocumentBuilderFactoryImpl::newDocumentBuilder() {
	$useLocalCurrentObjectStackCache();
	if (this->grammar != nullptr && this->attributes != nullptr) {
		$init($JAXPConstants);
		if ($nc(this->attributes)->containsKey($JAXPConstants::JAXP_SCHEMA_LANGUAGE)) {
			$throwNew($ParserConfigurationException, $($SAXMessageFormatter::formatMessage(nullptr, "schema-already-specified"_s, $$new($ObjectArray, {$of($JAXPConstants::JAXP_SCHEMA_LANGUAGE)}))));
		} else {
			if ($nc(this->attributes)->containsKey($JAXPConstants::JAXP_SCHEMA_SOURCE)) {
				$throwNew($ParserConfigurationException, $($SAXMessageFormatter::formatMessage(nullptr, "schema-already-specified"_s, $$new($ObjectArray, {$of($JAXPConstants::JAXP_SCHEMA_SOURCE)}))));
			}
		}
	}
	try {
		return $new($DocumentBuilderImpl, this, this->attributes, this->features, this->fSecureProcess);
	} catch ($SAXException& se) {
		$throwNew($ParserConfigurationException, $(se->getMessage()));
	}
	$shouldNotReachHere();
}

void DocumentBuilderFactoryImpl::setAttribute($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		if (this->attributes != nullptr) {
			$nc(this->attributes)->remove(name);
		}
		return;
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashMap));
	}
	$var($String, pName, nullptr);
	if (($assign(pName, $nc(this->fSecurityManager)->find(name))) != nullptr) {
		$init($JdkProperty$State);
		$nc(this->fSecurityManager)->setLimit(name, $JdkProperty$State::APIPROPERTY, value);
		$nc(this->attributes)->put(pName, $($nc(this->fSecurityManager)->getLimitAsString(pName)));
		return;
	} else if (($assign(pName, $nc(this->fSecurityPropertyMgr)->find(name))) != nullptr) {
		$nc(this->attributes)->put(pName, value);
		return;
	}
	$nc(this->attributes)->put(name, value);
	try {
		$new($DocumentBuilderImpl, this, this->attributes, this->features);
	} catch ($Exception& e) {
		$nc(this->attributes)->remove(name);
		$throwNew($IllegalArgumentException, $(e->getMessage()));
	}
}

$Object* DocumentBuilderFactoryImpl::getAttribute($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, pName, nullptr);
	if (($assign(pName, $nc(this->fSecurityManager)->find(name))) != nullptr) {
		return $of($nc(this->attributes)->get(pName));
	} else if (($assign(pName, $nc(this->fSecurityPropertyMgr)->find(name))) != nullptr) {
		return $of($nc(this->attributes)->get(pName));
	}
	if (this->attributes != nullptr) {
		$var($Object, val, $nc(this->attributes)->get(name));
		if (val != nullptr) {
			return $of(val);
		}
	}
	$var($DOMParser, domParser, nullptr);
	try {
		$assign(domParser, $$new($DocumentBuilderImpl, this, this->attributes, this->features)->getDOMParser());
		return $of($nc(domParser)->getProperty(name));
	} catch ($SAXException& se1) {
		try {
			bool result = $nc(domParser)->getFeature(name);
			$init($Boolean);
			return $of(result ? $Boolean::TRUE : $Boolean::FALSE);
		} catch ($SAXException& se2) {
			$throwNew($IllegalArgumentException, $(se1->getMessage()));
		}
	}
	$shouldNotReachHere();
}

$Schema* DocumentBuilderFactoryImpl::getSchema() {
	return this->grammar;
}

void DocumentBuilderFactoryImpl::setSchema($Schema* grammar) {
	$set(this, grammar, grammar);
}

bool DocumentBuilderFactoryImpl::isXIncludeAware() {
	return this->isXIncludeAware$;
}

void DocumentBuilderFactoryImpl::setXIncludeAware(bool state) {
	this->isXIncludeAware$ = state;
}

bool DocumentBuilderFactoryImpl::getFeature($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		return this->fSecureProcess;
	}
	if (this->features != nullptr) {
		$var($Boolean, val, $cast($Boolean, $nc(this->features)->get(name)));
		if (val != nullptr) {
			return val->booleanValue();
		}
	}
	try {
		$var($DOMParser, domParser, $$new($DocumentBuilderImpl, this, this->attributes, this->features)->getDOMParser());
		return $nc(domParser)->getFeature(name);
	} catch ($SAXException& e) {
		$throwNew($ParserConfigurationException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

void DocumentBuilderFactoryImpl::setFeature($String* name, bool value) {
	$useLocalCurrentObjectStackCache();
	if (this->features == nullptr) {
		$set(this, features, $new($HashMap));
	}
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		if ($System::getSecurityManager() != nullptr && (!value)) {
			$throwNew($ParserConfigurationException, $($SAXMessageFormatter::formatMessage(nullptr, "jaxp-secureprocessing-feature"_s, nullptr)));
		}
		this->fSecureProcess = value;
		$init($Boolean);
		$nc(this->features)->put(name, value ? $Boolean::TRUE : $Boolean::FALSE);
		return;
	}
	$init($Boolean);
	$nc(this->features)->put(name, value ? $Boolean::TRUE : $Boolean::FALSE);
	try {
		$new($DocumentBuilderImpl, this, this->attributes, this->features);
	} catch ($SAXNotSupportedException& e) {
		$nc(this->features)->remove(name);
		$throwNew($ParserConfigurationException, $(e->getMessage()));
	} catch ($SAXNotRecognizedException& e) {
		$nc(this->features)->remove(name);
		$throwNew($ParserConfigurationException, $(e->getMessage()));
	}
}

DocumentBuilderFactoryImpl::DocumentBuilderFactoryImpl() {
}

$Class* DocumentBuilderFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(DocumentBuilderFactoryImpl, name, initialize, &_DocumentBuilderFactoryImpl_ClassInfo_, allocate$DocumentBuilderFactoryImpl);
	return class$;
}

$Class* DocumentBuilderFactoryImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
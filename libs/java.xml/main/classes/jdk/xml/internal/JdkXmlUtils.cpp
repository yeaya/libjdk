#include <jdk/xml/internal/JdkXmlUtils.h>

#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/jaxp/DocumentBuilderFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/util/ParserConfigurationSettings.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <java/lang/Number.h>
#include <java/lang/SecurityManager.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Builder.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <javax/xml/transform/TransformerConfigurationException.h>
#include <javax/xml/transform/TransformerFactory.h>
#include <javax/xml/transform/sax/SAXTransformerFactory.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/XMLReaderFactory.h>
#include <jcpp.h>

#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef DEFER
#undef DOM_FACTORY_ID
#undef FEATURE_SECURE_PROCESSING
#undef FILES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_PREFIXES_FEATURE
#undef PREFER
#undef RESOLVE
#undef SAX_DRIVER
#undef SAX_FACTORY_ID
#undef SAX_FEATURE_PREFIX
#undef SP_USE_CATALOG
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT

using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $DocumentBuilderFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::DocumentBuilderFactoryImpl;
using $SAXParserFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl;
using $ParserConfigurationSettings = ::com::sun::org::apache::xerces::internal::util::ParserConfigurationSettings;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Builder = ::javax::xml::catalog::CatalogFeatures$Builder;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $TransformerConfigurationException = ::javax::xml::transform::TransformerConfigurationException;
using $SAXTransformerFactory = ::javax::xml::transform::sax::SAXTransformerFactory;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $Document = ::org::w3c::dom::Document;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $XMLReaderFactory = ::org::xml::sax::helpers::XMLReaderFactory;

namespace jdk {
	namespace xml {
		namespace internal {

$FieldInfo _JdkXmlUtils_FieldInfo_[] = {
	{"DOM_FACTORY_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JdkXmlUtils, DOM_FACTORY_ID)},
	{"SAX_FACTORY_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JdkXmlUtils, SAX_FACTORY_ID)},
	{"SAX_DRIVER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JdkXmlUtils, SAX_DRIVER)},
	{"NAMESPACES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, NAMESPACES_FEATURE)},
	{"NAMESPACE_PREFIXES_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, NAMESPACE_PREFIXES_FEATURE)},
	{"USE_CATALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, USE_CATALOG)},
	{"SP_USE_CATALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, SP_USE_CATALOG)},
	{"CATALOG_FILES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, CATALOG_FILES)},
	{"CATALOG_DEFER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, CATALOG_DEFER)},
	{"CATALOG_PREFER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, CATALOG_PREFER)},
	{"CATALOG_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, CATALOG_RESOLVE)},
	{"USE_CATALOG_DEFAULT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JdkXmlUtils, USE_CATALOG_DEFAULT)},
	{"defaultSAXFactory", "Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JdkXmlUtils, defaultSAXFactory)},
	{}
};

$MethodInfo _JdkXmlUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JdkXmlUtils, init$, void)},
	{"catalogFeaturesConfig2Config", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lcom/sun/org/apache/xerces/internal/util/ParserConfigurationSettings;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, catalogFeaturesConfig2Config, void, $XMLComponentManager*, $ParserConfigurationSettings*)},
	{"catalogFeaturesConfig2Reader", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, catalogFeaturesConfig2Reader, void, $XMLComponentManager*, $XMLReader*)},
	{"getCatalogFeature", "(Ljavax/xml/catalog/CatalogFeatures;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getCatalogFeature, $String*, $CatalogFeatures*, $String*)},
	{"getCatalogFeatures", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/catalog/CatalogFeatures;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getCatalogFeatures, $CatalogFeatures*, $String*, $String*, $String*, $String*)},
	{"getDOMDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getDOMDocument, $Document*)},
	{"getDOMFactory", "(Z)Ljavax/xml/parsers/DocumentBuilderFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getDOMFactory, $DocumentBuilderFactory*, bool)},
	{"getQuoteChar", "(Ljava/lang/String;)C", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getQuoteChar, char16_t, $String*)},
	{"getSAXFactory", "(Z)Ljavax/xml/parsers/SAXParserFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getSAXFactory, $SAXParserFactory*, bool)},
	{"getSAXTransformFactory", "(Z)Ljavax/xml/transform/sax/SAXTransformerFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getSAXTransformFactory, $SAXTransformerFactory*, bool)},
	{"getValue", "(Ljava/lang/Object;I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getValue, int32_t, Object$*, int32_t)},
	{"getXMLReader", "(ZZ)Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, getXMLReader, $XMLReader*, bool, bool)},
	{"getXMLReaderWSAXFactory", "(Z)Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE | $STATIC, $staticMethod(JdkXmlUtils, getXMLReaderWSAXFactory, $XMLReader*, bool)},
	{"getXMLReaderWXMLReaderFactory", "()Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE | $STATIC, $staticMethod(JdkXmlUtils, getXMLReaderWXMLReaderFactory, $XMLReader*)},
	{"setXMLReaderPropertyIfSupport", "(Lorg/xml/sax/XMLReader;Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JdkXmlUtils, setXMLReaderPropertyIfSupport, void, $XMLReader*, $String*, Object$*, bool)},
	{}
};

$ClassInfo _JdkXmlUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.xml.internal.JdkXmlUtils",
	"java.lang.Object",
	nullptr,
	_JdkXmlUtils_FieldInfo_,
	_JdkXmlUtils_MethodInfo_
};

$Object* allocate$JdkXmlUtils($Class* clazz) {
	return $of($alloc(JdkXmlUtils));
}

$String* JdkXmlUtils::DOM_FACTORY_ID = nullptr;
$String* JdkXmlUtils::SAX_FACTORY_ID = nullptr;
$String* JdkXmlUtils::SAX_DRIVER = nullptr;
$String* JdkXmlUtils::NAMESPACES_FEATURE = nullptr;
$String* JdkXmlUtils::NAMESPACE_PREFIXES_FEATURE = nullptr;
$String* JdkXmlUtils::USE_CATALOG = nullptr;
$String* JdkXmlUtils::SP_USE_CATALOG = nullptr;
$String* JdkXmlUtils::CATALOG_FILES = nullptr;
$String* JdkXmlUtils::CATALOG_DEFER = nullptr;
$String* JdkXmlUtils::CATALOG_PREFER = nullptr;
$String* JdkXmlUtils::CATALOG_RESOLVE = nullptr;
bool JdkXmlUtils::USE_CATALOG_DEFAULT = false;
$SAXParserFactory* JdkXmlUtils::defaultSAXFactory = nullptr;

void JdkXmlUtils::init$() {
}

int32_t JdkXmlUtils::getValue(Object$* value, int32_t defValue) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return defValue;
	}
	if ($instanceOf($Number, value)) {
		return $nc(($cast($Number, value)))->intValue();
	} else if ($instanceOf($String, value)) {
		return $Integer::parseInt($($String::valueOf(value)));
	} else {
		$throwNew($IllegalArgumentException, $$str({"Unexpected class: "_s, $nc($of(value))->getClass()}));
	}
}

void JdkXmlUtils::setXMLReaderPropertyIfSupport($XMLReader* reader, $String* property, Object$* value, bool warn) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	try {
		$nc(reader)->setProperty(property, value);
	} catch ($SAXNotRecognizedException& e) {
		if (warn) {
			$XMLSecurityManager::printWarning($($nc($of(reader))->getClass()->getName()), property, e);
		}
	} catch ($SAXNotSupportedException& e) {
		if (warn) {
			$XMLSecurityManager::printWarning($($nc($of(reader))->getClass()->getName()), property, e);
		}
	}
}

$String* JdkXmlUtils::getCatalogFeature($CatalogFeatures* features, $String* name) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* feature = arr$->get(i$);
			{
				if ($nc($($nc(feature)->getPropertyName()))->equals(name)) {
					return $nc(features)->get(feature);
				}
			}
		}
	}
	return nullptr;
}

$CatalogFeatures* JdkXmlUtils::getCatalogFeatures($String* defer, $String* file, $String* prefer, $String* resolve) {
	$init(JdkXmlUtils);
	$var($CatalogFeatures$Builder, builder, $CatalogFeatures::builder());
	if (file != nullptr) {
		$init($CatalogFeatures$Feature);
		$assign(builder, $nc(builder)->with($CatalogFeatures$Feature::FILES, file));
	}
	if (prefer != nullptr) {
		$init($CatalogFeatures$Feature);
		$assign(builder, $nc(builder)->with($CatalogFeatures$Feature::PREFER, prefer));
	}
	if (defer != nullptr) {
		$init($CatalogFeatures$Feature);
		$assign(builder, $nc(builder)->with($CatalogFeatures$Feature::DEFER, defer));
	}
	if (resolve != nullptr) {
		$init($CatalogFeatures$Feature);
		$assign(builder, $nc(builder)->with($CatalogFeatures$Feature::RESOLVE, resolve));
	}
	return $nc(builder)->build();
}

void JdkXmlUtils::catalogFeaturesConfig2Config($XMLComponentManager* config1, $ParserConfigurationSettings* config2) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	bool supportCatalog = true;
	$init($XMLConstants);
	bool useCatalog = $nc(config1)->getFeature($XMLConstants::USE_CATALOG);
	try {
		$nc(config2)->setFeature(JdkXmlUtils::USE_CATALOG, useCatalog);
	} catch ($XMLConfigurationException& e) {
		supportCatalog = false;
	}
	if (supportCatalog && useCatalog) {
		try {
			{
				$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$CatalogFeatures$Feature* f = arr$->get(i$);
					{
						$var($String, var$0, $nc(f)->getPropertyName());
						$nc(config2)->setProperty(var$0, $(config1->getProperty($(f->getPropertyName()))));
					}
				}
			}
		} catch ($XMLConfigurationException& e) {
		}
	}
}

void JdkXmlUtils::catalogFeaturesConfig2Reader($XMLComponentManager* config, $XMLReader* reader) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	bool supportCatalog = true;
	$init($XMLConstants);
	bool useCatalog = $nc(config)->getFeature($XMLConstants::USE_CATALOG);
	try {
		$nc(reader)->setFeature(JdkXmlUtils::USE_CATALOG, useCatalog);
	} catch ($SAXNotRecognizedException& e) {
		supportCatalog = false;
	} catch ($SAXNotSupportedException& e) {
		supportCatalog = false;
	}
	if (supportCatalog && useCatalog) {
		try {
			{
				$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$CatalogFeatures$Feature* f = arr$->get(i$);
					{
						$var($String, var$0, $nc(f)->getPropertyName());
						$nc(reader)->setProperty(var$0, $(config->getProperty($(f->getPropertyName()))));
					}
				}
			}
		} catch ($SAXNotRecognizedException& e) {
		} catch ($SAXNotSupportedException& e) {
		}
	}
}

$XMLReader* JdkXmlUtils::getXMLReader(bool overrideDefaultParser, bool secureProcessing) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	$var($SAXParserFactory, saxFactory, nullptr);
	$var($XMLReader, reader, nullptr);
	$var($String, spSAXDriver, $SecuritySupport::getSystemProperty(JdkXmlUtils::SAX_DRIVER));
	if (spSAXDriver != nullptr) {
		$assign(reader, getXMLReaderWXMLReaderFactory());
	} else if (overrideDefaultParser) {
		$assign(reader, getXMLReaderWSAXFactory(overrideDefaultParser));
	}
	if (reader != nullptr) {
		if (secureProcessing) {
			try {
				$init($XMLConstants);
				reader->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, secureProcessing);
			} catch ($SAXException& e) {
				$init($XMLConstants);
				$XMLSecurityManager::printWarning($($of(reader)->getClass()->getName()), $XMLConstants::FEATURE_SECURE_PROCESSING, e);
			}
		}
		try {
			reader->setFeature(JdkXmlUtils::NAMESPACES_FEATURE, true);
			reader->setFeature(JdkXmlUtils::NAMESPACE_PREFIXES_FEATURE, false);
		} catch ($SAXException& se) {
		}
		return reader;
	}
	$assign(saxFactory, JdkXmlUtils::defaultSAXFactory);
	try {
		$assign(reader, $nc($($nc(saxFactory)->newSAXParser()))->getXMLReader());
	} catch ($ParserConfigurationException& ex) {
	} catch ($SAXException& ex) {
	}
	return reader;
}

$Document* JdkXmlUtils::getDOMDocument() {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	try {
		$var($DocumentBuilderFactory, dbf, JdkXmlUtils::getDOMFactory(false));
		return $nc($($nc(dbf)->newDocumentBuilder()))->newDocument();
	} catch ($ParserConfigurationException& pce) {
	}
	return nullptr;
}

$DocumentBuilderFactory* JdkXmlUtils::getDOMFactory(bool overrideDefaultParser) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	bool override$ = overrideDefaultParser;
	$var($String, spDOMFactory, $SecuritySupport::getJAXPSystemProperty(JdkXmlUtils::DOM_FACTORY_ID));
	if (spDOMFactory != nullptr && $System::getSecurityManager() == nullptr) {
		override$ = true;
	}
	$var($DocumentBuilderFactory, dbf, !override$ ? static_cast<$DocumentBuilderFactory*>($new($DocumentBuilderFactoryImpl)) : $DocumentBuilderFactory::newInstance());
	$nc(dbf)->setNamespaceAware(true);
	dbf->setValidating(false);
	return dbf;
}

$SAXParserFactory* JdkXmlUtils::getSAXFactory(bool overrideDefaultParser) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	bool override$ = overrideDefaultParser;
	$var($String, spSAXFactory, $SecuritySupport::getJAXPSystemProperty(JdkXmlUtils::SAX_FACTORY_ID));
	if (spSAXFactory != nullptr && $System::getSecurityManager() == nullptr) {
		override$ = true;
	}
	$var($SAXParserFactory, factory, !override$ ? static_cast<$SAXParserFactory*>($new($SAXParserFactoryImpl)) : $SAXParserFactory::newInstance());
	$nc(factory)->setNamespaceAware(true);
	return factory;
}

$SAXTransformerFactory* JdkXmlUtils::getSAXTransformFactory(bool overrideDefaultParser) {
	$init(JdkXmlUtils);
	$var($SAXTransformerFactory, tf, overrideDefaultParser ? $cast($SAXTransformerFactory, $SAXTransformerFactory::newInstance()) : static_cast<$SAXTransformerFactory*>($new($TransformerFactoryImpl)));
	try {
		$nc(tf)->setFeature("jdk.xml.overrideDefaultParser"_s, overrideDefaultParser);
	} catch ($TransformerConfigurationException& ex) {
	}
	return tf;
}

char16_t JdkXmlUtils::getQuoteChar($String* s) {
	$init(JdkXmlUtils);
	if (s != nullptr && s->indexOf((int32_t)u'\"') > -1) {
		return u'\'';
	} else {
		return u'\"';
	}
}

$XMLReader* JdkXmlUtils::getXMLReaderWSAXFactory(bool overrideDefaultParser) {
	$init(JdkXmlUtils);
	$useLocalCurrentObjectStackCache();
	$var($SAXParserFactory, saxFactory, getSAXFactory(overrideDefaultParser));
	try {
		return $nc($($nc(saxFactory)->newSAXParser()))->getXMLReader();
	} catch ($ParserConfigurationException& ex) {
		return getXMLReaderWXMLReaderFactory();
	} catch ($SAXException& ex) {
		return getXMLReaderWXMLReaderFactory();
	}
	$shouldNotReachHere();
}

$XMLReader* JdkXmlUtils::getXMLReaderWXMLReaderFactory() {
	$init(JdkXmlUtils);
	try {
		return $XMLReaderFactory::createXMLReader();
	} catch ($SAXException& ex1) {
	}
	return nullptr;
}

void clinit$JdkXmlUtils($Class* class$) {
	$assignStatic(JdkXmlUtils::DOM_FACTORY_ID, "javax.xml.parsers.DocumentBuilderFactory"_s);
	$assignStatic(JdkXmlUtils::SAX_FACTORY_ID, "javax.xml.parsers.SAXParserFactory"_s);
	$assignStatic(JdkXmlUtils::SAX_DRIVER, "org.xml.sax.driver"_s);
	$init($Constants);
	$assignStatic(JdkXmlUtils::NAMESPACES_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(JdkXmlUtils::NAMESPACE_PREFIXES_FEATURE, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACE_PREFIXES_FEATURE}));
	$init($XMLConstants);
	$assignStatic(JdkXmlUtils::USE_CATALOG, $XMLConstants::USE_CATALOG);
	$assignStatic(JdkXmlUtils::SP_USE_CATALOG, "javax.xml.useCatalog"_s);
	$init($CatalogFeatures$Feature);
	$assignStatic(JdkXmlUtils::CATALOG_FILES, $CatalogFeatures$Feature::FILES->getPropertyName());
	$assignStatic(JdkXmlUtils::CATALOG_DEFER, $CatalogFeatures$Feature::DEFER->getPropertyName());
	$assignStatic(JdkXmlUtils::CATALOG_PREFER, $CatalogFeatures$Feature::PREFER->getPropertyName());
	$assignStatic(JdkXmlUtils::CATALOG_RESOLVE, $CatalogFeatures$Feature::RESOLVE->getPropertyName());
	$load($Boolean);
	JdkXmlUtils::USE_CATALOG_DEFAULT = $nc(($cast($Boolean, $($SecuritySupport::getJAXPSystemProperty($Boolean::class$, JdkXmlUtils::SP_USE_CATALOG, "true"_s)))))->booleanValue();
	$assignStatic(JdkXmlUtils::defaultSAXFactory, JdkXmlUtils::getSAXFactory(false));
}

JdkXmlUtils::JdkXmlUtils() {
}

$Class* JdkXmlUtils::load$($String* name, bool initialize) {
	$loadClass(JdkXmlUtils, name, initialize, &_JdkXmlUtils_ClassInfo_, clinit$JdkXmlUtils, allocate$JdkXmlUtils);
	return class$;
}

$Class* JdkXmlUtils::class$ = nullptr;

		} // internal
	} // xml
} // jdk
#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager.h>

#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager$ReaderWrapper.h>
#include <java/lang/ThreadLocal.h>
#include <java/util/HashMap.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef CATALOG_FEATURES
#undef CDATA_CHUNK_SIZE
#undef EXTERNAL_ACCESS_DEFAULT
#undef FEATURE_SECURE_PROCESSING
#undef JDK_DEBUG_LIMIT
#undef JDK_YES
#undef SECURITY_MANAGER
#undef TRUE
#undef USE_CATALOG

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>;
using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit;
using $XMLReaderManager$ReaderWrapper = ::com::sun::org::apache::xml::internal::utils::XMLReaderManager$ReaderWrapper;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $HashMap = ::java::util::HashMap;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _XMLReaderManager_FieldInfo_[] = {
	{"m_singletonManager", "Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLReaderManager, m_singletonManager)},
	{"property", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLReaderManager, property)},
	{"m_readers", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager$ReaderWrapper;>;", $PRIVATE, $field(XMLReaderManager, m_readers)},
	{"m_inUse", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lorg/xml/sax/XMLReader;Ljava/lang/Boolean;>;", $PRIVATE, $field(XMLReaderManager, m_inUse)},
	{"m_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(XMLReaderManager, m_overrideDefaultParser)},
	{"_secureProcessing", "Z", nullptr, $PRIVATE, $field(XMLReaderManager, _secureProcessing)},
	{"_accessExternalDTD", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLReaderManager, _accessExternalDTD)},
	{"_xmlSecurityManager", "Lcom/sun/org/apache/xalan/internal/utils/XMLSecurityManager;", nullptr, $PRIVATE, $field(XMLReaderManager, _xmlSecurityManager)},
	{"_useCatalog", "Z", nullptr, $PRIVATE, $field(XMLReaderManager, _useCatalog)},
	{"_catalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, $PRIVATE, $field(XMLReaderManager, _catalogFeatures)},
	{"_cdataChunkSize", "I", nullptr, $PRIVATE, $field(XMLReaderManager, _cdataChunkSize)},
	{}
};

$MethodInfo _XMLReaderManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XMLReaderManager, init$, void)},
	{"getInstance", "(Z)Lcom/sun/org/apache/xml/internal/utils/XMLReaderManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLReaderManager, getInstance, XMLReaderManager*, bool)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLReaderManager, getProperty, $Object*, $String*)},
	{"getXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XMLReaderManager, getXMLReader, $XMLReader*), "org.xml.sax.SAXException"},
	{"overrideDefaultParser", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLReaderManager, overrideDefaultParser, bool)},
	{"releaseXMLReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XMLReaderManager, releaseXMLReader, void, $XMLReader*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderManager, setFeature, void, $String*, bool)},
	{"setOverrideDefaultParser", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderManager, setOverrideDefaultParser, void, bool)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLReaderManager, setProperty, void, $String*, Object$*)},
	{}
};

$InnerClassInfo _XMLReaderManager_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.utils.XMLReaderManager$ReaderWrapper", "com.sun.org.apache.xml.internal.utils.XMLReaderManager", "ReaderWrapper", 0},
	{}
};

$ClassInfo _XMLReaderManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.XMLReaderManager",
	"java.lang.Object",
	nullptr,
	_XMLReaderManager_FieldInfo_,
	_XMLReaderManager_MethodInfo_,
	nullptr,
	nullptr,
	_XMLReaderManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.utils.XMLReaderManager$ReaderWrapper"
};

$Object* allocate$XMLReaderManager($Class* clazz) {
	return $of($alloc(XMLReaderManager));
}

XMLReaderManager* XMLReaderManager::m_singletonManager = nullptr;
$String* XMLReaderManager::property = nullptr;

void XMLReaderManager::init$() {
	$init($JdkConstants);
	$set(this, _accessExternalDTD, $JdkConstants::EXTERNAL_ACCESS_DEFAULT);
}

XMLReaderManager* XMLReaderManager::getInstance(bool overrideDefaultParser) {
	$init(XMLReaderManager);
	$nc(XMLReaderManager::m_singletonManager)->setOverrideDefaultParser(overrideDefaultParser);
	return XMLReaderManager::m_singletonManager;
}

$XMLReader* XMLReaderManager::getXMLReader() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($XMLReader, reader, nullptr);
		if (this->m_readers == nullptr) {
			$set(this, m_readers, $new($ThreadLocal));
		}
		if (this->m_inUse == nullptr) {
			$set(this, m_inUse, $new($HashMap));
		}
		$var($XMLReaderManager$ReaderWrapper, rw, $cast($XMLReaderManager$ReaderWrapper, $nc(this->m_readers)->get()));
		bool threadHasReader = (rw != nullptr);
		$assign(reader, threadHasReader ? rw->reader : ($XMLReader*)nullptr);
		$var($String, factory, $SecuritySupport::getSystemProperty(XMLReaderManager::property));
		$init($Boolean);
		bool var$0 = threadHasReader && !$equals($nc(this->m_inUse)->get(reader), $Boolean::TRUE) && (rw->overrideDefaultParser == this->m_overrideDefaultParser);
		if (var$0 && (factory == nullptr || $nc($($nc($of(reader))->getClass()->getName()))->equals(factory))) {
			$nc(this->m_inUse)->put(reader, $Boolean::TRUE);
		} else {
			$assign(reader, $JdkXmlUtils::getXMLReader(this->m_overrideDefaultParser, this->_secureProcessing));
			if (!threadHasReader) {
				$nc(this->m_readers)->set($$new($XMLReaderManager$ReaderWrapper, this, reader, this->m_overrideDefaultParser));
				$nc(this->m_inUse)->put(reader, $Boolean::TRUE);
			}
		}
		$init($XMLConstants);
		$JdkXmlUtils::setXMLReaderPropertyIfSupport(reader, $XMLConstants::ACCESS_EXTERNAL_DTD, this->_accessExternalDTD, true);
		$init($JdkConstants);
		$JdkXmlUtils::setXMLReaderPropertyIfSupport(reader, $JdkConstants::CDATA_CHUNK_SIZE, $($Integer::valueOf(this->_cdataChunkSize)), false);
		$var($String, lastProperty, ""_s);
		try {
			if (this->_xmlSecurityManager != nullptr) {
				{
					$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$XMLSecurityManager$Limit* limit = arr$->get(i$);
						{
							$assign(lastProperty, $nc(limit)->apiProperty());
							$nc(reader)->setProperty(lastProperty, $($nc(this->_xmlSecurityManager)->getLimitValueAsString(limit)));
						}
					}
				}
				if ($nc(this->_xmlSecurityManager)->printEntityCountInfo()) {
					$assign(lastProperty, $JdkConstants::JDK_DEBUG_LIMIT);
					$nc(reader)->setProperty(lastProperty, $JdkConstants::JDK_YES);
				}
			}
		} catch ($SAXException& se) {
			$XMLSecurityManager::printWarning($($nc($of(reader))->getClass()->getName()), lastProperty, se);
		}
		bool supportCatalog = true;
		try {
			$nc(reader)->setFeature($JdkXmlUtils::USE_CATALOG, this->_useCatalog);
		} catch ($SAXNotRecognizedException& e) {
			supportCatalog = false;
		} catch ($SAXNotSupportedException& e) {
			supportCatalog = false;
		}
		if (supportCatalog && this->_useCatalog && this->_catalogFeatures != nullptr) {
			try {
				{
					$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$CatalogFeatures$Feature* f = arr$->get(i$);
						{
							$var($String, var$1, $nc(f)->getPropertyName());
							$nc(reader)->setProperty(var$1, $($nc(this->_catalogFeatures)->get(f)));
						}
					}
				}
			} catch ($SAXNotRecognizedException& e) {
			}
		}
		return reader;
	}
}

void XMLReaderManager::releaseXMLReader($XMLReader* reader) {
	$synchronized(this) {
		$var($XMLReaderManager$ReaderWrapper, rw, $cast($XMLReaderManager$ReaderWrapper, $nc(this->m_readers)->get()));
		if ($nc(rw)->reader == reader && reader != nullptr) {
			$nc(this->m_inUse)->remove(reader);
		}
	}
}

bool XMLReaderManager::overrideDefaultParser() {
	return this->m_overrideDefaultParser;
}

void XMLReaderManager::setOverrideDefaultParser(bool flag) {
	this->m_overrideDefaultParser = flag;
}

void XMLReaderManager::setFeature($String* name, bool value) {
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		this->_secureProcessing = value;
	} else {
		if ($nc($XMLConstants::USE_CATALOG)->equals(name)) {
			this->_useCatalog = value;
		}
	}
}

$Object* XMLReaderManager::getProperty($String* name) {
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::ACCESS_EXTERNAL_DTD)) {
		return $of(this->_accessExternalDTD);
	} else {
		$init($JdkConstants);
		if (name->equals($JdkConstants::SECURITY_MANAGER)) {
			return $of(this->_xmlSecurityManager);
		}
	}
	return $of(nullptr);
}

void XMLReaderManager::setProperty($String* name, Object$* value) {
	$init($XMLConstants);
	if ($nc(name)->equals($XMLConstants::ACCESS_EXTERNAL_DTD)) {
		$set(this, _accessExternalDTD, $cast($String, value));
	} else {
		$init($JdkConstants);
		if (name->equals($JdkConstants::SECURITY_MANAGER)) {
			$set(this, _xmlSecurityManager, $cast($XMLSecurityManager, value));
		} else {
			$init($JdkXmlFeatures);
			if ($nc($JdkXmlFeatures::CATALOG_FEATURES)->equals(name)) {
				$set(this, _catalogFeatures, $cast($CatalogFeatures, value));
			} else {
				if ($nc($JdkConstants::CDATA_CHUNK_SIZE)->equals(name)) {
					this->_cdataChunkSize = $JdkXmlUtils::getValue(value, this->_cdataChunkSize);
				}
			}
		}
	}
}

void clinit$XMLReaderManager($Class* class$) {
	$assignStatic(XMLReaderManager::property, "org.xml.sax.driver"_s);
	$assignStatic(XMLReaderManager::m_singletonManager, $new(XMLReaderManager));
}

XMLReaderManager::XMLReaderManager() {
}

$Class* XMLReaderManager::load$($String* name, bool initialize) {
	$loadClass(XMLReaderManager, name, initialize, &_XMLReaderManager_ClassInfo_, clinit$XMLReaderManager, allocate$XMLReaderManager);
	return class$;
}

$Class* XMLReaderManager::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
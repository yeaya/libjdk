#include <com/sun/org/apache/xalan/internal/xsltc/trax/Util.h>

#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager$Limit.h>
#include <com/sun/org/apache/xalan/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/DOM2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXEvent2SAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/StAXStream2SAX.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/SecurityException.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/TransformerConfigurationException.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <javax/xml/transform/stax/StAXSource.h>
#include <javax/xml/transform/stream/StreamSource.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlFeatures$XmlFeature.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef CATALOG_FEATURES
#undef CDATA_CHUNK_SIZE
#undef FILE_ACCESS_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
#undef JDK_DEBUG_LIMIT
#undef JDK_OVERRIDE_PARSER
#undef JDK_YES
#undef NAMESPACES_FEATURE
#undef NAMESPACE_PREFIXES_FEATURE
#undef SECURITY_MANAGER
#undef USE_CATALOG

using $XMLSecurityManager$LimitArray = $Array<::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit>;
using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $XMLSecurityManager = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager;
using $XMLSecurityManager$Limit = ::com::sun::org::apache::xalan::internal::utils::XMLSecurityManager$Limit;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $DOM2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::DOM2SAX;
using $StAXEvent2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX;
using $StAXStream2SAX = ::com::sun::org::apache::xalan::internal::xsltc::trax::StAXStream2SAX;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $Source = ::javax::xml::transform::Source;
using $TransformerConfigurationException = ::javax::xml::transform::TransformerConfigurationException;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $StAXSource = ::javax::xml::transform::stax::StAXSource;
using $StreamSource = ::javax::xml::transform::stream::StreamSource;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $JdkXmlFeatures$XmlFeature = ::jdk::xml::internal::JdkXmlFeatures$XmlFeature;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _Util_FieldInfo_[] = {
	{"property", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Util, property)},
	{}
};

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Util, init$, void)},
	{"baseName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, baseName, $String*, $String*)},
	{"getInputSource", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;Ljavax/xml/transform/Source;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, getInputSource, $InputSource*, $XSLTC*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
	{"noExtName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, noExtName, $String*, $String*)},
	{"toJavaName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, toJavaName, $String*, $String*)},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.Util",
	"java.lang.Object",
	nullptr,
	_Util_FieldInfo_,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

$String* Util::property = nullptr;

void Util::init$() {
}

$String* Util::baseName($String* name) {
	$init(Util);
	return $Util::baseName(name);
}

$String* Util::noExtName($String* name) {
	$init(Util);
	return $Util::noExtName(name);
}

$String* Util::toJavaName($String* name) {
	$init(Util);
	return $Util::toJavaName(name);
}

$InputSource* Util::getInputSource($XSLTC* xsltc, $Source* source) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	$var($InputSource, input, nullptr);
	$var($String, systemId, $nc(source)->getSystemId());
	try {
		if ($instanceOf($SAXSource, source)) {
			$var($SAXSource, sax, $cast($SAXSource, source));
			$assign(input, sax->getInputSource());
			try {
				$var($XMLReader, reader, sax->getXMLReader());
				if (reader == nullptr) {
					$init($JdkXmlFeatures$XmlFeature);
					bool overrideDefaultParser = $nc(xsltc)->getFeature($JdkXmlFeatures$XmlFeature::JDK_OVERRIDE_PARSER);
					$assign(reader, $JdkXmlUtils::getXMLReader(overrideDefaultParser, xsltc->isSecureProcessing()));
				} else {
					$init($JdkXmlUtils);
					$nc(reader)->setFeature($JdkXmlUtils::NAMESPACES_FEATURE, true);
					reader->setFeature($JdkXmlUtils::NAMESPACE_PREFIXES_FEATURE, false);
				}
				$init($XMLConstants);
				$JdkXmlUtils::setXMLReaderPropertyIfSupport(reader, $XMLConstants::ACCESS_EXTERNAL_DTD, $($nc(xsltc)->getProperty($XMLConstants::ACCESS_EXTERNAL_DTD)), true);
				$init($JdkConstants);
				$JdkXmlUtils::setXMLReaderPropertyIfSupport(reader, $JdkConstants::CDATA_CHUNK_SIZE, $($nc(xsltc)->getProperty($JdkConstants::CDATA_CHUNK_SIZE)), false);
				$var($String, lastProperty, ""_s);
				try {
					$var($XMLSecurityManager, securityManager, $cast($XMLSecurityManager, $nc(xsltc)->getProperty($JdkConstants::SECURITY_MANAGER)));
					if (securityManager != nullptr) {
						{
							$var($XMLSecurityManager$LimitArray, arr$, $XMLSecurityManager$Limit::values());
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$XMLSecurityManager$Limit* limit = arr$->get(i$);
								{
									$assign(lastProperty, $nc(limit)->apiProperty());
									$nc(reader)->setProperty(lastProperty, $(securityManager->getLimitValueAsString(limit)));
								}
							}
						}
						if (securityManager->printEntityCountInfo()) {
							$assign(lastProperty, $JdkConstants::JDK_DEBUG_LIMIT);
							$nc(reader)->setProperty(lastProperty, $JdkConstants::JDK_YES);
						}
					}
				} catch ($SAXException& se) {
					$XMLSecurityManager::printWarning($($nc($of(reader))->getClass()->getName()), lastProperty, se);
				}
				bool supportCatalog = true;
				$init($JdkXmlFeatures$XmlFeature);
				bool useCatalog = $nc(xsltc)->getFeature($JdkXmlFeatures$XmlFeature::USE_CATALOG);
				try {
					$nc(reader)->setFeature($JdkXmlUtils::USE_CATALOG, useCatalog);
				} catch ($SAXNotRecognizedException& e) {
					supportCatalog = false;
				} catch ($SAXNotSupportedException& e) {
					supportCatalog = false;
				}
				if (supportCatalog & useCatalog) {
					try {
						$init($JdkXmlFeatures);
						$var($CatalogFeatures, cf, $cast($CatalogFeatures, xsltc->getProperty($JdkXmlFeatures::CATALOG_FEATURES)));
						if (cf != nullptr) {
							{
								$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
								int32_t len$ = $nc(arr$)->length;
								int32_t i$ = 0;
								for (; i$ < len$; ++i$) {
									$CatalogFeatures$Feature* f = arr$->get(i$);
									{
										$var($String, var$0, $nc(f)->getPropertyName());
										$nc(reader)->setProperty(var$0, $(cf->get(f)));
									}
								}
							}
						}
					} catch ($SAXNotRecognizedException& e) {
					}
				}
				xsltc->setXMLReader(reader);
			} catch ($SAXNotRecognizedException& snre) {
				$throwNew($TransformerConfigurationException, "SAXNotRecognizedException "_s, static_cast<$Throwable*>(snre));
			} catch ($SAXNotSupportedException& snse) {
				$throwNew($TransformerConfigurationException, "SAXNotSupportedException "_s, static_cast<$Throwable*>(snse));
			}
		} else if ($instanceOf($DOMSource, source)) {
			$var($DOMSource, domsrc, $cast($DOMSource, source));
			$var($Document, dom, $cast($Document, domsrc->getNode()));
			$var($DOM2SAX, dom2sax, $new($DOM2SAX, dom));
			$nc(xsltc)->setXMLReader(dom2sax);
			$assign(input, $SAXSource::sourceToInputSource(source));
			if (input == nullptr) {
				$assign(input, $new($InputSource, $(domsrc->getSystemId())));
			}
		} else if ($instanceOf($StAXSource, source)) {
			$var($StAXSource, staxSource, $cast($StAXSource, source));
			$var($StAXEvent2SAX, staxevent2sax, nullptr);
			$var($StAXStream2SAX, staxStream2SAX, nullptr);
			if (staxSource->getXMLEventReader() != nullptr) {
				$var($XMLEventReader, xmlEventReader, staxSource->getXMLEventReader());
				$assign(staxevent2sax, $new($StAXEvent2SAX, xmlEventReader));
				$nc(xsltc)->setXMLReader(staxevent2sax);
			} else if (staxSource->getXMLStreamReader() != nullptr) {
				$var($XMLStreamReader, xmlStreamReader, staxSource->getXMLStreamReader());
				$assign(staxStream2SAX, $new($StAXStream2SAX, xmlStreamReader));
				$nc(xsltc)->setXMLReader(staxStream2SAX);
			}
			$assign(input, $SAXSource::sourceToInputSource(source));
			if (input == nullptr) {
				$assign(input, $new($InputSource, $(staxSource->getSystemId())));
			}
		} else if ($instanceOf($StreamSource, source)) {
			$var($StreamSource, stream, $cast($StreamSource, source));
			$var($InputStream, istream, stream->getInputStream());
			$var($Reader, reader, stream->getReader());
			$nc(xsltc)->setXMLReader(nullptr);
			if (istream != nullptr) {
				$assign(input, $new($InputSource, istream));
			} else if (reader != nullptr) {
				$assign(input, $new($InputSource, reader));
			} else {
				$assign(input, $new($InputSource, systemId));
			}
		} else {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR));
			$throwNew($TransformerConfigurationException, $(err->toString()));
		}
		$nc(input)->setSystemId(systemId);
	} catch ($NullPointerException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_NO_SOURCE_ERR, $of("TransformerFactory.newTemplates()"_s)));
		$throwNew($TransformerConfigurationException, $(err->toString()));
	} catch ($SecurityException& e) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::FILE_ACCESS_ERR, $of(systemId)));
		$throwNew($TransformerConfigurationException, $(err->toString()));
	}
	return input;
}

Util::Util() {
}

void clinit$Util($Class* class$) {
	$assignStatic(Util::property, "org.xml.sax.driver"_s);
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, clinit$Util, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
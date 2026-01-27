#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesHandlerImpl.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CompilerException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/Util.h>
#include <java/util/ArrayList.h>
#include <java/util/Properties.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/URIResolver.h>
#include <javax/xml/transform/sax/TemplatesHandler.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlFeatures.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_STYLESHEET
#undef BYTEARRAY_OUTPUT
#undef CATALOG_FEATURES
#undef ENABLE_INLINING
#undef FEATURE_SECURE_PROCESSING
#undef FILES
#undef JAXP_COMPILE_ERR
#undef SECURITY_MANAGER
#undef USE_CATALOG

using $byteArray2 = $Array<int8_t, 2>;
using $CompilerException = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CompilerException;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SourceLoader = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $TemplatesImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TemplatesImpl;
using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::trax::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $Source = ::javax::xml::transform::Source;
using $Templates = ::javax::xml::transform::Templates;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $TemplatesHandler = ::javax::xml::transform::sax::TemplatesHandler;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlFeatures = ::jdk::xml::internal::JdkXmlFeatures;
using $Attributes = ::org::xml::sax::Attributes;
using $InputSource = ::org::xml::sax::InputSource;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TemplatesHandlerImpl_FieldInfo_[] = {
	{"_systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TemplatesHandlerImpl, _systemId)},
	{"_indentNumber", "I", nullptr, $PRIVATE, $field(TemplatesHandlerImpl, _indentNumber)},
	{"_uriResolver", "Ljavax/xml/transform/URIResolver;", nullptr, $PRIVATE, $field(TemplatesHandlerImpl, _uriResolver)},
	{"_tfactory", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;", nullptr, $PRIVATE, $field(TemplatesHandlerImpl, _tfactory)},
	{"_parser", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;", nullptr, $PRIVATE, $field(TemplatesHandlerImpl, _parser)},
	{"_templates", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl;", nullptr, $PRIVATE, $field(TemplatesHandlerImpl, _templates)},
	{"_catalogFeatures", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(TemplatesHandlerImpl, _catalogFeatures)},
	{"_useCatalog", "Z", nullptr, 0, $field(TemplatesHandlerImpl, _useCatalog)},
	{}
};

$MethodInfo _TemplatesHandlerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl;Z)V", nullptr, $PROTECTED, $method(TemplatesHandlerImpl, init$, void, int32_t, $TransformerFactoryImpl*, bool)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, characters, void, $chars*, int32_t, int32_t)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, endElement, void, $String*, $String*, $String*)},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, endPrefixMapping, void, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, getSystemId, $String*)},
	{"getTemplates", "()Ljavax/xml/transform/Templates;", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, getTemplates, $Templates*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, ignorableWhitespace, void, $chars*, int32_t, int32_t)},
	{"loadSource", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, loadSource, $InputSource*, $String*, $String*, $XSLTC*)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, processingInstruction, void, $String*, $String*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, setDocumentLocator, void, $Locator*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, setSystemId, void, $String*)},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, setURIResolver, void, $URIResolver*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, skippedEntity, void, $String*)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, startDocument, void)},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TemplatesHandlerImpl, startPrefixMapping, void, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TemplatesHandlerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesHandlerImpl",
	"java.lang.Object",
	"javax.xml.transform.sax.TemplatesHandler,com.sun.org.apache.xalan.internal.xsltc.compiler.SourceLoader",
	_TemplatesHandlerImpl_FieldInfo_,
	_TemplatesHandlerImpl_MethodInfo_
};

$Object* allocate$TemplatesHandlerImpl($Class* clazz) {
	return $of($alloc(TemplatesHandlerImpl));
}

int32_t TemplatesHandlerImpl::hashCode() {
	 return this->$TemplatesHandler::hashCode();
}

bool TemplatesHandlerImpl::equals(Object$* arg0) {
	 return this->$TemplatesHandler::equals(arg0);
}

$Object* TemplatesHandlerImpl::clone() {
	 return this->$TemplatesHandler::clone();
}

$String* TemplatesHandlerImpl::toString() {
	 return this->$TemplatesHandler::toString();
}

void TemplatesHandlerImpl::finalize() {
	this->$TemplatesHandler::finalize();
}

void TemplatesHandlerImpl::init$(int32_t indentNumber, $TransformerFactoryImpl* tfactory, bool hasUserErrListener) {
	$useLocalCurrentObjectStackCache();
	$set(this, _uriResolver, nullptr);
	$set(this, _tfactory, nullptr);
	$set(this, _parser, nullptr);
	$set(this, _templates, nullptr);
	this->_useCatalog = true;
	this->_indentNumber = indentNumber;
	$set(this, _tfactory, tfactory);
	$var($XSLTC, xsltc, $new($XSLTC, $($nc(tfactory)->getJdkXmlFeatures()), hasUserErrListener));
	$init($XMLConstants);
	if ($nc(tfactory)->getFeature($XMLConstants::FEATURE_SECURE_PROCESSING)) {
		xsltc->setSecureProcessing(true);
	}
	xsltc->setProperty($XMLConstants::ACCESS_EXTERNAL_STYLESHEET, $cast($String, $($nc(tfactory)->getAttribute($XMLConstants::ACCESS_EXTERNAL_STYLESHEET))));
	xsltc->setProperty($XMLConstants::ACCESS_EXTERNAL_DTD, $cast($String, $($nc(tfactory)->getAttribute($XMLConstants::ACCESS_EXTERNAL_DTD))));
	$init($JdkConstants);
	xsltc->setProperty($JdkConstants::SECURITY_MANAGER, $($nc(tfactory)->getAttribute($JdkConstants::SECURITY_MANAGER)));
	if ("true"_s->equals($($nc(tfactory)->getAttribute($TransformerFactoryImpl::ENABLE_INLINING)))) {
		xsltc->setTemplateInlining(true);
	} else {
		xsltc->setTemplateInlining(false);
	}
	this->_useCatalog = $nc(tfactory)->getFeature($XMLConstants::USE_CATALOG);
	$init($JdkXmlFeatures);
	$set(this, _catalogFeatures, $cast($CatalogFeatures, tfactory->getAttribute($JdkXmlFeatures::CATALOG_FEATURES)));
	xsltc->setProperty($JdkXmlFeatures::CATALOG_FEATURES, this->_catalogFeatures);
	$set(this, _parser, xsltc->getParser());
}

$String* TemplatesHandlerImpl::getSystemId() {
	return this->_systemId;
}

void TemplatesHandlerImpl::setSystemId($String* id) {
	$set(this, _systemId, id);
}

void TemplatesHandlerImpl::setURIResolver($URIResolver* resolver) {
	$set(this, _uriResolver, resolver);
}

$Templates* TemplatesHandlerImpl::getTemplates() {
	return this->_templates;
}

$InputSource* TemplatesHandlerImpl::loadSource($String* href, $String* context, $XSLTC* xsltc) {
	try {
		$var($Source, source, $nc(this->_uriResolver)->resolve(href, context));
		if (source != nullptr) {
			return $Util::getInputSource(xsltc, source);
		}
	} catch ($TransformerException& e) {
	}
	return nullptr;
}

void TemplatesHandlerImpl::startDocument() {
	$var($XSLTC, xsltc, $nc(this->_parser)->getXSLTC());
	$nc(xsltc)->init();
	xsltc->setOutputType($XSLTC::BYTEARRAY_OUTPUT);
	$nc(this->_parser)->startDocument();
}

void TemplatesHandlerImpl::endDocument() {
	$useLocalCurrentObjectStackCache();
	$nc(this->_parser)->endDocument();
	try {
		$var($XSLTC, xsltc, $nc(this->_parser)->getXSLTC());
		$var($String, transletName, nullptr);
		if (this->_systemId != nullptr) {
			$assign(transletName, $Util::baseName(this->_systemId));
		} else {
			$assign(transletName, $cast($String, $nc(this->_tfactory)->getAttribute("translet-name"_s)));
		}
		$nc(xsltc)->setClassName(transletName);
		$assign(transletName, xsltc->getClassName());
		$var($Stylesheet, stylesheet, nullptr);
		$var($SyntaxTreeNode, root, $nc(this->_parser)->getDocumentRoot());
		if (!$nc(this->_parser)->errorsFound() && root != nullptr) {
			$assign(stylesheet, $nc(this->_parser)->makeStylesheet(root));
			$nc(stylesheet)->setSystemId(this->_systemId);
			stylesheet->setParentStylesheet(nullptr);
			if (xsltc->getTemplateInlining()) {
				stylesheet->setTemplateInlining(true);
			} else {
				stylesheet->setTemplateInlining(false);
			}
			$init($CatalogFeatures$Feature);
			if (this->_uriResolver != nullptr || (this->_useCatalog && $nc(this->_catalogFeatures)->get($CatalogFeatures$Feature::FILES) != nullptr)) {
				stylesheet->setSourceLoader(this);
			}
			$nc(this->_parser)->setCurrentStylesheet(stylesheet);
			xsltc->setStylesheet(stylesheet);
			$nc(this->_parser)->createAST(stylesheet);
		}
		if (!$nc(this->_parser)->errorsFound() && stylesheet != nullptr) {
			stylesheet->setMultiDocument(xsltc->isMultiDocument());
			stylesheet->setHasIdCall(xsltc->hasIdCall());
			$synchronized($of(xsltc)->getClass()) {
				stylesheet->translate();
			}
		}
		if (!$nc(this->_parser)->errorsFound()) {
			$var($byteArray2, bytecodes, xsltc->getBytecodes());
			if (bytecodes != nullptr) {
				$var($byteArray2, var$0, xsltc->getBytecodes());
				$var($String, var$1, transletName);
				$set(this, _templates, $new($TemplatesImpl, var$0, var$1, $($nc(this->_parser)->getOutputProperties()), this->_indentNumber, this->_tfactory));
				if (this->_uriResolver != nullptr) {
					$nc(this->_templates)->setURIResolver(this->_uriResolver);
				}
			}
		} else {
			$var($StringBuilder, errorMessage, $new($StringBuilder));
			$var($ArrayList, errors, $nc(this->_parser)->getErrors());
			int32_t count = $nc(errors)->size();
			for (int32_t i = 0; i < count; ++i) {
				if (errorMessage->length() > 0) {
					errorMessage->append(u'\n');
				}
				errorMessage->append($($nc(($cast($ErrorMsg, $(errors->get(i)))))->toString()));
			}
			$init($ErrorMsg);
			$throwNew($SAXException, $ErrorMsg::JAXP_COMPILE_ERR, $$new($TransformerException, $(errorMessage->toString())));
		}
	} catch ($CompilerException& e) {
		$init($ErrorMsg);
		$throwNew($SAXException, $ErrorMsg::JAXP_COMPILE_ERR, e);
	}
}

void TemplatesHandlerImpl::startPrefixMapping($String* prefix, $String* uri) {
	$nc(this->_parser)->startPrefixMapping(prefix, uri);
}

void TemplatesHandlerImpl::endPrefixMapping($String* prefix) {
	$nc(this->_parser)->endPrefixMapping(prefix);
}

void TemplatesHandlerImpl::startElement($String* uri, $String* localname, $String* qname, $Attributes* attributes) {
	$nc(this->_parser)->startElement(uri, localname, qname, attributes);
}

void TemplatesHandlerImpl::endElement($String* uri, $String* localname, $String* qname) {
	$nc(this->_parser)->endElement(uri, localname, qname);
}

void TemplatesHandlerImpl::characters($chars* ch, int32_t start, int32_t length) {
	$nc(this->_parser)->characters(ch, start, length);
}

void TemplatesHandlerImpl::processingInstruction($String* name, $String* value) {
	$nc(this->_parser)->processingInstruction(name, value);
}

void TemplatesHandlerImpl::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$nc(this->_parser)->ignorableWhitespace(ch, start, length);
}

void TemplatesHandlerImpl::skippedEntity($String* name) {
	$nc(this->_parser)->skippedEntity(name);
}

void TemplatesHandlerImpl::setDocumentLocator($Locator* locator) {
	setSystemId($($nc(locator)->getSystemId()));
	$nc(this->_parser)->setDocumentLocator(locator);
}

TemplatesHandlerImpl::TemplatesHandlerImpl() {
}

$Class* TemplatesHandlerImpl::load$($String* name, bool initialize) {
	$loadClass(TemplatesHandlerImpl, name, initialize, &_TemplatesHandlerImpl_ClassInfo_, allocate$TemplatesHandlerImpl);
	return class$;
}

$Class* TemplatesHandlerImpl::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
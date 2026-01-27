#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerHandlerImpl.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOMEnhancedForDTM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMBuilder.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/DOMWSFilter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/ExtendedSAX.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/XSLTCDTMManager.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerFactoryImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedLexicalHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/dom/DOMResult.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ER_RESULT_NULL
#undef JAXP_SET_RESULT_ERR

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $DOMEnhancedForDTM = ::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM;
using $StripFilter = ::com::sun::org::apache::xalan::internal::xsltc::StripFilter;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $DOMWSFilter = ::com::sun::org::apache::xalan::internal::xsltc::dom::DOMWSFilter;
using $ExtendedSAX = ::com::sun::org::apache::xalan::internal::xsltc::dom::ExtendedSAX;
using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $XSLTCDTMManager = ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $TransletOutputHandlerFactory = ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::TransletOutputHandlerFactory;
using $TransformerFactoryImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl;
using $TransformerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $ExtendedLexicalHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedLexicalHandler;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $DOMResult = ::javax::xml::transform::dom::DOMResult;
using $TransformerHandler = ::javax::xml::transform::sax::TransformerHandler;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TransformerHandlerImpl_FieldInfo_[] = {
	{"_transformer", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _transformer)},
	{"_translet", "Lcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _translet)},
	{"_systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _systemId)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _dom)},
	{"_handler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _handler)},
	{"_lexHandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _lexHandler)},
	{"_dtdHandler", "Lorg/xml/sax/DTDHandler;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _dtdHandler)},
	{"_declHandler", "Lorg/xml/sax/ext/DeclHandler;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _declHandler)},
	{"_result", "Ljavax/xml/transform/Result;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _result)},
	{"_locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _locator)},
	{"_done", "Z", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _done)},
	{"_isIdentity", "Z", nullptr, $PRIVATE, $field(TransformerHandlerImpl, _isIdentity)},
	{}
};

$MethodInfo _TransformerHandlerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl;)V", nullptr, $PUBLIC, $method(TransformerHandlerImpl, init$, void, $TransformerImpl*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, endDTD, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, endEntity, void, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, getSystemId, $String*)},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, getTransformer, $Transformer*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, reset, void)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, setDocumentLocator, void, $Locator*)},
	{"setResult", "(Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, setResult, void, $Result*), "java.lang.IllegalArgumentException"},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, setSystemId, void, $String*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerHandlerImpl, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _TransformerHandlerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerHandlerImpl",
	"java.lang.Object",
	"javax.xml.transform.sax.TransformerHandler,org.xml.sax.ext.DeclHandler",
	_TransformerHandlerImpl_FieldInfo_,
	_TransformerHandlerImpl_MethodInfo_
};

$Object* allocate$TransformerHandlerImpl($Class* clazz) {
	return $of($alloc(TransformerHandlerImpl));
}

int32_t TransformerHandlerImpl::hashCode() {
	 return this->$TransformerHandler::hashCode();
}

bool TransformerHandlerImpl::equals(Object$* arg0) {
	 return this->$TransformerHandler::equals(arg0);
}

$Object* TransformerHandlerImpl::clone() {
	 return this->$TransformerHandler::clone();
}

$String* TransformerHandlerImpl::toString() {
	 return this->$TransformerHandler::toString();
}

void TransformerHandlerImpl::finalize() {
	this->$TransformerHandler::finalize();
}

void TransformerHandlerImpl::init$($TransformerImpl* transformer) {
	$set(this, _translet, nullptr);
	$set(this, _dom, nullptr);
	$set(this, _handler, nullptr);
	$set(this, _lexHandler, nullptr);
	$set(this, _dtdHandler, nullptr);
	$set(this, _declHandler, nullptr);
	$set(this, _result, nullptr);
	$set(this, _locator, nullptr);
	this->_done = false;
	this->_isIdentity = false;
	$set(this, _transformer, transformer);
	if ($nc(transformer)->isIdentity()) {
		$set(this, _handler, $new($DefaultHandler));
		this->_isIdentity = true;
	} else {
		$set(this, _translet, $nc(this->_transformer)->getTranslet());
	}
}

$String* TransformerHandlerImpl::getSystemId() {
	return this->_systemId;
}

void TransformerHandlerImpl::setSystemId($String* id) {
	$set(this, _systemId, id);
}

$Transformer* TransformerHandlerImpl::getTransformer() {
	return this->_transformer;
}

void TransformerHandlerImpl::setResult($Result* result) {
	$useLocalCurrentObjectStackCache();
	$set(this, _result, result);
	if (nullptr == result) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::ER_RESULT_NULL));
		$throwNew($IllegalArgumentException, $(err->toString()));
	}
	if (this->_isIdentity) {
		try {
			$var($SerializationHandler, outputHandler, $nc(this->_transformer)->getOutputHandler(result));
			$nc(this->_transformer)->transferOutputProperties(outputHandler);
			$set(this, _handler, outputHandler);
			$set(this, _lexHandler, outputHandler);
		} catch ($TransformerException& e) {
			$set(this, _result, nullptr);
		}
	} else if (this->_done) {
		try {
			$nc(this->_transformer)->setDOM(this->_dom);
			$nc(this->_transformer)->transform(nullptr, this->_result);
		} catch ($TransformerException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
}

void TransformerHandlerImpl::characters($chars* ch, int32_t start, int32_t length) {
	$nc(this->_handler)->characters(ch, start, length);
}

void TransformerHandlerImpl::startDocument() {
	$useLocalCurrentObjectStackCache();
	if (this->_result == nullptr) {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::JAXP_SET_RESULT_ERR));
		$throwNew($SAXException, $(err->toString()));
	}
	if (!this->_isIdentity) {
		bool hasIdCall = (this->_translet != nullptr) ? $nc(this->_translet)->hasIdCall() : false;
		$var($XSLTCDTMManager, dtmManager, nullptr);
		try {
			$assign(dtmManager, $nc($($nc(this->_transformer)->getTransformerFactory()))->createNewDTMManagerInstance());
		} catch ($Exception& e) {
			$throwNew($SAXException, $cast($Exception, e));
		}
		$var($DTMWSFilter, wsFilter, nullptr);
		if (this->_translet != nullptr && $instanceOf($StripFilter, this->_translet)) {
			$assign(wsFilter, $new($DOMWSFilter, this->_translet));
		} else {
			$assign(wsFilter, nullptr);
		}
		$set(this, _dom, $cast($SAXImpl, $nc(dtmManager)->getDTM(nullptr, false, wsFilter, true, false, hasIdCall)));
		$set(this, _handler, $nc(this->_dom)->getBuilder());
		$set(this, _lexHandler, $cast($LexicalHandler, this->_handler));
		$set(this, _dtdHandler, $cast($DTDHandler, this->_handler));
		$set(this, _declHandler, $cast($DeclHandler, this->_handler));
		$nc(this->_dom)->setDocumentURI(this->_systemId);
		if (this->_locator != nullptr) {
			$nc(this->_handler)->setDocumentLocator(this->_locator);
		}
	}
	$nc(this->_handler)->startDocument();
}

void TransformerHandlerImpl::endDocument() {
	$useLocalCurrentObjectStackCache();
	$nc(this->_handler)->endDocument();
	if (!this->_isIdentity) {
		if (this->_result != nullptr) {
			try {
				$nc(this->_transformer)->setDOM(this->_dom);
				$nc(this->_transformer)->transform(nullptr, this->_result);
			} catch ($TransformerException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		}
		this->_done = true;
		$nc(this->_transformer)->setDOM(this->_dom);
	}
	if (this->_isIdentity && $instanceOf($DOMResult, this->_result)) {
		$nc(($cast($DOMResult, this->_result)))->setNode($($nc($($nc(this->_transformer)->getTransletOutputHandlerFactory()))->getNode()));
	}
}

void TransformerHandlerImpl::startElement($String* uri, $String* localName, $String* qname, $Attributes* attributes) {
	$nc(this->_handler)->startElement(uri, localName, qname, attributes);
}

void TransformerHandlerImpl::endElement($String* namespaceURI, $String* localName, $String* qname) {
	$nc(this->_handler)->endElement(namespaceURI, localName, qname);
}

void TransformerHandlerImpl::processingInstruction($String* target, $String* data) {
	$nc(this->_handler)->processingInstruction(target, data);
}

void TransformerHandlerImpl::startCDATA() {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->startCDATA();
	}
}

void TransformerHandlerImpl::endCDATA() {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->endCDATA();
	}
}

void TransformerHandlerImpl::comment($chars* ch, int32_t start, int32_t length) {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->comment(ch, start, length);
	}
}

void TransformerHandlerImpl::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	$nc(this->_handler)->ignorableWhitespace(ch, start, length);
}

void TransformerHandlerImpl::setDocumentLocator($Locator* locator) {
	$set(this, _locator, locator);
	if (this->_handler != nullptr) {
		$nc(this->_handler)->setDocumentLocator(locator);
	}
}

void TransformerHandlerImpl::skippedEntity($String* name) {
	$nc(this->_handler)->skippedEntity(name);
}

void TransformerHandlerImpl::startPrefixMapping($String* prefix, $String* uri) {
	$nc(this->_handler)->startPrefixMapping(prefix, uri);
}

void TransformerHandlerImpl::endPrefixMapping($String* prefix) {
	$nc(this->_handler)->endPrefixMapping(prefix);
}

void TransformerHandlerImpl::startDTD($String* name, $String* publicId, $String* systemId) {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->startDTD(name, publicId, systemId);
	}
}

void TransformerHandlerImpl::endDTD() {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->endDTD();
	}
}

void TransformerHandlerImpl::startEntity($String* name) {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->startEntity(name);
	}
}

void TransformerHandlerImpl::endEntity($String* name) {
	if (this->_lexHandler != nullptr) {
		$nc(this->_lexHandler)->endEntity(name);
	}
}

void TransformerHandlerImpl::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
	if (this->_dtdHandler != nullptr) {
		$nc(this->_dtdHandler)->unparsedEntityDecl(name, publicId, systemId, notationName);
	}
}

void TransformerHandlerImpl::notationDecl($String* name, $String* publicId, $String* systemId) {
	if (this->_dtdHandler != nullptr) {
		$nc(this->_dtdHandler)->notationDecl(name, publicId, systemId);
	}
}

void TransformerHandlerImpl::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
	if (this->_declHandler != nullptr) {
		$nc(this->_declHandler)->attributeDecl(eName, aName, type, valueDefault, value);
	}
}

void TransformerHandlerImpl::elementDecl($String* name, $String* model) {
	if (this->_declHandler != nullptr) {
		$nc(this->_declHandler)->elementDecl(name, model);
	}
}

void TransformerHandlerImpl::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
	if (this->_declHandler != nullptr) {
		$nc(this->_declHandler)->externalEntityDecl(name, publicId, systemId);
	}
}

void TransformerHandlerImpl::internalEntityDecl($String* name, $String* value) {
	if (this->_declHandler != nullptr) {
		$nc(this->_declHandler)->internalEntityDecl(name, value);
	}
}

void TransformerHandlerImpl::reset() {
	$set(this, _systemId, nullptr);
	$set(this, _dom, nullptr);
	$set(this, _handler, nullptr);
	$set(this, _lexHandler, nullptr);
	$set(this, _dtdHandler, nullptr);
	$set(this, _declHandler, nullptr);
	$set(this, _result, nullptr);
	$set(this, _locator, nullptr);
}

TransformerHandlerImpl::TransformerHandlerImpl() {
}

$Class* TransformerHandlerImpl::load$($String* name, bool initialize) {
	$loadClass(TransformerHandlerImpl, name, initialize, &_TransformerHandlerImpl_ClassInfo_, allocate$TransformerHandlerImpl);
	return class$;
}

$Class* TransformerHandlerImpl::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
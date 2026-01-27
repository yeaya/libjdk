#include <com/sun/org/apache/xerces/internal/util/SAX2XNI.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/WrappedSAXException.h>
#include <com/sun/org/apache/xerces/internal/util/LocatorWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef SAX2XNI

using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $WrappedSAXException = ::com::sun::org::apache::xerces::internal::jaxp::validation::WrappedSAXException;
using $LocatorWrapper = ::com::sun::org::apache::xerces::internal::util::LocatorWrapper;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $Locator = ::org::xml::sax::Locator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _SAX2XNI_FieldInfo_[] = {
	{"fCore", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PRIVATE, $field(SAX2XNI, fCore)},
	{"nsContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PRIVATE | $FINAL, $field(SAX2XNI, nsContext)},
	{"symbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(SAX2XNI, symbolTable)},
	{"locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE, $field(SAX2XNI, locator)},
	{"xa", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PRIVATE | $FINAL, $field(SAX2XNI, xa)},
	{}
};

$MethodInfo _SAX2XNI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $method(SAX2XNI, init$, void, $XMLDocumentHandler*)},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"createAttributes", "(Lorg/xml/sax/Attributes;)Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PRIVATE, $method(SAX2XNI, createAttributes, $XMLAttributes*, $Attributes*)},
	{"createQName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $method(SAX2XNI, createQName, $QName*, $String*, $String*, $String*)},
	{"createXMLString", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $method(SAX2XNI, createXMLString, $XMLString*, $String*)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, endPrefixMapping, void, $String*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, getDocumentHandler, $XMLDocumentHandler*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, setDocumentLocator, void, $Locator*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, skippedEntity, void, $String*)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2XNI, startPrefixMapping, void, $String*, $String*)},
	{"symbolize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(SAX2XNI, symbolize, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SAX2XNI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SAX2XNI",
	"java.lang.Object",
	"org.xml.sax.ContentHandler,com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource",
	_SAX2XNI_FieldInfo_,
	_SAX2XNI_MethodInfo_
};

$Object* allocate$SAX2XNI($Class* clazz) {
	return $of($alloc(SAX2XNI));
}

int32_t SAX2XNI::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool SAX2XNI::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* SAX2XNI::clone() {
	 return this->$ContentHandler::clone();
}

$String* SAX2XNI::toString() {
	 return this->$ContentHandler::toString();
}

void SAX2XNI::finalize() {
	this->$ContentHandler::finalize();
}

void SAX2XNI::init$($XMLDocumentHandler* core) {
	$set(this, nsContext, $new($NamespaceSupport));
	$set(this, symbolTable, $new($SymbolTable));
	$set(this, xa, $new($XMLAttributesImpl));
	$set(this, fCore, core);
}

void SAX2XNI::setDocumentHandler($XMLDocumentHandler* handler) {
	$set(this, fCore, handler);
}

$XMLDocumentHandler* SAX2XNI::getDocumentHandler() {
	return this->fCore;
}

void SAX2XNI::startDocument() {
	try {
		$nc(this->nsContext)->reset();
		$var($XMLLocator, xmlLocator, nullptr);
		if (this->locator == nullptr) {
			$assign(xmlLocator, $new($SimpleLocator, nullptr, nullptr, -1, -1));
		} else {
			$assign(xmlLocator, $new($LocatorWrapper, this->locator));
		}
		$nc(this->fCore)->startDocument(xmlLocator, nullptr, this->nsContext, nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::endDocument() {
	try {
		$nc(this->fCore)->endDocument(nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::startElement($String* uri, $String* local, $String* qname, $Attributes* att) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($QName, var$0, createQName(uri, local, qname));
		$nc(this->fCore)->startElement(var$0, $(createAttributes(att)), nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::endElement($String* uri, $String* local, $String* qname) {
	try {
		$nc(this->fCore)->endElement($(createQName(uri, local, qname)), nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::characters($chars* buf, int32_t offset, int32_t len) {
	try {
		$nc(this->fCore)->characters($$new($XMLString, buf, offset, len), nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::ignorableWhitespace($chars* buf, int32_t offset, int32_t len) {
	try {
		$nc(this->fCore)->ignorableWhitespace($$new($XMLString, buf, offset, len), nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::startPrefixMapping($String* prefix, $String* uri) {
	$nc(this->nsContext)->pushContext();
	$nc(this->nsContext)->declarePrefix(prefix, uri);
}

void SAX2XNI::endPrefixMapping($String* prefix) {
	$nc(this->nsContext)->popContext();
}

void SAX2XNI::processingInstruction($String* target, $String* data) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, var$0, symbolize(target));
		$nc(this->fCore)->processingInstruction(var$0, $(createXMLString(data)), nullptr);
	} catch ($WrappedSAXException& e) {
		$throw(e->exception);
	}
}

void SAX2XNI::skippedEntity($String* name) {
}

void SAX2XNI::setDocumentLocator($Locator* _loc) {
	$set(this, locator, _loc);
}

$QName* SAX2XNI::createQName($String* uri$renamed, $String* local$renamed, $String* raw) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, uri$renamed);
	$var($String, local, local$renamed);
	int32_t idx = $nc(raw)->indexOf((int32_t)u':');
	if ($nc(local)->length() == 0) {
		$assign(uri, ""_s);
		if (idx < 0) {
			$assign(local, raw);
		} else {
			$assign(local, raw->substring(idx + 1));
		}
	}
	$var($String, prefix, nullptr);
	if (idx < 0) {
		$assign(prefix, nullptr);
	} else {
		$assign(prefix, raw->substring(0, idx));
	}
	if (uri != nullptr && uri->length() == 0) {
		$assign(uri, nullptr);
	}
	$var($String, var$0, symbolize(prefix));
	$var($String, var$1, symbolize(local));
	$var($String, var$2, symbolize(raw));
	return $new($QName, var$0, var$1, var$2, $(symbolize(uri)));
}

$String* SAX2XNI::symbolize($String* s) {
	if (s == nullptr) {
		return nullptr;
	} else {
		return $nc(this->symbolTable)->addSymbol(s);
	}
}

$XMLString* SAX2XNI::createXMLString($String* str) {
	$var($chars, var$0, $nc(str)->toCharArray());
	return $new($XMLString, var$0, 0, str->length());
}

$XMLAttributes* SAX2XNI::createAttributes($Attributes* att) {
	$useLocalCurrentObjectStackCache();
	$nc(this->xa)->removeAllAttributes();
	int32_t len = $nc(att)->getLength();
	for (int32_t i = 0; i < len; ++i) {
		$var($String, var$1, att->getURI(i));
		$var($String, var$2, att->getLocalName(i));
		$var($QName, var$0, createQName(var$1, var$2, $(att->getQName(i))));
		$var($String, var$3, att->getType(i));
		$nc(this->xa)->addAttribute(var$0, var$3, $(att->getValue(i)));
	}
	return this->xa;
}

SAX2XNI::SAX2XNI() {
}

$Class* SAX2XNI::load$($String* name, bool initialize) {
	$loadClass(SAX2XNI, name, initialize, &_SAX2XNI_ClassInfo_, allocate$SAX2XNI);
	return class$;
}

$Class* SAX2XNI::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
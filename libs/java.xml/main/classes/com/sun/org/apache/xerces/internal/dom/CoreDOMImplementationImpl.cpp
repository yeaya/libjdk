#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl$RevalidationHandlerHolder.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl$XMLDTDLoaderHolder.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMInputImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMOutputImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDProcessor.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XML11DTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/parsers/DOMParserImpl.h>
#include <com/sun/org/apache/xerces/internal/parsers/XIncludeAwareParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11DTDConfiguration.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/LSSerializerImpl.h>
#include <java/lang/ref/SoftReference.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/DOMImplementationLS.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSOutput.h>
#include <org/w3c/dom/ls/LSParser.h>
#include <org/w3c/dom/ls/LSSerializer.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef INVALID_CHARACTER_ERR
#undef MODE_SYNCHRONOUS
#undef NAMESPACE_ERR
#undef NOT_SUPPORTED_ERR
#undef SIZE
#undef WRONG_DOCUMENT_ERR
#undef XML_DTD
#undef XML_SCHEMA

using $SoftReferenceArray = $Array<::java::lang::ref::SoftReference>;
using $CoreDOMImplementationImpl$RevalidationHandlerHolder = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl$RevalidationHandlerHolder;
using $CoreDOMImplementationImpl$XMLDTDLoaderHolder = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl$XMLDTDLoaderHolder;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMInputImpl = ::com::sun::org::apache::xerces::internal::dom::DOMInputImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMOutputImpl = ::com::sun::org::apache::xerces::internal::dom::DOMOutputImpl;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $XML11DTDProcessor = ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDProcessor;
using $XML11DTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XML11DTDValidator;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $DOMParserImpl = ::com::sun::org::apache::xerces::internal::parsers::DOMParserImpl;
using $XIncludeAwareParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XIncludeAwareParserConfiguration;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $XML11DTDConfiguration = ::com::sun::org::apache::xerces::internal::parsers::XML11DTDConfiguration;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $XMLPullParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration;
using $LSSerializerImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::LSSerializerImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $DOMImplementationLS = ::org::w3c::dom::ls::DOMImplementationLS;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSOutput = ::org::w3c::dom::ls::LSOutput;
using $LSParser = ::org::w3c::dom::ls::LSParser;
using $LSSerializer = ::org::w3c::dom::ls::LSSerializer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _CoreDOMImplementationImpl_FieldInfo_[] = {
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoreDOMImplementationImpl, SIZE)},
	{"schemaValidators", "[Ljava/lang/ref/SoftReference;", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, schemaValidators)},
	{"xml10DTDValidators", "[Ljava/lang/ref/SoftReference;", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml10DTDValidators)},
	{"xml11DTDValidators", "[Ljava/lang/ref/SoftReference;", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml11DTDValidators)},
	{"freeSchemaValidatorIndex", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, freeSchemaValidatorIndex)},
	{"freeXML10DTDValidatorIndex", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, freeXML10DTDValidatorIndex)},
	{"freeXML11DTDValidatorIndex", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, freeXML11DTDValidatorIndex)},
	{"schemaValidatorsCurrentSize", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, schemaValidatorsCurrentSize)},
	{"xml10DTDValidatorsCurrentSize", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml10DTDValidatorsCurrentSize)},
	{"xml11DTDValidatorsCurrentSize", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml11DTDValidatorsCurrentSize)},
	{"xml10DTDLoaders", "[Ljava/lang/ref/SoftReference;", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml10DTDLoaders)},
	{"xml11DTDLoaders", "[Ljava/lang/ref/SoftReference;", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml11DTDLoaders)},
	{"freeXML10DTDLoaderIndex", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, freeXML10DTDLoaderIndex)},
	{"freeXML11DTDLoaderIndex", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, freeXML11DTDLoaderIndex)},
	{"xml10DTDLoaderCurrentSize", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml10DTDLoaderCurrentSize)},
	{"xml11DTDLoaderCurrentSize", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, xml11DTDLoaderCurrentSize)},
	{"docAndDoctypeCounter", "I", nullptr, $PRIVATE, $field(CoreDOMImplementationImpl, docAndDoctypeCounter)},
	{"singleton", "Lcom/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl;", nullptr, $STATIC | $FINAL, $staticField(CoreDOMImplementationImpl, singleton)},
	{}
};

$MethodInfo _CoreDOMImplementationImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(CoreDOMImplementationImpl, init$, void)},
	{"assignDocTypeNumber", "()I", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(CoreDOMImplementationImpl, assignDocTypeNumber, int32_t)},
	{"assignDocumentNumber", "()I", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(CoreDOMImplementationImpl, assignDocumentNumber, int32_t)},
	{"checkQName", "(Ljava/lang/String;)V", nullptr, $FINAL, $method(CoreDOMImplementationImpl, checkQName, void, $String*)},
	{"createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, createDocument, $Document*, $String*, $String*, $DocumentType*), "org.w3c.dom.DOMException"},
	{"createDocument", "(Lorg/w3c/dom/DocumentType;)Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $virtualMethod(CoreDOMImplementationImpl, createDocument, $CoreDocumentImpl*, $DocumentType*)},
	{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, createDocumentType, $DocumentType*, $String*, $String*, $String*)},
	{"createLSInput", "()Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, createLSInput, $LSInput*)},
	{"createLSOutput", "()Lorg/w3c/dom/ls/LSOutput;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, createLSOutput, $LSOutput*)},
	{"createLSParser", "(SLjava/lang/String;)Lorg/w3c/dom/ls/LSParser;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, createLSParser, $LSParser*, int16_t, $String*), "org.w3c.dom.DOMException"},
	{"createLSSerializer", "()Lorg/w3c/dom/ls/LSSerializer;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, createLSSerializer, $LSSerializer*)},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(CoreDOMImplementationImpl, getDOMImplementation, $DOMImplementation*)},
	{"getDTDLoader", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader;", nullptr, $FINAL | $SYNCHRONIZED, $method(CoreDOMImplementationImpl, getDTDLoader, $XMLDTDLoader*, $String*)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, getFeature, $Object*, $String*, $String*)},
	{"getValidator", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;", nullptr, $SYNCHRONIZED, $virtualMethod(CoreDOMImplementationImpl, getValidator, $RevalidationHandler*, $String*, $String*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(CoreDOMImplementationImpl, hasFeature, bool, $String*, $String*)},
	{"releaseDTDLoader", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader;)V", nullptr, $FINAL | $SYNCHRONIZED, $method(CoreDOMImplementationImpl, releaseDTDLoader, void, $String*, $XMLDTDLoader*)},
	{"releaseValidator", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;)V", nullptr, $SYNCHRONIZED, $virtualMethod(CoreDOMImplementationImpl, releaseValidator, void, $String*, $String*, $RevalidationHandler*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CoreDOMImplementationImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$XMLDTDLoaderHolder", "com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl", "XMLDTDLoaderHolder", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder", "com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl", "RevalidationHandlerHolder", $STATIC | $FINAL},
	{}
};

$ClassInfo _CoreDOMImplementationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMImplementation,org.w3c.dom.ls.DOMImplementationLS",
	_CoreDOMImplementationImpl_FieldInfo_,
	_CoreDOMImplementationImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CoreDOMImplementationImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$XMLDTDLoaderHolder,com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder"
};

$Object* allocate$CoreDOMImplementationImpl($Class* clazz) {
	return $of($alloc(CoreDOMImplementationImpl));
}

int32_t CoreDOMImplementationImpl::hashCode() {
	 return this->$DOMImplementation::hashCode();
}

bool CoreDOMImplementationImpl::equals(Object$* arg0) {
	 return this->$DOMImplementation::equals(arg0);
}

$Object* CoreDOMImplementationImpl::clone() {
	 return this->$DOMImplementation::clone();
}

$String* CoreDOMImplementationImpl::toString() {
	 return this->$DOMImplementation::toString();
}

void CoreDOMImplementationImpl::finalize() {
	this->$DOMImplementation::finalize();
}

CoreDOMImplementationImpl* CoreDOMImplementationImpl::singleton = nullptr;

void CoreDOMImplementationImpl::init$() {
	$set(this, schemaValidators, $new($SoftReferenceArray, CoreDOMImplementationImpl::SIZE));
	$set(this, xml10DTDValidators, $new($SoftReferenceArray, CoreDOMImplementationImpl::SIZE));
	$set(this, xml11DTDValidators, $new($SoftReferenceArray, CoreDOMImplementationImpl::SIZE));
	this->freeSchemaValidatorIndex = -1;
	this->freeXML10DTDValidatorIndex = -1;
	this->freeXML11DTDValidatorIndex = -1;
	this->schemaValidatorsCurrentSize = CoreDOMImplementationImpl::SIZE;
	this->xml10DTDValidatorsCurrentSize = CoreDOMImplementationImpl::SIZE;
	this->xml11DTDValidatorsCurrentSize = CoreDOMImplementationImpl::SIZE;
	$set(this, xml10DTDLoaders, $new($SoftReferenceArray, CoreDOMImplementationImpl::SIZE));
	$set(this, xml11DTDLoaders, $new($SoftReferenceArray, CoreDOMImplementationImpl::SIZE));
	this->freeXML10DTDLoaderIndex = -1;
	this->freeXML11DTDLoaderIndex = -1;
	this->xml10DTDLoaderCurrentSize = CoreDOMImplementationImpl::SIZE;
	this->xml11DTDLoaderCurrentSize = CoreDOMImplementationImpl::SIZE;
	this->docAndDoctypeCounter = 0;
}

$DOMImplementation* CoreDOMImplementationImpl::getDOMImplementation() {
	$init(CoreDOMImplementationImpl);
	return CoreDOMImplementationImpl::singleton;
}

bool CoreDOMImplementationImpl::hasFeature($String* feature$renamed, $String* version) {
	$var($String, feature, feature$renamed);
	bool anyVersion = version == nullptr || $nc(version)->length() == 0;
	if ($nc(feature)->startsWith("+"_s)) {
		$assign(feature, feature->substring(1));
	}
	bool var$4 = $nc(feature)->equalsIgnoreCase("Core"_s);
	if (var$4) {
		bool var$6 = anyVersion || version->equals("1.0"_s);
		bool var$5 = var$6 || version->equals("2.0"_s);
		var$4 = (var$5 || version->equals("3.0"_s));
	}
	bool var$3 = (var$4);
	if (!var$3) {
		bool var$7 = $nc(feature)->equalsIgnoreCase("XML"_s);
		if (var$7) {
			bool var$9 = anyVersion || version->equals("1.0"_s);
			bool var$8 = var$9 || version->equals("2.0"_s);
			var$7 = (var$8 || version->equals("3.0"_s));
		}
		var$3 = (var$7);
	}
	bool var$2 = var$3;
	if (!var$2) {
		bool var$10 = $nc(feature)->equalsIgnoreCase("XMLVersion"_s);
		if (var$10) {
			bool var$11 = anyVersion || version->equals("1.0"_s);
			var$10 = (var$11 || version->equals("1.1"_s));
		}
		var$2 = (var$10);
	}
	bool var$1 = var$2;
	if (!var$1) {
		bool var$12 = $nc(feature)->equalsIgnoreCase("LS"_s);
		var$1 = (var$12 && (anyVersion || version->equals("3.0"_s)));
	}
	bool var$0 = var$1;
	if (!var$0) {
		bool var$13 = $nc(feature)->equalsIgnoreCase("ElementTraversal"_s);
		var$0 = (var$13 && (anyVersion || version->equals("1.0"_s)));
	}
	return var$0;
}

$DocumentType* CoreDOMImplementationImpl::createDocumentType($String* qualifiedName, $String* publicID, $String* systemID) {
	checkQName(qualifiedName);
	return $new($DocumentTypeImpl, nullptr, qualifiedName, publicID, systemID);
}

void CoreDOMImplementationImpl::checkQName($String* qname) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(qname)->indexOf((int32_t)u':');
	int32_t lastIndex = qname->lastIndexOf((int32_t)u':');
	int32_t length = qname->length();
	if (index == 0 || index == length - 1 || lastIndex != index) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
	}
	int32_t start = 0;
	if (index > 0) {
		if (!$XMLChar::isNCNameStart(qname->charAt(start))) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
		}
		for (int32_t i = 1; i < index; ++i) {
			if (!$XMLChar::isNCName(qname->charAt(i))) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
			}
		}
		start = index + 1;
	}
	if (!$XMLChar::isNCNameStart(qname->charAt(start))) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	for (int32_t i = start + 1; i < length; ++i) {
		if (!$XMLChar::isNCName(qname->charAt(i))) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
		}
	}
}

$Document* CoreDOMImplementationImpl::createDocument($String* namespaceURI, $String* qualifiedName, $DocumentType* doctype) {
	$useLocalCurrentObjectStackCache();
	if (doctype != nullptr && doctype->getOwnerDocument() != nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
	}
	$var($CoreDocumentImpl, doc, createDocument(doctype));
	if (qualifiedName != nullptr || namespaceURI != nullptr) {
		$var($Element, e, $nc(doc)->createElementNS(namespaceURI, qualifiedName));
		doc->appendChild(e);
	}
	return doc;
}

$CoreDocumentImpl* CoreDOMImplementationImpl::createDocument($DocumentType* doctype) {
	return $new($CoreDocumentImpl, doctype);
}

$Object* CoreDOMImplementationImpl::getFeature($String* feature, $String* version) {
	if ($nc(CoreDOMImplementationImpl::singleton)->hasFeature(feature, version)) {
		return $of(CoreDOMImplementationImpl::singleton);
	}
	return $of(nullptr);
}

$LSParser* CoreDOMImplementationImpl::createLSParser(int16_t mode, $String* schemaType) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = mode != $DOMImplementationLS::MODE_SYNCHRONOUS;
	if (!var$0) {
		bool var$1 = schemaType != nullptr && !"http://www.w3.org/2001/XMLSchema"_s->equals(schemaType);
		var$0 = (var$1 && !"http://www.w3.org/TR/REC-xml"_s->equals(schemaType));
	}
	if (var$0) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
	if (schemaType != nullptr && schemaType->equals("http://www.w3.org/TR/REC-xml"_s)) {
		return $new($DOMParserImpl, static_cast<$XMLParserConfiguration*>($$new($XML11DTDConfiguration)), schemaType);
	} else {
		return $new($DOMParserImpl, static_cast<$XMLParserConfiguration*>($$new($XIncludeAwareParserConfiguration)), schemaType);
	}
}

$LSSerializer* CoreDOMImplementationImpl::createLSSerializer() {
	return $new($LSSerializerImpl);
}

$LSInput* CoreDOMImplementationImpl::createLSInput() {
	return $new($DOMInputImpl);
}

$RevalidationHandler* CoreDOMImplementationImpl::getValidator($String* schemaType, $String* xmlVersion) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($XMLGrammarDescription);
		if (schemaType == $XMLGrammarDescription::XML_SCHEMA) {
			while (this->freeSchemaValidatorIndex >= 0) {
				$var($SoftReference, ref, $nc(this->schemaValidators)->get(this->freeSchemaValidatorIndex));
				$var($CoreDOMImplementationImpl$RevalidationHandlerHolder, holder, $cast($CoreDOMImplementationImpl$RevalidationHandlerHolder, $nc(ref)->get()));
				if (holder != nullptr && holder->handler != nullptr) {
					$var($RevalidationHandler, val, holder->handler);
					$set(holder, handler, nullptr);
					--this->freeSchemaValidatorIndex;
					return val;
				}
				$nc(this->schemaValidators)->set(this->freeSchemaValidatorIndex--, nullptr);
			}
			return $new($XMLSchemaValidator);
		} else {
			if (schemaType == $XMLGrammarDescription::XML_DTD) {
				if ("1.1"_s->equals(xmlVersion)) {
					while (this->freeXML11DTDValidatorIndex >= 0) {
						$var($SoftReference, ref, $nc(this->xml11DTDValidators)->get(this->freeXML11DTDValidatorIndex));
						$var($CoreDOMImplementationImpl$RevalidationHandlerHolder, holder, $cast($CoreDOMImplementationImpl$RevalidationHandlerHolder, $nc(ref)->get()));
						if (holder != nullptr && holder->handler != nullptr) {
							$var($RevalidationHandler, val, holder->handler);
							$set(holder, handler, nullptr);
							--this->freeXML11DTDValidatorIndex;
							return val;
						}
						$nc(this->xml11DTDValidators)->set(this->freeXML11DTDValidatorIndex--, nullptr);
					}
					return $new($XML11DTDValidator);
				} else {
					while (this->freeXML10DTDValidatorIndex >= 0) {
						$var($SoftReference, ref, $nc(this->xml10DTDValidators)->get(this->freeXML10DTDValidatorIndex));
						$var($CoreDOMImplementationImpl$RevalidationHandlerHolder, holder, $cast($CoreDOMImplementationImpl$RevalidationHandlerHolder, $nc(ref)->get()));
						if (holder != nullptr && holder->handler != nullptr) {
							$var($RevalidationHandler, val, holder->handler);
							$set(holder, handler, nullptr);
							--this->freeXML10DTDValidatorIndex;
							return val;
						}
						$nc(this->xml10DTDValidators)->set(this->freeXML10DTDValidatorIndex--, nullptr);
					}
					return $new($XMLDTDValidator);
				}
			}
		}
		return nullptr;
	}
}

void CoreDOMImplementationImpl::releaseValidator($String* schemaType, $String* xmlVersion, $RevalidationHandler* validator) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($XMLGrammarDescription);
		if (schemaType == $XMLGrammarDescription::XML_SCHEMA) {
			++this->freeSchemaValidatorIndex;
			if ($nc(this->schemaValidators)->length == this->freeSchemaValidatorIndex) {
				this->schemaValidatorsCurrentSize += CoreDOMImplementationImpl::SIZE;
				$var($SoftReferenceArray, newarray, $new($SoftReferenceArray, this->schemaValidatorsCurrentSize));
				$System::arraycopy(this->schemaValidators, 0, newarray, 0, $nc(this->schemaValidators)->length);
				$set(this, schemaValidators, newarray);
			}
			$var($SoftReference, ref, $nc(this->schemaValidators)->get(this->freeSchemaValidatorIndex));
			if (ref != nullptr) {
				$var($CoreDOMImplementationImpl$RevalidationHandlerHolder, holder, $cast($CoreDOMImplementationImpl$RevalidationHandlerHolder, ref->get()));
				if (holder != nullptr) {
					$set(holder, handler, validator);
					return;
				}
			}
			$nc(this->schemaValidators)->set(this->freeSchemaValidatorIndex, $$new($SoftReference, $$new($CoreDOMImplementationImpl$RevalidationHandlerHolder, validator)));
		} else {
			if (schemaType == $XMLGrammarDescription::XML_DTD) {
				if ("1.1"_s->equals(xmlVersion)) {
					++this->freeXML11DTDValidatorIndex;
					if ($nc(this->xml11DTDValidators)->length == this->freeXML11DTDValidatorIndex) {
						this->xml11DTDValidatorsCurrentSize += CoreDOMImplementationImpl::SIZE;
						$var($SoftReferenceArray, newarray, $new($SoftReferenceArray, this->xml11DTDValidatorsCurrentSize));
						$System::arraycopy(this->xml11DTDValidators, 0, newarray, 0, $nc(this->xml11DTDValidators)->length);
						$set(this, xml11DTDValidators, newarray);
					}
					$var($SoftReference, ref, $nc(this->xml11DTDValidators)->get(this->freeXML11DTDValidatorIndex));
					if (ref != nullptr) {
						$var($CoreDOMImplementationImpl$RevalidationHandlerHolder, holder, $cast($CoreDOMImplementationImpl$RevalidationHandlerHolder, ref->get()));
						if (holder != nullptr) {
							$set(holder, handler, validator);
							return;
						}
					}
					$nc(this->xml11DTDValidators)->set(this->freeXML11DTDValidatorIndex, $$new($SoftReference, $$new($CoreDOMImplementationImpl$RevalidationHandlerHolder, validator)));
				} else {
					++this->freeXML10DTDValidatorIndex;
					if ($nc(this->xml10DTDValidators)->length == this->freeXML10DTDValidatorIndex) {
						this->xml10DTDValidatorsCurrentSize += CoreDOMImplementationImpl::SIZE;
						$var($SoftReferenceArray, newarray, $new($SoftReferenceArray, this->xml10DTDValidatorsCurrentSize));
						$System::arraycopy(this->xml10DTDValidators, 0, newarray, 0, $nc(this->xml10DTDValidators)->length);
						$set(this, xml10DTDValidators, newarray);
					}
					$var($SoftReference, ref, $nc(this->xml10DTDValidators)->get(this->freeXML10DTDValidatorIndex));
					if (ref != nullptr) {
						$var($CoreDOMImplementationImpl$RevalidationHandlerHolder, holder, $cast($CoreDOMImplementationImpl$RevalidationHandlerHolder, ref->get()));
						if (holder != nullptr) {
							$set(holder, handler, validator);
							return;
						}
					}
					$nc(this->xml10DTDValidators)->set(this->freeXML10DTDValidatorIndex, $$new($SoftReference, $$new($CoreDOMImplementationImpl$RevalidationHandlerHolder, validator)));
				}
			}
		}
	}
}

$XMLDTDLoader* CoreDOMImplementationImpl::getDTDLoader($String* xmlVersion) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ("1.1"_s->equals(xmlVersion)) {
			while (this->freeXML11DTDLoaderIndex >= 0) {
				$var($SoftReference, ref, $nc(this->xml11DTDLoaders)->get(this->freeXML11DTDLoaderIndex));
				$var($CoreDOMImplementationImpl$XMLDTDLoaderHolder, holder, $cast($CoreDOMImplementationImpl$XMLDTDLoaderHolder, $nc(ref)->get()));
				if (holder != nullptr && holder->loader != nullptr) {
					$var($XMLDTDLoader, val, holder->loader);
					$set(holder, loader, nullptr);
					--this->freeXML11DTDLoaderIndex;
					return val;
				}
				$nc(this->xml11DTDLoaders)->set(this->freeXML11DTDLoaderIndex--, nullptr);
			}
			return $new($XML11DTDProcessor);
		} else {
			while (this->freeXML10DTDLoaderIndex >= 0) {
				$var($SoftReference, ref, $nc(this->xml10DTDLoaders)->get(this->freeXML10DTDLoaderIndex));
				$var($CoreDOMImplementationImpl$XMLDTDLoaderHolder, holder, $cast($CoreDOMImplementationImpl$XMLDTDLoaderHolder, $nc(ref)->get()));
				if (holder != nullptr && holder->loader != nullptr) {
					$var($XMLDTDLoader, val, holder->loader);
					$set(holder, loader, nullptr);
					--this->freeXML10DTDLoaderIndex;
					return val;
				}
				$nc(this->xml10DTDLoaders)->set(this->freeXML10DTDLoaderIndex--, nullptr);
			}
			return $new($XMLDTDLoader);
		}
	}
}

void CoreDOMImplementationImpl::releaseDTDLoader($String* xmlVersion, $XMLDTDLoader* loader) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if ("1.1"_s->equals(xmlVersion)) {
			++this->freeXML11DTDLoaderIndex;
			if ($nc(this->xml11DTDLoaders)->length == this->freeXML11DTDLoaderIndex) {
				this->xml11DTDLoaderCurrentSize += CoreDOMImplementationImpl::SIZE;
				$var($SoftReferenceArray, newarray, $new($SoftReferenceArray, this->xml11DTDLoaderCurrentSize));
				$System::arraycopy(this->xml11DTDLoaders, 0, newarray, 0, $nc(this->xml11DTDLoaders)->length);
				$set(this, xml11DTDLoaders, newarray);
			}
			$var($SoftReference, ref, $nc(this->xml11DTDLoaders)->get(this->freeXML11DTDLoaderIndex));
			if (ref != nullptr) {
				$var($CoreDOMImplementationImpl$XMLDTDLoaderHolder, holder, $cast($CoreDOMImplementationImpl$XMLDTDLoaderHolder, ref->get()));
				if (holder != nullptr) {
					$set(holder, loader, loader);
					return;
				}
			}
			$nc(this->xml11DTDLoaders)->set(this->freeXML11DTDLoaderIndex, $$new($SoftReference, $$new($CoreDOMImplementationImpl$XMLDTDLoaderHolder, loader)));
		} else {
			++this->freeXML10DTDLoaderIndex;
			if ($nc(this->xml10DTDLoaders)->length == this->freeXML10DTDLoaderIndex) {
				this->xml10DTDLoaderCurrentSize += CoreDOMImplementationImpl::SIZE;
				$var($SoftReferenceArray, newarray, $new($SoftReferenceArray, this->xml10DTDLoaderCurrentSize));
				$System::arraycopy(this->xml10DTDLoaders, 0, newarray, 0, $nc(this->xml10DTDLoaders)->length);
				$set(this, xml10DTDLoaders, newarray);
			}
			$var($SoftReference, ref, $nc(this->xml10DTDLoaders)->get(this->freeXML10DTDLoaderIndex));
			if (ref != nullptr) {
				$var($CoreDOMImplementationImpl$XMLDTDLoaderHolder, holder, $cast($CoreDOMImplementationImpl$XMLDTDLoaderHolder, ref->get()));
				if (holder != nullptr) {
					$set(holder, loader, loader);
					return;
				}
			}
			$nc(this->xml10DTDLoaders)->set(this->freeXML10DTDLoaderIndex, $$new($SoftReference, $$new($CoreDOMImplementationImpl$XMLDTDLoaderHolder, loader)));
		}
	}
}

int32_t CoreDOMImplementationImpl::assignDocumentNumber() {
	$synchronized(this) {
		return ++this->docAndDoctypeCounter;
	}
}

int32_t CoreDOMImplementationImpl::assignDocTypeNumber() {
	$synchronized(this) {
		return ++this->docAndDoctypeCounter;
	}
}

$LSOutput* CoreDOMImplementationImpl::createLSOutput() {
	return $new($DOMOutputImpl);
}

void clinit$CoreDOMImplementationImpl($Class* class$) {
	$assignStatic(CoreDOMImplementationImpl::singleton, $new(CoreDOMImplementationImpl));
}

CoreDOMImplementationImpl::CoreDOMImplementationImpl() {
}

$Class* CoreDOMImplementationImpl::load$($String* name, bool initialize) {
	$loadClass(CoreDOMImplementationImpl, name, initialize, &_CoreDOMImplementationImpl_ClassInfo_, clinit$CoreDOMImplementationImpl, allocate$CoreDOMImplementationImpl);
	return class$;
}

$Class* CoreDOMImplementationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
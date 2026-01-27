#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xml/internal/serialize/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/DOMSerializerImpl.h>
#include <com/sun/org/apache/xml/internal/serialize/ElementState.h>
#include <com/sun/org/apache/xml/internal/serialize/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serialize/IndentPrinter.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSException.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef CDATA
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef ENTITIES
#undef ENTITY_REFERENCE_NODE
#undef FILTER_REJECT
#undef FILTER_SKIP
#undef PROCESSING_INSTRUCTION_NODE
#undef SERIALIZER_DOMAIN
#undef SERIALIZE_ERR
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_ELEMENT
#undef SHOW_ENTITY_REFERENCE
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT
#undef SPLITCDATA
#undef TEXT_NODE
#undef WELLFORMED

using $ElementStateArray = $Array<::com::sun::org::apache::xml::internal::serialize::ElementState>;
using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMLocatorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $DOMSerializer = ::com::sun::org::apache::xml::internal::serialize::DOMSerializer;
using $DOMSerializerImpl = ::com::sun::org::apache::xml::internal::serialize::DOMSerializerImpl;
using $ElementState = ::com::sun::org::apache::xml::internal::serialize::ElementState;
using $EncodingInfo = ::com::sun::org::apache::xml::internal::serialize::EncodingInfo;
using $IndentPrinter = ::com::sun::org::apache::xml::internal::serialize::IndentPrinter;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Printer = ::com::sun::org::apache::xml::internal::serialize::Printer;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $LSException = ::org::w3c::dom::ls::LSException;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $Locator = ::org::xml::sax::Locator;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _BaseMarkupSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BaseMarkupSerializer_FieldInfo_[] = {
	{"features", "S", nullptr, $PROTECTED, $field(BaseMarkupSerializer, features)},
	{"fDOMErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, fDOMErrorHandler)},
	{"fDOMError", "Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;", nullptr, $PROTECTED | $FINAL, $field(BaseMarkupSerializer, fDOMError)},
	{"fDOMFilter", "Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, fDOMFilter)},
	{"_encodingInfo", "Lcom/sun/org/apache/xml/internal/serialize/EncodingInfo;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _encodingInfo)},
	{"_elementStates", "[Lcom/sun/org/apache/xml/internal/serialize/ElementState;", nullptr, $PRIVATE, $field(BaseMarkupSerializer, _elementStates)},
	{"_elementStateCount", "I", nullptr, $PRIVATE, $field(BaseMarkupSerializer, _elementStateCount)},
	{"_preRoot", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(BaseMarkupSerializer, _preRoot)},
	{"_started", "Z", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _started)},
	{"_prepared", "Z", nullptr, $PRIVATE, $field(BaseMarkupSerializer, _prepared)},
	{"_prefixes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PROTECTED, $field(BaseMarkupSerializer, _prefixes)},
	{"_docTypePublicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _docTypePublicId)},
	{"_docTypeSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _docTypeSystemId)},
	{"_format", "Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _format)},
	{"_printer", "Lcom/sun/org/apache/xml/internal/serialize/Printer;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _printer)},
	{"_indenting", "Z", nullptr, $PROTECTED, $field(BaseMarkupSerializer, _indenting)},
	{"fStrBuffer", "Ljava/lang/StringBuffer;", nullptr, $PROTECTED | $FINAL, $field(BaseMarkupSerializer, fStrBuffer)},
	{"_writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(BaseMarkupSerializer, _writer)},
	{"_output", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(BaseMarkupSerializer, _output)},
	{"fCurrentNode", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(BaseMarkupSerializer, fCurrentNode)},
	{}
};

$MethodInfo _BaseMarkupSerializer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PROTECTED, $method(BaseMarkupSerializer, init$, void, $OutputFormat*)},
	{"asContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, asContentHandler, $ContentHandler*), "java.io.IOException"},
	{"asDOMSerializer", "()Lcom/sun/org/apache/xml/internal/serialize/DOMSerializer;", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, asDOMSerializer, $DOMSerializer*), "java.io.IOException"},
	{"asDocumentHandler", "()Lorg/xml/sax/DocumentHandler;", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, asDocumentHandler, $DocumentHandler*), "java.io.IOException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, characters, void, $String*), "java.io.IOException"},
	{"checkUnboundNamespacePrefixedNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, checkUnboundNamespacePrefixedNode, void, $Node*), "java.io.IOException"},
	{"cleanup", "()V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, cleanup, void)},
	{"clearDocumentState", "()V", nullptr, $FINAL, $method(BaseMarkupSerializer, clearDocumentState, void)},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, comment, void, $String*), "java.io.IOException"},
	{"content", "()Lcom/sun/org/apache/xml/internal/serialize/ElementState;", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, content, $ElementState*), "java.io.IOException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endCDATA, void)},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endDTD, void)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endDocument, void), "org.xml.sax.SAXException"},
	{"endEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endEntity, void, $String*)},
	{"endNonEscaping", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endNonEscaping, void)},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"endPreserving", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, endPreserving, void)},
	{"enterElementState", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/serialize/ElementState;", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, enterElementState, $ElementState*, $String*, $String*, $String*, bool)},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"fatalError", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, fatalError, void, $String*), "java.io.IOException"},
	{"getElementState", "()Lcom/sun/org/apache/xml/internal/serialize/ElementState;", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, getElementState, $ElementState*)},
	{"getEntityRef", "(I)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BaseMarkupSerializer, getEntityRef, $String*, int32_t)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, getPrefix, $String*, $String*)},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"isDocumentState", "()Z", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, isDocumentState, bool)},
	{"leaveElementState", "()Lcom/sun/org/apache/xml/internal/serialize/ElementState;", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, leaveElementState, $ElementState*)},
	{"modifyDOMError", "(Ljava/lang/String;SLjava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/DOMError;", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, modifyDOMError, $DOMError*, $String*, int16_t, $String*, $Node*)},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"prepare", "()V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, prepare, void), "java.io.IOException"},
	{"printCDATAText", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, printCDATAText, void, $String*), "java.io.IOException"},
	{"printDoctypeURL", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, printDoctypeURL, void, $String*), "java.io.IOException"},
	{"printEscaped", "(I)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, printEscaped, void, int32_t), "java.io.IOException"},
	{"printEscaped", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, printEscaped, void, $String*), "java.io.IOException"},
	{"printHex", "(I)V", nullptr, $FINAL, $method(BaseMarkupSerializer, printHex, void, int32_t), "java.io.IOException"},
	{"printText", "([CIIZZ)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, printText, void, $chars*, int32_t, int32_t, bool, bool), "java.io.IOException"},
	{"printText", "(Ljava/lang/String;ZZ)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, printText, void, $String*, bool, bool), "java.io.IOException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(BaseMarkupSerializer, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstructionIO", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, processingInstructionIO, void, $String*, $String*), "java.io.IOException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, reset, bool)},
	{"serialize", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, serialize, void, $Element*), "java.io.IOException"},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, serialize, void, $Node*), "java.io.IOException"},
	{"serialize", "(Lorg/w3c/dom/DocumentFragment;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, serialize, void, $DocumentFragment*), "java.io.IOException"},
	{"serialize", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, serialize, void, $Document*), "java.io.IOException"},
	{"serializeDTD", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, serializeDTD, void, $String*), "java.io.IOException"},
	{"serializeDocument", "()V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, serializeDocument, void), "java.io.IOException"},
	{"serializeElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BaseMarkupSerializer, serializeElement, void, $Element*), "java.io.IOException"},
	{"serializeNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, serializeNode, void, $Node*), "java.io.IOException"},
	{"serializePreRoot", "()V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, serializePreRoot, void), "java.io.IOException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, setDocumentLocator, void, $Locator*)},
	{"setOutputByteStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, setOutputByteStream, void, $OutputStream*)},
	{"setOutputCharStream", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, setOutputCharStream, void, $Writer*)},
	{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, setOutputFormat, void, $OutputFormat*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, startCDATA, void)},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(BaseMarkupSerializer, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, startDocument, void), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, startEntity, void, $String*)},
	{"startNonEscaping", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, startNonEscaping, void)},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"startPreserving", "()V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, startPreserving, void)},
	{"surrogates", "(IIZ)V", nullptr, $PROTECTED, $virtualMethod(BaseMarkupSerializer, surrogates, void, int32_t, int32_t, bool), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseMarkupSerializer, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _BaseMarkupSerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer",
	"java.lang.Object",
	"org.xml.sax.ContentHandler,org.xml.sax.DocumentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler,org.xml.sax.ext.DeclHandler,com.sun.org.apache.xml.internal.serialize.DOMSerializer,com.sun.org.apache.xml.internal.serialize.Serializer",
	_BaseMarkupSerializer_FieldInfo_,
	_BaseMarkupSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BaseMarkupSerializer_Annotations_
};

$Object* allocate$BaseMarkupSerializer($Class* clazz) {
	return $of($alloc(BaseMarkupSerializer));
}

int32_t BaseMarkupSerializer::hashCode() {
	 return this->$ContentHandler::hashCode();
}

bool BaseMarkupSerializer::equals(Object$* arg0) {
	 return this->$ContentHandler::equals(arg0);
}

$Object* BaseMarkupSerializer::clone() {
	 return this->$ContentHandler::clone();
}

$String* BaseMarkupSerializer::toString() {
	 return this->$ContentHandler::toString();
}

void BaseMarkupSerializer::finalize() {
	this->$ContentHandler::finalize();
}

void BaseMarkupSerializer::init$($OutputFormat* format) {
	$useLocalCurrentObjectStackCache();
	this->features = (int16_t)-1;
	$set(this, fDOMError, $new($DOMErrorImpl));
	$set(this, fStrBuffer, $new($StringBuffer, 40));
	$set(this, fCurrentNode, nullptr);
	int32_t i = 0;
	$set(this, _elementStates, $new($ElementStateArray, 10));
	for (i = 0; i < $nc(this->_elementStates)->length; ++i) {
		$nc(this->_elementStates)->set(i, $$new($ElementState));
	}
	$set(this, _format, format);
}

$DocumentHandler* BaseMarkupSerializer::asDocumentHandler() {
	prepare();
	return this;
}

$ContentHandler* BaseMarkupSerializer::asContentHandler() {
	prepare();
	return this;
}

$DOMSerializer* BaseMarkupSerializer::asDOMSerializer() {
	prepare();
	return this;
}

void BaseMarkupSerializer::setOutputByteStream($OutputStream* output) {
	$useLocalCurrentObjectStackCache();
	if (output == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "ArgumentIsNull"_s, $$new($ObjectArray, {$of("output"_s)})));
		$throwNew($NullPointerException, msg);
	}
	$set(this, _output, output);
	$set(this, _writer, nullptr);
	reset();
}

void BaseMarkupSerializer::setOutputCharStream($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	if (writer == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "ArgumentIsNull"_s, $$new($ObjectArray, {$of("writer"_s)})));
		$throwNew($NullPointerException, msg);
	}
	$set(this, _writer, writer);
	$set(this, _output, nullptr);
	reset();
}

void BaseMarkupSerializer::setOutputFormat($OutputFormat* format) {
	$useLocalCurrentObjectStackCache();
	if (format == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "ArgumentIsNull"_s, $$new($ObjectArray, {$of("format"_s)})));
		$throwNew($NullPointerException, msg);
	}
	$set(this, _format, format);
	reset();
}

bool BaseMarkupSerializer::reset() {
	if (this->_elementStateCount > 1) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "ResetInMiddle"_s, nullptr));
		$throwNew($IllegalStateException, msg);
	}
	this->_prepared = false;
	$set(this, fCurrentNode, nullptr);
	$nc(this->fStrBuffer)->setLength(0);
	return true;
}

void BaseMarkupSerializer::cleanup() {
	$set(this, fCurrentNode, nullptr);
}

void BaseMarkupSerializer::prepare() {
	$useLocalCurrentObjectStackCache();
	if (this->_prepared) {
		return;
	}
	if (this->_writer == nullptr && this->_output == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "NoWriterSupplied"_s, nullptr));
		$throwNew($IOException, msg);
	}
	$set(this, _encodingInfo, $nc(this->_format)->getEncodingInfo());
	if (this->_output != nullptr) {
		$set(this, _writer, $nc(this->_encodingInfo)->getWriter(this->_output));
	}
	if ($nc(this->_format)->getIndenting()) {
		this->_indenting = true;
		$set(this, _printer, $new($IndentPrinter, this->_writer, this->_format));
	} else {
		this->_indenting = false;
		$set(this, _printer, $new($Printer, this->_writer, this->_format));
	}
	$var($ElementState, state, nullptr);
	this->_elementStateCount = 0;
	$assign(state, $nc(this->_elementStates)->get(0));
	$set($nc(state), namespaceURI, nullptr);
	$set(state, localName, nullptr);
	$set(state, rawName, nullptr);
	state->preserveSpace = $nc(this->_format)->getPreserveSpace();
	state->empty = true;
	state->afterElement = false;
	state->afterComment = false;
	state->doCData = (state->inCData = false);
	$set(state, prefixes, nullptr);
	$set(this, _docTypePublicId, $nc(this->_format)->getDoctypePublic());
	$set(this, _docTypeSystemId, $nc(this->_format)->getDoctypeSystem());
	this->_started = false;
	this->_prepared = true;
}

void BaseMarkupSerializer::serialize($Element* elem) {
	reset();
	prepare();
	serializeNode(elem);
	cleanup();
	$nc(this->_printer)->flush();
	if ($nc(this->_printer)->getException() != nullptr) {
		$throw($($nc(this->_printer)->getException()));
	}
}

void BaseMarkupSerializer::serialize($Node* node) {
	reset();
	prepare();
	serializeNode(node);
	serializePreRoot();
	$nc(this->_printer)->flush();
	if ($nc(this->_printer)->getException() != nullptr) {
		$throw($($nc(this->_printer)->getException()));
	}
}

void BaseMarkupSerializer::serialize($DocumentFragment* frag) {
	reset();
	prepare();
	serializeNode(frag);
	cleanup();
	$nc(this->_printer)->flush();
	if ($nc(this->_printer)->getException() != nullptr) {
		$throw($($nc(this->_printer)->getException()));
	}
}

void BaseMarkupSerializer::serialize($Document* doc) {
	reset();
	prepare();
	serializeNode(doc);
	serializePreRoot();
	cleanup();
	$nc(this->_printer)->flush();
	if ($nc(this->_printer)->getException() != nullptr) {
		$throw($($nc(this->_printer)->getException()));
	}
}

void BaseMarkupSerializer::startDocument() {
	try {
		prepare();
	} catch ($IOException& except) {
		$throwNew($SAXException, $(except->toString()));
	}
}

void BaseMarkupSerializer::characters($chars* chars, int32_t start, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($ElementState, state, nullptr);
	try {
		$assign(state, content());
		if ($nc(state)->inCData || $nc(state)->doCData) {
			int32_t saveIndent = 0;
			if (!state->inCData) {
				$nc(this->_printer)->printText("<![CDATA["_s);
				state->inCData = true;
			}
			saveIndent = $nc(this->_printer)->getNextIndent();
			$nc(this->_printer)->setNextIndent(0);
			char16_t ch = 0;
			int32_t end = start + length;
			for (int32_t index = start; index < end; ++index) {
				ch = $nc(chars)->get(index);
				if (ch == u']' && index + 2 < end && chars->get(index + 1) == u']' && chars->get(index + 2) == u'>') {
					$nc(this->_printer)->printText("]]]]><![CDATA[>"_s);
					index += 2;
					continue;
				}
				if (!$XMLChar::isValid(ch)) {
					if (++index < end) {
						surrogates(ch, chars->get(index), true);
					} else {
						fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
					}
					continue;
				}
				if ((ch >= u' ' && $nc(this->_encodingInfo)->isPrintable(ch) && ch != 127) || ch == u'\n' || ch == u'\r' || ch == u'\t') {
					$nc(this->_printer)->printText(ch);
				} else {
					$nc(this->_printer)->printText("]]>&#x"_s);
					$nc(this->_printer)->printText($($Integer::toHexString(ch)));
					$nc(this->_printer)->printText(";<![CDATA["_s);
				}
			}
			$nc(this->_printer)->setNextIndent(saveIndent);
		} else {
			int32_t saveIndent = 0;
			if (state->preserveSpace) {
				saveIndent = $nc(this->_printer)->getNextIndent();
				$nc(this->_printer)->setNextIndent(0);
				printText(chars, start, length, true, state->unescaped);
				$nc(this->_printer)->setNextIndent(saveIndent);
			} else {
				printText(chars, start, length, false, state->unescaped);
			}
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::ignorableWhitespace($chars* chars, int32_t start, int32_t length) {
	int32_t i = 0;
	try {
		content();
		if (this->_indenting) {
			$nc(this->_printer)->setThisIndent(0);
			for (i = start; length-- > 0; ++i) {
				$nc(this->_printer)->printText($nc(chars)->get(i));
			}
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::processingInstruction($String* target, $String* code) {
	try {
		processingInstructionIO(target, code);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::processingInstructionIO($String* target, $String* code) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($ElementState, state, nullptr);
	$assign(state, content());
	index = $nc(target)->indexOf("?>"_s);
	if (index >= 0) {
		$nc(this->fStrBuffer)->append("<?"_s)->append($(target->substring(0, index)));
	} else {
		$nc(this->fStrBuffer)->append("<?"_s)->append(target);
	}
	if (code != nullptr) {
		$nc(this->fStrBuffer)->append(u' ');
		index = code->indexOf("?>"_s);
		if (index >= 0) {
			$nc(this->fStrBuffer)->append($(code->substring(0, index)));
		} else {
			$nc(this->fStrBuffer)->append(code);
		}
	}
	$nc(this->fStrBuffer)->append("?>"_s);
	if (isDocumentState()) {
		if (this->_preRoot == nullptr) {
			$set(this, _preRoot, $new($ArrayList));
		}
		$nc(this->_preRoot)->add($($nc(this->fStrBuffer)->toString()));
	} else {
		$nc(this->_printer)->indent();
		printText($($nc(this->fStrBuffer)->toString()), true, true);
		$nc(this->_printer)->unindent();
		if (this->_indenting) {
			$nc(state)->afterElement = true;
		}
	}
	$nc(this->fStrBuffer)->setLength(0);
}

void BaseMarkupSerializer::comment($chars* chars, int32_t start, int32_t length) {
	try {
		comment($$new($String, chars, start, length));
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::comment($String* text) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($ElementState, state, nullptr);
	if ($nc(this->_format)->getOmitComments()) {
		return;
	}
	$assign(state, content());
	index = $nc(text)->indexOf("-->"_s);
	if (index >= 0) {
		$nc(this->fStrBuffer)->append("<!--"_s)->append($(text->substring(0, index)))->append("-->"_s);
	} else {
		$nc(this->fStrBuffer)->append("<!--"_s)->append(text)->append("-->"_s);
	}
	if (isDocumentState()) {
		if (this->_preRoot == nullptr) {
			$set(this, _preRoot, $new($ArrayList));
		}
		$nc(this->_preRoot)->add($($nc(this->fStrBuffer)->toString()));
	} else {
		if (this->_indenting && !$nc(state)->preserveSpace) {
			$nc(this->_printer)->breakLine();
		}
		$nc(this->_printer)->indent();
		printText($($nc(this->fStrBuffer)->toString()), true, true);
		$nc(this->_printer)->unindent();
		if (this->_indenting) {
			$nc(state)->afterElement = true;
		}
	}
	$nc(this->fStrBuffer)->setLength(0);
	$nc(state)->afterComment = true;
	state->afterElement = false;
}

void BaseMarkupSerializer::startCDATA() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$nc(state)->doCData = true;
}

void BaseMarkupSerializer::endCDATA() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$nc(state)->doCData = false;
}

void BaseMarkupSerializer::startNonEscaping() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$nc(state)->unescaped = true;
}

void BaseMarkupSerializer::endNonEscaping() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$nc(state)->unescaped = false;
}

void BaseMarkupSerializer::startPreserving() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$nc(state)->preserveSpace = true;
}

void BaseMarkupSerializer::endPreserving() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	$nc(state)->preserveSpace = false;
}

void BaseMarkupSerializer::endDocument() {
	try {
		serializePreRoot();
		$nc(this->_printer)->flush();
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::startEntity($String* name) {
}

void BaseMarkupSerializer::endEntity($String* name) {
}

void BaseMarkupSerializer::setDocumentLocator($Locator* locator) {
}

void BaseMarkupSerializer::skippedEntity($String* name) {
	try {
		endCDATA();
		content();
		$nc(this->_printer)->printText(u'&');
		$nc(this->_printer)->printText(name);
		$nc(this->_printer)->printText(u';');
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::startPrefixMapping($String* prefix, $String* uri) {
	if (this->_prefixes == nullptr) {
		$set(this, _prefixes, $new($HashMap));
	}
	$nc(this->_prefixes)->put(uri, prefix == nullptr ? ""_s : prefix);
}

void BaseMarkupSerializer::endPrefixMapping($String* prefix) {
}

void BaseMarkupSerializer::startDTD($String* name, $String* publicId, $String* systemId) {
	try {
		$nc(this->_printer)->enterDTD();
		$set(this, _docTypePublicId, publicId);
		$set(this, _docTypeSystemId, systemId);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::endDTD() {
}

void BaseMarkupSerializer::elementDecl($String* name, $String* model) {
	try {
		$nc(this->_printer)->enterDTD();
		$nc(this->_printer)->printText("<!ELEMENT "_s);
		$nc(this->_printer)->printText(name);
		$nc(this->_printer)->printText(u' ');
		$nc(this->_printer)->printText(model);
		$nc(this->_printer)->printText(u'>');
		if (this->_indenting) {
			$nc(this->_printer)->breakLine();
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
	try {
		$nc(this->_printer)->enterDTD();
		$nc(this->_printer)->printText("<!ATTLIST "_s);
		$nc(this->_printer)->printText(eName);
		$nc(this->_printer)->printText(u' ');
		$nc(this->_printer)->printText(aName);
		$nc(this->_printer)->printText(u' ');
		$nc(this->_printer)->printText(type);
		if (valueDefault != nullptr) {
			$nc(this->_printer)->printText(u' ');
			$nc(this->_printer)->printText(valueDefault);
		}
		if (value != nullptr) {
			$nc(this->_printer)->printText(" \""_s);
			printEscaped(value);
			$nc(this->_printer)->printText(u'\"');
		}
		$nc(this->_printer)->printText(u'>');
		if (this->_indenting) {
			$nc(this->_printer)->breakLine();
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::internalEntityDecl($String* name, $String* value) {
	try {
		$nc(this->_printer)->enterDTD();
		$nc(this->_printer)->printText("<!ENTITY "_s);
		$nc(this->_printer)->printText(name);
		$nc(this->_printer)->printText(" \""_s);
		printEscaped(value);
		$nc(this->_printer)->printText("\">"_s);
		if (this->_indenting) {
			$nc(this->_printer)->breakLine();
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
	try {
		$nc(this->_printer)->enterDTD();
		unparsedEntityDecl(name, publicId, systemId, nullptr);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
	try {
		$nc(this->_printer)->enterDTD();
		if (publicId == nullptr) {
			$nc(this->_printer)->printText("<!ENTITY "_s);
			$nc(this->_printer)->printText(name);
			$nc(this->_printer)->printText(" SYSTEM "_s);
			printDoctypeURL(systemId);
		} else {
			$nc(this->_printer)->printText("<!ENTITY "_s);
			$nc(this->_printer)->printText(name);
			$nc(this->_printer)->printText(" PUBLIC "_s);
			printDoctypeURL(publicId);
			$nc(this->_printer)->printText(u' ');
			printDoctypeURL(systemId);
		}
		if (notationName != nullptr) {
			$nc(this->_printer)->printText(" NDATA "_s);
			$nc(this->_printer)->printText(notationName);
		}
		$nc(this->_printer)->printText(u'>');
		if (this->_indenting) {
			$nc(this->_printer)->breakLine();
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::notationDecl($String* name, $String* publicId, $String* systemId) {
	try {
		$nc(this->_printer)->enterDTD();
		if (publicId != nullptr) {
			$nc(this->_printer)->printText("<!NOTATION "_s);
			$nc(this->_printer)->printText(name);
			$nc(this->_printer)->printText(" PUBLIC "_s);
			printDoctypeURL(publicId);
			if (systemId != nullptr) {
				$nc(this->_printer)->printText(u' ');
				printDoctypeURL(systemId);
			}
		} else {
			$nc(this->_printer)->printText("<!NOTATION "_s);
			$nc(this->_printer)->printText(name);
			$nc(this->_printer)->printText(" SYSTEM "_s);
			printDoctypeURL(systemId);
		}
		$nc(this->_printer)->printText(u'>');
		if (this->_indenting) {
			$nc(this->_printer)->breakLine();
		}
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void BaseMarkupSerializer::serializeNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$set(this, fCurrentNode, node);
	switch ($nc(node)->getNodeType()) {
	case $Node::TEXT_NODE:
		{
			{
				$var($String, text, nullptr);
				$assign(text, node->getNodeValue());
				if (text != nullptr) {
					if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_TEXT)) != 0) {
						int16_t code = $nc(this->fDOMFilter)->acceptNode(node);
						switch (code) {
						case $NodeFilter::FILTER_REJECT:
							{}
						case $NodeFilter::FILTER_SKIP:
							{
								{
									break;
								}
							}
						default:
							{
								{
									characters(text);
								}
							}
						}
					} else {
						bool var$1 = !this->_indenting || $nc($(getElementState()))->preserveSpace;
						if (var$1 || ($($(text->replace(u'\n', u' '))->trim())->length() != 0)) {
							characters(text);
						}
					}
				}
				break;
			}
		}
	case $Node::CDATA_SECTION_NODE:
		{
			{
				$var($String, text, node->getNodeValue());
				if (((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::CDATA)) != 0) {
					if (text != nullptr) {
						if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_CDATA_SECTION)) != 0) {
							int16_t code = $nc(this->fDOMFilter)->acceptNode(node);
							switch (code) {
							case $NodeFilter::FILTER_REJECT:
								{}
							case $NodeFilter::FILTER_SKIP:
								{
									{
										return;
									}
								}
							default:
								{
									{
									}
								}
							}
						}
						startCDATA();
						characters(text);
						endCDATA();
					}
				} else {
					characters(text);
				}
				break;
			}
		}
	case $Node::COMMENT_NODE:
		{
			{
				$var($String, text, nullptr);
				if (!$nc(this->_format)->getOmitComments()) {
					$assign(text, node->getNodeValue());
					if (text != nullptr) {
						if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_COMMENT)) != 0) {
							int16_t code = $nc(this->fDOMFilter)->acceptNode(node);
							switch (code) {
							case $NodeFilter::FILTER_REJECT:
								{}
							case $NodeFilter::FILTER_SKIP:
								{
									{
										return;
									}
								}
							default:
								{
									{
									}
								}
							}
						}
						comment(text);
					}
				}
				break;
			}
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			{
				$var($Node, child, nullptr);
				endCDATA();
				content();
				if ((((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::ENTITIES)) != 0) || (node->getFirstChild() == nullptr)) {
					if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_ENTITY_REFERENCE)) != 0) {
						int16_t code = $nc(this->fDOMFilter)->acceptNode(node);
						switch (code) {
						case $NodeFilter::FILTER_REJECT:
							{
								{
									return;
								}
							}
						case $NodeFilter::FILTER_SKIP:
							{
								{
									$assign(child, node->getFirstChild());
									while (child != nullptr) {
										serializeNode(child);
										$assign(child, child->getNextSibling());
									}
									return;
								}
							}
						default:
							{
								{
								}
							}
						}
					}
					checkUnboundNamespacePrefixedNode(node);
					$nc(this->_printer)->printText("&"_s);
					$nc(this->_printer)->printText($(node->getNodeName()));
					$nc(this->_printer)->printText(";"_s);
				} else {
					$assign(child, node->getFirstChild());
					while (child != nullptr) {
						serializeNode(child);
						$assign(child, child->getNextSibling());
					}
				}
				break;
			}
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			{
				if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_PROCESSING_INSTRUCTION)) != 0) {
					int16_t code = $nc(this->fDOMFilter)->acceptNode(node);
					switch (code) {
					case $NodeFilter::FILTER_REJECT:
						{}
					case $NodeFilter::FILTER_SKIP:
						{
							{
								return;
							}
						}
					default:
						{
							{
							}
						}
					}
				}
				$var($String, var$2, node->getNodeName());
				processingInstructionIO(var$2, $(node->getNodeValue()));
				break;
			}
		}
	case $Node::ELEMENT_NODE:
		{
			{
				if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_ELEMENT)) != 0) {
					int16_t code = $nc(this->fDOMFilter)->acceptNode(node);
					switch (code) {
					case $NodeFilter::FILTER_REJECT:
						{
							{
								return;
							}
						}
					case $NodeFilter::FILTER_SKIP:
						{
							{
								$var($Node, child, node->getFirstChild());
								while (child != nullptr) {
									serializeNode(child);
									$assign(child, child->getNextSibling());
								}
								return;
							}
						}
					default:
						{
							{
							}
						}
					}
				}
				serializeElement($cast($Element, node));
				break;
			}
		}
	case $Node::DOCUMENT_NODE:
		{
			{
				$var($DocumentType, docType, nullptr);
				serializeDocument();
				$assign(docType, $nc(($cast($Document, node)))->getDoctype());
				if (docType != nullptr) {
					try {
						$var($String, internal, nullptr);
						$nc(this->_printer)->enterDTD();
						$set(this, _docTypePublicId, docType->getPublicId());
						$set(this, _docTypeSystemId, docType->getSystemId());
						$assign(internal, docType->getInternalSubset());
						if (internal != nullptr && internal->length() > 0) {
							$nc(this->_printer)->printText(internal);
						}
						endDTD();
					} catch ($Exception& e) {
						$nc(this->_printer)->enterDTD();
						$set(this, _docTypePublicId, nullptr);
						$set(this, _docTypeSystemId, nullptr);
						endDTD();
					}
					serializeDTD($(docType->getName()));
				}
				this->_started = true;
			}
		}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{
			{
				$var($Node, child, nullptr);
				$assign(child, node->getFirstChild());
				while (child != nullptr) {
					serializeNode(child);
					$assign(child, child->getNextSibling());
				}
				break;
			}
		}
	default:
		{
			break;
		}
	}
}

void BaseMarkupSerializer::serializeDocument() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	$var($String, dtd, $nc(this->_printer)->leaveDTD());
	if (!this->_started) {
		if (!$nc(this->_format)->getOmitXMLDeclaration()) {
			$var($StringBuffer, buffer, nullptr);
			$assign(buffer, $new($StringBuffer, "<?xml version=\""_s));
			if ($nc(this->_format)->getVersion() != nullptr) {
				buffer->append($($nc(this->_format)->getVersion()));
			} else {
				buffer->append("1.0"_s);
			}
			buffer->append(u'\"');
			$var($String, format_encoding, $nc(this->_format)->getEncoding());
			if (format_encoding != nullptr) {
				buffer->append(" encoding=\""_s);
				buffer->append(format_encoding);
				buffer->append(u'\"');
			}
			if ($nc(this->_format)->getStandalone() && this->_docTypeSystemId == nullptr && this->_docTypePublicId == nullptr) {
				buffer->append(" standalone=\"yes\""_s);
			}
			buffer->append("?>"_s);
			$nc(this->_printer)->printText(buffer);
			$nc(this->_printer)->breakLine();
		}
	}
	serializePreRoot();
}

void BaseMarkupSerializer::serializeDTD($String* name) {
	$var($String, dtd, $nc(this->_printer)->leaveDTD());
	if (!$nc(this->_format)->getOmitDocumentType()) {
		if (this->_docTypeSystemId != nullptr) {
			$nc(this->_printer)->printText("<!DOCTYPE "_s);
			$nc(this->_printer)->printText(name);
			if (this->_docTypePublicId != nullptr) {
				$nc(this->_printer)->printText(" PUBLIC "_s);
				printDoctypeURL(this->_docTypePublicId);
				if (this->_indenting) {
					$nc(this->_printer)->breakLine();
					for (int32_t i = 0; i < 18 + $nc(name)->length(); ++i) {
						$nc(this->_printer)->printText(" "_s);
					}
				} else {
					$nc(this->_printer)->printText(" "_s);
				}
				printDoctypeURL(this->_docTypeSystemId);
			} else {
				$nc(this->_printer)->printText(" SYSTEM "_s);
				printDoctypeURL(this->_docTypeSystemId);
			}
			if (dtd != nullptr && dtd->length() > 0) {
				$nc(this->_printer)->printText(" ["_s);
				printText(dtd, true, true);
				$nc(this->_printer)->printText(u']');
			}
			$nc(this->_printer)->printText(">"_s);
			$nc(this->_printer)->breakLine();
		} else if (dtd != nullptr && dtd->length() > 0) {
			$nc(this->_printer)->printText("<!DOCTYPE "_s);
			$nc(this->_printer)->printText(name);
			$nc(this->_printer)->printText(" ["_s);
			printText(dtd, true, true);
			$nc(this->_printer)->printText("]>"_s);
			$nc(this->_printer)->breakLine();
		}
	}
}

$ElementState* BaseMarkupSerializer::content() {
	$var($ElementState, state, nullptr);
	$assign(state, getElementState());
	if (!isDocumentState()) {
		if ($nc(state)->inCData && !state->doCData) {
			$nc(this->_printer)->printText("]]>"_s);
			state->inCData = false;
		}
		if ($nc(state)->empty) {
			$nc(this->_printer)->printText(u'>');
			state->empty = false;
		}
		$nc(state)->afterElement = false;
		state->afterComment = false;
	}
	return state;
}

void BaseMarkupSerializer::characters($String* text) {
	$var($ElementState, state, nullptr);
	$assign(state, content());
	if ($nc(state)->inCData || $nc(state)->doCData) {
		if (!state->inCData) {
			$nc(this->_printer)->printText("<![CDATA["_s);
			state->inCData = true;
		}
		int32_t saveIndent = $nc(this->_printer)->getNextIndent();
		$nc(this->_printer)->setNextIndent(0);
		printCDATAText(text);
		$nc(this->_printer)->setNextIndent(saveIndent);
	} else {
		int32_t saveIndent = 0;
		if (state->preserveSpace) {
			saveIndent = $nc(this->_printer)->getNextIndent();
			$nc(this->_printer)->setNextIndent(0);
			printText(text, true, state->unescaped);
			$nc(this->_printer)->setNextIndent(saveIndent);
		} else {
			printText(text, false, state->unescaped);
		}
	}
}

void BaseMarkupSerializer::serializePreRoot() {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	if (this->_preRoot != nullptr) {
		for (i = 0; i < $nc(this->_preRoot)->size(); ++i) {
			printText($cast($String, $($nc(this->_preRoot)->get(i))), true, true);
			if (this->_indenting) {
				$nc(this->_printer)->breakLine();
			}
		}
		$nc(this->_preRoot)->clear();
	}
}

void BaseMarkupSerializer::printCDATAText($String* text) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(text)->length();
	char16_t ch = 0;
	for (int32_t index = 0; index < length; ++index) {
		ch = text->charAt(index);
		bool var$0 = ch == u']' && index + 2 < length && text->charAt(index + 1) == u']';
		if (var$0 && text->charAt(index + 2) == u'>') {
			if (this->fDOMErrorHandler != nullptr) {
				if (((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::SPLITCDATA)) == 0) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "EndingCDATA"_s, nullptr));
					if (((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::WELLFORMED)) != 0) {
						modifyDOMError(msg, $DOMError::SEVERITY_FATAL_ERROR, "wf-invalid-character"_s, this->fCurrentNode);
						$nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
						$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
					}
					modifyDOMError(msg, $DOMError::SEVERITY_ERROR, "cdata-section-not-splitted"_s, this->fCurrentNode);
					if (!$nc(this->fDOMErrorHandler)->handleError(this->fDOMError)) {
						$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
					}
				} else {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "SplittingCDATA"_s, nullptr));
					modifyDOMError(msg, $DOMError::SEVERITY_WARNING, nullptr, this->fCurrentNode);
					$nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
				}
			}
			$nc(this->_printer)->printText("]]]]><![CDATA[>"_s);
			index += 2;
			continue;
		}
		if (!$XMLChar::isValid(ch)) {
			if (++index < length) {
				surrogates(ch, text->charAt(index), true);
			} else {
				fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
			}
			continue;
		}
		if ((ch >= u' ' && $nc(this->_encodingInfo)->isPrintable(ch) && ch != 127) || ch == u'\n' || ch == u'\r' || ch == u'\t') {
			$nc(this->_printer)->printText(ch);
		} else {
			$nc(this->_printer)->printText("]]>&#x"_s);
			$nc(this->_printer)->printText($($Integer::toHexString(ch)));
			$nc(this->_printer)->printText(";<![CDATA["_s);
		}
	}
}

void BaseMarkupSerializer::surrogates(int32_t high, int32_t low, bool inContent) {
	$useLocalCurrentObjectStackCache();
	if ($XMLChar::isHighSurrogate(high)) {
		if (!$XMLChar::isLowSurrogate(low)) {
			fatalError($$str({"The character \'"_s, $$str((char16_t)low), "\' is an invalid XML character"_s}));
		} else {
			int32_t supplemental = $XMLChar::supplemental((char16_t)high, (char16_t)low);
			if (!$XMLChar::isValid(supplemental)) {
				fatalError($$str({"The character \'"_s, $$str((char16_t)supplemental), "\' is an invalid XML character"_s}));
			} else if (inContent && $nc($(content()))->inCData) {
				$nc(this->_printer)->printText("]]>&#x"_s);
				$nc(this->_printer)->printText($($Integer::toHexString(supplemental)));
				$nc(this->_printer)->printText(";<![CDATA["_s);
			} else {
				printHex(supplemental);
			}
		}
	} else {
		fatalError($$str({"The character \'"_s, $$str((char16_t)high), "\' is an invalid XML character"_s}));
	}
}

void BaseMarkupSerializer::printText($chars* chars, int32_t start, int32_t length, bool preserveSpace, bool unescaped) {
	if (preserveSpace) {
		while (length-- > 0) {
			char16_t ch = $nc(chars)->get(start);
			++start;
			if (ch == u'\n' || ch == u'\r' || unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printEscaped((int32_t)ch);
			}
		}
	} else {
		while (length-- > 0) {
			char16_t ch = $nc(chars)->get(start);
			++start;
			if (ch == u' ' || ch == u'\f' || ch == u'\t' || ch == u'\n' || ch == u'\r') {
				$nc(this->_printer)->printSpace();
			} else if (unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printEscaped((int32_t)ch);
			}
		}
	}
}

void BaseMarkupSerializer::printText($String* text, bool preserveSpace, bool unescaped) {
	int32_t index = 0;
	char16_t ch = 0;
	if (preserveSpace) {
		for (index = 0; index < $nc(text)->length(); ++index) {
			ch = text->charAt(index);
			if (ch == u'\n' || ch == u'\r' || unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printEscaped((int32_t)ch);
			}
		}
	} else {
		for (index = 0; index < $nc(text)->length(); ++index) {
			ch = text->charAt(index);
			if (ch == u' ' || ch == u'\f' || ch == u'\t' || ch == u'\n' || ch == u'\r') {
				$nc(this->_printer)->printSpace();
			} else if (unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printEscaped((int32_t)ch);
			}
		}
	}
}

void BaseMarkupSerializer::printDoctypeURL($String* url) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	$nc(this->_printer)->printText(u'\"');
	for (i = 0; i < $nc(url)->length(); ++i) {
		bool var$1 = url->charAt(i) == u'\"';
		bool var$0 = var$1 || url->charAt(i) < 32;
		if (var$0 || url->charAt(i) > 127) {
			$nc(this->_printer)->printText(u'%');
			$nc(this->_printer)->printText($($Integer::toHexString(url->charAt(i))));
		} else {
			$nc(this->_printer)->printText(url->charAt(i));
		}
	}
	$nc(this->_printer)->printText(u'\"');
}

void BaseMarkupSerializer::printEscaped(int32_t ch) {
	$var($String, charRef, nullptr);
	$assign(charRef, getEntityRef(ch));
	if (charRef != nullptr) {
		$nc(this->_printer)->printText(u'&');
		$nc(this->_printer)->printText(charRef);
		$nc(this->_printer)->printText(u';');
	} else if ((ch >= u' ' && $nc(this->_encodingInfo)->isPrintable((char16_t)ch) && ch != 127) || ch == u'\n' || ch == u'\r' || ch == u'\t') {
		if (ch < 0x00010000) {
			$nc(this->_printer)->printText((char16_t)ch);
		} else {
			$nc(this->_printer)->printText((char16_t)(((ch - 0x00010000) >> 10) + 0x0000D800));
			$nc(this->_printer)->printText((char16_t)(((int32_t)((ch - 0x00010000) & (uint32_t)1023)) + 0x0000DC00));
		}
	} else {
		printHex(ch);
	}
}

void BaseMarkupSerializer::printHex(int32_t ch) {
	$nc(this->_printer)->printText("&#x"_s);
	$nc(this->_printer)->printText($($Integer::toHexString(ch)));
	$nc(this->_printer)->printText(u';');
}

void BaseMarkupSerializer::printEscaped($String* source) {
	for (int32_t i = 0; i < $nc(source)->length(); ++i) {
		int32_t ch = source->charAt(i);
		if (((int32_t)(ch & (uint32_t)0x0000FC00)) == 0x0000D800 && i + 1 < source->length()) {
			int32_t lowch = source->charAt(i + 1);
			if (((int32_t)(lowch & (uint32_t)0x0000FC00)) == 0x0000DC00) {
				ch = 0x00010000 + ((ch - 0x0000D800) << 10) + lowch - 0x0000DC00;
				++i;
			}
		}
		printEscaped(ch);
	}
}

$ElementState* BaseMarkupSerializer::getElementState() {
	return $nc(this->_elementStates)->get(this->_elementStateCount);
}

$ElementState* BaseMarkupSerializer::enterElementState($String* namespaceURI, $String* localName, $String* rawName, bool preserveSpace) {
	$useLocalCurrentObjectStackCache();
	$var($ElementState, state, nullptr);
	if (this->_elementStateCount + 1 == $nc(this->_elementStates)->length) {
		$var($ElementStateArray, newStates, nullptr);
		$assign(newStates, $new($ElementStateArray, $nc(this->_elementStates)->length + 10));
		for (int32_t i = 0; i < $nc(this->_elementStates)->length; ++i) {
			newStates->set(i, $nc(this->_elementStates)->get(i));
		}
		for (int32_t i = $nc(this->_elementStates)->length; i < newStates->length; ++i) {
			newStates->set(i, $$new($ElementState));
		}
		$set(this, _elementStates, newStates);
	}
	++this->_elementStateCount;
	$assign(state, $nc(this->_elementStates)->get(this->_elementStateCount));
	$set($nc(state), namespaceURI, namespaceURI);
	$set(state, localName, localName);
	$set(state, rawName, rawName);
	state->preserveSpace = preserveSpace;
	state->empty = true;
	state->afterElement = false;
	state->afterComment = false;
	state->doCData = (state->inCData = false);
	state->unescaped = false;
	$set(state, prefixes, this->_prefixes);
	$set(this, _prefixes, nullptr);
	return state;
}

$ElementState* BaseMarkupSerializer::leaveElementState() {
	if (this->_elementStateCount > 0) {
		$set(this, _prefixes, nullptr);
		--this->_elementStateCount;
		return $nc(this->_elementStates)->get(this->_elementStateCount);
	}
	$init($DOMMessageFormatter);
	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "Internal"_s, nullptr));
	$throwNew($IllegalStateException, msg);
}

bool BaseMarkupSerializer::isDocumentState() {
	return this->_elementStateCount == 0;
}

void BaseMarkupSerializer::clearDocumentState() {
	this->_elementStateCount = 0;
}

$String* BaseMarkupSerializer::getPrefix($String* namespaceURI) {
	$var($String, prefix, nullptr);
	if (this->_prefixes != nullptr) {
		$assign(prefix, $cast($String, $nc(this->_prefixes)->get(namespaceURI)));
		if (prefix != nullptr) {
			return prefix;
		}
	}
	if (this->_elementStateCount == 0) {
		return nullptr;
	}
	for (int32_t i = this->_elementStateCount; i > 0; --i) {
		if ($nc($nc(this->_elementStates)->get(i))->prefixes != nullptr) {
			$assign(prefix, $cast($String, $nc($nc($nc(this->_elementStates)->get(i))->prefixes)->get(namespaceURI)));
			if (prefix != nullptr) {
				return prefix;
			}
		}
	}
	return nullptr;
}

$DOMError* BaseMarkupSerializer::modifyDOMError($String* message, int16_t severity, $String* type, $Node* node) {
	$nc(this->fDOMError)->reset();
	$set($nc(this->fDOMError), fMessage, message);
	$set($nc(this->fDOMError), fType, type);
	$nc(this->fDOMError)->fSeverity = severity;
	$set($nc(this->fDOMError), fLocator, $new($DOMLocatorImpl, -1, -1, -1, node, nullptr));
	return this->fDOMError;
}

void BaseMarkupSerializer::fatalError($String* message) {
	if (this->fDOMErrorHandler != nullptr) {
		modifyDOMError(message, $DOMError::SEVERITY_FATAL_ERROR, nullptr, this->fCurrentNode);
		$nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
	} else {
		$throwNew($IOException, message);
	}
}

void BaseMarkupSerializer::checkUnboundNamespacePrefixedNode($Node* node) {
}

BaseMarkupSerializer::BaseMarkupSerializer() {
}

$Class* BaseMarkupSerializer::load$($String* name, bool initialize) {
	$loadClass(BaseMarkupSerializer, name, initialize, &_BaseMarkupSerializer_ClassInfo_, allocate$BaseMarkupSerializer);
	return class$;
}

$Class* BaseMarkupSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
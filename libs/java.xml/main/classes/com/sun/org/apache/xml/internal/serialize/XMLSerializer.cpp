#include <com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/DOMSerializerImpl.h>
#include <com/sun/org/apache/xml/internal/serialize/ElementState.h>
#include <com/sun/org/apache/xml/internal/serialize/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Printer.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef DEBUG
#undef DISCARDDEFAULT
#undef DOM_DOMAIN
#undef ELEMENT_NODE
#undef EMPTY_STRING
#undef FILTER_REJECT
#undef FILTER_SKIP
#undef PREFIX
#undef PREFIX_XMLNS
#undef SERIALIZER_DOMAIN
#undef SEVERITY_ERROR
#undef SHOW_ATTRIBUTE
#undef XML
#undef XMLNS_URI
#undef XML_DOMAIN

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $BaseMarkupSerializer = ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer;
using $DOMSerializerImpl = ::com::sun::org::apache::xml::internal::serialize::DOMSerializerImpl;
using $ElementState = ::com::sun::org::apache::xml::internal::serialize::ElementState;
using $EncodingInfo = ::com::sun::org::apache::xml::internal::serialize::EncodingInfo;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
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
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Attr = ::org::w3c::dom::Attr;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _XMLSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XMLSerializer_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLSerializer, DEBUG)},
	{"fNSBinder", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PROTECTED, $field(XMLSerializer, fNSBinder)},
	{"fLocalNSBinder", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PROTECTED, $field(XMLSerializer, fLocalNSBinder)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLSerializer, fSymbolTable)},
	{"PREFIX", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSerializer, PREFIX)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(XMLSerializer, fNamespaces)},
	{"fNamespacePrefixes", "Z", nullptr, $PROTECTED, $field(XMLSerializer, fNamespacePrefixes)},
	{"fPreserveSpace", "Z", nullptr, $PRIVATE, $field(XMLSerializer, fPreserveSpace)},
	{}
};

$MethodInfo _XMLSerializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSerializer, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XMLSerializer, init$, void, $OutputFormat*)},
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XMLSerializer, init$, void, $Writer*, $OutputFormat*)},
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XMLSerializer, init$, void, $OutputStream*, $OutputFormat*)},
	{"checkUnboundNamespacePrefixedNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, checkUnboundNamespacePrefixedNode, void, $Node*), "java.io.IOException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endElementIO", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, endElementIO, void, $String*, $String*, $String*), "java.io.IOException"},
	{"extractNamespaces", "(Lorg/xml/sax/Attributes;)Lorg/xml/sax/Attributes;", nullptr, $PRIVATE, $method(XMLSerializer, extractNamespaces, $Attributes*, $Attributes*), "org.xml.sax.SAXException"},
	{"getEntityRef", "(I)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, getEntityRef, $String*, int32_t)},
	{"printAttribute", "(Ljava/lang/String;Ljava/lang/String;ZLorg/w3c/dom/Attr;)V", nullptr, $PRIVATE, $method(XMLSerializer, printAttribute, void, $String*, $String*, bool, $Attr*), "java.io.IOException"},
	{"printEscaped", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, printEscaped, void, $String*), "java.io.IOException"},
	{"printNamespaceAttr", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLSerializer, printNamespaceAttr, void, $String*, $String*), "java.io.IOException"},
	{"printText", "(Ljava/lang/String;ZZ)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, printText, void, $String*, bool, bool), "java.io.IOException"},
	{"printText", "([CIIZZ)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, printText, void, $chars*, int32_t, int32_t, bool, bool), "java.io.IOException"},
	{"printXMLChar", "(I)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, printXMLChar, void, int32_t), "java.io.IOException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, reset, bool)},
	{"serializeElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, serializeElement, void, $Element*), "java.io.IOException"},
	{"setNamespaces", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, setNamespaces, void, bool)},
	{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, setOutputFormat, void, $OutputFormat*)},
	{"startDocument", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XMLSerializer, startDocument, void, $String*), "java.io.IOException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC, $virtualMethod(XMLSerializer, startElement, void, $String*, $AttributeList*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _XMLSerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.XMLSerializer",
	"com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer",
	nullptr,
	_XMLSerializer_FieldInfo_,
	_XMLSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_XMLSerializer_Annotations_
};

$Object* allocate$XMLSerializer($Class* clazz) {
	return $of($alloc(XMLSerializer));
}

$String* XMLSerializer::PREFIX = nullptr;

void XMLSerializer::init$() {
	$init($Method);
	$BaseMarkupSerializer::init$($$new($OutputFormat, $Method::XML, nullptr, false));
	this->fNamespaces = false;
	this->fNamespacePrefixes = true;
}

void XMLSerializer::init$($OutputFormat* format) {
	$init($Method);
	$BaseMarkupSerializer::init$(format != nullptr ? format : $$new($OutputFormat, $Method::XML, nullptr, false));
	this->fNamespaces = false;
	this->fNamespacePrefixes = true;
	$nc(this->_format)->setMethod($Method::XML);
}

void XMLSerializer::init$($Writer* writer, $OutputFormat* format) {
	$init($Method);
	$BaseMarkupSerializer::init$(format != nullptr ? format : $$new($OutputFormat, $Method::XML, nullptr, false));
	this->fNamespaces = false;
	this->fNamespacePrefixes = true;
	$nc(this->_format)->setMethod($Method::XML);
	setOutputCharStream(writer);
}

void XMLSerializer::init$($OutputStream* output, $OutputFormat* format) {
	$init($Method);
	$BaseMarkupSerializer::init$(format != nullptr ? format : $$new($OutputFormat, $Method::XML, nullptr, false));
	this->fNamespaces = false;
	this->fNamespacePrefixes = true;
	$nc(this->_format)->setMethod($Method::XML);
	setOutputByteStream(output);
}

void XMLSerializer::setOutputFormat($OutputFormat* format) {
	$init($Method);
	$BaseMarkupSerializer::setOutputFormat(format != nullptr ? format : $$new($OutputFormat, $Method::XML, nullptr, false));
}

void XMLSerializer::setNamespaces(bool namespaces) {
	this->fNamespaces = namespaces;
	if (this->fNSBinder == nullptr) {
		$set(this, fNSBinder, $new($NamespaceSupport));
		$set(this, fLocalNSBinder, $new($NamespaceSupport));
		$set(this, fSymbolTable, $new($SymbolTable));
	}
}

void XMLSerializer::startElement($String* namespaceURI, $String* localName, $String* rawName$renamed, $Attributes* attrs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, rawName, rawName$renamed);
	$var($Attributes, attrs, attrs$renamed);
	int32_t i = 0;
	bool preserveSpace = false;
	$var($ElementState, state, nullptr);
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	try {
		if (this->_printer == nullptr) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "NoWriterSupplied"_s, nullptr));
			$throwNew($IllegalStateException, msg);
		}
		$assign(state, getElementState());
		if (isDocumentState()) {
			if (!this->_started) {
				startDocument((localName == nullptr || $nc(localName)->length() == 0) ? rawName : localName);
			}
		} else {
			if ($nc(state)->empty) {
				$nc(this->_printer)->printText(u'>');
			}
			if ($nc(state)->inCData) {
				$nc(this->_printer)->printText("]]>"_s);
				state->inCData = false;
			}
			if (this->_indenting && !$nc(state)->preserveSpace && (state->empty || $nc(state)->afterElement || $nc(state)->afterComment)) {
				$nc(this->_printer)->breakLine();
			}
		}
		preserveSpace = $nc(state)->preserveSpace;
		$assign(attrs, extractNamespaces(attrs));
		if (rawName == nullptr || $nc(rawName)->length() == 0) {
			if (localName == nullptr) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "NoName"_s, nullptr));
				$throwNew($SAXException, msg);
			}
			if (namespaceURI != nullptr && !namespaceURI->equals(""_s)) {
				$var($String, prefix, nullptr);
				$assign(prefix, getPrefix(namespaceURI));
				if (prefix != nullptr && prefix->length() > 0) {
					$assign(rawName, $str({prefix, ":"_s, localName}));
				} else {
					$assign(rawName, localName);
				}
			} else {
				$assign(rawName, localName);
			}
		}
		$nc(this->_printer)->printText(u'<');
		$nc(this->_printer)->printText(rawName);
		$nc(this->_printer)->indent();
		if (attrs != nullptr) {
			for (i = 0; i < attrs->getLength(); ++i) {
				$nc(this->_printer)->printSpace();
				$assign(name, attrs->getQName(i));
				if (name != nullptr && name->length() == 0) {
					$var($String, prefix, nullptr);
					$var($String, attrURI, nullptr);
					$assign(name, attrs->getLocalName(i));
					$assign(attrURI, attrs->getURI(i));
					bool var$0 = (attrURI != nullptr && attrURI->length() != 0);
					if (var$0) {
						bool var$1 = namespaceURI == nullptr || $nc(namespaceURI)->length() == 0;
						var$0 = (var$1 || !attrURI->equals(namespaceURI));
					}
					if (var$0) {
						$assign(prefix, getPrefix(attrURI));
						if (prefix != nullptr && prefix->length() > 0) {
							$assign(name, $str({prefix, ":"_s, name}));
						}
					}
				}
				$assign(value, attrs->getValue(i));
				if (value == nullptr) {
					$assign(value, ""_s);
				}
				$nc(this->_printer)->printText(name);
				$nc(this->_printer)->printText("=\""_s);
				printEscaped(value);
				$nc(this->_printer)->printText(u'\"');
				if ($nc(name)->equals("xml:space"_s)) {
					if ($nc(value)->equals("preserve"_s)) {
						preserveSpace = true;
					} else {
						preserveSpace = $nc(this->_format)->getPreserveSpace();
					}
				}
			}
		}
		if (this->_prefixes != nullptr) {
			{
				$var($Iterator, i$, $nc($($nc(this->_prefixes)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$nc(this->_printer)->printSpace();
						$assign(value, $cast($String, $nc(entry)->getKey()));
						$assign(name, $cast($String, entry->getValue()));
						if ($nc(name)->length() == 0) {
							$nc(this->_printer)->printText("xmlns=\""_s);
							printEscaped(value);
							$nc(this->_printer)->printText(u'\"');
						} else {
							$nc(this->_printer)->printText("xmlns:"_s);
							$nc(this->_printer)->printText(name);
							$nc(this->_printer)->printText("=\""_s);
							printEscaped(value);
							$nc(this->_printer)->printText(u'\"');
						}
					}
				}
			}
		}
		$assign(state, enterElementState(namespaceURI, localName, rawName, preserveSpace));
		$assign(name, (localName == nullptr || $nc(localName)->length() == 0) ? rawName : $str({namespaceURI, "^"_s, localName}));
		state->doCData = $nc(this->_format)->isCDataElement(name);
		state->unescaped = $nc(this->_format)->isNonEscapingElement(name);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void XMLSerializer::endElement($String* namespaceURI, $String* localName, $String* rawName) {
	try {
		endElementIO(namespaceURI, localName, rawName);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void XMLSerializer::endElementIO($String* namespaceURI, $String* localName, $String* rawName) {
	$var($ElementState, state, nullptr);
	$nc(this->_printer)->unindent();
	$assign(state, getElementState());
	if ($nc(state)->empty) {
		$nc(this->_printer)->printText("/>"_s);
	} else {
		if (state->inCData) {
			$nc(this->_printer)->printText("]]>"_s);
		}
		if (this->_indenting && !state->preserveSpace && (state->afterElement || state->afterComment)) {
			$nc(this->_printer)->breakLine();
		}
		$nc(this->_printer)->printText("</"_s);
		$nc(this->_printer)->printText(state->rawName);
		$nc(this->_printer)->printText(u'>');
	}
	$assign(state, leaveElementState());
	$nc(state)->afterElement = true;
	state->afterComment = false;
	state->empty = false;
	if (isDocumentState()) {
		$nc(this->_printer)->flush();
	}
}

void XMLSerializer::startElement($String* tagName, $AttributeList* attrs) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	bool preserveSpace = false;
	$var($ElementState, state, nullptr);
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	try {
		if (this->_printer == nullptr) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "NoWriterSupplied"_s, nullptr));
			$throwNew($IllegalStateException, msg);
		}
		$assign(state, getElementState());
		if (isDocumentState()) {
			if (!this->_started) {
				startDocument(tagName);
			}
		} else {
			if ($nc(state)->empty) {
				$nc(this->_printer)->printText(u'>');
			}
			if ($nc(state)->inCData) {
				$nc(this->_printer)->printText("]]>"_s);
				state->inCData = false;
			}
			if (this->_indenting && !$nc(state)->preserveSpace && (state->empty || $nc(state)->afterElement || $nc(state)->afterComment)) {
				$nc(this->_printer)->breakLine();
			}
		}
		preserveSpace = $nc(state)->preserveSpace;
		$nc(this->_printer)->printText(u'<');
		$nc(this->_printer)->printText(tagName);
		$nc(this->_printer)->indent();
		if (attrs != nullptr) {
			for (i = 0; i < attrs->getLength(); ++i) {
				$nc(this->_printer)->printSpace();
				$assign(name, attrs->getName(i));
				$assign(value, attrs->getValue(i));
				if (value != nullptr) {
					$nc(this->_printer)->printText(name);
					$nc(this->_printer)->printText("=\""_s);
					printEscaped(value);
					$nc(this->_printer)->printText(u'\"');
				}
				if ($nc(name)->equals("xml:space"_s)) {
					if ($nc(value)->equals("preserve"_s)) {
						preserveSpace = true;
					} else {
						preserveSpace = $nc(this->_format)->getPreserveSpace();
					}
				}
			}
		}
		$assign(state, enterElementState(nullptr, nullptr, tagName, preserveSpace));
		state->doCData = $nc(this->_format)->isCDataElement(tagName);
		state->unescaped = $nc(this->_format)->isNonEscapingElement(tagName);
	} catch ($IOException& except) {
		$throwNew($SAXException, static_cast<$Exception*>(except));
	}
}

void XMLSerializer::endElement($String* tagName) {
	endElement(nullptr, nullptr, tagName);
}

void XMLSerializer::startDocument($String* rootTagName) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	$var($String, dtd, nullptr);
	$assign(dtd, $nc(this->_printer)->leaveDTD());
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
		if (!$nc(this->_format)->getOmitDocumentType()) {
			if (this->_docTypeSystemId != nullptr) {
				$nc(this->_printer)->printText("<!DOCTYPE "_s);
				$nc(this->_printer)->printText(rootTagName);
				if (this->_docTypePublicId != nullptr) {
					$nc(this->_printer)->printText(" PUBLIC "_s);
					printDoctypeURL(this->_docTypePublicId);
					if (this->_indenting) {
						$nc(this->_printer)->breakLine();
						for (i = 0; i < 18 + $nc(rootTagName)->length(); ++i) {
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
				$nc(this->_printer)->printText(rootTagName);
				$nc(this->_printer)->printText(" ["_s);
				printText(dtd, true, true);
				$nc(this->_printer)->printText("]>"_s);
				$nc(this->_printer)->breakLine();
			}
		}
	}
	this->_started = true;
	serializePreRoot();
}

void XMLSerializer::serializeElement($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$var($Attr, attr, nullptr);
	$var($NamedNodeMap, attrMap, nullptr);
	int32_t i = 0;
	$var($Node, child, nullptr);
	$var($ElementState, state, nullptr);
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	$var($String, tagName, nullptr);
	$var($String, prefix, nullptr);
	$var($String, localUri, nullptr);
	$var($String, uri, nullptr);
	if (this->fNamespaces) {
		$nc(this->fLocalNSBinder)->reset();
		$nc(this->fNSBinder)->pushContext();
	}
	$assign(tagName, $nc(elem)->getTagName());
	$assign(state, getElementState());
	if (isDocumentState()) {
		if (!this->_started) {
			startDocument(tagName);
		}
	} else {
		if ($nc(state)->empty) {
			$nc(this->_printer)->printText(u'>');
		}
		if ($nc(state)->inCData) {
			$nc(this->_printer)->printText("]]>"_s);
			state->inCData = false;
		}
		if (this->_indenting && !$nc(state)->preserveSpace && (state->empty || $nc(state)->afterElement || $nc(state)->afterComment)) {
			$nc(this->_printer)->breakLine();
		}
	}
	this->fPreserveSpace = $nc(state)->preserveSpace;
	int32_t length = 0;
	$assign(attrMap, nullptr);
	if (elem->hasAttributes()) {
		$assign(attrMap, elem->getAttributes());
		length = $nc(attrMap)->getLength();
	}
	if (!this->fNamespaces) {
		$nc(this->_printer)->printText(u'<');
		$nc(this->_printer)->printText(tagName);
		$nc(this->_printer)->indent();
		for (i = 0; i < length; ++i) {
			$assign(attr, $cast($Attr, $nc(attrMap)->item(i)));
			$assign(name, $nc(attr)->getName());
			$assign(value, attr->getValue());
			if (value == nullptr) {
				$assign(value, ""_s);
			}
			printAttribute(name, value, attr->getSpecified(), attr);
		}
	} else {
		for (i = 0; i < length; ++i) {
			$assign(attr, $cast($Attr, $nc(attrMap)->item(i)));
			$assign(uri, $nc(attr)->getNamespaceURI());
			$init($NamespaceContext);
			if (uri != nullptr && uri->equals($NamespaceContext::XMLNS_URI)) {
				$assign(value, attr->getNodeValue());
				if (value == nullptr) {
					$init($XMLSymbols);
					$assign(value, $XMLSymbols::EMPTY_STRING);
				}
				if ($nc(value)->equals($NamespaceContext::XMLNS_URI)) {
					if (this->fDOMErrorHandler != nullptr) {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::XML_DOMAIN, "CantBindXMLNS"_s, nullptr));
						modifyDOMError(msg, $DOMError::SEVERITY_ERROR, nullptr, attr);
						bool continueProcess = $nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
						if (!continueProcess) {
							$throwNew($RuntimeException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "SerializationStopped"_s, nullptr)));
						}
					}
				} else {
					$assign(prefix, attr->getPrefix());
					$init($XMLSymbols);
					$assign(prefix, (prefix == nullptr || $nc(prefix)->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
					$var($String, localpart, $nc(this->fSymbolTable)->addSymbol($(attr->getLocalName())));
					if (prefix == $XMLSymbols::PREFIX_XMLNS) {
						$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
						if ($nc(value)->length() != 0) {
							$nc(this->fNSBinder)->declarePrefix(localpart, value);
						} else {
						}
						continue;
					}
					$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
					$nc(this->fNSBinder)->declarePrefix($XMLSymbols::EMPTY_STRING, value);
					continue;
				}
			}
		}
		$assign(uri, elem->getNamespaceURI());
		$assign(prefix, elem->getPrefix());
		bool var$0 = (uri != nullptr && prefix != nullptr) && uri->length() == 0;
		if (var$0 && prefix->length() != 0) {
			$assign(prefix, nullptr);
			$nc(this->_printer)->printText(u'<');
			$nc(this->_printer)->printText($(elem->getLocalName()));
			$nc(this->_printer)->indent();
		} else {
			$nc(this->_printer)->printText(u'<');
			$nc(this->_printer)->printText(tagName);
			$nc(this->_printer)->indent();
		}
		if (uri != nullptr) {
			$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
			$init($XMLSymbols);
			$assign(prefix, (prefix == nullptr || $nc(prefix)->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
			if ($nc(this->fNSBinder)->getURI(prefix) == uri) {
			} else {
				if (this->fNamespacePrefixes) {
					printNamespaceAttr(prefix, uri);
				}
				$nc(this->fLocalNSBinder)->declarePrefix(prefix, uri);
				$nc(this->fNSBinder)->declarePrefix(prefix, uri);
			}
		} else if (elem->getLocalName() == nullptr) {
			if (this->fDOMErrorHandler != nullptr) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NullLocalElementName"_s, $$new($ObjectArray, {$($of(elem->getNodeName()))})));
				modifyDOMError(msg, $DOMError::SEVERITY_ERROR, nullptr, elem);
				bool continueProcess = $nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
				if (!continueProcess) {
					$throwNew($RuntimeException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "SerializationStopped"_s, nullptr)));
				}
			}
		} else {
			$init($XMLSymbols);
			$assign(uri, $nc(this->fNSBinder)->getURI($XMLSymbols::EMPTY_STRING));
			if (uri != nullptr && uri->length() > 0) {
				if (this->fNamespacePrefixes) {
					printNamespaceAttr($XMLSymbols::EMPTY_STRING, $XMLSymbols::EMPTY_STRING);
				}
				$nc(this->fLocalNSBinder)->declarePrefix($XMLSymbols::EMPTY_STRING, $XMLSymbols::EMPTY_STRING);
				$nc(this->fNSBinder)->declarePrefix($XMLSymbols::EMPTY_STRING, $XMLSymbols::EMPTY_STRING);
			}
		}
		for (i = 0; i < length; ++i) {
			$assign(attr, $cast($Attr, $nc(attrMap)->item(i)));
			$assign(value, $nc(attr)->getValue());
			$assign(name, attr->getNodeName());
			$assign(uri, attr->getNamespaceURI());
			if (uri != nullptr && uri->length() == 0) {
				$assign(uri, nullptr);
				$assign(name, attr->getLocalName());
			}
			if (value == nullptr) {
				$init($XMLSymbols);
				$assign(value, $XMLSymbols::EMPTY_STRING);
			}
			if (uri != nullptr) {
				$assign(prefix, attr->getPrefix());
				$init($XMLSymbols);
				$assign(prefix, prefix == nullptr ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
				$var($String, localpart, $nc(this->fSymbolTable)->addSymbol($(attr->getLocalName())));
				$init($NamespaceContext);
				if (uri != nullptr && uri->equals($NamespaceContext::XMLNS_URI)) {
					$assign(prefix, attr->getPrefix());
					$assign(prefix, (prefix == nullptr || $nc(prefix)->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
					$assign(localpart, $nc(this->fSymbolTable)->addSymbol($(attr->getLocalName())));
					if (prefix == $XMLSymbols::PREFIX_XMLNS) {
						$assign(localUri, $nc(this->fLocalNSBinder)->getURI(localpart));
						$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
						if ($nc(value)->length() != 0) {
							if (localUri == nullptr) {
								if (this->fNamespacePrefixes) {
									printNamespaceAttr(localpart, value);
								}
								$nc(this->fLocalNSBinder)->declarePrefix(localpart, value);
							}
						} else {
						}
						continue;
					}
					$assign(uri, $nc(this->fNSBinder)->getURI($XMLSymbols::EMPTY_STRING));
					$assign(localUri, $nc(this->fLocalNSBinder)->getURI($XMLSymbols::EMPTY_STRING));
					$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
					if (localUri == nullptr) {
						if (this->fNamespacePrefixes) {
							printNamespaceAttr($XMLSymbols::EMPTY_STRING, value);
						}
					}
					continue;
				}
				$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
				$var($String, declaredURI, $nc(this->fNSBinder)->getURI(prefix));
				if (prefix == $XMLSymbols::EMPTY_STRING || declaredURI != uri) {
					$assign(name, attr->getNodeName());
					$var($String, declaredPrefix, $nc(this->fNSBinder)->getPrefix(uri));
					if (declaredPrefix != nullptr && declaredPrefix != $XMLSymbols::EMPTY_STRING) {
						$assign(prefix, declaredPrefix);
						$assign(name, $str({prefix, ":"_s, localpart}));
					} else {
						if (prefix != $XMLSymbols::EMPTY_STRING && $nc(this->fLocalNSBinder)->getURI(prefix) == nullptr) {
						} else {
							int32_t counter = 1;
							$assign(prefix, $nc(this->fSymbolTable)->addSymbol($$str({XMLSerializer::PREFIX, $$str(counter++)})));
							while ($nc(this->fLocalNSBinder)->getURI(prefix) != nullptr) {
								$assign(prefix, $nc(this->fSymbolTable)->addSymbol($$str({XMLSerializer::PREFIX, $$str(counter++)})));
							}
							$assign(name, $str({prefix, ":"_s, localpart}));
						}
						if (this->fNamespacePrefixes) {
							printNamespaceAttr(prefix, uri);
						}
						$assign(value, $nc(this->fSymbolTable)->addSymbol(value));
						$nc(this->fLocalNSBinder)->declarePrefix(prefix, value);
						$nc(this->fNSBinder)->declarePrefix(prefix, uri);
					}
				}
				printAttribute(name, (value == nullptr) ? $XMLSymbols::EMPTY_STRING : value, attr->getSpecified(), attr);
			} else if (attr->getLocalName() == nullptr) {
				if (this->fDOMErrorHandler != nullptr) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NullLocalAttrName"_s, $$new($ObjectArray, {$($of(attr->getNodeName()))})));
					modifyDOMError(msg, $DOMError::SEVERITY_ERROR, nullptr, attr);
					bool continueProcess = $nc(this->fDOMErrorHandler)->handleError(this->fDOMError);
					if (!continueProcess) {
						$throwNew($RuntimeException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "SerializationStopped"_s, nullptr)));
					}
				}
				printAttribute(name, value, attr->getSpecified(), attr);
			} else {
				printAttribute(name, value, attr->getSpecified(), attr);
			}
		}
	}
	if (elem->hasChildNodes()) {
		$assign(state, enterElementState(nullptr, nullptr, tagName, this->fPreserveSpace));
		$nc(state)->doCData = $nc(this->_format)->isCDataElement(tagName);
		state->unescaped = $nc(this->_format)->isNonEscapingElement(tagName);
		$assign(child, elem->getFirstChild());
		while (child != nullptr) {
			serializeNode(child);
			$assign(child, child->getNextSibling());
		}
		if (this->fNamespaces) {
			$nc(this->fNSBinder)->popContext();
		}
		endElementIO(nullptr, nullptr, tagName);
	} else {
		if (this->fNamespaces) {
			$nc(this->fNSBinder)->popContext();
		}
		$nc(this->_printer)->unindent();
		$nc(this->_printer)->printText("/>"_s);
		state->afterElement = true;
		state->afterComment = false;
		state->empty = false;
		if (isDocumentState()) {
			$nc(this->_printer)->flush();
		}
	}
}

void XMLSerializer::printNamespaceAttr($String* prefix, $String* uri) {
	$nc(this->_printer)->printSpace();
	$init($XMLSymbols);
	if (prefix == $XMLSymbols::EMPTY_STRING) {
		$nc(this->_printer)->printText($XMLSymbols::PREFIX_XMLNS);
	} else {
		$nc(this->_printer)->printText($$str({"xmlns:"_s, prefix}));
	}
	$nc(this->_printer)->printText("=\""_s);
	printEscaped(uri);
	$nc(this->_printer)->printText(u'\"');
}

void XMLSerializer::printAttribute($String* name, $String* value, bool isSpecified, $Attr* attr) {
	if (isSpecified || ((int32_t)(this->features & (uint32_t)(int32_t)$DOMSerializerImpl::DISCARDDEFAULT)) == 0) {
		if (this->fDOMFilter != nullptr && ((int32_t)($nc(this->fDOMFilter)->getWhatToShow() & (uint32_t)$NodeFilter::SHOW_ATTRIBUTE)) != 0) {
			int16_t code = $nc(this->fDOMFilter)->acceptNode(attr);
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
		$nc(this->_printer)->printSpace();
		$nc(this->_printer)->printText(name);
		$nc(this->_printer)->printText("=\""_s);
		printEscaped(value);
		$nc(this->_printer)->printText(u'\"');
	}
	if ($nc(name)->equals("xml:space"_s)) {
		if ($nc(value)->equals("preserve"_s)) {
			this->fPreserveSpace = true;
		} else {
			this->fPreserveSpace = $nc(this->_format)->getPreserveSpace();
		}
	}
}

$String* XMLSerializer::getEntityRef(int32_t ch) {
	switch (ch) {
	case u'<':
		{
			return "lt"_s;
		}
	case u'>':
		{
			return "gt"_s;
		}
	case u'\"':
		{
			return "quot"_s;
		}
	case u'\'':
		{
			return "apos"_s;
		}
	case u'&':
		{
			return "amp"_s;
		}
	}
	return nullptr;
}

$Attributes* XMLSerializer::extractNamespaces($Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($AttributesImpl, attrsOnly, nullptr);
	$var($String, rawName, nullptr);
	int32_t i = 0;
	int32_t length = 0;
	if (attrs == nullptr) {
		return nullptr;
	}
	length = $nc(attrs)->getLength();
	$assign(attrsOnly, $new($AttributesImpl, attrs));
	for (i = length - 1; i >= 0; --i) {
		$assign(rawName, attrsOnly->getQName(i));
		if ($nc(rawName)->startsWith("xmlns"_s)) {
			if (rawName->length() == 5) {
				startPrefixMapping(""_s, $(attrs->getValue(i)));
				attrsOnly->removeAttribute(i);
			} else if (rawName->charAt(5) == u':') {
				$var($String, var$0, rawName->substring(6));
				startPrefixMapping(var$0, $(attrs->getValue(i)));
				attrsOnly->removeAttribute(i);
			}
		}
	}
	return attrsOnly;
}

void XMLSerializer::printEscaped($String* source) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(source)->length();
	for (int32_t i = 0; i < length; ++i) {
		int32_t ch = source->charAt(i);
		if (!$XMLChar::isValid(ch)) {
			if (++i < length) {
				surrogates(ch, source->charAt(i), false);
			} else {
				fatalError($$str({"The character \'"_s, $$str((char16_t)ch), "\' is an invalid XML character"_s}));
			}
			continue;
		}
		if (ch == u'\n' || ch == u'\r' || ch == u'\t') {
			printHex(ch);
		} else if (ch == u'<') {
			$nc(this->_printer)->printText("&lt;"_s);
		} else if (ch == u'&') {
			$nc(this->_printer)->printText("&amp;"_s);
		} else if (ch == u'\"') {
			$nc(this->_printer)->printText("&quot;"_s);
		} else if (ch >= u' ' && $nc(this->_encodingInfo)->isPrintable((char16_t)ch)) {
			$nc(this->_printer)->printText((char16_t)ch);
		} else {
			printHex(ch);
		}
	}
}

void XMLSerializer::printXMLChar(int32_t ch) {
	if (ch == u'\r') {
		printHex(ch);
	} else if (ch == u'<') {
		$nc(this->_printer)->printText("&lt;"_s);
	} else if (ch == u'&') {
		$nc(this->_printer)->printText("&amp;"_s);
	} else if (ch == u'>') {
		$nc(this->_printer)->printText("&gt;"_s);
	} else if (ch == u'\n' || ch == u'\t' || (ch >= u' ' && $nc(this->_encodingInfo)->isPrintable((char16_t)ch))) {
		$nc(this->_printer)->printText((char16_t)ch);
	} else {
		printHex(ch);
	}
}

void XMLSerializer::printText($String* text, bool preserveSpace, bool unescaped) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	char16_t ch = 0;
	int32_t length = $nc(text)->length();
	if (preserveSpace) {
		for (index = 0; index < length; ++index) {
			ch = text->charAt(index);
			if (!$XMLChar::isValid(ch)) {
				if (++index < length) {
					surrogates(ch, text->charAt(index), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	} else {
		for (index = 0; index < length; ++index) {
			ch = text->charAt(index);
			if (!$XMLChar::isValid(ch)) {
				if (++index < length) {
					surrogates(ch, text->charAt(index), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	}
}

void XMLSerializer::printText($chars* chars, int32_t start, int32_t length, bool preserveSpace, bool unescaped) {
	$useLocalCurrentObjectStackCache();
	if (preserveSpace) {
		while (length-- > 0) {
			char16_t ch = $nc(chars)->get(start++);
			if (!$XMLChar::isValid(ch)) {
				if (length-- > 0) {
					surrogates(ch, chars->get(start++), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	} else {
		while (length-- > 0) {
			char16_t ch = $nc(chars)->get(start++);
			if (!$XMLChar::isValid(ch)) {
				if (length-- > 0) {
					surrogates(ch, chars->get(start++), true);
				} else {
					fatalError($$str({"The character \'"_s, $$str(ch), "\' is an invalid XML character"_s}));
				}
				continue;
			}
			if (unescaped) {
				$nc(this->_printer)->printText(ch);
			} else {
				printXMLChar(ch);
			}
		}
	}
}

void XMLSerializer::checkUnboundNamespacePrefixedNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (this->fNamespaces) {
		$var($Node, child, nullptr);
		$var($Node, next, nullptr);
		for ($assign(child, $nc(node)->getFirstChild()); child != nullptr; $assign(child, next)) {
			$assign(next, $nc(child)->getNextSibling());
			$var($String, prefix, child->getPrefix());
			$init($XMLSymbols);
			$assign(prefix, (prefix == nullptr || $nc(prefix)->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(prefix));
			if ($nc(this->fNSBinder)->getURI(prefix) == nullptr && prefix != nullptr) {
				$var($String, var$3, $$str({"The replacement text of the entity node \'"_s, $(node->getNodeName()), "\' contains an element node \'"_s}));
				$var($String, var$2, $$concat(var$3, $(child->getNodeName())));
				$var($String, var$1, $$concat(var$2, "\' with an undeclared prefix \'"_s));
				$var($String, var$0, $$concat(var$1, prefix));
				fatalError($$concat(var$0, "\'."_s));
			}
			if (child->getNodeType() == $Node::ELEMENT_NODE) {
				$var($NamedNodeMap, attrs, child->getAttributes());
				for (int32_t i = 0; i < $nc(attrs)->getLength(); ++i) {
					$var($String, attrPrefix, $nc($(attrs->item(i)))->getPrefix());
					$assign(attrPrefix, (attrPrefix == nullptr || $nc(attrPrefix)->length() == 0) ? $XMLSymbols::EMPTY_STRING : $nc(this->fSymbolTable)->addSymbol(attrPrefix));
					if ($nc(this->fNSBinder)->getURI(attrPrefix) == nullptr && attrPrefix != nullptr) {
						$var($String, var$9, $$str({"The replacement text of the entity node \'"_s, $(node->getNodeName()), "\' contains an element node \'"_s}));
						$var($String, var$8, $$concat(var$9, $(child->getNodeName())));
						$var($String, var$7, $$concat(var$8, "\' with an attribute \'"_s));
						$var($String, var$6, $$concat(var$7, $($nc($(attrs->item(i)))->getNodeName())));
						$var($String, var$5, $$concat(var$6, "\' an undeclared prefix \'"_s));
						$var($String, var$4, $$concat(var$5, attrPrefix));
						fatalError($$concat(var$4, "\'."_s));
					}
				}
			}
			if (child->hasChildNodes()) {
				checkUnboundNamespacePrefixedNode(child);
			}
		}
	}
}

bool XMLSerializer::reset() {
	$BaseMarkupSerializer::reset();
	if (this->fNSBinder != nullptr) {
		$nc(this->fNSBinder)->reset();
		$init($XMLSymbols);
		$nc(this->fNSBinder)->declarePrefix($XMLSymbols::EMPTY_STRING, $XMLSymbols::EMPTY_STRING);
	}
	return true;
}

XMLSerializer::XMLSerializer() {
}

void clinit$XMLSerializer($Class* class$) {
	$assignStatic(XMLSerializer::PREFIX, "NS"_s);
}

$Class* XMLSerializer::load$($String* name, bool initialize) {
	$loadClass(XMLSerializer, name, initialize, &_XMLSerializer_ClassInfo_, clinit$XMLSerializer, allocate$XMLSerializer);
	return class$;
}

$Class* XMLSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
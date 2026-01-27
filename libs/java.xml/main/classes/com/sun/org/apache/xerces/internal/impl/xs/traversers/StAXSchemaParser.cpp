#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/StAXSchemaParser.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>
#include <com/sun/org/apache/xerces/internal/util/JAXPNamespaceContextWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/StAXLocationWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/Attribute.h>
#include <javax/xml/stream/events/Characters.h>
#include <javax/xml/stream/events/EndElement.h>
#include <javax/xml/stream/events/Namespace.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>
#include <javax/xml/stream/events/StartElement.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

#undef CDATA
#undef CHARACTERS
#undef CHUNK_MASK
#undef CHUNK_SIZE
#undef COMMENT
#undef DTD
#undef EMPTY_STRING
#undef END_DOCUMENT
#undef END_ELEMENT
#undef ENTITY_REFERENCE
#undef PREFIX_XMLNS
#undef PROCESSING_INSTRUCTION
#undef SPACE
#undef START_DOCUMENT
#undef START_ELEMENT
#undef XMLNS_URI

using $SchemaDOMParser = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser;
using $JAXPNamespaceContextWrapper = ::com::sun::org::apache::xerces::internal::util::JAXPNamespaceContextWrapper;
using $StAXLocationWrapper = ::com::sun::org::apache::xerces::internal::util::StAXLocationWrapper;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $1NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $1QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $Attribute = ::javax::xml::stream::events::Attribute;
using $Characters = ::javax::xml::stream::events::Characters;
using $EndElement = ::javax::xml::stream::events::EndElement;
using $Namespace = ::javax::xml::stream::events::Namespace;
using $ProcessingInstruction = ::javax::xml::stream::events::ProcessingInstruction;
using $StartElement = ::javax::xml::stream::events::StartElement;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _StAXSchemaParser_FieldInfo_[] = {
	{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StAXSchemaParser, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StAXSchemaParser, CHUNK_MASK)},
	{"fCharBuffer", "[C", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fCharBuffer)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(StAXSchemaParser, fSymbolTable)},
	{"fSchemaDOMParser", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser;", nullptr, $PRIVATE, $field(StAXSchemaParser, fSchemaDOMParser)},
	{"fLocationWrapper", "Lcom/sun/org/apache/xerces/internal/util/StAXLocationWrapper;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fLocationWrapper)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/util/JAXPNamespaceContextWrapper;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fNamespaceContext)},
	{"fElementQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fElementQName)},
	{"fAttributeQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fAttributeQName)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fAttributes)},
	{"fTempString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fTempString)},
	{"fDeclaredPrefixes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(StAXSchemaParser, fDeclaredPrefixes)},
	{"fStringBuffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE | $FINAL, $field(StAXSchemaParser, fStringBuffer)},
	{"fDepth", "I", nullptr, $PRIVATE, $field(StAXSchemaParser, fDepth)},
	{}
};

$MethodInfo _StAXSchemaParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StAXSchemaParser, init$, void)},
	{"addNamespaceDeclarations", "()V", nullptr, $PRIVATE, $method(StAXSchemaParser, addNamespaceDeclarations, void)},
	{"fillDeclaredPrefixes", "(Ljavax/xml/stream/events/StartElement;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillDeclaredPrefixes, void, $StartElement*)},
	{"fillDeclaredPrefixes", "(Ljavax/xml/stream/events/EndElement;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillDeclaredPrefixes, void, $EndElement*)},
	{"fillDeclaredPrefixes", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/xml/stream/events/Namespace;>;)V", $PRIVATE, $method(StAXSchemaParser, fillDeclaredPrefixes, void, $Iterator*)},
	{"fillDeclaredPrefixes", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillDeclaredPrefixes, void, $XMLStreamReader*)},
	{"fillProcessingInstruction", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillProcessingInstruction, void, $String*)},
	{"fillQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljavax/xml/namespace/QName;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillQName, void, $QName*, $1QName*)},
	{"fillQName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $FINAL, $method(StAXSchemaParser, fillQName, void, $QName*, $String*, $String*, $String*)},
	{"fillXMLAttributes", "(Ljavax/xml/stream/events/StartElement;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillXMLAttributes, void, $StartElement*)},
	{"fillXMLAttributes", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PRIVATE, $method(StAXSchemaParser, fillXMLAttributes, void, $XMLStreamReader*)},
	{"getDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC, $method(StAXSchemaParser, getDocument, $Document*)},
	{"parse", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC, $method(StAXSchemaParser, parse, void, $XMLEventReader*), "javax.xml.stream.XMLStreamException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parse", "(Ljavax/xml/stream/XMLStreamReader;)V", nullptr, $PUBLIC, $method(StAXSchemaParser, parse, void, $XMLStreamReader*), "javax.xml.stream.XMLStreamException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(StAXSchemaParser, reset, void, $SchemaDOMParser*, $SymbolTable*)},
	{"sendCharactersToSchemaParser", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(StAXSchemaParser, sendCharactersToSchemaParser, void, $String*, bool)},
	{}
};

$ClassInfo _StAXSchemaParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.StAXSchemaParser",
	"java.lang.Object",
	nullptr,
	_StAXSchemaParser_FieldInfo_,
	_StAXSchemaParser_MethodInfo_
};

$Object* allocate$StAXSchemaParser($Class* clazz) {
	return $of($alloc(StAXSchemaParser));
}

void StAXSchemaParser::init$() {
	$set(this, fCharBuffer, $new($chars, StAXSchemaParser::CHUNK_SIZE));
	$set(this, fLocationWrapper, $new($StAXLocationWrapper));
	$set(this, fNamespaceContext, $new($JAXPNamespaceContextWrapper, this->fSymbolTable));
	$set(this, fElementQName, $new($QName));
	$set(this, fAttributeQName, $new($QName));
	$set(this, fAttributes, $new($XMLAttributesImpl));
	$set(this, fTempString, $new($XMLString));
	$set(this, fDeclaredPrefixes, $new($ArrayList));
	$set(this, fStringBuffer, $new($XMLStringBuffer));
	$nc(this->fNamespaceContext)->setDeclaredPrefixes(this->fDeclaredPrefixes);
}

void StAXSchemaParser::reset($SchemaDOMParser* schemaDOMParser, $SymbolTable* symbolTable) {
	$set(this, fSchemaDOMParser, schemaDOMParser);
	$set(this, fSymbolTable, symbolTable);
	$nc(this->fNamespaceContext)->setSymbolTable(this->fSymbolTable);
	$nc(this->fNamespaceContext)->reset();
}

$Document* StAXSchemaParser::getDocument() {
	return $nc(this->fSchemaDOMParser)->getDocument();
}

void StAXSchemaParser::parse($XMLEventReader* input) {
	$useLocalCurrentObjectStackCache();
	$var($XMLEvent, currentEvent, $nc(input)->peek());
	if (currentEvent != nullptr) {
		int32_t eventType = currentEvent->getEventType();
		if (eventType != $XMLStreamConstants::START_DOCUMENT && eventType != $XMLStreamConstants::START_ELEMENT) {
			$throwNew($XMLStreamException);
		}
		$nc(this->fLocationWrapper)->setLocation($(currentEvent->getLocation()));
		$nc(this->fSchemaDOMParser)->startDocument(this->fLocationWrapper, nullptr, this->fNamespaceContext, nullptr);
		bool loop$break = false;
		while (input->hasNext()) {
			$assign(currentEvent, input->nextEvent());
			eventType = $nc(currentEvent)->getEventType();
			{
				$var($StartElement, start, nullptr)
				$var($EndElement, end, nullptr)
				$var($ProcessingInstruction, pi, nullptr)
				switch (eventType) {
				case $XMLStreamConstants::START_ELEMENT:
					{
						++this->fDepth;
						$assign(start, currentEvent->asStartElement());
						fillQName(this->fElementQName, $($nc(start)->getName()));
						$nc(this->fLocationWrapper)->setLocation($($nc(start)->getLocation()));
						$nc(this->fNamespaceContext)->setNamespaceContext($($nc(start)->getNamespaceContext()));
						fillXMLAttributes(start);
						fillDeclaredPrefixes(start);
						addNamespaceDeclarations();
						$nc(this->fNamespaceContext)->pushContext();
						$nc(this->fSchemaDOMParser)->startElement(this->fElementQName, this->fAttributes, nullptr);
						break;
					}
				case $XMLStreamConstants::END_ELEMENT:
					{
						$assign(end, currentEvent->asEndElement());
						fillQName(this->fElementQName, $($nc(end)->getName()));
						fillDeclaredPrefixes(end);
						$nc(this->fLocationWrapper)->setLocation($($nc(end)->getLocation()));
						$nc(this->fSchemaDOMParser)->endElement(this->fElementQName, nullptr);
						$nc(this->fNamespaceContext)->popContext();
						--this->fDepth;
						if (this->fDepth <= 0) {
							loop$break = true;
							break;
						}
						break;
					}
				case $XMLStreamConstants::CHARACTERS:
					{
						sendCharactersToSchemaParser($($nc($(currentEvent->asCharacters()))->getData()), false);
						break;
					}
				case $XMLStreamConstants::SPACE:
					{
						sendCharactersToSchemaParser($($nc($(currentEvent->asCharacters()))->getData()), true);
						break;
					}
				case $XMLStreamConstants::CDATA:
					{
						$nc(this->fSchemaDOMParser)->startCDATA(nullptr);
						sendCharactersToSchemaParser($($nc($(currentEvent->asCharacters()))->getData()), false);
						$nc(this->fSchemaDOMParser)->endCDATA(nullptr);
						break;
					}
				case $XMLStreamConstants::PROCESSING_INSTRUCTION:
					{
						$assign(pi, $cast($ProcessingInstruction, currentEvent));
						fillProcessingInstruction($($nc(pi)->getData()));
						$nc(this->fSchemaDOMParser)->processingInstruction($($nc(pi)->getTarget()), this->fTempString, nullptr);
						break;
					}
				case $XMLStreamConstants::DTD:
					{
						break;
					}
				case $XMLStreamConstants::ENTITY_REFERENCE:
					{
						break;
					}
				case $XMLStreamConstants::COMMENT:
					{
						break;
					}
				case $XMLStreamConstants::START_DOCUMENT:
					{
						++this->fDepth;
						break;
					}
				case $XMLStreamConstants::END_DOCUMENT:
					{
						break;
					}
				}

				if (loop$break) {
					break;
				}			}
		}
		$nc(this->fLocationWrapper)->setLocation(nullptr);
		$nc(this->fNamespaceContext)->setNamespaceContext(nullptr);
		$nc(this->fSchemaDOMParser)->endDocument(nullptr);
	}
}

void StAXSchemaParser::parse($XMLStreamReader* input) {
	$useLocalCurrentObjectStackCache();
	if ($nc(input)->hasNext()) {
		int32_t eventType = input->getEventType();
		if (eventType != $XMLStreamConstants::START_DOCUMENT && eventType != $XMLStreamConstants::START_ELEMENT) {
			$throwNew($XMLStreamException);
		}
		$nc(this->fLocationWrapper)->setLocation($(input->getLocation()));
		$nc(this->fSchemaDOMParser)->startDocument(this->fLocationWrapper, nullptr, this->fNamespaceContext, nullptr);
		bool first = true;
		bool loop$break = false;
		while (input->hasNext()) {
			if (!first) {
				eventType = input->next();
			} else {
				first = false;
			}
			switch (eventType) {
			case $XMLStreamConstants::START_ELEMENT:
				{
					++this->fDepth;
					$nc(this->fLocationWrapper)->setLocation($(input->getLocation()));
					$nc(this->fNamespaceContext)->setNamespaceContext($(input->getNamespaceContext()));
					$var($QName, var$0, this->fElementQName);
					$var($String, var$1, input->getNamespaceURI());
					$var($String, var$2, input->getLocalName());
					fillQName(var$0, var$1, var$2, $(input->getPrefix()));
					fillXMLAttributes(input);
					fillDeclaredPrefixes(input);
					addNamespaceDeclarations();
					$nc(this->fNamespaceContext)->pushContext();
					$nc(this->fSchemaDOMParser)->startElement(this->fElementQName, this->fAttributes, nullptr);
					break;
				}
			case $XMLStreamConstants::END_ELEMENT:
				{
					$nc(this->fLocationWrapper)->setLocation($(input->getLocation()));
					$nc(this->fNamespaceContext)->setNamespaceContext($(input->getNamespaceContext()));
					$var($QName, var$3, this->fElementQName);
					$var($String, var$4, input->getNamespaceURI());
					$var($String, var$5, input->getLocalName());
					fillQName(var$3, var$4, var$5, $(input->getPrefix()));
					fillDeclaredPrefixes(input);
					$nc(this->fSchemaDOMParser)->endElement(this->fElementQName, nullptr);
					$nc(this->fNamespaceContext)->popContext();
					--this->fDepth;
					if (this->fDepth <= 0) {
						loop$break = true;
						break;
					}
					break;
				}
			case $XMLStreamConstants::CHARACTERS:
				{
					$var($chars, var$6, input->getTextCharacters());
					int32_t var$7 = input->getTextStart();
					$nc(this->fTempString)->setValues(var$6, var$7, input->getTextLength());
					$nc(this->fSchemaDOMParser)->characters(this->fTempString, nullptr);
					break;
				}
			case $XMLStreamConstants::SPACE:
				{
					$var($chars, var$8, input->getTextCharacters());
					int32_t var$9 = input->getTextStart();
					$nc(this->fTempString)->setValues(var$8, var$9, input->getTextLength());
					$nc(this->fSchemaDOMParser)->ignorableWhitespace(this->fTempString, nullptr);
					break;
				}
			case $XMLStreamConstants::CDATA:
				{
					$nc(this->fSchemaDOMParser)->startCDATA(nullptr);
					$var($chars, var$10, input->getTextCharacters());
					int32_t var$11 = input->getTextStart();
					$nc(this->fTempString)->setValues(var$10, var$11, input->getTextLength());
					$nc(this->fSchemaDOMParser)->characters(this->fTempString, nullptr);
					$nc(this->fSchemaDOMParser)->endCDATA(nullptr);
					break;
				}
			case $XMLStreamConstants::PROCESSING_INSTRUCTION:
				{
					fillProcessingInstruction($(input->getPIData()));
					$nc(this->fSchemaDOMParser)->processingInstruction($(input->getPITarget()), this->fTempString, nullptr);
					break;
				}
			case $XMLStreamConstants::DTD:
				{
					break;
				}
			case $XMLStreamConstants::ENTITY_REFERENCE:
				{
					break;
				}
			case $XMLStreamConstants::COMMENT:
				{
					break;
				}
			case $XMLStreamConstants::START_DOCUMENT:
				{
					++this->fDepth;
					break;
				}
			case $XMLStreamConstants::END_DOCUMENT:
				{
					break;
				}
			}

			if (loop$break) {
				break;
			}		}
		$nc(this->fLocationWrapper)->setLocation(nullptr);
		$nc(this->fNamespaceContext)->setNamespaceContext(nullptr);
		$nc(this->fSchemaDOMParser)->endDocument(nullptr);
	}
}

void StAXSchemaParser::sendCharactersToSchemaParser($String* str, bool whitespace) {
	if (str != nullptr) {
		int32_t length = str->length();
		int32_t remainder = (int32_t)(length & (uint32_t)StAXSchemaParser::CHUNK_MASK);
		if (remainder > 0) {
			str->getChars(0, remainder, this->fCharBuffer, 0);
			$nc(this->fTempString)->setValues(this->fCharBuffer, 0, remainder);
			if (whitespace) {
				$nc(this->fSchemaDOMParser)->ignorableWhitespace(this->fTempString, nullptr);
			} else {
				$nc(this->fSchemaDOMParser)->characters(this->fTempString, nullptr);
			}
		}
		int32_t i = remainder;
		while (i < length) {
			int32_t var$0 = i;
			str->getChars(var$0, i += StAXSchemaParser::CHUNK_SIZE, this->fCharBuffer, 0);
			$nc(this->fTempString)->setValues(this->fCharBuffer, 0, StAXSchemaParser::CHUNK_SIZE);
			if (whitespace) {
				$nc(this->fSchemaDOMParser)->ignorableWhitespace(this->fTempString, nullptr);
			} else {
				$nc(this->fSchemaDOMParser)->characters(this->fTempString, nullptr);
			}
		}
	}
}

void StAXSchemaParser::fillProcessingInstruction($String* data) {
	int32_t dataLength = $nc(data)->length();
	$var($chars, charBuffer, this->fCharBuffer);
	if ($nc(charBuffer)->length < dataLength) {
		$assign(charBuffer, data->toCharArray());
	} else {
		data->getChars(0, dataLength, charBuffer, 0);
	}
	$nc(this->fTempString)->setValues(charBuffer, 0, dataLength);
}

void StAXSchemaParser::fillXMLAttributes($StartElement* event) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fAttributes)->removeAllAttributes();
	$var($Iterator, attrs, $nc(event)->getAttributes());
	while ($nc(attrs)->hasNext()) {
		$var($Attribute, attr, $cast($Attribute, attrs->next()));
		fillQName(this->fAttributeQName, $($nc(attr)->getName()));
		$var($String, type, $nc(attr)->getDTDType());
		int32_t idx = $nc(this->fAttributes)->getLength();
		$init($XMLSymbols);
		$nc(this->fAttributes)->addAttributeNS(this->fAttributeQName, (type != nullptr) ? type : $XMLSymbols::fCDATASymbol, $(attr->getValue()));
		$nc(this->fAttributes)->setSpecified(idx, attr->isSpecified());
	}
}

void StAXSchemaParser::fillXMLAttributes($XMLStreamReader* input) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fAttributes)->removeAllAttributes();
	int32_t len = $nc(input)->getAttributeCount();
	for (int32_t i = 0; i < len; ++i) {
		$var($QName, var$0, this->fAttributeQName);
		$var($String, var$1, input->getAttributeNamespace(i));
		$var($String, var$2, input->getAttributeLocalName(i));
		fillQName(var$0, var$1, var$2, $(input->getAttributePrefix(i)));
		$var($String, type, input->getAttributeType(i));
		$init($XMLSymbols);
		$nc(this->fAttributes)->addAttributeNS(this->fAttributeQName, (type != nullptr) ? type : $XMLSymbols::fCDATASymbol, $(input->getAttributeValue(i)));
		$nc(this->fAttributes)->setSpecified(i, input->isAttributeSpecified(i));
	}
}

void StAXSchemaParser::addNamespaceDeclarations() {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$var($String, localpart, nullptr);
	$var($String, rawname, nullptr);
	$var($String, nsPrefix, nullptr);
	$var($String, nsURI, nullptr);
	$var($Iterator, iter, $nc(this->fDeclaredPrefixes)->iterator());
	while ($nc(iter)->hasNext()) {
		$assign(nsPrefix, $cast($String, iter->next()));
		$assign(nsURI, $nc(this->fNamespaceContext)->getURI(nsPrefix));
		if ($nc(nsPrefix)->length() > 0) {
			$init($XMLSymbols);
			$assign(prefix, $XMLSymbols::PREFIX_XMLNS);
			$assign(localpart, nsPrefix);
			$nc(this->fStringBuffer)->clear();
			$nc(this->fStringBuffer)->append(prefix);
			$nc(this->fStringBuffer)->append(u':');
			$nc(this->fStringBuffer)->append(localpart);
			$assign(rawname, $nc(this->fSymbolTable)->addSymbol($nc(this->fStringBuffer)->ch, $nc(this->fStringBuffer)->offset, $nc(this->fStringBuffer)->length));
		} else {
			$init($XMLSymbols);
			$assign(prefix, $XMLSymbols::EMPTY_STRING);
			$assign(localpart, $XMLSymbols::PREFIX_XMLNS);
			$assign(rawname, $XMLSymbols::PREFIX_XMLNS);
		}
		$init($NamespaceContext);
		$nc(this->fAttributeQName)->setValues(prefix, localpart, rawname, $NamespaceContext::XMLNS_URI);
		$init($XMLSymbols);
		$nc(this->fAttributes)->addAttribute(this->fAttributeQName, $XMLSymbols::fCDATASymbol, (nsURI != nullptr) ? nsURI : $XMLSymbols::EMPTY_STRING);
	}
}

void StAXSchemaParser::fillDeclaredPrefixes($StartElement* event) {
	fillDeclaredPrefixes($($nc(event)->getNamespaces()));
}

void StAXSchemaParser::fillDeclaredPrefixes($EndElement* event) {
	fillDeclaredPrefixes($($nc(event)->getNamespaces()));
}

void StAXSchemaParser::fillDeclaredPrefixes($Iterator* namespaces) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fDeclaredPrefixes)->clear();
	while ($nc(namespaces)->hasNext()) {
		$var($Namespace, ns, $cast($Namespace, namespaces->next()));
		$var($String, prefix, $nc(ns)->getPrefix());
		$nc(this->fDeclaredPrefixes)->add(prefix != nullptr ? prefix : ""_s);
	}
}

void StAXSchemaParser::fillDeclaredPrefixes($XMLStreamReader* reader) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fDeclaredPrefixes)->clear();
	int32_t len = $nc(reader)->getNamespaceCount();
	for (int32_t i = 0; i < len; ++i) {
		$var($String, prefix, reader->getNamespacePrefix(i));
		$nc(this->fDeclaredPrefixes)->add(prefix != nullptr ? prefix : ""_s);
	}
}

void StAXSchemaParser::fillQName($QName* toFill, $1QName* toCopy) {
	$useLocalCurrentObjectStackCache();
	$var($QName, var$0, toFill);
	$var($String, var$1, $nc(toCopy)->getNamespaceURI());
	$var($String, var$2, toCopy->getLocalPart());
	fillQName(var$0, var$1, var$2, $(toCopy->getPrefix()));
}

void StAXSchemaParser::fillQName($QName* toFill, $String* uri$renamed, $String* localpart$renamed, $String* prefix$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, localpart, localpart$renamed);
	$var($String, uri, uri$renamed);
	$assign(uri, (uri != nullptr && uri->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(uri) : ($String*)nullptr);
	$init($XMLSymbols);
	$assign(localpart, (localpart != nullptr) ? $nc(this->fSymbolTable)->addSymbol(localpart) : $XMLSymbols::EMPTY_STRING);
	$assign(prefix, (prefix != nullptr && prefix->length() > 0) ? $nc(this->fSymbolTable)->addSymbol(prefix) : $XMLSymbols::EMPTY_STRING);
	$var($String, raw, localpart);
	if (prefix != $XMLSymbols::EMPTY_STRING) {
		$nc(this->fStringBuffer)->clear();
		$nc(this->fStringBuffer)->append(prefix);
		$nc(this->fStringBuffer)->append(u':');
		$nc(this->fStringBuffer)->append(localpart);
		$assign(raw, $nc(this->fSymbolTable)->addSymbol($nc(this->fStringBuffer)->ch, $nc(this->fStringBuffer)->offset, $nc(this->fStringBuffer)->length));
	}
	$nc(toFill)->setValues(prefix, localpart, raw, uri);
}

StAXSchemaParser::StAXSchemaParser() {
}

$Class* StAXSchemaParser::load$($String* name, bool initialize) {
	$loadClass(StAXSchemaParser, name, initialize, &_StAXSchemaParser_ClassInfo_, allocate$StAXSchemaParser);
	return class$;
}

$Class* StAXSchemaParser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
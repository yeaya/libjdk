#include <javax/xml/stream/XMLStreamReader.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $Location = ::javax::xml::stream::Location;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLStreamReader_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, close, void), "javax.xml.stream.XMLStreamException"},
	{"getAttributeCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeCount, int32_t)},
	{"getAttributeLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeLocalName, $String*, int32_t)},
	{"getAttributeName", "(I)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeName, $QName*, int32_t)},
	{"getAttributeNamespace", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeNamespace, $String*, int32_t)},
	{"getAttributePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributePrefix, $String*, int32_t)},
	{"getAttributeType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeType, $String*, int32_t)},
	{"getAttributeValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeValue, $String*, $String*, $String*)},
	{"getAttributeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getAttributeValue, $String*, int32_t)},
	{"getCharacterEncodingScheme", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getCharacterEncodingScheme, $String*)},
	{"getElementText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getElementText, $String*), "javax.xml.stream.XMLStreamException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getEncoding, $String*)},
	{"getEventType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getEventType, int32_t)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getLocalName, $String*)},
	{"getLocation", "()Ljavax/xml/stream/Location;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getLocation, $Location*)},
	{"getName", "()Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getName, $QName*)},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getNamespaceContext, $NamespaceContext*)},
	{"getNamespaceCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getNamespaceCount, int32_t)},
	{"getNamespacePrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getNamespacePrefix, $String*, int32_t)},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getNamespaceURI, $String*, $String*)},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getNamespaceURI, $String*, int32_t)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getNamespaceURI, $String*)},
	{"getPIData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getPIData, $String*)},
	{"getPITarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getPITarget, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getPrefix, $String*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getText, $String*)},
	{"getTextCharacters", "()[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getTextCharacters, $chars*)},
	{"getTextCharacters", "(I[CII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getTextCharacters, int32_t, int32_t, $chars*, int32_t, int32_t), "javax.xml.stream.XMLStreamException"},
	{"getTextLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getTextLength, int32_t)},
	{"getTextStart", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getTextStart, int32_t)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, getVersion, $String*)},
	{"hasName", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, hasName, bool)},
	{"hasNext", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, hasNext, bool), "javax.xml.stream.XMLStreamException"},
	{"hasText", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, hasText, bool)},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, isAttributeSpecified, bool, int32_t)},
	{"isCharacters", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, isCharacters, bool)},
	{"isEndElement", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, isEndElement, bool)},
	{"isStandalone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, isStandalone, bool)},
	{"isStartElement", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, isStartElement, bool)},
	{"isWhiteSpace", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, isWhiteSpace, bool)},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, next, int32_t), "javax.xml.stream.XMLStreamException"},
	{"nextTag", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, nextTag, int32_t), "javax.xml.stream.XMLStreamException"},
	{"require", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, require, void, int32_t, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"standaloneSet", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamReader, standaloneSet, bool)},
	{}
};

$ClassInfo _XMLStreamReader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLStreamReader",
	nullptr,
	"javax.xml.stream.XMLStreamConstants",
	nullptr,
	_XMLStreamReader_MethodInfo_
};

$Object* allocate$XMLStreamReader($Class* clazz) {
	return $of($alloc(XMLStreamReader));
}

$Class* XMLStreamReader::load$($String* name, bool initialize) {
	$loadClass(XMLStreamReader, name, initialize, &_XMLStreamReader_ClassInfo_, allocate$XMLStreamReader);
	return class$;
}

$Class* XMLStreamReader::class$ = nullptr;

		} // stream
	} // xml
} // javax
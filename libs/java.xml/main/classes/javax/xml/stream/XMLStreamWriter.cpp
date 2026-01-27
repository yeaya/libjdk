#include <javax/xml/stream/XMLStreamWriter.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLStreamWriter_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, close, void), "javax.xml.stream.XMLStreamException"},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, flush, void), "javax.xml.stream.XMLStreamException"},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, getNamespaceContext, $NamespaceContext*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, getPrefix, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"setDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, setDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, setNamespaceContext, void, $NamespaceContext*), "javax.xml.stream.XMLStreamException"},
	{"setPrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, setPrefix, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeAttribute, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeAttribute, void, $String*, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeAttribute, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeCData, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCharacters", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeCharacters, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCharacters", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeCharacters, void, $chars*, int32_t, int32_t), "javax.xml.stream.XMLStreamException"},
	{"writeComment", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeComment, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeDTD", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeDTD, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeEmptyElement, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeEmptyElement, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeEmptyElement, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEndDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeEndDocument, void), "javax.xml.stream.XMLStreamException"},
	{"writeEndElement", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeEndElement, void), "javax.xml.stream.XMLStreamException"},
	{"writeEntityRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeEntityRef, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeNamespace", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeNamespace, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeProcessingInstruction", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeProcessingInstruction, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeProcessingInstruction, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeStartDocument, void), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeStartDocument, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeStartDocument, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeStartElement, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeStartElement, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStreamWriter, writeStartElement, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLStreamWriter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLStreamWriter",
	nullptr,
	nullptr,
	nullptr,
	_XMLStreamWriter_MethodInfo_
};

$Object* allocate$XMLStreamWriter($Class* clazz) {
	return $of($alloc(XMLStreamWriter));
}

$Class* XMLStreamWriter::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriter, name, initialize, &_XMLStreamWriter_ClassInfo_, allocate$XMLStreamWriter);
	return class$;
}

$Class* XMLStreamWriter::class$ = nullptr;

		} // stream
	} // xml
} // javax
#include <javax/xml/stream/XMLEventWriter.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;

namespace javax {
	namespace xml {
		namespace stream {

$MethodInfo _XMLEventWriter_MethodInfo_[] = {
	{"add", "(Ljavax/xml/stream/events/XMLEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"add", "(Ljavax/xml/stream/XMLEventReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, add, void, $XMLEventReader*), "javax.xml.stream.XMLStreamException"},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, close, void), "javax.xml.stream.XMLStreamException"},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, flush, void), "javax.xml.stream.XMLStreamException"},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, getNamespaceContext, $NamespaceContext*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, getPrefix, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"setDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, setDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, setNamespaceContext, void, $NamespaceContext*), "javax.xml.stream.XMLStreamException"},
	{"setPrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEventWriter, setPrefix, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{}
};

$ClassInfo _XMLEventWriter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.stream.XMLEventWriter",
	nullptr,
	"javax.xml.stream.util.XMLEventConsumer",
	nullptr,
	_XMLEventWriter_MethodInfo_
};

$Object* allocate$XMLEventWriter($Class* clazz) {
	return $of($alloc(XMLEventWriter));
}

$Class* XMLEventWriter::load$($String* name, bool initialize) {
	$loadClass(XMLEventWriter, name, initialize, &_XMLEventWriter_ClassInfo_, allocate$XMLEventWriter);
	return class$;
}

$Class* XMLEventWriter::class$ = nullptr;

		} // stream
	} // xml
} // javax
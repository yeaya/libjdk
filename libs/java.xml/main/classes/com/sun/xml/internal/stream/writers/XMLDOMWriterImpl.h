#ifndef _com_sun_xml_internal_stream_writers_XMLDOMWriterImpl_h_
#define _com_sun_xml_internal_stream_writers_XMLDOMWriterImpl_h_
//$ class com.sun.xml.internal.stream.writers.XMLDOMWriterImpl
//$ extends com.sun.xml.internal.stream.writers.XMLStreamWriterBase

#include <com/sun/xml/internal/stream/writers/XMLStreamWriterBase.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {
				class DOMResult;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class NamespaceSupport;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class XMLDOMWriterImpl : public ::com::sun::xml::internal::stream::writers::XMLStreamWriterBase {
	$class(XMLDOMWriterImpl, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::writers::XMLStreamWriterBase)
public:
	XMLDOMWriterImpl();
	void init$(::javax::xml::transform::dom::DOMResult* result);
	virtual void close() override;
	virtual void flush() override;
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	::org::w3c::dom::Node* getNode();
	virtual $String* getPrefix($String* namespaceURI) override;
	virtual $Object* getProperty($String* str) override;
	$String* getQName($String* prefix, $String* localName);
	void incDepth();
	virtual void setDefaultNamespace($String* uri) override;
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* namespaceContext) override;
	virtual void setPrefix($String* prefix, $String* uri) override;
	virtual void writeAttribute($String* localName, $String* value) override;
	virtual void writeAttribute($String* namespaceURI, $String* localName, $String* value) override;
	virtual void writeAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) override;
	virtual void writeCData($String* data) override;
	virtual void writeCharacters($String* charData) override;
	virtual void writeCharacters($chars* values, int32_t param, int32_t param2) override;
	virtual void writeComment($String* str) override;
	virtual void writeDTD($String* str) override;
	virtual void writeDefaultNamespace($String* namespaceURI) override;
	virtual void writeEmptyElement($String* localName) override;
	virtual void writeEmptyElement($String* namespaceURI, $String* localName) override;
	virtual void writeEmptyElement($String* prefix, $String* localName, $String* namespaceURI) override;
	virtual void writeEndDocument() override;
	virtual void writeEndElement() override;
	virtual void writeEntityRef($String* name) override;
	virtual void writeNamespace($String* prefix, $String* namespaceURI) override;
	virtual void writeProcessingInstruction($String* target) override;
	virtual void writeProcessingInstruction($String* target, $String* data) override;
	virtual void writeStartDocument() override;
	virtual void writeStartDocument($String* version) override;
	virtual void writeStartDocument($String* encoding, $String* version) override;
	virtual void writeStartDocument($String* encoding, $String* version, bool standalone, bool standaloneSet) override;
	virtual void writeStartElement($String* localName) override;
	virtual void writeStartElement($String* namespaceURI, $String* localName) override;
	virtual void writeStartElement($String* prefix, $String* localName, $String* namespaceURI) override;
	::org::w3c::dom::Document* ownerDoc = nullptr;
	::org::w3c::dom::Node* currentNode = nullptr;
	::org::w3c::dom::Node* node = nullptr;
	::org::xml::sax::helpers::NamespaceSupport* namespaceContext = nullptr;
	$booleans* needContextPop = nullptr;
	::java::lang::StringBuffer* stringBuffer = nullptr;
	int32_t resizeValue = 0;
	int32_t depth = 0;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_XMLDOMWriterImpl_h_
#ifndef _com_sun_xml_internal_stream_writers_XMLStreamWriterBase_h_
#define _com_sun_xml_internal_stream_writers_XMLStreamWriterBase_h_
//$ interface com.sun.xml.internal.stream.writers.XMLStreamWriterBase
//$ extends javax.xml.stream.XMLStreamWriter

#include <javax/xml/stream/XMLStreamWriter.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class XMLStreamWriterBase : public ::javax::xml::stream::XMLStreamWriter {
	$interface(XMLStreamWriterBase, $NO_CLASS_INIT, ::javax::xml::stream::XMLStreamWriter)
public:
	using ::javax::xml::stream::XMLStreamWriter::writeStartDocument;
	virtual void writeStartDocument($String* encoding, $String* version, bool standalone, bool standaloneSet) {}
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_XMLStreamWriterBase_h_
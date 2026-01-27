#ifndef _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$Attribute_h_
#define _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$Attribute_h_
//$ class com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute
//$ extends com.sun.org.apache.xerces.internal.xni.QName

#include <com/sun/org/apache/xerces/internal/xni/QName.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {
						class XMLStreamWriterImpl;
					}
				}
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

class XMLStreamWriterImpl$Attribute : public ::com::sun::org::apache::xerces::internal::xni::QName {
	$class(XMLStreamWriterImpl$Attribute, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::QName)
public:
	XMLStreamWriterImpl$Attribute();
	void init$(::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0, $String* value);
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0 = nullptr;
	$String* value = nullptr;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$Attribute_h_
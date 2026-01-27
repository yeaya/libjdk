#ifndef _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$ElementState_h_
#define _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$ElementState_h_
//$ class com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementState
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

class XMLStreamWriterImpl$ElementState : public ::com::sun::org::apache::xerces::internal::xni::QName {
	$class(XMLStreamWriterImpl$ElementState, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::QName)
public:
	XMLStreamWriterImpl$ElementState();
	void init$(::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0);
	void init$(::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0, $String* prefix, $String* localpart, $String* rawname, $String* uri);
	using ::com::sun::org::apache::xerces::internal::xni::QName::setValues;
	virtual void setValues($String* prefix, $String* localpart, $String* rawname, $String* uri, bool isEmpty);
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0 = nullptr;
	bool isEmpty = false;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$ElementState_h_
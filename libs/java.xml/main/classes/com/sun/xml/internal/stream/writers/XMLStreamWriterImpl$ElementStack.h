#ifndef _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$ElementStack_h_
#define _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$ElementStack_h_
//$ class com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {
						class XMLStreamWriterImpl;
						class XMLStreamWriterImpl$ElementState;
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

class XMLStreamWriterImpl$ElementStack : public ::java::lang::Object {
	$class(XMLStreamWriterImpl$ElementStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLStreamWriterImpl$ElementStack();
	void init$(::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0);
	virtual void clear();
	virtual bool empty();
	virtual ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState* peek();
	virtual ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState* pop();
	virtual ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState* push(::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState* element);
	virtual ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState* push($String* prefix, $String* localpart, $String* rawname, $String* uri, bool isEmpty);
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0 = nullptr;
	$Array<::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState>* fElements = nullptr;
	int16_t fDepth = 0;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$ElementStack_h_
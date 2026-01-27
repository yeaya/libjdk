#ifndef _com_sun_xml_internal_stream_XMLBufferListener_h_
#define _com_sun_xml_internal_stream_XMLBufferListener_h_
//$ interface com.sun.xml.internal.stream.XMLBufferListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class XMLBufferListener : public ::java::lang::Object {
	$interface(XMLBufferListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void refresh() {}
	virtual void refresh(int32_t loadPosition) {}
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_XMLBufferListener_h_
#ifndef _javax_xml_stream_Location_h_
#define _javax_xml_stream_Location_h_
//$ interface javax.xml.stream.Location
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace stream {

class $export Location : public ::java::lang::Object {
	$interface(Location, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getCharacterOffset() {return 0;}
	virtual int32_t getColumnNumber() {return 0;}
	virtual int32_t getLineNumber() {return 0;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_Location_h_
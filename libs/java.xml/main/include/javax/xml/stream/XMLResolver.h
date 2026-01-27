#ifndef _javax_xml_stream_XMLResolver_h_
#define _javax_xml_stream_XMLResolver_h_
//$ interface javax.xml.stream.XMLResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace stream {

class $import XMLResolver : public ::java::lang::Object {
	$interface(XMLResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* resolveEntity($String* publicID, $String* systemID, $String* baseURI, $String* namespace$) {return nullptr;}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLResolver_h_
#ifndef _com_sun_xml_internal_stream_dtd_nonvalidating_XMLNotationDecl_h_
#define _com_sun_xml_internal_stream_dtd_nonvalidating_XMLNotationDecl_h_
//$ class com.sun.xml.internal.stream.dtd.nonvalidating.XMLNotationDecl
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {

class XMLNotationDecl : public ::java::lang::Object {
	$class(XMLNotationDecl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLNotationDecl();
	void init$();
	virtual void clear();
	virtual void setValues($String* name, $String* publicId, $String* systemId, $String* baseSystemId);
	$String* name = nullptr;
	$String* publicId = nullptr;
	$String* systemId = nullptr;
	$String* baseSystemId = nullptr;
};

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_dtd_nonvalidating_XMLNotationDecl_h_
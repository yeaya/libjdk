#ifndef _org_xml_sax_ext_LexicalHandler_h_
#define _org_xml_sax_ext_LexicalHandler_h_
//$ interface org.xml.sax.ext.LexicalHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

class $import LexicalHandler : public ::java::lang::Object {
	$interface(LexicalHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void comment($chars* ch, int32_t start, int32_t length) {}
	virtual void endCDATA() {}
	virtual void endDTD() {}
	virtual void endEntity($String* name) {}
	virtual void startCDATA() {}
	virtual void startDTD($String* name, $String* publicId, $String* systemId) {}
	virtual void startEntity($String* name) {}
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_LexicalHandler_h_
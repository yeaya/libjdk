#ifndef _org_xml_sax_Locator_h_
#define _org_xml_sax_Locator_h_
//$ interface org.xml.sax.Locator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {

class $export Locator : public ::java::lang::Object {
	$interface(Locator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getColumnNumber() {return 0;}
	virtual int32_t getLineNumber() {return 0;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_Locator_h_
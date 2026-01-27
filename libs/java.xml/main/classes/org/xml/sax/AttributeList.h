#ifndef _org_xml_sax_AttributeList_h_
#define _org_xml_sax_AttributeList_h_
//$ interface org.xml.sax.AttributeList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {

class $export AttributeList : public ::java::lang::Object {
	$interface(AttributeList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getLength() {return 0;}
	virtual $String* getName(int32_t i) {return nullptr;}
	virtual $String* getType(int32_t i) {return nullptr;}
	virtual $String* getType($String* name) {return nullptr;}
	virtual $String* getValue(int32_t i) {return nullptr;}
	virtual $String* getValue($String* name) {return nullptr;}
};

		} // sax
	} // xml
} // org

#endif // _org_xml_sax_AttributeList_h_
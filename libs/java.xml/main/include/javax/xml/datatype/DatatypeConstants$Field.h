#ifndef _javax_xml_datatype_DatatypeConstants$Field_h_
#define _javax_xml_datatype_DatatypeConstants$Field_h_
//$ class javax.xml.datatype.DatatypeConstants$Field
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace datatype {

class $import DatatypeConstants$Field : public ::java::lang::Object {
	$class(DatatypeConstants$Field, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DatatypeConstants$Field();
	void init$($String* str, int32_t id);
	int32_t getId();
	virtual $String* toString() override;
	$String* str = nullptr;
	int32_t id = 0;
};

		} // datatype
	} // xml
} // javax

#endif // _javax_xml_datatype_DatatypeConstants$Field_h_
#ifndef _javax_xml_catalog_GroupEntry$PreferType_h_
#define _javax_xml_catalog_GroupEntry$PreferType_h_
//$ class javax.xml.catalog.GroupEntry$PreferType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("SYSTEM")
#undef SYSTEM

namespace javax {
	namespace xml {
		namespace catalog {

class GroupEntry$PreferType : public ::java::lang::Enum {
	$class(GroupEntry$PreferType, 0, ::java::lang::Enum)
public:
	GroupEntry$PreferType();
	static $Array<::javax::xml::catalog::GroupEntry$PreferType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* literal);
	virtual bool prefer($String* prefer);
	static ::javax::xml::catalog::GroupEntry$PreferType* valueOf($String* name);
	static $Array<::javax::xml::catalog::GroupEntry$PreferType>* values();
	static ::javax::xml::catalog::GroupEntry$PreferType* PUBLIC;
	static ::javax::xml::catalog::GroupEntry$PreferType* SYSTEM;
	static $Array<::javax::xml::catalog::GroupEntry$PreferType>* $VALUES;
	$String* literal = nullptr;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("PUBLIC")
#pragma pop_macro("SYSTEM")

#endif // _javax_xml_catalog_GroupEntry$PreferType_h_
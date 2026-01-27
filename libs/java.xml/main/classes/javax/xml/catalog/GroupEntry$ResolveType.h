#ifndef _javax_xml_catalog_GroupEntry$ResolveType_h_
#define _javax_xml_catalog_GroupEntry$ResolveType_h_
//$ class javax.xml.catalog.GroupEntry$ResolveType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CONTINUE")
#undef CONTINUE
#pragma push_macro("IGNORE")
#undef IGNORE
#pragma push_macro("STRICT")
#undef STRICT

namespace javax {
	namespace xml {
		namespace catalog {

class GroupEntry$ResolveType : public ::java::lang::Enum {
	$class(GroupEntry$ResolveType, 0, ::java::lang::Enum)
public:
	GroupEntry$ResolveType();
	static $Array<::javax::xml::catalog::GroupEntry$ResolveType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* literal);
	static ::javax::xml::catalog::GroupEntry$ResolveType* getType($String* resolveType);
	virtual bool isType($String* type);
	static ::javax::xml::catalog::GroupEntry$ResolveType* valueOf($String* name);
	static $Array<::javax::xml::catalog::GroupEntry$ResolveType>* values();
	static ::javax::xml::catalog::GroupEntry$ResolveType* STRICT;
	static ::javax::xml::catalog::GroupEntry$ResolveType* CONTINUE;
	static ::javax::xml::catalog::GroupEntry$ResolveType* IGNORE;
	static $Array<::javax::xml::catalog::GroupEntry$ResolveType>* $VALUES;
	$String* literal = nullptr;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("CONTINUE")
#pragma pop_macro("IGNORE")
#pragma pop_macro("STRICT")

#endif // _javax_xml_catalog_GroupEntry$ResolveType_h_
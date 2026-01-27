#ifndef _javax_xml_catalog_CatalogFeatures$State_h_
#define _javax_xml_catalog_CatalogFeatures$State_h_
//$ class javax.xml.catalog.CatalogFeatures$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APIPROPERTY")
#undef APIPROPERTY
#pragma push_macro("CATALOGATTRIBUTE")
#undef CATALOGATTRIBUTE
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("JAXPDOTPROPERTIES")
#undef JAXPDOTPROPERTIES
#pragma push_macro("SYSTEMPROPERTY")
#undef SYSTEMPROPERTY

namespace javax {
	namespace xml {
		namespace catalog {

class $export CatalogFeatures$State : public ::java::lang::Enum {
	$class(CatalogFeatures$State, 0, ::java::lang::Enum)
public:
	CatalogFeatures$State();
	static $Array<::javax::xml::catalog::CatalogFeatures$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* literal);
	virtual $String* literal();
	static ::javax::xml::catalog::CatalogFeatures$State* valueOf($String* name);
	static $Array<::javax::xml::catalog::CatalogFeatures$State>* values();
	static ::javax::xml::catalog::CatalogFeatures$State* DEFAULT;
	static ::javax::xml::catalog::CatalogFeatures$State* JAXPDOTPROPERTIES;
	static ::javax::xml::catalog::CatalogFeatures$State* SYSTEMPROPERTY;
	static ::javax::xml::catalog::CatalogFeatures$State* APIPROPERTY;
	static ::javax::xml::catalog::CatalogFeatures$State* CATALOGATTRIBUTE;
	static $Array<::javax::xml::catalog::CatalogFeatures$State>* $VALUES;
	$String* literal$ = nullptr;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("APIPROPERTY")
#pragma pop_macro("CATALOGATTRIBUTE")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("JAXPDOTPROPERTIES")
#pragma pop_macro("SYSTEMPROPERTY")

#endif // _javax_xml_catalog_CatalogFeatures$State_h_
#ifndef _javax_xml_catalog_CatalogFeatures$Feature_h_
#define _javax_xml_catalog_CatalogFeatures$Feature_h_
//$ class javax.xml.catalog.CatalogFeatures$Feature
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DEFER")
#undef DEFER
#pragma push_macro("FILES")
#undef FILES
#pragma push_macro("PREFER")
#undef PREFER
#pragma push_macro("RESOLVE")
#undef RESOLVE

namespace javax {
	namespace xml {
		namespace catalog {

class $import CatalogFeatures$Feature : public ::java::lang::Enum {
	$class(CatalogFeatures$Feature, 0, ::java::lang::Enum)
public:
	CatalogFeatures$Feature();
	static $Array<::javax::xml::catalog::CatalogFeatures$Feature>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* value, bool hasSystem);
	virtual $String* defaultValue();
	virtual bool equalsPropertyName($String* propertyName);
	virtual $String* getPropertyName();
	virtual $String* getValue();
	virtual bool hasSystemProperty();
	static ::javax::xml::catalog::CatalogFeatures$Feature* valueOf($String* name);
	static $Array<::javax::xml::catalog::CatalogFeatures$Feature>* values();
	static ::javax::xml::catalog::CatalogFeatures$Feature* FILES;
	static ::javax::xml::catalog::CatalogFeatures$Feature* PREFER;
	static ::javax::xml::catalog::CatalogFeatures$Feature* DEFER;
	static ::javax::xml::catalog::CatalogFeatures$Feature* RESOLVE;
	static $Array<::javax::xml::catalog::CatalogFeatures$Feature>* $VALUES;
	$String* name$ = nullptr;
	$String* defaultValue$ = nullptr;
	$String* value = nullptr;
	bool hasSystem = false;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("DEFER")
#pragma pop_macro("FILES")
#pragma pop_macro("PREFER")
#pragma pop_macro("RESOLVE")

#endif // _javax_xml_catalog_CatalogFeatures$Feature_h_
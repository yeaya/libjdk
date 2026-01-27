#ifndef _javax_xml_catalog_CatalogFeatures_h_
#define _javax_xml_catalog_CatalogFeatures_h_
//$ class javax.xml.catalog.CatalogFeatures
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CATALOG_DEFER")
#undef CATALOG_DEFER
#pragma push_macro("CATALOG_FILES")
#undef CATALOG_FILES
#pragma push_macro("CATALOG_PREFER")
#undef CATALOG_PREFER
#pragma push_macro("CATALOG_RESOLVE")
#undef CATALOG_RESOLVE
#pragma push_macro("DEFER_FALSE")
#undef DEFER_FALSE
#pragma push_macro("DEFER_TRUE")
#undef DEFER_TRUE
#pragma push_macro("PREFER_PUBLIC")
#undef PREFER_PUBLIC
#pragma push_macro("PREFER_SYSTEM")
#undef PREFER_SYSTEM
#pragma push_macro("RESOLVE_CONTINUE")
#undef RESOLVE_CONTINUE
#pragma push_macro("RESOLVE_IGNORE")
#undef RESOLVE_IGNORE
#pragma push_macro("RESOLVE_STRICT")
#undef RESOLVE_STRICT

namespace java {
	namespace util {
		class Map$Entry;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures$Builder;
			class CatalogFeatures$Feature;
			class CatalogFeatures$State;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class $import CatalogFeatures : public ::java::lang::Object {
	$class(CatalogFeatures, 0, ::java::lang::Object)
public:
	CatalogFeatures();
	void init$();
	void init$(::javax::xml::catalog::CatalogFeatures$Builder* builder);
	static ::javax::xml::catalog::CatalogFeatures$Builder* builder();
	static ::javax::xml::catalog::CatalogFeatures* defaults();
	virtual $String* get(::javax::xml::catalog::CatalogFeatures$Feature* cf);
	bool getSystemProperty(::javax::xml::catalog::CatalogFeatures$Feature* cf, $String* sysPropertyName);
	void init();
	void lambda$setProperties$0(::java::util::Map$Entry* entry);
	void readSystemProperties();
	void setProperties(::javax::xml::catalog::CatalogFeatures$Builder* builder);
	void setProperty(::javax::xml::catalog::CatalogFeatures$Feature* feature, ::javax::xml::catalog::CatalogFeatures$State* state, $String* value);
	static $String* CATALOG_FILES;
	static $String* CATALOG_PREFER;
	static $String* CATALOG_DEFER;
	static $String* CATALOG_RESOLVE;
	static $String* PREFER_SYSTEM;
	static $String* PREFER_PUBLIC;
	static $String* DEFER_TRUE;
	static $String* DEFER_FALSE;
	static $String* RESOLVE_STRICT;
	static $String* RESOLVE_CONTINUE;
	static $String* RESOLVE_IGNORE;
	$StringArray* values = nullptr;
	$Array<::javax::xml::catalog::CatalogFeatures$State>* states = nullptr;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("CATALOG_DEFER")
#pragma pop_macro("CATALOG_FILES")
#pragma pop_macro("CATALOG_PREFER")
#pragma pop_macro("CATALOG_RESOLVE")
#pragma pop_macro("DEFER_FALSE")
#pragma pop_macro("DEFER_TRUE")
#pragma pop_macro("PREFER_PUBLIC")
#pragma pop_macro("PREFER_SYSTEM")
#pragma pop_macro("RESOLVE_CONTINUE")
#pragma pop_macro("RESOLVE_IGNORE")
#pragma pop_macro("RESOLVE_STRICT")

#endif // _javax_xml_catalog_CatalogFeatures_h_
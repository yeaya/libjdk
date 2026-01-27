#ifndef _javax_xml_catalog_BaseEntry$CatalogEntryType_h_
#define _javax_xml_catalog_BaseEntry$CatalogEntryType_h_
//$ class javax.xml.catalog.BaseEntry$CatalogEntryType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CATALOG")
#undef CATALOG
#pragma push_macro("CATALOGENTRY")
#undef CATALOGENTRY
#pragma push_macro("DELEGATEPUBLIC")
#undef DELEGATEPUBLIC
#pragma push_macro("DELEGATESYSTEM")
#undef DELEGATESYSTEM
#pragma push_macro("DELEGATEURI")
#undef DELEGATEURI
#pragma push_macro("GROUP")
#undef GROUP
#pragma push_macro("NEXTCATALOG")
#undef NEXTCATALOG
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("REWRITESYSTEM")
#undef REWRITESYSTEM
#pragma push_macro("REWRITEURI")
#undef REWRITEURI
#pragma push_macro("SYSTEM")
#undef SYSTEM
#pragma push_macro("SYSTEMSUFFIX")
#undef SYSTEMSUFFIX
#pragma push_macro("URI")
#undef URI
#pragma push_macro("URISUFFIX")
#undef URISUFFIX

namespace javax {
	namespace xml {
		namespace catalog {

class BaseEntry$CatalogEntryType : public ::java::lang::Enum {
	$class(BaseEntry$CatalogEntryType, 0, ::java::lang::Enum)
public:
	BaseEntry$CatalogEntryType();
	static $Array<::javax::xml::catalog::BaseEntry$CatalogEntryType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* literal);
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* getType($String* entryType);
	virtual bool isType($String* type);
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* valueOf($String* name);
	static $Array<::javax::xml::catalog::BaseEntry$CatalogEntryType>* values();
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* CATALOG;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* CATALOGENTRY;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* GROUP;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* PUBLIC;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* SYSTEM;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* REWRITESYSTEM;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* SYSTEMSUFFIX;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* DELEGATEPUBLIC;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* DELEGATESYSTEM;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* URI;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* REWRITEURI;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* URISUFFIX;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* DELEGATEURI;
	static ::javax::xml::catalog::BaseEntry$CatalogEntryType* NEXTCATALOG;
	static $Array<::javax::xml::catalog::BaseEntry$CatalogEntryType>* $VALUES;
	$String* literal = nullptr;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("CATALOG")
#pragma pop_macro("CATALOGENTRY")
#pragma pop_macro("DELEGATEPUBLIC")
#pragma pop_macro("DELEGATESYSTEM")
#pragma pop_macro("DELEGATEURI")
#pragma pop_macro("GROUP")
#pragma pop_macro("NEXTCATALOG")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("REWRITESYSTEM")
#pragma pop_macro("REWRITEURI")
#pragma pop_macro("SYSTEM")
#pragma pop_macro("SYSTEMSUFFIX")
#pragma pop_macro("URI")
#pragma pop_macro("URISUFFIX")

#endif // _javax_xml_catalog_BaseEntry$CatalogEntryType_h_
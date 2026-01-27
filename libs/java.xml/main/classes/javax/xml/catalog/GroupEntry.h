#ifndef _javax_xml_catalog_GroupEntry_h_
#define _javax_xml_catalog_GroupEntry_h_
//$ class javax.xml.catalog.GroupEntry
//$ extends javax.xml.catalog.BaseEntry

#include <java/lang/Array.h>
#include <javax/xml/catalog/BaseEntry.h>

#pragma push_macro("ATTRIBUTE_DEFFER")
#undef ATTRIBUTE_DEFFER
#pragma push_macro("ATTRIBUTE_PREFER")
#undef ATTRIBUTE_PREFER
#pragma push_macro("ATTRIBUTE_RESOLUTION")
#undef ATTRIBUTE_RESOLUTION

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class AltCatalog;
			class BaseEntry$CatalogEntryType;
			class Catalog;
			class CatalogFeatures;
			class CatalogImpl;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class GroupEntry : public ::javax::xml::catalog::BaseEntry {
	$class(GroupEntry, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	GroupEntry();
	void init$(::javax::xml::catalog::BaseEntry$CatalogEntryType* type, ::javax::xml::catalog::CatalogImpl* parent);
	void init$($String* base, $StringArray* attributes);
	void init$(::javax::xml::catalog::CatalogImpl* catalog, $String* base, $StringArray* attributes);
	virtual void addEntry(::javax::xml::catalog::BaseEntry* entry);
	virtual ::javax::xml::catalog::CatalogImpl* getLoadedCatalog($String* catalogId);
	virtual bool isCircular(::javax::xml::catalog::CatalogImpl* parent, $String* systemId);
	virtual bool isPreferPublic();
	static bool lambda$loadDelegateCatalogs$0(::javax::xml::catalog::BaseEntry* entry);
	static ::javax::xml::catalog::AltCatalog* lambda$loadDelegateCatalogs$1(::javax::xml::catalog::BaseEntry* entry);
	void lambda$loadDelegateCatalogs$2(::javax::xml::catalog::CatalogImpl* parent, ::javax::xml::catalog::AltCatalog* altCatalog);
	virtual ::javax::xml::catalog::Catalog* loadDelegateCatalog(::javax::xml::catalog::CatalogImpl* parent, ::java::net::URI* catalogURI);
	virtual void loadDelegateCatalogs(::javax::xml::catalog::CatalogImpl* parent);
	$String* matchDelegate(::javax::xml::catalog::BaseEntry$CatalogEntryType* type, $String* id);
	virtual $String* matchPublic($String* publicId);
	virtual $String* matchSystem($String* systemId);
	virtual $String* matchURI($String* uri);
	virtual void reset();
	virtual void setCatalog(::javax::xml::catalog::CatalogImpl* catalog);
	void setPrefer($String* value);
	bool verifyCatalogFile(::javax::xml::catalog::CatalogImpl* parent, ::java::net::URI* catalogURI);
	static const int32_t ATTRIBUTE_PREFER = 0;
	static const int32_t ATTRIBUTE_DEFFER = 1;
	static const int32_t ATTRIBUTE_RESOLUTION = 2;
	::javax::xml::catalog::CatalogFeatures* features = nullptr;
	bool isPreferPublic$ = false;
	::javax::xml::catalog::CatalogImpl* parent = nullptr;
	::javax::xml::catalog::CatalogImpl* catalog = nullptr;
	::java::util::List* entries = nullptr;
	::java::util::Map* delegateCatalogs = nullptr;
	::java::util::Map* loadedCatalogs = nullptr;
	::java::util::List* catalogsSearched = nullptr;
	bool isInstantMatch = false;
	$String* rewriteMatch = nullptr;
	int32_t longestRewriteMatch = 0;
	$String* suffixMatch = nullptr;
	int32_t longestSuffixMatch = 0;
	bool systemEntrySearched = false;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("ATTRIBUTE_DEFFER")
#pragma pop_macro("ATTRIBUTE_PREFER")
#pragma pop_macro("ATTRIBUTE_RESOLUTION")

#endif // _javax_xml_catalog_GroupEntry_h_
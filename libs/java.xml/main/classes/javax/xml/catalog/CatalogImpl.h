#ifndef _javax_xml_catalog_CatalogImpl_h_
#define _javax_xml_catalog_CatalogImpl_h_
//$ class javax.xml.catalog.CatalogImpl
//$ extends javax.xml.catalog.GroupEntry
//$ implements javax.xml.catalog.Catalog

#include <java/lang/Array.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/GroupEntry.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class BaseEntry;
			class CatalogFeatures;
			class GroupEntry$ResolveType;
			class NextCatalog;
		}
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class SAXParser;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogImpl : public ::javax::xml::catalog::GroupEntry, public ::javax::xml::catalog::Catalog {
	$class(CatalogImpl, $NO_CLASS_INIT, ::javax::xml::catalog::GroupEntry, ::javax::xml::catalog::Catalog)
public:
	CatalogImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::catalog::CatalogFeatures* f, $Array<::java::net::URI>* uris);
	void init$(::javax::xml::catalog::CatalogImpl* parent, ::javax::xml::catalog::CatalogFeatures* f, $Array<::java::net::URI>* uris);
	virtual void addNextCatalog(::javax::xml::catalog::NextCatalog* catalog);
	virtual ::java::util::stream::Stream* catalogs() override;
	virtual ::javax::xml::catalog::Catalog* getCatalog(::javax::xml::catalog::CatalogImpl* parent, ::java::net::URI* uri);
	virtual ::javax::xml::catalog::Catalog* getParent();
	::javax::xml::parsers::SAXParser* getParser();
	::javax::xml::catalog::GroupEntry$ResolveType* getResolve();
	void init(::javax::xml::catalog::CatalogFeatures* f);
	virtual bool isDeferred();
	virtual bool isEmpty();
	virtual bool isTop();
	void lambda$loadNextCatalogs$2(::javax::xml::catalog::NextCatalog* next);
	void lambda$loadNextCatalogs$3($String* uri);
	static bool lambda$reset$0(::javax::xml::catalog::BaseEntry* entry);
	static void lambda$reset$1(::javax::xml::catalog::BaseEntry* entry);
	virtual void load();
	virtual void loadNextCatalogs();
	virtual int32_t loadedCatalogCount();
	virtual void markAsSearched();
	virtual $String* matchPublic($String* publicId) override;
	virtual $String* matchSystem($String* systemId) override;
	virtual $String* matchURI($String* uri) override;
	void parse($String* systemId);
	virtual void reset() override;
	virtual void saveLoadedCatalog($String* catalogId, ::javax::xml::catalog::CatalogImpl* c);
	void setDeferred($String* value);
	void setResolve($String* value);
	virtual $String* toString() override;
	int32_t level = 0;
	bool isDeferred$ = false;
	::javax::xml::catalog::GroupEntry$ResolveType* resolveType = nullptr;
	bool isEmpty$ = false;
	int32_t current = 0;
	$String* systemId = nullptr;
	::java::util::List* inputFiles = nullptr;
	::java::util::List* nextCatalogs = nullptr;
	::javax::xml::parsers::SAXParser* parser = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogImpl_h_
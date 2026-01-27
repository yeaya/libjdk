#ifndef _javax_xml_catalog_BaseEntry_h_
#define _javax_xml_catalog_BaseEntry_h_
//$ class javax.xml.catalog.BaseEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SLASH")
#undef SLASH

namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class BaseEntry$CatalogEntryType;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class BaseEntry : public ::java::lang::Object {
	$class(BaseEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BaseEntry();
	void init$(::javax::xml::catalog::BaseEntry$CatalogEntryType* type);
	void init$(::javax::xml::catalog::BaseEntry$CatalogEntryType* type, $String* base);
	virtual ::java::net::URL* getBaseURI();
	virtual $String* getId();
	virtual $String* getMatchId();
	virtual ::javax::xml::catalog::BaseEntry$CatalogEntryType* getType();
	virtual $String* match($String* match);
	virtual $String* match($String* id, int32_t currentMatch);
	void setBaseURI($String* base);
	virtual void setId($String* id);
	virtual void setMatchId($String* matchId);
	virtual void setType(::javax::xml::catalog::BaseEntry$CatalogEntryType* type);
	virtual ::java::net::URL* verifyURI($String* arg, ::java::net::URL* base, $String* uri);
	$String* SLASH = nullptr;
	::javax::xml::catalog::BaseEntry$CatalogEntryType* type = nullptr;
	$String* id = nullptr;
	$String* matchId = nullptr;
	::java::net::URL* baseURI = nullptr;
	bool baseSpecified = false;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("SLASH")

#endif // _javax_xml_catalog_BaseEntry_h_
#include <javax/xml/catalog/CatalogEntry.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <jcpp.h>

#undef CATALOGENTRY

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $GroupEntry = ::javax::xml::catalog::GroupEntry;

namespace javax {
	namespace xml {
		namespace catalog {

void CatalogEntry::init$($String* base, $StringArray* attributes) {
	$GroupEntry::init$(base, attributes);
	$init($BaseEntry$CatalogEntryType);
	setType($BaseEntry$CatalogEntryType::CATALOGENTRY);
}

$String* CatalogEntry::match($String* match) {
	$throwNew($UnsupportedOperationException, "Unsupported operation."_s);
	$shouldNotReachHere();
}

CatalogEntry::CatalogEntry() {
}

$Class* CatalogEntry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(CatalogEntry, init$, void, $String*, $StringArray*)},
		{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogEntry, match, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.catalog.CatalogEntry",
		"javax.xml.catalog.GroupEntry",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CatalogEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CatalogEntry);
	});
	return class$;
}

$Class* CatalogEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax
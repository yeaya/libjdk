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

$MethodInfo _CatalogEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(CatalogEntry, init$, void, $String*, $StringArray*)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogEntry, match, $String*, $String*)},
	{}
};

$ClassInfo _CatalogEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.CatalogEntry",
	"javax.xml.catalog.GroupEntry",
	nullptr,
	nullptr,
	_CatalogEntry_MethodInfo_
};

$Object* allocate$CatalogEntry($Class* clazz) {
	return $of($alloc(CatalogEntry));
}

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
	$loadClass(CatalogEntry, name, initialize, &_CatalogEntry_ClassInfo_, allocate$CatalogEntry);
	return class$;
}

$Class* CatalogEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax
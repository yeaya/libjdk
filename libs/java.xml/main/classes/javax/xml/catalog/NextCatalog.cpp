#include <javax/xml/catalog/NextCatalog.h>

#include <java/lang/UnsupportedOperationException.h>
#include <javax/xml/catalog/AltCatalog.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <jcpp.h>

#undef NEXTCATALOG

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AltCatalog = ::javax::xml::catalog::AltCatalog;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;

namespace javax {
	namespace xml {
		namespace catalog {

$MethodInfo _NextCatalog_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NextCatalog, init$, void, $String*, $String*)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NextCatalog, match, $String*, $String*)},
	{}
};

$ClassInfo _NextCatalog_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.NextCatalog",
	"javax.xml.catalog.AltCatalog",
	nullptr,
	nullptr,
	_NextCatalog_MethodInfo_
};

$Object* allocate$NextCatalog($Class* clazz) {
	return $of($alloc(NextCatalog));
}

void NextCatalog::init$($String* base, $String* catalog) {
	$init($BaseEntry$CatalogEntryType);
	$AltCatalog::init$($BaseEntry$CatalogEntryType::NEXTCATALOG, base);
	setCatalog(catalog);
}

$String* NextCatalog::match($String* match) {
	$throwNew($UnsupportedOperationException, "Not supported."_s);
	$shouldNotReachHere();
}

NextCatalog::NextCatalog() {
}

$Class* NextCatalog::load$($String* name, bool initialize) {
	$loadClass(NextCatalog, name, initialize, &_NextCatalog_ClassInfo_, allocate$NextCatalog);
	return class$;
}

$Class* NextCatalog::class$ = nullptr;

		} // catalog
	} // xml
} // javax
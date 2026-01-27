#include <javax/xml/catalog/AltCatalog.h>

#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <jcpp.h>

#undef ERR_OTHER

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _AltCatalog_FieldInfo_[] = {
	{"catalogURI", "Ljava/net/URI;", nullptr, 0, $field(AltCatalog, catalogURI)},
	{}
};

$MethodInfo _AltCatalog_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;Ljava/lang/String;)V", nullptr, 0, $method(AltCatalog, init$, void, $BaseEntry$CatalogEntryType*, $String*)},
	{"getCatalogId", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(AltCatalog, getCatalogId, $String*)},
	{"getCatalogURI", "()Ljava/net/URI;", nullptr, 0, $virtualMethod(AltCatalog, getCatalogURI, $URI*)},
	{"matchURI", "(Ljava/lang/String;I)Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(AltCatalog, matchURI, $URI*, $String*, int32_t)},
	{"setCatalog", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(AltCatalog, setCatalog, void, $String*)},
	{}
};

$ClassInfo _AltCatalog_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.AltCatalog",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_AltCatalog_FieldInfo_,
	_AltCatalog_MethodInfo_
};

$Object* allocate$AltCatalog($Class* clazz) {
	return $of($alloc(AltCatalog));
}

void AltCatalog::init$($BaseEntry$CatalogEntryType* type, $String* base) {
	$BaseEntry::init$(type, base);
}

void AltCatalog::setCatalog($String* catalog) {
	$var($URL, url, verifyURI("catalog"_s, this->baseURI, catalog));
	try {
		$set(this, catalogURI, $nc(url)->toURI());
	} catch ($URISyntaxException& ex) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_OTHER, static_cast<$Throwable*>(ex));
	}
}

$String* AltCatalog::getCatalogId() {
	return $nc(this->catalogURI)->toASCIIString();
}

$URI* AltCatalog::getCatalogURI() {
	return this->catalogURI;
}

$URI* AltCatalog::matchURI($String* id, int32_t currentMatch) {
	return nullptr;
}

AltCatalog::AltCatalog() {
}

$Class* AltCatalog::load$($String* name, bool initialize) {
	$loadClass(AltCatalog, name, initialize, &_AltCatalog_ClassInfo_, allocate$AltCatalog);
	return class$;
}

$Class* AltCatalog::class$ = nullptr;

		} // catalog
	} // xml
} // javax
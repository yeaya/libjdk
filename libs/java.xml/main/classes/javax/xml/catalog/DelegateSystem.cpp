#include <javax/xml/catalog/DelegateSystem.h>

#include <java/net/URI.h>
#include <javax/xml/catalog/AltCatalog.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef DELEGATESYSTEM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $AltCatalog = ::javax::xml::catalog::AltCatalog;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Normalizer = ::javax::xml::catalog::Normalizer;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _DelegateSystem_FieldInfo_[] = {
	{"systemIdStartString", "Ljava/lang/String;", nullptr, 0, $field(DelegateSystem, systemIdStartString)},
	{}
};

$MethodInfo _DelegateSystem_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DelegateSystem, init$, void, $String*, $String*, $String*)},
	{"getSystemIdStartString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(DelegateSystem, getSystemIdStartString, $String*)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DelegateSystem, match, $String*, $String*)},
	{"matchURI", "(Ljava/lang/String;I)Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(DelegateSystem, matchURI, $URI*, $String*, int32_t)},
	{"setSystemIdStartString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DelegateSystem, setSystemIdStartString, void, $String*)},
	{}
};

$ClassInfo _DelegateSystem_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.DelegateSystem",
	"javax.xml.catalog.AltCatalog",
	nullptr,
	_DelegateSystem_FieldInfo_,
	_DelegateSystem_MethodInfo_
};

$Object* allocate$DelegateSystem($Class* clazz) {
	return $of($alloc(DelegateSystem));
}

void DelegateSystem::init$($String* base, $String* systemIdStartString, $String* catalog) {
	$init($BaseEntry$CatalogEntryType);
	$AltCatalog::init$($BaseEntry$CatalogEntryType::DELEGATESYSTEM, base);
	setSystemIdStartString(systemIdStartString);
	setCatalog(catalog);
}

void DelegateSystem::setSystemIdStartString($String* systemIdStartString) {
	$CatalogMessages::reportNPEOnNull("systemIdStartString"_s, systemIdStartString);
	$set(this, systemIdStartString, $Normalizer::normalizeURI(systemIdStartString));
	setMatchId(this->systemIdStartString);
}

$String* DelegateSystem::getSystemIdStartString() {
	return this->systemIdStartString;
}

$String* DelegateSystem::match($String* systemId) {
	return match(systemId, 0);
}

$URI* DelegateSystem::matchURI($String* systemId, int32_t currentMatch) {
	int32_t var$1 = $nc(this->systemIdStartString)->length();
	bool var$0 = var$1 <= $nc(systemId)->length();
	if (var$0 && $nc(this->systemIdStartString)->equals($(systemId->substring(0, $nc(this->systemIdStartString)->length())))) {
		if (currentMatch < $nc(this->systemIdStartString)->length()) {
			return this->catalogURI;
		}
	}
	return nullptr;
}

DelegateSystem::DelegateSystem() {
}

$Class* DelegateSystem::load$($String* name, bool initialize) {
	$loadClass(DelegateSystem, name, initialize, &_DelegateSystem_ClassInfo_, allocate$DelegateSystem);
	return class$;
}

$Class* DelegateSystem::class$ = nullptr;

		} // catalog
	} // xml
} // javax
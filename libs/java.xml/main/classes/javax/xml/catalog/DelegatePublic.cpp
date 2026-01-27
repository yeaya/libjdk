#include <javax/xml/catalog/DelegatePublic.h>

#include <java/net/URI.h>
#include <javax/xml/catalog/AltCatalog.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef DELEGATEPUBLIC

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

$FieldInfo _DelegatePublic_FieldInfo_[] = {
	{"publicIdStartString", "Ljava/lang/String;", nullptr, 0, $field(DelegatePublic, publicIdStartString)},
	{}
};

$MethodInfo _DelegatePublic_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DelegatePublic, init$, void, $String*, $String*, $String*)},
	{"getPublicIdStartString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(DelegatePublic, getPublicIdStartString, $String*)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DelegatePublic, match, $String*, $String*)},
	{"matchURI", "(Ljava/lang/String;I)Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(DelegatePublic, matchURI, $URI*, $String*, int32_t)},
	{"setPublicIdStartString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DelegatePublic, setPublicIdStartString, void, $String*)},
	{}
};

$ClassInfo _DelegatePublic_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.DelegatePublic",
	"javax.xml.catalog.AltCatalog",
	nullptr,
	_DelegatePublic_FieldInfo_,
	_DelegatePublic_MethodInfo_
};

$Object* allocate$DelegatePublic($Class* clazz) {
	return $of($alloc(DelegatePublic));
}

void DelegatePublic::init$($String* base, $String* startString, $String* catalog) {
	$init($BaseEntry$CatalogEntryType);
	$AltCatalog::init$($BaseEntry$CatalogEntryType::DELEGATEPUBLIC, base);
	setPublicIdStartString(startString);
	setCatalog(catalog);
}

void DelegatePublic::setPublicIdStartString($String* startString) {
	$CatalogMessages::reportNPEOnNull("publicIdStartString"_s, startString);
	$set(this, publicIdStartString, $Normalizer::normalizePublicId(startString));
	setMatchId(this->publicIdStartString);
}

$String* DelegatePublic::getPublicIdStartString() {
	return this->publicIdStartString;
}

$String* DelegatePublic::match($String* publicId) {
	return match(publicId, 0);
}

$URI* DelegatePublic::matchURI($String* publicId, int32_t currentMatch) {
	int32_t var$1 = $nc(this->publicIdStartString)->length();
	bool var$0 = var$1 <= $nc(publicId)->length();
	if (var$0 && $nc(this->publicIdStartString)->equals($(publicId->substring(0, $nc(this->publicIdStartString)->length())))) {
		if (currentMatch < $nc(this->publicIdStartString)->length()) {
			return this->catalogURI;
		}
	}
	return nullptr;
}

DelegatePublic::DelegatePublic() {
}

$Class* DelegatePublic::load$($String* name, bool initialize) {
	$loadClass(DelegatePublic, name, initialize, &_DelegatePublic_ClassInfo_, allocate$DelegatePublic);
	return class$;
}

$Class* DelegatePublic::class$ = nullptr;

		} // catalog
	} // xml
} // javax
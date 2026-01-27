#include <javax/xml/catalog/UriSuffix.h>

#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef URISUFFIX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Normalizer = ::javax::xml::catalog::Normalizer;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _UriSuffix_FieldInfo_[] = {
	{"uriSuffix", "Ljava/lang/String;", nullptr, 0, $field(UriSuffix, uriSuffix)},
	{"uri", "Ljava/net/URL;", nullptr, 0, $field(UriSuffix, uri)},
	{}
};

$MethodInfo _UriSuffix_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UriSuffix, init$, void, $String*, $String*, $String*)},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(UriSuffix, getURI, $String*)},
	{"getURISuffix", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(UriSuffix, getURISuffix, $String*)},
	{"match", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UriSuffix, match, $String*, $String*, int32_t)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UriSuffix, match, $String*, $String*)},
	{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UriSuffix, setURI, void, $String*)},
	{"setURISuffix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UriSuffix, setURISuffix, void, $String*)},
	{}
};

$ClassInfo _UriSuffix_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.UriSuffix",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_UriSuffix_FieldInfo_,
	_UriSuffix_MethodInfo_
};

$Object* allocate$UriSuffix($Class* clazz) {
	return $of($alloc(UriSuffix));
}

void UriSuffix::init$($String* base, $String* uriSuffix, $String* uri) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::URISUFFIX, base);
	setURISuffix(uriSuffix);
	setURI(uri);
}

void UriSuffix::setURISuffix($String* uriSuffix) {
	$CatalogMessages::reportNPEOnNull("uriSuffix"_s, uriSuffix);
	$set(this, uriSuffix, $Normalizer::normalizeURI(uriSuffix));
}

void UriSuffix::setURI($String* uri) {
	$set(this, uri, verifyURI("setURI"_s, this->baseURI, uri));
}

$String* UriSuffix::getURISuffix() {
	return this->uriSuffix;
}

$String* UriSuffix::getURI() {
	return $nc(this->uri)->toString();
}

$String* UriSuffix::match($String* systemId, int32_t currentMatch) {
	if ($nc(systemId)->endsWith(this->uriSuffix)) {
		if (currentMatch < $nc(this->uriSuffix)->length()) {
			return $nc(this->uri)->toString();
		}
	}
	return nullptr;
}

$String* UriSuffix::match($String* systemId) {
	return match(systemId, 0);
}

UriSuffix::UriSuffix() {
}

$Class* UriSuffix::load$($String* name, bool initialize) {
	$loadClass(UriSuffix, name, initialize, &_UriSuffix_ClassInfo_, allocate$UriSuffix);
	return class$;
}

$Class* UriSuffix::class$ = nullptr;

		} // catalog
	} // xml
} // javax
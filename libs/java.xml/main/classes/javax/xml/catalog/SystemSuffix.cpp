#include <javax/xml/catalog/SystemSuffix.h>

#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef SYSTEMSUFFIX

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

$FieldInfo _SystemSuffix_FieldInfo_[] = {
	{"systemIdSuffix", "Ljava/lang/String;", nullptr, 0, $field(SystemSuffix, systemIdSuffix)},
	{"uri", "Ljava/net/URL;", nullptr, 0, $field(SystemSuffix, uri)},
	{}
};

$MethodInfo _SystemSuffix_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SystemSuffix, init$, void, $String*, $String*, $String*)},
	{"getSystemIdSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SystemSuffix, getSystemIdSuffix, $String*)},
	{"getURI", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(SystemSuffix, getURI, $URL*)},
	{"match", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SystemSuffix, match, $String*, $String*, int32_t)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SystemSuffix, match, $String*, $String*)},
	{"setSystemIdSuffix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SystemSuffix, setSystemIdSuffix, void, $String*)},
	{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SystemSuffix, setURI, void, $String*)},
	{}
};

$ClassInfo _SystemSuffix_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.SystemSuffix",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_SystemSuffix_FieldInfo_,
	_SystemSuffix_MethodInfo_
};

$Object* allocate$SystemSuffix($Class* clazz) {
	return $of($alloc(SystemSuffix));
}

void SystemSuffix::init$($String* base, $String* systemIdSuffix, $String* uri) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::SYSTEMSUFFIX, base);
	setSystemIdSuffix(systemIdSuffix);
	setURI(uri);
}

void SystemSuffix::setSystemIdSuffix($String* systemIdSuffix) {
	$CatalogMessages::reportNPEOnNull("systemIdSuffix"_s, systemIdSuffix);
	$set(this, systemIdSuffix, $Normalizer::normalizeURI(systemIdSuffix));
}

void SystemSuffix::setURI($String* uri) {
	$set(this, uri, verifyURI("setURI"_s, this->baseURI, uri));
}

$String* SystemSuffix::getSystemIdSuffix() {
	return this->systemIdSuffix;
}

$URL* SystemSuffix::getURI() {
	return this->uri;
}

$String* SystemSuffix::match($String* systemId, int32_t currentMatch) {
	if ($nc(systemId)->endsWith(this->systemIdSuffix)) {
		if (currentMatch < $nc(this->systemIdSuffix)->length()) {
			return $nc(this->uri)->toString();
		}
	}
	return nullptr;
}

$String* SystemSuffix::match($String* systemId) {
	return match(systemId, 0);
}

SystemSuffix::SystemSuffix() {
}

$Class* SystemSuffix::load$($String* name, bool initialize) {
	$loadClass(SystemSuffix, name, initialize, &_SystemSuffix_ClassInfo_, allocate$SystemSuffix);
	return class$;
}

$Class* SystemSuffix::class$ = nullptr;

		} // catalog
	} // xml
} // javax
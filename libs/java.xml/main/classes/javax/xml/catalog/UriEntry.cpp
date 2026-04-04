#include <javax/xml/catalog/UriEntry.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <javax/xml/catalog/Util.h>
#include <jcpp.h>

#undef PUBLICID_PREFIX
#undef PUBLICID_PREFIX_ALT
#undef URI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Normalizer = ::javax::xml::catalog::Normalizer;
using $Util = ::javax::xml::catalog::Util;

namespace javax {
	namespace xml {
		namespace catalog {

void UriEntry::init$($String* base, $String* name, $String* uri) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::URI, base);
	setName(name);
	setURI(uri);
}

void UriEntry::setName($String* name) {
	$CatalogMessages::reportNPEOnNull("name"_s, name);
	$init($Util);
	bool var$0 = $nc(name)->startsWith($Util::PUBLICID_PREFIX);
	if (var$0 || name->startsWith($Util::PUBLICID_PREFIX_ALT)) {
		$set(this, name, $Normalizer::normalizePublicId(name));
	} else {
		$set(this, name, $Normalizer::normalizeURI(name));
	}
}

void UriEntry::setURI($String* uri) {
	$set(this, uri, verifyURI("setURI"_s, this->baseURI, uri));
}

$String* UriEntry::getName() {
	return this->name;
}

$URL* UriEntry::getURI() {
	return this->uri;
}

$String* UriEntry::match($String* name) {
	if ($nc(this->name)->equals(name)) {
		return $nc(this->uri)->toString();
	}
	return nullptr;
}

UriEntry::UriEntry() {
}

$Class* UriEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(UriEntry, name)},
		{"uri", "Ljava/net/URL;", nullptr, 0, $field(UriEntry, uri)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UriEntry, init$, void, $String*, $String*, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(UriEntry, getName, $String*)},
		{"getURI", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(UriEntry, getURI, $URL*)},
		{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UriEntry, match, $String*, $String*)},
		{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UriEntry, setName, void, $String*)},
		{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UriEntry, setURI, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.xml.catalog.UriEntry",
		"javax.xml.catalog.BaseEntry",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UriEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UriEntry);
	});
	return class$;
}

$Class* UriEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax
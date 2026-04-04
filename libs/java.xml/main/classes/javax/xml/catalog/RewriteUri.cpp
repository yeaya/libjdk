#include <javax/xml/catalog/RewriteUri.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef REWRITEURI
#undef SLASH

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

void RewriteUri::init$($String* base, $String* uriStartString, $String* rewritePrefix) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::REWRITEURI, base);
	setURIStartString(uriStartString);
	setRewritePrefix(rewritePrefix);
}

void RewriteUri::setURIStartString($String* uriStartString) {
	$CatalogMessages::reportNPEOnNull("uriStartString"_s, uriStartString);
	$set(this, uriStartString, $Normalizer::normalizeURI(uriStartString));
}

void RewriteUri::setRewritePrefix($String* rewritePrefix) {
	$set(this, rewritePrefix, verifyURI("setRewritePrefix"_s, this->baseURI, rewritePrefix));
}

$String* RewriteUri::getURIStartString() {
	return this->uriStartString;
}

$URL* RewriteUri::getRewritePrefix() {
	return this->rewritePrefix;
}

$String* RewriteUri::match($String* systemId, int32_t currentMatch) {
	$useLocalObjectStack();
	int32_t var$1 = $nc(this->uriStartString)->length();
	bool var$0 = var$1 < $nc(systemId)->length();
	if (var$0 && this->uriStartString->equals($(systemId->substring(0, this->uriStartString->length())))) {
		if (currentMatch < this->uriStartString->length()) {
			$var($String, prefix, $nc(this->rewritePrefix)->toExternalForm());
			$var($String, sysId, nullptr);
			if (this->uriStartString->endsWith(this->SLASH)) {
				$assign(sysId, systemId->substring(this->uriStartString->length()));
			} else {
				$assign(sysId, systemId->substring(this->uriStartString->length() + 1));
			}
			if ($nc(prefix)->endsWith(this->SLASH)) {
				return $str({prefix, sysId});
			} else {
				return $str({prefix, this->SLASH, sysId});
			}
		}
	}
	return nullptr;
}

$String* RewriteUri::match($String* systemId) {
	return match(systemId, 0);
}

RewriteUri::RewriteUri() {
}

$Class* RewriteUri::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uriStartString", "Ljava/lang/String;", nullptr, 0, $field(RewriteUri, uriStartString)},
		{"rewritePrefix", "Ljava/net/URL;", nullptr, 0, $field(RewriteUri, rewritePrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RewriteUri, init$, void, $String*, $String*, $String*)},
		{"getRewritePrefix", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(RewriteUri, getRewritePrefix, $URL*)},
		{"getURIStartString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(RewriteUri, getURIStartString, $String*)},
		{"match", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RewriteUri, match, $String*, $String*, int32_t)},
		{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RewriteUri, match, $String*, $String*)},
		{"setRewritePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RewriteUri, setRewritePrefix, void, $String*)},
		{"setURIStartString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RewriteUri, setURIStartString, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.xml.catalog.RewriteUri",
		"javax.xml.catalog.BaseEntry",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RewriteUri, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RewriteUri);
	});
	return class$;
}

$Class* RewriteUri::class$ = nullptr;

		} // catalog
	} // xml
} // javax
#include <javax/xml/catalog/RewriteSystem.h>

#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef REWRITESYSTEM
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

$FieldInfo _RewriteSystem_FieldInfo_[] = {
	{"systemIdStartString", "Ljava/lang/String;", nullptr, 0, $field(RewriteSystem, systemIdStartString)},
	{"rewritePrefix", "Ljava/net/URL;", nullptr, 0, $field(RewriteSystem, rewritePrefix)},
	{}
};

$MethodInfo _RewriteSystem_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RewriteSystem, init$, void, $String*, $String*, $String*)},
	{"getRewritePrefix", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(RewriteSystem, getRewritePrefix, $URL*)},
	{"getSystemIdStartString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(RewriteSystem, getSystemIdStartString, $String*)},
	{"match", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RewriteSystem, match, $String*, $String*, int32_t)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RewriteSystem, match, $String*, $String*)},
	{"setRewritePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RewriteSystem, setRewritePrefix, void, $String*)},
	{"setSystemIdStartString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RewriteSystem, setSystemIdStartString, void, $String*)},
	{}
};

$ClassInfo _RewriteSystem_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.RewriteSystem",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_RewriteSystem_FieldInfo_,
	_RewriteSystem_MethodInfo_
};

$Object* allocate$RewriteSystem($Class* clazz) {
	return $of($alloc(RewriteSystem));
}

void RewriteSystem::init$($String* base, $String* systemIdStartString, $String* rewritePrefix) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::REWRITESYSTEM, base);
	setSystemIdStartString(systemIdStartString);
	setRewritePrefix(rewritePrefix);
}

void RewriteSystem::setSystemIdStartString($String* systemIdStartString) {
	$CatalogMessages::reportNPEOnNull("systemIdStartString"_s, systemIdStartString);
	$set(this, systemIdStartString, $Normalizer::normalizeURI(systemIdStartString));
}

void RewriteSystem::setRewritePrefix($String* rewritePrefix) {
	$set(this, rewritePrefix, verifyURI("setRewritePrefix"_s, this->baseURI, rewritePrefix));
}

$String* RewriteSystem::getSystemIdStartString() {
	return this->systemIdStartString;
}

$URL* RewriteSystem::getRewritePrefix() {
	return this->rewritePrefix;
}

$String* RewriteSystem::match($String* systemId, int32_t currentMatch) {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = $nc(this->systemIdStartString)->length();
	bool var$0 = var$1 < $nc(systemId)->length();
	if (var$0 && $nc(this->systemIdStartString)->equals($(systemId->substring(0, $nc(this->systemIdStartString)->length())))) {
		if (currentMatch < $nc(this->systemIdStartString)->length()) {
			$var($String, prefix, $nc(this->rewritePrefix)->toExternalForm());
			$var($String, sysId, nullptr);
			if ($nc(this->systemIdStartString)->endsWith(this->SLASH)) {
				$assign(sysId, systemId->substring($nc(this->systemIdStartString)->length()));
			} else {
				$assign(sysId, systemId->substring($nc(this->systemIdStartString)->length() + 1));
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

$String* RewriteSystem::match($String* systemId) {
	return match(systemId, 0);
}

RewriteSystem::RewriteSystem() {
}

$Class* RewriteSystem::load$($String* name, bool initialize) {
	$loadClass(RewriteSystem, name, initialize, &_RewriteSystem_ClassInfo_, allocate$RewriteSystem);
	return class$;
}

$Class* RewriteSystem::class$ = nullptr;

		} // catalog
	} // xml
} // javax
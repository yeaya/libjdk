#include <javax/naming/ldap/spi/LdapDnsProviderResult.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {

void LdapDnsProviderResult::init$($String* domainName, $List* endpoints) {
	$set(this, domainName, (domainName == nullptr) ? ""_s : domainName);
	$set(this, endpoints, $List::copyOf(endpoints));
}

$String* LdapDnsProviderResult::getDomainName() {
	return this->domainName;
}

$List* LdapDnsProviderResult::getEndpoints() {
	return this->endpoints;
}

LdapDnsProviderResult::LdapDnsProviderResult() {
}

$Class* LdapDnsProviderResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"domainName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapDnsProviderResult, domainName)},
		{"endpoints", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LdapDnsProviderResult, endpoints)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(LdapDnsProviderResult, init$, void, $String*, $List*)},
		{"getDomainName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(LdapDnsProviderResult, getDomainName, $String*)},
		{"getEndpoints", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(LdapDnsProviderResult, getEndpoints, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.naming.ldap.spi.LdapDnsProviderResult",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapDnsProviderResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LdapDnsProviderResult);
	});
	return class$;
}

$Class* LdapDnsProviderResult::class$ = nullptr;

			} // spi
		} // ldap
	} // naming
} // javax
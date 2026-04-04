#include <sun/security/provider/certpath/ldap/LDAPCertStore$Key.h>
#include <java/util/Locale.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStore.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

void LDAPCertStore$Key::init$($String* serverName, int32_t port) {
	$set(this, serverName, serverName);
	this->port = port;
}

bool LDAPCertStore$Key::equals(Object$* obj) {
	if (!($instanceOf(LDAPCertStore$Key, obj))) {
		return false;
	}
	$var(LDAPCertStore$Key, key, $cast(LDAPCertStore$Key, obj));
	return (this->port == $nc(key)->port && $nc(this->serverName)->equalsIgnoreCase(key->serverName));
}

int32_t LDAPCertStore$Key::hashCode() {
	if (this->hashCode$ == 0) {
		int32_t result = 17;
		result = 37 * result + this->port;
		$init($Locale);
		result = 37 * result + $($nc(this->serverName)->toLowerCase($Locale::ENGLISH))->hashCode();
		this->hashCode$ = result;
	}
	return this->hashCode$;
}

LDAPCertStore$Key::LDAPCertStore$Key() {
}

$Class* LDAPCertStore$Key::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashCode", "I", nullptr, $VOLATILE, $field(LDAPCertStore$Key, hashCode$)},
		{"serverName", "Ljava/lang/String;", nullptr, 0, $field(LDAPCertStore$Key, serverName)},
		{"port", "I", nullptr, 0, $field(LDAPCertStore$Key, port)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(LDAPCertStore$Key, init$, void, $String*, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(LDAPCertStore$Key, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LDAPCertStore$Key, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.ldap.LDAPCertStore$Key", "sun.security.provider.certpath.ldap.LDAPCertStore", "Key", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.ldap.LDAPCertStore$Key",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.ldap.LDAPCertStore"
	};
	$loadClass(LDAPCertStore$Key, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LDAPCertStore$Key);
	});
	return class$;
}

$Class* LDAPCertStore$Key::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun
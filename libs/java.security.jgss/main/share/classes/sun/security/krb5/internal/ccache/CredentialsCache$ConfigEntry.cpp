#include <sun/security/krb5/internal/ccache/CredentialsCache$ConfigEntry.h>

#include <java/lang/AssertionError.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/RealmException.h>
#include <sun/security/krb5/internal/ccache/CredentialsCache.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $RealmException = ::sun::security::krb5::RealmException;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace ccache {

$FieldInfo _CredentialsCache$ConfigEntry_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CredentialsCache$ConfigEntry, name)},
	{"princ", "Lsun/security/krb5/PrincipalName;", nullptr, $PRIVATE | $FINAL, $field(CredentialsCache$ConfigEntry, princ)},
	{"data", "[B", nullptr, $PRIVATE | $FINAL, $field(CredentialsCache$ConfigEntry, data)},
	{}
};

$MethodInfo _CredentialsCache$ConfigEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/krb5/PrincipalName;[B)V", nullptr, $PUBLIC, $method(CredentialsCache$ConfigEntry, init$, void, $String*, $PrincipalName*, $bytes*)},
	{"getData", "()[B", nullptr, $PUBLIC, $virtualMethod(CredentialsCache$ConfigEntry, getData, $bytes*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CredentialsCache$ConfigEntry, getName, $String*)},
	{"getPrinc", "()Lsun/security/krb5/PrincipalName;", nullptr, $PUBLIC, $virtualMethod(CredentialsCache$ConfigEntry, getPrinc, $PrincipalName*)},
	{"getSName", "()Lsun/security/krb5/PrincipalName;", nullptr, $PUBLIC, $virtualMethod(CredentialsCache$ConfigEntry, getSName, $PrincipalName*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CredentialsCache$ConfigEntry, toString, $String*)},
	{}
};

$InnerClassInfo _CredentialsCache$ConfigEntry_InnerClassesInfo_[] = {
	{"sun.security.krb5.internal.ccache.CredentialsCache$ConfigEntry", "sun.security.krb5.internal.ccache.CredentialsCache", "ConfigEntry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CredentialsCache$ConfigEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.krb5.internal.ccache.CredentialsCache$ConfigEntry",
	"java.lang.Object",
	nullptr,
	_CredentialsCache$ConfigEntry_FieldInfo_,
	_CredentialsCache$ConfigEntry_MethodInfo_,
	nullptr,
	nullptr,
	_CredentialsCache$ConfigEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.krb5.internal.ccache.CredentialsCache"
};

$Object* allocate$CredentialsCache$ConfigEntry($Class* clazz) {
	return $of($alloc(CredentialsCache$ConfigEntry));
}

void CredentialsCache$ConfigEntry::init$($String* name, $PrincipalName* princ, $bytes* data) {
	$set(this, name, name);
	$set(this, princ, princ);
	$set(this, data, data);
}

$String* CredentialsCache$ConfigEntry::getName() {
	return this->name;
}

$PrincipalName* CredentialsCache$ConfigEntry::getPrinc() {
	return this->princ;
}

$bytes* CredentialsCache$ConfigEntry::getData() {
	return this->data;
}

$String* CredentialsCache$ConfigEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({this->name, (this->princ != nullptr ? ($$str({"."_s, this->princ})) : ""_s), ": "_s}));
	return $concat(var$0, $$new($String, this->data));
}

$PrincipalName* CredentialsCache$ConfigEntry::getSName() {
	$useLocalCurrentObjectStackCache();
	try {
		return $new($PrincipalName, $$str({"krb5_ccache_conf_data/"_s, this->name, (this->princ != nullptr ? ($$str({"/"_s, this->princ})) : ""_s), "@X-CACHECONF:"_s}));
	} catch ($RealmException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

CredentialsCache$ConfigEntry::CredentialsCache$ConfigEntry() {
}

$Class* CredentialsCache$ConfigEntry::load$($String* name, bool initialize) {
	$loadClass(CredentialsCache$ConfigEntry, name, initialize, &_CredentialsCache$ConfigEntry_ClassInfo_, allocate$CredentialsCache$ConfigEntry);
	return class$;
}

$Class* CredentialsCache$ConfigEntry::class$ = nullptr;

				} // ccache
			} // internal
		} // krb5
	} // security
} // sun
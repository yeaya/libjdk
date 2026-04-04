#include <sun/security/krb5/internal/ccache/MemoryCredentialsCache.h>
#include <java/io/File.h>
#include <sun/security/krb5/PrincipalName.h>
#include <sun/security/krb5/internal/ccache/CredentialsCache.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrincipalName = ::sun::security::krb5::PrincipalName;
using $CredentialsCache = ::sun::security::krb5::internal::ccache::CredentialsCache;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace ccache {

void MemoryCredentialsCache::init$() {
	$CredentialsCache::init$();
}

$CredentialsCache* MemoryCredentialsCache::getCCacheInstance($PrincipalName* p) {
	$init(MemoryCredentialsCache);
	return nullptr;
}

$CredentialsCache* MemoryCredentialsCache::getCCacheInstance($PrincipalName* p, $File* cacheFile) {
	$init(MemoryCredentialsCache);
	return nullptr;
}

MemoryCredentialsCache::MemoryCredentialsCache() {
}

$Class* MemoryCredentialsCache::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getCreds", "(Lsun/security/krb5/PrincipalName;)Lsun/security/krb5/internal/ccache/Credentials;", nullptr, $PUBLIC | $ABSTRACT},
		{"getCredsList", "()[Lsun/security/krb5/internal/ccache/Credentials;", nullptr, $PUBLIC | $ABSTRACT},
		{"getPrimaryPrincipal", "()Lsun/security/krb5/PrincipalName;", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MemoryCredentialsCache, init$, void)},
		{"exists", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryCredentialsCache, exists, bool, $String*)},
		{"getCCacheInstance", "(Lsun/security/krb5/PrincipalName;)Lsun/security/krb5/internal/ccache/CredentialsCache;", nullptr, $PRIVATE | $STATIC, $staticMethod(MemoryCredentialsCache, getCCacheInstance, $CredentialsCache*, $PrincipalName*)},
		{"getCCacheInstance", "(Lsun/security/krb5/PrincipalName;Ljava/io/File;)Lsun/security/krb5/internal/ccache/CredentialsCache;", nullptr, $PRIVATE | $STATIC, $staticMethod(MemoryCredentialsCache, getCCacheInstance, $CredentialsCache*, $PrincipalName*, $File*)},
		{"update", "(Lsun/security/krb5/internal/ccache/Credentials;)V", nullptr, $PUBLIC | $ABSTRACT},
		{"save", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.security.krb5.internal.ccache.MemoryCredentialsCache",
		"sun.security.krb5.internal.ccache.CredentialsCache",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MemoryCredentialsCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryCredentialsCache);
	});
	return class$;
}

$Class* MemoryCredentialsCache::class$ = nullptr;

				} // ccache
			} // internal
		} // krb5
	} // security
} // sun
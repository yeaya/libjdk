#include <sun/security/krb5/internal/ccache/FileCredentialsCache$1.h>
#include <sun/security/krb5/internal/ccache/FileCredentialsCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace ccache {

void FileCredentialsCache$1::init$() {
}

$Object* FileCredentialsCache$1::run() {
	$var($String, cache, $System::getenv("KRB5CCNAME"_s));
	bool var$0 = cache != nullptr && (cache->length() >= 5);
	if (var$0 && cache->regionMatches(true, 0, "FILE:"_s, 0, 5)) {
		$assign(cache, cache->substring(5));
	}
	return $of(cache);
}

FileCredentialsCache$1::FileCredentialsCache$1() {
}

$Class* FileCredentialsCache$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileCredentialsCache$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileCredentialsCache$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.krb5.internal.ccache.FileCredentialsCache",
		"getDefaultCacheName",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.internal.ccache.FileCredentialsCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.krb5.internal.ccache.FileCredentialsCache$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.krb5.internal.ccache.FileCredentialsCache"
	};
	$loadClass(FileCredentialsCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileCredentialsCache$1);
	});
	return class$;
}

$Class* FileCredentialsCache$1::class$ = nullptr;

				} // ccache
			} // internal
		} // krb5
	} // security
} // sun
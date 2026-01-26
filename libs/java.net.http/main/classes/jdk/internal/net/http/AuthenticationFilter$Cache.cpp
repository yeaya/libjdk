#include <jdk/internal/net/http/AuthenticationFilter$Cache.h>

#include <java/net/PasswordAuthentication.h>
#include <java/net/URI.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <jdk/internal/net/http/AuthenticationFilter$CacheEntry.h>
#include <jdk/internal/net/http/AuthenticationFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URI = ::java::net::URI;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $AuthenticationFilter$CacheEntry = ::jdk::internal::net::http::AuthenticationFilter$CacheEntry;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _AuthenticationFilter$Cache_FieldInfo_[] = {
	{"entries", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljdk/internal/net/http/AuthenticationFilter$CacheEntry;>;", $FINAL, $field(AuthenticationFilter$Cache, entries)},
	{}
};

$MethodInfo _AuthenticationFilter$Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AuthenticationFilter$Cache, init$, void)},
	{"equalsIgnoreCase", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AuthenticationFilter$Cache, equalsIgnoreCase, bool, $String*, $String*)},
	{"get", "(Ljava/net/URI;Z)Ljdk/internal/net/http/AuthenticationFilter$CacheEntry;", nullptr, $SYNCHRONIZED, $method(AuthenticationFilter$Cache, get, $AuthenticationFilter$CacheEntry*, $URI*, bool)},
	{"remove", "(Ljava/lang/String;Ljava/net/URI;Z)V", nullptr, $SYNCHRONIZED, $method(AuthenticationFilter$Cache, remove, void, $String*, $URI*, bool)},
	{"remove", "(Ljdk/internal/net/http/AuthenticationFilter$CacheEntry;)V", nullptr, $SYNCHRONIZED, $method(AuthenticationFilter$Cache, remove, void, $AuthenticationFilter$CacheEntry*)},
	{"store", "(Ljava/lang/String;Ljava/net/URI;ZLjava/net/PasswordAuthentication;Z)V", nullptr, $SYNCHRONIZED, $method(AuthenticationFilter$Cache, store, void, $String*, $URI*, bool, $PasswordAuthentication*, bool)},
	{}
};

$InnerClassInfo _AuthenticationFilter$Cache_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.AuthenticationFilter$Cache", "jdk.internal.net.http.AuthenticationFilter", "Cache", $STATIC | $FINAL},
	{}
};

$ClassInfo _AuthenticationFilter$Cache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.AuthenticationFilter$Cache",
	"java.lang.Object",
	nullptr,
	_AuthenticationFilter$Cache_FieldInfo_,
	_AuthenticationFilter$Cache_MethodInfo_,
	nullptr,
	nullptr,
	_AuthenticationFilter$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.AuthenticationFilter"
};

$Object* allocate$AuthenticationFilter$Cache($Class* clazz) {
	return $of($alloc(AuthenticationFilter$Cache));
}

void AuthenticationFilter$Cache::init$() {
	$set(this, entries, $new($LinkedList));
}

$AuthenticationFilter$CacheEntry* AuthenticationFilter$Cache::get($URI* uri, bool proxy) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Iterator, i$, $nc(this->entries)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($AuthenticationFilter$CacheEntry, entry, $cast($AuthenticationFilter$CacheEntry, i$->next()));
				{
					if ($nc(entry)->equalsKey(uri, proxy)) {
						return entry;
					}
				}
			}
		}
		return nullptr;
	}
}

bool AuthenticationFilter$Cache::equalsIgnoreCase($String* s1, $String* s2) {
	return s1 == s2 || (s1 != nullptr && s1->equalsIgnoreCase(s2));
}

void AuthenticationFilter$Cache::remove($String* authscheme, $URI* domain, bool proxy) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Iterator, iterator, $nc(this->entries)->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($AuthenticationFilter$CacheEntry, entry, $cast($AuthenticationFilter$CacheEntry, iterator->next()));
			if (equalsIgnoreCase($nc(entry)->scheme, authscheme)) {
				if ($nc(entry)->equalsKey(domain, proxy)) {
					iterator->remove();
				}
			}
		}
	}
}

void AuthenticationFilter$Cache::remove($AuthenticationFilter$CacheEntry* entry) {
	$synchronized(this) {
		$nc(this->entries)->remove($of(entry));
	}
}

void AuthenticationFilter$Cache::store($String* authscheme, $URI* domain, bool proxy, $PasswordAuthentication* value, bool isUTF8) {
	$synchronized(this) {
		remove(authscheme, domain, proxy);
		$nc(this->entries)->add($$new($AuthenticationFilter$CacheEntry, authscheme, domain, proxy, value, isUTF8));
	}
}

AuthenticationFilter$Cache::AuthenticationFilter$Cache() {
}

$Class* AuthenticationFilter$Cache::load$($String* name, bool initialize) {
	$loadClass(AuthenticationFilter$Cache, name, initialize, &_AuthenticationFilter$Cache_ClassInfo_, allocate$AuthenticationFilter$Cache);
	return class$;
}

$Class* AuthenticationFilter$Cache::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
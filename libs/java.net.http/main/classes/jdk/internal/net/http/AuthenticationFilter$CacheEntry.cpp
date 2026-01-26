#include <jdk/internal/net/http/AuthenticationFilter$CacheEntry.h>

#include <java/net/PasswordAuthentication.h>
#include <java/net/URI.h>
#include <jdk/internal/net/http/AuthenticationFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URI = ::java::net::URI;
using $AuthenticationFilter = ::jdk::internal::net::http::AuthenticationFilter;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _AuthenticationFilter$CacheEntry_FieldInfo_[] = {
	{"root", "Ljava/lang/String;", nullptr, $FINAL, $field(AuthenticationFilter$CacheEntry, root)},
	{"scheme", "Ljava/lang/String;", nullptr, $FINAL, $field(AuthenticationFilter$CacheEntry, scheme)},
	{"proxy", "Z", nullptr, $FINAL, $field(AuthenticationFilter$CacheEntry, proxy)},
	{"value", "Ljava/net/PasswordAuthentication;", nullptr, $FINAL, $field(AuthenticationFilter$CacheEntry, value$)},
	{"isUTF8", "Z", nullptr, $FINAL, $field(AuthenticationFilter$CacheEntry, isUTF8)},
	{}
};

$MethodInfo _AuthenticationFilter$CacheEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URI;ZLjava/net/PasswordAuthentication;Z)V", nullptr, 0, $method(AuthenticationFilter$CacheEntry, init$, void, $String*, $URI*, bool, $PasswordAuthentication*, bool)},
	{"equalsKey", "(Ljava/net/URI;Z)Z", nullptr, $PUBLIC, $method(AuthenticationFilter$CacheEntry, equalsKey, bool, $URI*, bool)},
	{"value", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC, $method(AuthenticationFilter$CacheEntry, value, $PasswordAuthentication*)},
	{}
};

$InnerClassInfo _AuthenticationFilter$CacheEntry_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.AuthenticationFilter$CacheEntry", "jdk.internal.net.http.AuthenticationFilter", "CacheEntry", $STATIC | $FINAL},
	{}
};

$ClassInfo _AuthenticationFilter$CacheEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.net.http.AuthenticationFilter$CacheEntry",
	"java.lang.Object",
	nullptr,
	_AuthenticationFilter$CacheEntry_FieldInfo_,
	_AuthenticationFilter$CacheEntry_MethodInfo_,
	nullptr,
	nullptr,
	_AuthenticationFilter$CacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.AuthenticationFilter"
};

$Object* allocate$AuthenticationFilter$CacheEntry($Class* clazz) {
	return $of($alloc(AuthenticationFilter$CacheEntry));
}

void AuthenticationFilter$CacheEntry::init$($String* authscheme, $URI* uri, bool proxy, $PasswordAuthentication* value, bool isUTF8) {
	$set(this, scheme, authscheme);
	$set(this, root, $nc($($AuthenticationFilter::normalize(uri, true)))->toString());
	this->proxy = proxy;
	$set(this, value$, value);
	this->isUTF8 = isUTF8;
}

$PasswordAuthentication* AuthenticationFilter$CacheEntry::value() {
	return this->value$;
}

bool AuthenticationFilter$CacheEntry::equalsKey($URI* uri, bool proxy) {
	$useLocalCurrentObjectStackCache();
	if (this->proxy != proxy) {
		return false;
	}
	$var($String, other, $String::valueOf($($of($AuthenticationFilter::normalize(uri, false)))));
	return other->startsWith(this->root);
}

AuthenticationFilter$CacheEntry::AuthenticationFilter$CacheEntry() {
}

$Class* AuthenticationFilter$CacheEntry::load$($String* name, bool initialize) {
	$loadClass(AuthenticationFilter$CacheEntry, name, initialize, &_AuthenticationFilter$CacheEntry_ClassInfo_, allocate$AuthenticationFilter$CacheEntry);
	return class$;
}

$Class* AuthenticationFilter$CacheEntry::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
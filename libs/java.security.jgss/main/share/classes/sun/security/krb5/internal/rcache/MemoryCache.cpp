#include <sun/security/krb5/internal/rcache/MemoryCache.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <sun/security/krb5/internal/KerberosTime.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <sun/security/krb5/internal/ReplayCache.h>
#include <sun/security/krb5/internal/rcache/AuthList.h>
#include <sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#include <jcpp.h>

#undef DEBUG

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $Iterator = ::java::util::Iterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;
using $KerberosTime = ::sun::security::krb5::internal::KerberosTime;
using $Krb5 = ::sun::security::krb5::internal::Krb5;
using $ReplayCache = ::sun::security::krb5::internal::ReplayCache;
using $AuthList = ::sun::security::krb5::internal::rcache::AuthList;
using $AuthTimeWithHash = ::sun::security::krb5::internal::rcache::AuthTimeWithHash;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace rcache {

class MemoryCache$$Lambda$lambda$checkAndStore$0 : public $Function {
	$class(MemoryCache$$Lambda$lambda$checkAndStore$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		return MemoryCache::lambda$checkAndStore$0($cast($String, k));
	}
};
$Class* MemoryCache$$Lambda$lambda$checkAndStore$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MemoryCache$$Lambda$lambda$checkAndStore$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MemoryCache$$Lambda$lambda$checkAndStore$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.security.krb5.internal.rcache.MemoryCache$$Lambda$lambda$checkAndStore$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(MemoryCache$$Lambda$lambda$checkAndStore$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryCache$$Lambda$lambda$checkAndStore$0);
	});
	return class$;
}
$Class* MemoryCache$$Lambda$lambda$checkAndStore$0::class$ = nullptr;

int32_t MemoryCache::lifespan = 0;
bool MemoryCache::DEBUG = false;

void MemoryCache::init$() {
	$ReplayCache::init$();
	$set(this, content, $cast($AbstractMap, $new($ConcurrentHashMap)));
}

void MemoryCache::checkAndStore($KerberosTime* currTime, $AuthTimeWithHash* time) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($String, key, $str({$nc(time)->client, "|"_s, $nc(time)->server}));
		$$sure($AuthList, this->content->computeIfAbsent(key, $$new(MemoryCache$$Lambda$lambda$checkAndStore$0)))->put(time, currTime);
		if (MemoryCache::DEBUG) {
			$nc($System::out)->println($$str({"MemoryCache: add "_s, time, " to "_s, key}));
		}
	}
}

$String* MemoryCache::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($Iterator, i$, $$nc(this->content->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AuthList, rc, $cast($AuthList, i$->next()));
			{
				sb->append($($nc(rc)->toString()));
			}
		}
	}
	return sb->toString();
}

$AuthList* MemoryCache::lambda$checkAndStore$0($String* k) {
	$init(MemoryCache);
	return $new($AuthList, MemoryCache::lifespan);
}

void MemoryCache::clinit$($Class* clazz) {
	MemoryCache::lifespan = $KerberosTime::getDefaultSkew();
	$init($Krb5);
	MemoryCache::DEBUG = $Krb5::DEBUG;
}

MemoryCache::MemoryCache() {
}

$Class* MemoryCache::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.security.krb5.internal.rcache.MemoryCache$$Lambda$lambda$checkAndStore$0")) {
			return MemoryCache$$Lambda$lambda$checkAndStore$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"lifespan", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryCache, lifespan)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryCache, DEBUG)},
		{"content", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lsun/security/krb5/internal/rcache/AuthList;>;", $PRIVATE | $FINAL, $field(MemoryCache, content)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MemoryCache, init$, void)},
		{"checkAndStore", "(Lsun/security/krb5/internal/KerberosTime;Lsun/security/krb5/internal/rcache/AuthTimeWithHash;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MemoryCache, checkAndStore, void, $KerberosTime*, $AuthTimeWithHash*), "sun.security.krb5.internal.KrbApErrException"},
		{"lambda$checkAndStore$0", "(Ljava/lang/String;)Lsun/security/krb5/internal/rcache/AuthList;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MemoryCache, lambda$checkAndStore$0, $AuthList*, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MemoryCache, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.rcache.MemoryCache",
		"sun.security.krb5.internal.ReplayCache",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryCache, name, initialize, &classInfo$$, MemoryCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryCache);
	});
	return class$;
}

$Class* MemoryCache::class$ = nullptr;

				} // rcache
			} // internal
		} // krb5
	} // security
} // sun
#include <sun/awt/X11/XPropertyCache.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XPropertyCache$PropertyCacheEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $XAtom = ::sun::awt::X11::XAtom;
using $XPropertyCache$PropertyCacheEntry = ::sun::awt::X11::XPropertyCache$PropertyCacheEntry;

namespace sun {
	namespace awt {
		namespace X11 {

$Map* XPropertyCache::windowToMap = nullptr;

void XPropertyCache::init$() {
}

bool XPropertyCache::isCached(int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalObjectStack();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap != nullptr) {
		return entryMap->containsKey(property);
	} else {
		return false;
	}
}

$XPropertyCache$PropertyCacheEntry* XPropertyCache::getCacheEntry(int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalObjectStack();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap != nullptr) {
		return $cast($XPropertyCache$PropertyCacheEntry, entryMap->get(property));
	} else {
		return nullptr;
	}
}

void XPropertyCache::storeCache($XPropertyCache$PropertyCacheEntry* entry, int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalObjectStack();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap == nullptr) {
		$assign(entryMap, $new($HashMap));
		XPropertyCache::windowToMap->put($($Long::valueOf(window)), entryMap);
	}
	$nc(entryMap)->put(property, entry);
}

void XPropertyCache::clearCache(int64_t window) {
	$init(XPropertyCache);
	$nc(XPropertyCache::windowToMap)->remove($($Long::valueOf(window)));
}

void XPropertyCache::clearCache(int64_t window, $XAtom* property) {
	$init(XPropertyCache);
	$useLocalObjectStack();
	$var($Map, entryMap, $cast($Map, $nc(XPropertyCache::windowToMap)->get($($Long::valueOf(window)))));
	if (entryMap != nullptr) {
		entryMap->remove(property);
	}
}

bool XPropertyCache::isCachingSupported() {
	$init(XPropertyCache);
	return false;
}

void XPropertyCache::clinit$($Class* clazz) {
	$assignStatic(XPropertyCache::windowToMap, $new($HashMap));
}

XPropertyCache::XPropertyCache() {
}

$Class* XPropertyCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"windowToMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/util/Map<Lsun/awt/X11/XAtom;Lsun/awt/X11/XPropertyCache$PropertyCacheEntry;>;>;", $PRIVATE | $STATIC, $staticField(XPropertyCache, windowToMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPropertyCache, init$, void)},
		{"clearCache", "(J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XPropertyCache, clearCache, void, int64_t)},
		{"clearCache", "(JLsun/awt/X11/XAtom;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XPropertyCache, clearCache, void, int64_t, $XAtom*)},
		{"getCacheEntry", "(JLsun/awt/X11/XAtom;)Lsun/awt/X11/XPropertyCache$PropertyCacheEntry;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPropertyCache, getCacheEntry, $XPropertyCache$PropertyCacheEntry*, int64_t, $XAtom*)},
		{"isCached", "(JLsun/awt/X11/XAtom;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XPropertyCache, isCached, bool, int64_t, $XAtom*)},
		{"isCachingSupported", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(XPropertyCache, isCachingSupported, bool)},
		{"storeCache", "(Lsun/awt/X11/XPropertyCache$PropertyCacheEntry;JLsun/awt/X11/XAtom;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(XPropertyCache, storeCache, void, $XPropertyCache$PropertyCacheEntry*, int64_t, $XAtom*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XPropertyCache$PropertyCacheEntry", "sun.awt.X11.XPropertyCache", "PropertyCacheEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XPropertyCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.X11.XPropertyCache$PropertyCacheEntry"
	};
	$loadClass(XPropertyCache, name, initialize, &classInfo$$, XPropertyCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XPropertyCache);
	});
	return class$;
}

$Class* XPropertyCache::class$ = nullptr;

		} // X11
	} // awt
} // sun
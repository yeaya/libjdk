#include <sun/java2d/marlin/IntArrayCache$Reference.h>
#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <sun/java2d/marlin/IntArrayCache$Bucket.h>
#include <sun/java2d/marlin/IntArrayCache.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <jcpp.h>

#undef DO_CHECKS
#undef DO_LOG_OVERSIZE
#undef DO_LOG_WIDEN_ARRAY
#undef DO_STATS
#undef MAX_ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst = ::sun::java2d::marlin::ArrayCacheConst;
using $IntArrayCache = ::sun::java2d::marlin::IntArrayCache;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;

namespace sun {
	namespace java2d {
		namespace marlin {

void IntArrayCache$Reference::init$($IntArrayCache* cache, int32_t initialSize) {
	$set(this, cache, cache);
	this->clean = $nc(cache)->clean;
	$set(this, initial, $IntArrayCache::createArray(initialSize));
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		$nc(cache->stats)->totalInitial += initialSize;
	}
}

$ints* IntArrayCache$Reference::getArray(int32_t length) {
	$useLocalObjectStack();
	$init($ArrayCacheConst);
	if (length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		return $$nc($nc(this->cache)->getCacheBucket(length))->getArray();
	}
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->oversize;
	}
	if ($MarlinConst::DO_LOG_OVERSIZE) {
		$MarlinUtils::logInfo($$str({$($IntArrayCache::getLogPrefix(this->clean)), "IntArrayCache: getArray[oversize]: length=\t"_s, $$str(length)}));
	}
	return $IntArrayCache::createArray(length);
}

$ints* IntArrayCache$Reference::widenArray($ints* array, int32_t usedSize, int32_t needSize) {
	$useLocalObjectStack();
	int32_t length = $nc(array)->length;
	$init($MarlinConst);
	if ($MarlinConst::DO_CHECKS && length >= needSize) {
		return array;
	}
	if ($MarlinConst::DO_STATS) {
		++$nc($nc(this->cache)->stats)->resize;
	}
	$var($ints, res, getArray($ArrayCacheConst::getNewSize(usedSize, needSize)));
	$System::arraycopy(array, 0, res, 0, usedSize);
	putArray(array, 0, usedSize);
	if ($MarlinConst::DO_LOG_WIDEN_ARRAY) {
		$MarlinUtils::logInfo($$str({$($IntArrayCache::getLogPrefix(this->clean)), "IntArrayCache: widenArray["_s, $$str($nc(res)->length), "]: usedSize=\t"_s, $$str(usedSize), "\tlength=\t"_s, $$str(length), "\tneeded length=\t"_s, $$str(needSize)}));
	}
	return res;
}

$ints* IntArrayCache$Reference::putArray($ints* array) {
	return putArray(array, 0, $nc(array)->length);
}

$ints* IntArrayCache$Reference::putArray($ints* array, int32_t fromIndex, int32_t toIndex) {
	$init($ArrayCacheConst);
	if ($nc(array)->length <= $ArrayCacheConst::MAX_ARRAY_SIZE) {
		if ((this->clean || false) && (toIndex != 0)) {
			$IntArrayCache::fill(array, fromIndex, toIndex, 0);
		}
		if (array != this->initial) {
			$$nc($nc(this->cache)->getCacheBucket(array->length))->putArray(array);
		}
	}
	return this->initial;
}

IntArrayCache$Reference::IntArrayCache$Reference() {
}

$Class* IntArrayCache$Reference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"initial", "[I", nullptr, $FINAL, $field(IntArrayCache$Reference, initial)},
		{"clean", "Z", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Reference, clean)},
		{"cache", "Lsun/java2d/marlin/IntArrayCache;", nullptr, $PRIVATE | $FINAL, $field(IntArrayCache$Reference, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/marlin/IntArrayCache;I)V", nullptr, 0, $method(IntArrayCache$Reference, init$, void, $IntArrayCache*, int32_t)},
		{"getArray", "(I)[I", nullptr, 0, $method(IntArrayCache$Reference, getArray, $ints*, int32_t)},
		{"putArray", "([I)[I", nullptr, 0, $method(IntArrayCache$Reference, putArray, $ints*, $ints*)},
		{"putArray", "([III)[I", nullptr, 0, $method(IntArrayCache$Reference, putArray, $ints*, $ints*, int32_t, int32_t)},
		{"widenArray", "([III)[I", nullptr, 0, $method(IntArrayCache$Reference, widenArray, $ints*, $ints*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.IntArrayCache$Reference", "sun.java2d.marlin.IntArrayCache", "Reference", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.marlin.IntArrayCache$Reference",
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
		"sun.java2d.marlin.IntArrayCache"
	};
	$loadClass(IntArrayCache$Reference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntArrayCache$Reference);
	});
	return class$;
}

$Class* IntArrayCache$Reference::class$ = nullptr;

		} // marlin
	} // java2d
} // sun
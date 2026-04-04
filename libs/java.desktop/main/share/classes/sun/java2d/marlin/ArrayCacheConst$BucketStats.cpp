#include <sun/java2d/marlin/ArrayCacheConst$BucketStats.h>
#include <sun/java2d/marlin/ArrayCacheConst.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace marlin {

void ArrayCacheConst$BucketStats::init$() {
	this->getOp = 0;
	this->createOp = 0;
	this->returnOp = 0;
	this->maxSize = 0;
}

void ArrayCacheConst$BucketStats::reset() {
	this->getOp = 0;
	this->createOp = 0;
	this->returnOp = 0;
	this->maxSize = 0;
}

void ArrayCacheConst$BucketStats::updateMaxSize(int32_t size) {
	if (size > this->maxSize) {
		this->maxSize = size;
	}
}

ArrayCacheConst$BucketStats::ArrayCacheConst$BucketStats() {
}

$Class* ArrayCacheConst$BucketStats::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"getOp", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, getOp)},
		{"createOp", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, createOp)},
		{"returnOp", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, returnOp)},
		{"maxSize", "I", nullptr, 0, $field(ArrayCacheConst$BucketStats, maxSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ArrayCacheConst$BucketStats, init$, void)},
		{"reset", "()V", nullptr, 0, $method(ArrayCacheConst$BucketStats, reset, void)},
		{"updateMaxSize", "(I)V", nullptr, 0, $method(ArrayCacheConst$BucketStats, updateMaxSize, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.ArrayCacheConst$BucketStats", "sun.java2d.marlin.ArrayCacheConst", "BucketStats", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.marlin.ArrayCacheConst$BucketStats",
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
		"sun.java2d.marlin.ArrayCacheConst"
	};
	$loadClass(ArrayCacheConst$BucketStats, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayCacheConst$BucketStats);
	});
	return class$;
}

$Class* ArrayCacheConst$BucketStats::class$ = nullptr;

		} // marlin
	} // java2d
} // sun
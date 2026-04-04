#include <sun/awt/SoftCache.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/SoftCache$EntrySet.h>
#include <sun/awt/SoftCache$ValueCell.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Set = ::java::util::Set;
using $SoftCache$EntrySet = ::sun::awt::SoftCache$EntrySet;
using $SoftCache$ValueCell = ::sun::awt::SoftCache$ValueCell;

namespace sun {
	namespace awt {

void SoftCache::processQueue() {
	$var($SoftCache$ValueCell, vc, nullptr);
	while (($assign(vc, $cast($SoftCache$ValueCell, $nc(this->queue)->poll()))) != nullptr) {
		if ($nc(vc)->isValid()) {
			$nc(this->hash)->remove(vc->key);
		} else {
			--$SoftCache$ValueCell::dropped;
		}
	}
}

void SoftCache::init$(int32_t initialCapacity, float loadFactor) {
	$AbstractMap::init$();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, entrySet$, nullptr);
	$set(this, hash, $new($HashMap, initialCapacity, loadFactor));
}

void SoftCache::init$(int32_t initialCapacity) {
	$AbstractMap::init$();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, entrySet$, nullptr);
	$set(this, hash, $new($HashMap, initialCapacity));
}

void SoftCache::init$() {
	$AbstractMap::init$();
	$set(this, queue, $new($ReferenceQueue));
	$set(this, entrySet$, nullptr);
	$set(this, hash, $new($HashMap));
}

int32_t SoftCache::size() {
	return $$nc(entrySet())->size();
}

bool SoftCache::isEmpty() {
	return $$nc(entrySet())->isEmpty();
}

bool SoftCache::containsKey(Object$* key) {
	return $SoftCache$ValueCell::strip($($nc(this->hash)->get(key)), false) != nullptr;
}

$Object* SoftCache::fill(Object$* key) {
	return nullptr;
}

$Object* SoftCache::get(Object$* key) {
	$useLocalObjectStack();
	processQueue();
	$var($Object, v, $nc(this->hash)->get(key));
	if (v == nullptr) {
		$assign(v, fill(key));
		if (v != nullptr) {
			$nc(this->hash)->put(key, $($SoftCache$ValueCell::create(key, v, this->queue)));
			return v;
		}
	}
	return $SoftCache$ValueCell::strip(v, false);
}

$Object* SoftCache::put(Object$* key, Object$* value) {
	$useLocalObjectStack();
	processQueue();
	$var($SoftCache$ValueCell, vc, $SoftCache$ValueCell::create(key, value, this->queue));
	return $SoftCache$ValueCell::strip($($nc(this->hash)->put(key, vc)), true);
}

$Object* SoftCache::remove(Object$* key) {
	processQueue();
	return $SoftCache$ValueCell::strip($($nc(this->hash)->remove(key)), true);
}

void SoftCache::clear() {
	processQueue();
	$nc(this->hash)->clear();
}

bool SoftCache::valEquals(Object$* o1, Object$* o2) {
	$init(SoftCache);
	return (o1 == nullptr) ? (o2 == nullptr) : $of(o1)->equals(o2);
}

$Set* SoftCache::entrySet() {
	if (this->entrySet$ == nullptr) {
		$set(this, entrySet$, $new($SoftCache$EntrySet, this));
	}
	return this->entrySet$;
}

SoftCache::SoftCache() {
}

$Class* SoftCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(SoftCache, hash)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $PRIVATE, $field(SoftCache, queue)},
		{"entrySet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PRIVATE, $field(SoftCache, entrySet$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IF)V", nullptr, $PUBLIC, $method(SoftCache, init$, void, int32_t, float)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(SoftCache, init$, void, int32_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SoftCache, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(SoftCache, clear, void)},
		{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SoftCache, containsKey, bool, Object$*)},
		{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(SoftCache, entrySet, $Set*)},
		{"fill", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(SoftCache, fill, $Object*, Object$*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SoftCache, get, $Object*, Object$*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(SoftCache, isEmpty, bool)},
		{"processQueue", "()V", nullptr, $PRIVATE, $method(SoftCache, processQueue, void)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SoftCache, put, $Object*, Object$*, Object$*)},
		{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SoftCache, remove, $Object*, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SoftCache, size, int32_t)},
		{"valEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SoftCache, valEquals, bool, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SoftCache$EntrySet", "sun.awt.SoftCache", "EntrySet", $PRIVATE},
		{"sun.awt.SoftCache$Entry", "sun.awt.SoftCache", "Entry", $PRIVATE},
		{"sun.awt.SoftCache$ValueCell", "sun.awt.SoftCache", "ValueCell", $PRIVATE | $STATIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.SoftCache",
		"java.util.AbstractMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractMap<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"sun.awt.SoftCache$EntrySet,sun.awt.SoftCache$EntrySet$1,sun.awt.SoftCache$Entry,sun.awt.SoftCache$ValueCell"
	};
	$loadClass(SoftCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftCache);
	});
	return class$;
}

$Class* SoftCache::class$ = nullptr;

	} // awt
} // sun
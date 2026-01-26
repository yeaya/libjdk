#include <java/awt/datatransfer/SystemFlavorMap$SoftCache.h>

#include <java/awt/datatransfer/SystemFlavorMap.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _SystemFlavorMap$SoftCache_FieldInfo_[] = {
	{"cache", "Ljava/util/Map;", "Ljava/util/Map<TK;Ljava/lang/ref/SoftReference<Ljava/util/LinkedHashSet<TV;>;>;>;", 0, $field(SystemFlavorMap$SoftCache, cache)},
	{}
};

$MethodInfo _SystemFlavorMap$SoftCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SystemFlavorMap$SoftCache, init$, void)},
	{"check", "(Ljava/lang/Object;)Ljava/util/LinkedHashSet;", "(TK;)Ljava/util/LinkedHashSet<TV;>;", $PUBLIC, $method(SystemFlavorMap$SoftCache, check, $LinkedHashSet*, Object$*)},
	{"put", "(Ljava/lang/Object;Ljava/util/LinkedHashSet;)V", "(TK;Ljava/util/LinkedHashSet<TV;>;)V", $PUBLIC, $method(SystemFlavorMap$SoftCache, put, void, Object$*, $LinkedHashSet*)},
	{"remove", "(Ljava/lang/Object;)V", "(TK;)V", $PUBLIC, $method(SystemFlavorMap$SoftCache, remove, void, Object$*)},
	{}
};

$InnerClassInfo _SystemFlavorMap$SoftCache_InnerClassesInfo_[] = {
	{"java.awt.datatransfer.SystemFlavorMap$SoftCache", "java.awt.datatransfer.SystemFlavorMap", "SoftCache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SystemFlavorMap$SoftCache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.awt.datatransfer.SystemFlavorMap$SoftCache",
	"java.lang.Object",
	nullptr,
	_SystemFlavorMap$SoftCache_FieldInfo_,
	_SystemFlavorMap$SoftCache_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_SystemFlavorMap$SoftCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.datatransfer.SystemFlavorMap"
};

$Object* allocate$SystemFlavorMap$SoftCache($Class* clazz) {
	return $of($alloc(SystemFlavorMap$SoftCache));
}

void SystemFlavorMap$SoftCache::init$() {
}

void SystemFlavorMap$SoftCache::put(Object$* key, $LinkedHashSet* value) {
	if (this->cache == nullptr) {
		$set(this, cache, $new($HashMap, 1));
	}
	$nc(this->cache)->put(key, $$new($SoftReference, value));
}

void SystemFlavorMap$SoftCache::remove(Object$* key) {
	if (this->cache == nullptr) {
		return;
	}
	$nc(this->cache)->remove(nullptr);
	$nc(this->cache)->remove(key);
}

$LinkedHashSet* SystemFlavorMap$SoftCache::check(Object$* key) {
	if (this->cache == nullptr) {
		return nullptr;
	}
	$var($SoftReference, ref, $cast($SoftReference, $nc(this->cache)->get(key)));
	if (ref != nullptr) {
		return $cast($LinkedHashSet, ref->get());
	}
	return nullptr;
}

SystemFlavorMap$SoftCache::SystemFlavorMap$SoftCache() {
}

$Class* SystemFlavorMap$SoftCache::load$($String* name, bool initialize) {
	$loadClass(SystemFlavorMap$SoftCache, name, initialize, &_SystemFlavorMap$SoftCache_ClassInfo_, allocate$SystemFlavorMap$SoftCache);
	return class$;
}

$Class* SystemFlavorMap$SoftCache::class$ = nullptr;

		} // datatransfer
	} // awt
} // java
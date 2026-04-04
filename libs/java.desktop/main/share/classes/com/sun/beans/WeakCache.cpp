#include <com/sun/beans/WeakCache.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace beans {

void WeakCache::init$() {
	$set(this, map, $new($WeakHashMap));
}

$Object* WeakCache::get(Object$* key) {
	$useLocalObjectStack();
	$var($Reference, reference, $cast($Reference, $nc(this->map)->get(key)));
	if (reference == nullptr) {
		return nullptr;
	}
	$var($Object, value, $nc(reference)->get());
	if (value == nullptr) {
		this->map->remove(key);
	}
	return value;
}

void WeakCache::put(Object$* key, Object$* value) {
	if (value != nullptr) {
		$nc(this->map)->put(key, $$new($WeakReference, value));
	} else {
		$nc(this->map)->remove(key);
	}
}

void WeakCache::clear() {
	$nc(this->map)->clear();
}

WeakCache::WeakCache() {
}

$Class* WeakCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<TK;Ljava/lang/ref/Reference<TV;>;>;", $PRIVATE | $FINAL, $field(WeakCache, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WeakCache, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $method(WeakCache, clear, void)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC, $method(WeakCache, get, $Object*, Object$*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC, $method(WeakCache, put, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.WeakCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(WeakCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakCache);
	});
	return class$;
}

$Class* WeakCache::class$ = nullptr;

		} // beans
	} // sun
} // com
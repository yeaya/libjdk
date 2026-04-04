#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap$IdentityWeakReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Util = ::com::sun::jmx::mbeanserver::Util;
using $WeakIdentityHashMap$IdentityWeakReference = ::com::sun::jmx::mbeanserver::WeakIdentityHashMap$IdentityWeakReference;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void WeakIdentityHashMap::init$() {
	$set(this, map, $Util::newMap());
	$set(this, refQueue, $new($ReferenceQueue));
}

WeakIdentityHashMap* WeakIdentityHashMap::make() {
	return $new(WeakIdentityHashMap);
}

$Object* WeakIdentityHashMap::get(Object$* key) {
	expunge();
	$var($WeakReference, keyref, makeReference(key));
	return $nc(this->map)->get(keyref);
}

$Object* WeakIdentityHashMap::put(Object$* key, Object$* value) {
	expunge();
	if (key == nullptr) {
		$throwNew($IllegalArgumentException, "Null key"_s);
	}
	$var($WeakReference, keyref, makeReference(key, this->refQueue));
	return $nc(this->map)->put(keyref, value);
}

$Object* WeakIdentityHashMap::remove(Object$* key) {
	expunge();
	$var($WeakReference, keyref, makeReference(key));
	return $nc(this->map)->remove(keyref);
}

void WeakIdentityHashMap::expunge() {
	$var($Reference, ref, nullptr);
	while (($assign(ref, $nc(this->refQueue)->poll())) != nullptr) {
		$nc(this->map)->remove(ref);
	}
}

$WeakReference* WeakIdentityHashMap::makeReference(Object$* referent) {
	return $new($WeakIdentityHashMap$IdentityWeakReference, referent);
}

$WeakReference* WeakIdentityHashMap::makeReference(Object$* referent, $ReferenceQueue* q) {
	return $new($WeakIdentityHashMap$IdentityWeakReference, referent, q);
}

WeakIdentityHashMap::WeakIdentityHashMap() {
}

$Class* WeakIdentityHashMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ref/WeakReference<TK;>;TV;>;", $PRIVATE, $field(WeakIdentityHashMap, map)},
		{"refQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TK;>;", $PRIVATE, $field(WeakIdentityHashMap, refQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WeakIdentityHashMap, init$, void)},
		{"expunge", "()V", nullptr, $PRIVATE, $method(WeakIdentityHashMap, expunge, void)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", 0, $virtualMethod(WeakIdentityHashMap, get, $Object*, Object$*)},
		{"make", "()Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap<TK;TV;>;", $STATIC, $staticMethod(WeakIdentityHashMap, make, WeakIdentityHashMap*)},
		{"makeReference", "(Ljava/lang/Object;)Ljava/lang/ref/WeakReference;", "(TK;)Ljava/lang/ref/WeakReference<TK;>;", $PRIVATE, $method(WeakIdentityHashMap, makeReference, $WeakReference*, Object$*)},
		{"makeReference", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Ljava/lang/ref/WeakReference;", "(TK;Ljava/lang/ref/ReferenceQueue<TK;>;)Ljava/lang/ref/WeakReference<TK;>;", $PRIVATE, $method(WeakIdentityHashMap, makeReference, $WeakReference*, Object$*, $ReferenceQueue*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC, $virtualMethod(WeakIdentityHashMap, put, $Object*, Object$*, Object$*)},
		{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC, $virtualMethod(WeakIdentityHashMap, remove, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference", "com.sun.jmx.mbeanserver.WeakIdentityHashMap", "IdentityWeakReference", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.WeakIdentityHashMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference"
	};
	$loadClass(WeakIdentityHashMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakIdentityHashMap);
	});
	return class$;
}

$Class* WeakIdentityHashMap::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
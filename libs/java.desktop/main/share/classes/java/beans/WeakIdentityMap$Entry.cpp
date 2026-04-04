#include <java/beans/WeakIdentityMap$Entry.h>
#include <java/beans/WeakIdentityMap.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace beans {

void WeakIdentityMap$Entry::init$(Object$* key, int32_t hash, Object$* value, $ReferenceQueue* queue, WeakIdentityMap$Entry* next) {
	$WeakReference::init$(key, queue);
	this->hash = hash;
	$set(this, value, value);
	$set(this, next, next);
}

bool WeakIdentityMap$Entry::isMatched(Object$* key, int32_t hash) {
	return (this->hash == hash) && ($equals(key, get()));
}

WeakIdentityMap$Entry::WeakIdentityMap$Entry() {
}

$Class* WeakIdentityMap$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(WeakIdentityMap$Entry, hash)},
		{"value", "Ljava/lang/Object;", "TT;", $PRIVATE | $VOLATILE, $field(WeakIdentityMap$Entry, value)},
		{"next", "Ljava/beans/WeakIdentityMap$Entry;", "Ljava/beans/WeakIdentityMap$Entry<TT;>;", $PRIVATE | $VOLATILE, $field(WeakIdentityMap$Entry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/ref/ReferenceQueue;Ljava/beans/WeakIdentityMap$Entry;)V", "(Ljava/lang/Object;ITT;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;Ljava/beans/WeakIdentityMap$Entry<TT;>;)V", 0, $method(WeakIdentityMap$Entry, init$, void, Object$*, int32_t, Object$*, $ReferenceQueue*, WeakIdentityMap$Entry*)},
		{"isMatched", "(Ljava/lang/Object;I)Z", nullptr, 0, $virtualMethod(WeakIdentityMap$Entry, isMatched, bool, Object$*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.WeakIdentityMap$Entry", "java.beans.WeakIdentityMap", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.WeakIdentityMap$Entry",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.WeakIdentityMap"
	};
	$loadClass(WeakIdentityMap$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakIdentityMap$Entry);
	});
	return class$;
}

$Class* WeakIdentityMap$Entry::class$ = nullptr;

	} // beans
} // java
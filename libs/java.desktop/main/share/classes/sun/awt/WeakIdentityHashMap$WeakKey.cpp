#include <sun/awt/WeakIdentityHashMap$WeakKey.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace sun {
	namespace awt {

void WeakIdentityHashMap$WeakKey::init$(Object$* key, $ReferenceQueue* q) {
	$WeakReference::init$(key, q);
	this->hash = $System::identityHashCode(key);
}

bool WeakIdentityHashMap$WeakKey::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	} else if ($instanceOf(WeakIdentityHashMap$WeakKey, o)) {
		return $equals(get(), $cast(WeakIdentityHashMap$WeakKey, o)->get());
	} else {
		return false;
	}
}

int32_t WeakIdentityHashMap$WeakKey::hashCode() {
	return this->hash;
}

WeakIdentityHashMap$WeakKey::WeakIdentityHashMap$WeakKey() {
}

$Class* WeakIdentityHashMap$WeakKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(WeakIdentityHashMap$WeakKey, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK;Ljava/lang/ref/ReferenceQueue<TK;>;)V", 0, $method(WeakIdentityHashMap$WeakKey, init$, void, Object$*, $ReferenceQueue*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(WeakIdentityHashMap$WeakKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(WeakIdentityHashMap$WeakKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.WeakIdentityHashMap$WeakKey", "sun.awt.WeakIdentityHashMap", "WeakKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.WeakIdentityHashMap$WeakKey",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TK;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.WeakIdentityHashMap"
	};
	$loadClass(WeakIdentityHashMap$WeakKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakIdentityHashMap$WeakKey);
	});
	return class$;
}

$Class* WeakIdentityHashMap$WeakKey::class$ = nullptr;

	} // awt
} // sun
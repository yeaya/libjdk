#include <sun/awt/WeakIdentityHashMap$2$1.h>
#include <java/util/Iterator.h>
#include <sun/awt/WeakIdentityHashMap$2$1$1.h>
#include <sun/awt/WeakIdentityHashMap$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $WeakIdentityHashMap$2 = ::sun::awt::WeakIdentityHashMap$2;
using $WeakIdentityHashMap$2$1$1 = ::sun::awt::WeakIdentityHashMap$2$1$1;

namespace sun {
	namespace awt {

void WeakIdentityHashMap$2$1::init$($WeakIdentityHashMap$2* this$1, $Iterator* val$iterator) {
	$set(this, this$1, this$1);
	$set(this, val$iterator, val$iterator);
}

bool WeakIdentityHashMap$2$1::hasNext() {
	return $nc(this->val$iterator)->hasNext();
}

$Object* WeakIdentityHashMap$2$1::next() {
	return $new($WeakIdentityHashMap$2$1$1, this);
}

WeakIdentityHashMap$2$1::WeakIdentityHashMap$2$1() {
}

$Class* WeakIdentityHashMap$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/WeakIdentityHashMap$2;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2$1, this$1)},
		{"val$iterator", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2$1, val$iterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/WeakIdentityHashMap$2;Ljava/util/Iterator;)V", "()V", 0, $method(WeakIdentityHashMap$2$1, init$, void, $WeakIdentityHashMap$2*, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(WeakIdentityHashMap$2$1, hasNext, bool)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC, $virtualMethod(WeakIdentityHashMap$2$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.WeakIdentityHashMap$2",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.WeakIdentityHashMap$2", nullptr, nullptr, 0},
		{"sun.awt.WeakIdentityHashMap$2$1", nullptr, nullptr, 0},
		{"sun.awt.WeakIdentityHashMap$2$1$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.WeakIdentityHashMap$2$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.WeakIdentityHashMap"
	};
	$loadClass(WeakIdentityHashMap$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakIdentityHashMap$2$1);
	});
	return class$;
}

$Class* WeakIdentityHashMap$2$1::class$ = nullptr;

	} // awt
} // sun
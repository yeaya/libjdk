#include <sun/awt/WeakIdentityHashMap$1.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$1$1.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $WeakIdentityHashMap = ::sun::awt::WeakIdentityHashMap;
using $WeakIdentityHashMap$1$1 = ::sun::awt::WeakIdentityHashMap$1$1;

namespace sun {
	namespace awt {

void WeakIdentityHashMap$1::init$($WeakIdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* WeakIdentityHashMap$1::iterator() {
	return $new($WeakIdentityHashMap$1$1, this);
}

int32_t WeakIdentityHashMap$1::size() {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getMap())->keySet())->size();
}

WeakIdentityHashMap$1::WeakIdentityHashMap$1() {
}

$Class* WeakIdentityHashMap$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/WeakIdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/WeakIdentityHashMap;)V", nullptr, 0, $method(WeakIdentityHashMap$1, init$, void, $WeakIdentityHashMap*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC, $virtualMethod(WeakIdentityHashMap$1, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(WeakIdentityHashMap$1, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.WeakIdentityHashMap",
		"keySet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.WeakIdentityHashMap$1", nullptr, nullptr, 0},
		{"sun.awt.WeakIdentityHashMap$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.WeakIdentityHashMap$1",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<TK;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.WeakIdentityHashMap"
	};
	$loadClass(WeakIdentityHashMap$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WeakIdentityHashMap$1));
	});
	return class$;
}

$Class* WeakIdentityHashMap$1::class$ = nullptr;

	} // awt
} // sun
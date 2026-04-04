#include <sun/awt/WeakIdentityHashMap$2.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$2$1.h>
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
using $WeakIdentityHashMap$2$1 = ::sun::awt::WeakIdentityHashMap$2$1;

namespace sun {
	namespace awt {

void WeakIdentityHashMap$2::init$($WeakIdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* WeakIdentityHashMap$2::iterator() {
	$useLocalObjectStack();
	$var($Iterator, iterator, $$nc($$nc(this->this$0->getMap())->entrySet())->iterator());
	return $new($WeakIdentityHashMap$2$1, this, iterator);
}

int32_t WeakIdentityHashMap$2::size() {
	$useLocalObjectStack();
	return $$nc($$nc(this->this$0->getMap())->entrySet())->size();
}

WeakIdentityHashMap$2::WeakIdentityHashMap$2() {
}

$Class* WeakIdentityHashMap$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/WeakIdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/WeakIdentityHashMap;)V", nullptr, 0, $method(WeakIdentityHashMap$2, init$, void, $WeakIdentityHashMap*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC, $virtualMethod(WeakIdentityHashMap$2, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(WeakIdentityHashMap$2, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.WeakIdentityHashMap",
		"entrySet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.WeakIdentityHashMap$2", nullptr, nullptr, 0},
		{"sun.awt.WeakIdentityHashMap$2$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.WeakIdentityHashMap$2",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.WeakIdentityHashMap"
	};
	$loadClass(WeakIdentityHashMap$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WeakIdentityHashMap$2));
	});
	return class$;
}

$Class* WeakIdentityHashMap$2::class$ = nullptr;

	} // awt
} // sun
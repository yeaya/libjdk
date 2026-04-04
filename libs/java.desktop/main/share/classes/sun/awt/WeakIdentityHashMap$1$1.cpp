#include <sun/awt/WeakIdentityHashMap$1$1.h>
#include <java/lang/ref/Reference.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$1.h>
#include <sun/awt/WeakIdentityHashMap$WeakKey.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $WeakIdentityHashMap$1 = ::sun::awt::WeakIdentityHashMap$1;
using $WeakIdentityHashMap$WeakKey = ::sun::awt::WeakIdentityHashMap$WeakKey;

namespace sun {
	namespace awt {

void WeakIdentityHashMap$1$1::init$($WeakIdentityHashMap$1* this$1) {
	$useLocalObjectStack();
	$set(this, this$1, this$1);
	$set(this, iterator, $$nc($$nc($nc(this->this$1->this$0)->getMap())->keySet())->iterator());
}

bool WeakIdentityHashMap$1$1::hasNext() {
	$useLocalObjectStack();
	while ($nc(this->iterator)->hasNext()) {
		if (($set(this, next$, $$sure($WeakIdentityHashMap$WeakKey, this->iterator->next())->get())) != nullptr) {
			return true;
		}
	}
	return false;
}

$Object* WeakIdentityHashMap$1$1::next() {
	if (this->next$ == nullptr && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, ret, this->next$);
	$set(this, next$, nullptr);
	return ret;
}

WeakIdentityHashMap$1$1::WeakIdentityHashMap$1$1() {
}

$Class* WeakIdentityHashMap$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/awt/WeakIdentityHashMap$1;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$1$1, this$1)},
		{"next", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(WeakIdentityHashMap$1$1, next$)},
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lsun/awt/WeakIdentityHashMap$WeakKey<TK;>;>;", 0, $field(WeakIdentityHashMap$1$1, iterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/WeakIdentityHashMap$1;)V", nullptr, 0, $method(WeakIdentityHashMap$1$1, init$, void, $WeakIdentityHashMap$1*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(WeakIdentityHashMap$1$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(WeakIdentityHashMap$1$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.WeakIdentityHashMap$1",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.WeakIdentityHashMap$1", nullptr, nullptr, 0},
		{"sun.awt.WeakIdentityHashMap$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.WeakIdentityHashMap$1$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TK;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.WeakIdentityHashMap"
	};
	$loadClass(WeakIdentityHashMap$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakIdentityHashMap$1$1);
	});
	return class$;
}

$Class* WeakIdentityHashMap$1$1::class$ = nullptr;

	} // awt
} // sun
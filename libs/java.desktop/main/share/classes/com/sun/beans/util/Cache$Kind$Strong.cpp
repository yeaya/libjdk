#include <com/sun/beans/util/Cache$Kind$Strong.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

void Cache$Kind$Strong::init$(Object$* owner, Object$* referent) {
	$set(this, owner, owner);
	$set(this, referent, referent);
}

$Object* Cache$Kind$Strong::getOwner() {
	return this->owner;
}

$Object* Cache$Kind$Strong::getReferent() {
	return this->referent;
}

bool Cache$Kind$Strong::isStale() {
	return false;
}

void Cache$Kind$Strong::removeOwner() {
	$set(this, owner, nullptr);
}

Cache$Kind$Strong::Cache$Kind$Strong() {
}

$Class* Cache$Kind$Strong::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Cache$Kind$Strong, owner)},
		{"referent", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Cache$Kind$Strong, referent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/Object;TT;)V", $PRIVATE, $method(Cache$Kind$Strong, init$, void, Object$*, Object$*)},
		{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Cache$Kind$Strong, getOwner, $Object*)},
		{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Cache$Kind$Strong, getReferent, $Object*)},
		{"isStale", "()Z", nullptr, $PUBLIC, $virtualMethod(Cache$Kind$Strong, isStale, bool)},
		{"removeOwner", "()V", nullptr, $PUBLIC, $virtualMethod(Cache$Kind$Strong, removeOwner, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.beans.util.Cache$Kind$Strong", "com.sun.beans.util.Cache$Kind", "Strong", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.util.Cache$Kind$Strong",
		"java.lang.Object",
		"com.sun.beans.util.Cache$Ref",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/beans/util/Cache$Ref<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.util.Cache"
	};
	$loadClass(Cache$Kind$Strong, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cache$Kind$Strong);
	});
	return class$;
}

$Class* Cache$Kind$Strong::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com
#include <com/sun/beans/util/Cache$Ref.h>
#include <com/sun/beans/util/Cache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$Class* Cache$Ref::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache$Ref, getOwner, $Object*)},
		{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Cache$Ref, getReferent, $Object*)},
		{"isStale", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache$Ref, isStale, bool)},
		{"removeOwner", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Cache$Ref, removeOwner, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.beans.util.Cache$Ref",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.util.Cache"
	};
	$loadClass(Cache$Ref, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cache$Ref);
	});
	return class$;
}

$Class* Cache$Ref::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com
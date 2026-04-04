#include <com/sun/beans/introspect/ClassInfo$1.h>
#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <jcpp.h>

using $ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $1ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

void ClassInfo$1::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$ClassInfo* ClassInfo$1::create($Class* type) {
	return $new($ClassInfo, type);
}

$Object* ClassInfo$1::create(Object$* type) {
	return this->create($cast($Class, type));
}

ClassInfo$1::ClassInfo$1() {
}

$Class* ClassInfo$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(ClassInfo$1, init$, void, $Cache$Kind*, $Cache$Kind*)},
		{"create", "(Ljava/lang/Class;)Lcom/sun/beans/introspect/ClassInfo;", "(Ljava/lang/Class<*>;)Lcom/sun/beans/introspect/ClassInfo;", $PUBLIC, $virtualMethod(ClassInfo$1, create, $ClassInfo*, $Class*)},
		{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ClassInfo$1, create, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.beans.introspect.ClassInfo",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.introspect.ClassInfo$1", nullptr, nullptr, 0},
		{}
	};
	$1ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.beans.introspect.ClassInfo$1",
		"com.sun.beans.util.Cache",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/beans/util/Cache<Ljava/lang/Class<*>;Lcom/sun/beans/introspect/ClassInfo;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.introspect.ClassInfo"
	};
	$loadClass(ClassInfo$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassInfo$1);
	});
	return class$;
}

$Class* ClassInfo$1::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com
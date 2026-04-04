#include <com/sun/beans/util/Cache$Kind$3.h>
#include <com/sun/beans/util/Cache$Kind$Strong.h>
#include <com/sun/beans/util/Cache$Kind$Weak.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Kind$Strong = ::com::sun::beans::util::Cache$Kind$Strong;
using $Cache$Kind$Weak = ::com::sun::beans::util::Cache$Kind$Weak;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

void Cache$Kind$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Cache$Kind::init$($enum$name, $enum$ordinal);
}

$Cache$Ref* Cache$Kind$3::create(Object$* owner, Object$* referent, $ReferenceQueue* queue) {
	return (referent == nullptr) ? $cast($Cache$Ref, $new($Cache$Kind$Strong, owner, referent)) : $cast($Cache$Ref, $new($Cache$Kind$Weak, owner, referent, queue));
}

Cache$Kind$3::Cache$Kind$3() {
}

$Class* Cache$Kind$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Cache$Kind$3, init$, void, $String*, int32_t)},
		{"create", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Lcom/sun/beans/util/Cache$Ref;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)Lcom/sun/beans/util/Cache$Ref<TT;>;", 0, $virtualMethod(Cache$Kind$3, create, $Cache$Ref*, Object$*, Object$*, $ReferenceQueue*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.beans.util.Cache$Kind",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.beans.util.Cache$Kind$3", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.beans.util.Cache$Kind$3",
		"com.sun.beans.util.Cache$Kind",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.util.Cache"
	};
	$loadClass(Cache$Kind$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Cache$Kind$3));
	});
	return class$;
}

$Class* Cache$Kind$3::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com
#include <sun/java2d/ReentrantContextProvider$HardReference.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace sun {
	namespace java2d {

void ReentrantContextProvider$HardReference::init$(Object$* referent) {
	$WeakReference::init$(nullptr);
	$set(this, strongRef, referent);
}

$Object* ReentrantContextProvider$HardReference::get() {
	return this->strongRef;
}

ReentrantContextProvider$HardReference::ReentrantContextProvider$HardReference() {
}

$Class* ReentrantContextProvider$HardReference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"strongRef", "Ljava/lang/Object;", "TV;", $PRIVATE | $FINAL, $field(ReentrantContextProvider$HardReference, strongRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TV;)V", 0, $method(ReentrantContextProvider$HardReference, init$, void, Object$*)},
		{"get", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(ReentrantContextProvider$HardReference, get, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.ReentrantContextProvider$HardReference", "sun.java2d.ReentrantContextProvider", "HardReference", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.ReentrantContextProvider$HardReference",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.ReentrantContextProvider"
	};
	$loadClass(ReentrantContextProvider$HardReference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReentrantContextProvider$HardReference);
	});
	return class$;
}

$Class* ReentrantContextProvider$HardReference::class$ = nullptr;

	} // java2d
} // sun
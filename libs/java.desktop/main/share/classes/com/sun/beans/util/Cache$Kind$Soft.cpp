#include <com/sun/beans/util/Cache$Kind$Soft.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$Object* Cache$Kind$Soft::clone() {
	return this->$SoftReference::clone();
}

int32_t Cache$Kind$Soft::hashCode() {
	return this->$SoftReference::hashCode();
}

bool Cache$Kind$Soft::equals(Object$* arg0) {
	return this->$SoftReference::equals(arg0);
}

$String* Cache$Kind$Soft::toString() {
	return this->$SoftReference::toString();
}

void Cache$Kind$Soft::finalize() {
	this->$SoftReference::finalize();
}

void Cache$Kind$Soft::init$(Object$* owner, Object$* referent, $ReferenceQueue* queue) {
	$SoftReference::init$(referent, queue);
	$set(this, owner, owner);
}

$Object* Cache$Kind$Soft::getOwner() {
	return this->owner;
}

$Object* Cache$Kind$Soft::getReferent() {
	return get();
}

bool Cache$Kind$Soft::isStale() {
	return nullptr == get();
}

void Cache$Kind$Soft::removeOwner() {
	$set(this, owner, nullptr);
}

Cache$Kind$Soft::Cache$Kind$Soft() {
}

$Class* Cache$Kind$Soft::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Cache$Kind$Soft, owner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PRIVATE, $method(Cache$Kind$Soft, init$, void, Object$*, Object$*, $ReferenceQueue*)},
		{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Cache$Kind$Soft, getOwner, $Object*)},
		{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Cache$Kind$Soft, getReferent, $Object*)},
		{"isStale", "()Z", nullptr, $PUBLIC, $virtualMethod(Cache$Kind$Soft, isStale, bool)},
		{"removeOwner", "()V", nullptr, $PUBLIC, $virtualMethod(Cache$Kind$Soft, removeOwner, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.beans.util.Cache$Kind$Soft", "com.sun.beans.util.Cache$Kind", "Soft", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.util.Cache$Kind$Soft",
		"java.lang.ref.SoftReference",
		"com.sun.beans.util.Cache$Ref",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/SoftReference<TT;>;Lcom/sun/beans/util/Cache$Ref<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.util.Cache"
	};
	$loadClass(Cache$Kind$Soft, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Cache$Kind$Soft));
	});
	return class$;
}

$Class* Cache$Kind$Soft::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com
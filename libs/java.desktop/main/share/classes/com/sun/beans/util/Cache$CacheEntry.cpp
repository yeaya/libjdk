#include <com/sun/beans/util/Cache$CacheEntry.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $Cache = ::com::sun::beans::util::Cache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

void Cache$CacheEntry::init$($Cache* this$0, int32_t hash, Object$* key, Object$* value, Cache$CacheEntry* next) {
	$set(this, this$0, this$0);
	this->hash = hash;
	$set(this, key, this$0->keyKind->create(this, key, this$0->queue));
	$set(this, value, this$0->valueKind->create(this, value, this$0->queue));
	$set(this, next, next);
}

bool Cache$CacheEntry::matches(int32_t hash, Object$* object) {
	if (this->hash != hash) {
		return false;
	}
	$var($Object, key, $nc(this->key)->getReferent());
	return ($equals(key, object)) || !this->this$0->identity && (key != nullptr) && key->equals(object);
}

void Cache$CacheEntry::unlink() {
	$set(this, next, nullptr);
	$nc(this->key)->removeOwner();
	$nc(this->value)->removeOwner();
	--this->this$0->size;
}

Cache$CacheEntry::Cache$CacheEntry() {
}

$Class* Cache$CacheEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/beans/util/Cache;", nullptr, $FINAL | $SYNTHETIC, $field(Cache$CacheEntry, this$0)},
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(Cache$CacheEntry, hash)},
		{"key", "Lcom/sun/beans/util/Cache$Ref;", "Lcom/sun/beans/util/Cache$Ref<TK;>;", $PRIVATE | $FINAL, $field(Cache$CacheEntry, key)},
		{"value", "Lcom/sun/beans/util/Cache$Ref;", "Lcom/sun/beans/util/Cache$Ref<TV;>;", $PRIVATE | $FINAL, $field(Cache$CacheEntry, value)},
		{"next", "Lcom/sun/beans/util/Cache$CacheEntry;", "Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;", $PRIVATE | $VOLATILE, $field(Cache$CacheEntry, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/beans/util/Cache;ILjava/lang/Object;Ljava/lang/Object;Lcom/sun/beans/util/Cache$CacheEntry;)V", "(ITK;TV;Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;)V", $PRIVATE, $method(Cache$CacheEntry, init$, void, $Cache*, int32_t, Object$*, Object$*, Cache$CacheEntry*)},
		{"matches", "(ILjava/lang/Object;)Z", nullptr, $PRIVATE, $method(Cache$CacheEntry, matches, bool, int32_t, Object$*)},
		{"unlink", "()V", nullptr, $PRIVATE, $method(Cache$CacheEntry, unlink, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.util.Cache$CacheEntry", "com.sun.beans.util.Cache", "CacheEntry", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.util.Cache$CacheEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.util.Cache"
	};
	$loadClass(Cache$CacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cache$CacheEntry);
	});
	return class$;
}

$Class* Cache$CacheEntry::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com
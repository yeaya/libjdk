#include <sun/awt/SoftCache$Entry.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Map$Entry.h>
#include <sun/awt/SoftCache$ValueCell.h>
#include <sun/awt/SoftCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $SoftCache = ::sun::awt::SoftCache;
using $SoftCache$ValueCell = ::sun::awt::SoftCache$ValueCell;

namespace sun {
	namespace awt {

void SoftCache$Entry::init$($SoftCache* this$0, $Map$Entry* ent, Object$* value) {
	$set(this, this$0, this$0);
	$set(this, ent, ent);
	$set(this, value, value);
}

$Object* SoftCache$Entry::getKey() {
	return $nc(this->ent)->getKey();
}

$Object* SoftCache$Entry::getValue() {
	return this->value;
}

$Object* SoftCache$Entry::setValue(Object$* value) {
	$useLocalObjectStack();
	return $nc(this->ent)->setValue($($SoftCache$ValueCell::create($($nc(this->ent)->getKey()), value, this->this$0->queue)));
}

bool SoftCache$Entry::equals(Object$* o) {
	$useLocalObjectStack();
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	$var($Map$Entry, e, $cast($Map$Entry, o));
	$var($Object, var$1, $nc(this->ent)->getKey());
	bool var$0 = $SoftCache::valEquals(var$1, $($nc(e)->getKey()));
	return (var$0 && $SoftCache::valEquals(this->value, $(e->getValue())));
}

int32_t SoftCache$Entry::hashCode() {
	$var($Object, k, nullptr);
	int32_t var$0 = (($assign(k, getKey())) == nullptr) ? 0 : $nc(k)->hashCode();
	return (var$0 ^ ((this->value == nullptr) ? 0 : this->value->hashCode()));
}

SoftCache$Entry::SoftCache$Entry() {
}

$Class* SoftCache$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/SoftCache;", nullptr, $FINAL | $SYNTHETIC, $field(SoftCache$Entry, this$0)},
		{"ent", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(SoftCache$Entry, ent)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SoftCache$Entry, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/SoftCache;Ljava/util/Map$Entry;Ljava/lang/Object;)V", "(Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/lang/Object;)V", 0, $method(SoftCache$Entry, init$, void, $SoftCache*, $Map$Entry*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SoftCache$Entry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SoftCache$Entry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SoftCache$Entry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SoftCache$Entry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SoftCache$Entry, setValue, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SoftCache$Entry", "sun.awt.SoftCache", "Entry", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.SoftCache$Entry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SoftCache"
	};
	$loadClass(SoftCache$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftCache$Entry);
	});
	return class$;
}

$Class* SoftCache$Entry::class$ = nullptr;

	} // awt
} // sun
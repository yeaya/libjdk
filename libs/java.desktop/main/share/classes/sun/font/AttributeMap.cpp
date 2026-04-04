#include <sun/font/AttributeMap.h>
#include <java/awt/font/TextAttribute.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/font/AttributeValues.h>
#include <jcpp.h>

using $TextAttribute = ::java::awt::font::TextAttribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AttributeValues = ::sun::font::AttributeValues;

namespace sun {
	namespace font {

bool AttributeMap::first = false;

void AttributeMap::init$($AttributeValues* values) {
	$AbstractMap::init$();
	$set(this, values$, values);
}

$Set* AttributeMap::entrySet() {
	return $$nc(delegate())->entrySet();
}

$Object* AttributeMap::put($TextAttribute* key, Object$* value) {
	return $$nc(delegate())->put(key, value);
}

$AttributeValues* AttributeMap::getValues() {
	return this->values$;
}

$Map* AttributeMap::delegate() {
	if (this->delegateMap == nullptr) {
		if (AttributeMap::first) {
			AttributeMap::first = false;
			$Thread::dumpStack();
		}
		$set(this, delegateMap, $nc(this->values$)->toMap($$new($HashMap, 27)));
		$set(this, values$, nullptr);
	}
	return this->delegateMap;
}

$String* AttributeMap::toString() {
	if (this->values$ != nullptr) {
		return $str({"map of "_s, $(this->values$->toString())});
	}
	return $AbstractMap::toString();
}

$Object* AttributeMap::put(Object$* key, Object$* value) {
	return this->put($cast($TextAttribute, key), value);
}

void AttributeMap::clinit$($Class* clazz) {
	AttributeMap::first = false;
}

AttributeMap::AttributeMap() {
}

$Class* AttributeMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"values", "Lsun/font/AttributeValues;", nullptr, $PRIVATE, $field(AttributeMap, values$)},
		{"delegateMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;", $PRIVATE, $field(AttributeMap, delegateMap)},
		{"first", "Z", nullptr, $PRIVATE | $STATIC, $staticField(AttributeMap, first)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/AttributeValues;)V", nullptr, $PUBLIC, $method(AttributeMap, init$, void, $AttributeValues*)},
		{"delegate", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;", $PRIVATE, $method(AttributeMap, delegate, $Map*)},
		{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(AttributeMap, entrySet, $Set*)},
		{"getValues", "()Lsun/font/AttributeValues;", nullptr, $PUBLIC, $method(AttributeMap, getValues, $AttributeValues*)},
		{"put", "(Ljava/awt/font/TextAttribute;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(AttributeMap, put, $Object*, $TextAttribute*, Object$*)},
		{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AttributeMap, put, $Object*, Object$*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeMap, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.AttributeMap",
		"java.util.AbstractMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractMap<Ljava/awt/font/TextAttribute;Ljava/lang/Object;>;"
	};
	$loadClass(AttributeMap, name, initialize, &classInfo$$, AttributeMap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeMap);
	});
	return class$;
}

$Class* AttributeMap::class$ = nullptr;

	} // font
} // sun
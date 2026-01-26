#include <javax/script/SimpleBindings.h>

#include <java/lang/ClassCastException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace javax {
	namespace script {

$FieldInfo _SimpleBindings_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(SimpleBindings, map)},
	{}
};

$MethodInfo _SimpleBindings_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, $method(SimpleBindings, init$, void, $Map*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleBindings, init$, void)},
	{"checkKey", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(SimpleBindings, checkKey, void, Object$*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, clear, void)},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, containsKey, bool, Object$*)},
	{"containsValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, containsValue, bool, Object$*)},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(SimpleBindings, entrySet, $Set*)},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, get, $Object*, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, isEmpty, bool)},
	{"keySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(SimpleBindings, keySet, $Set*)},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, put, $Object*, $String*, Object$*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SimpleBindings, put, $Object*, Object$*, Object$*)},
	{"putAll", "(Ljava/util/Map;)V", "(Ljava/util/Map<+Ljava/lang/String;+Ljava/lang/Object;>;)V", $PUBLIC, $virtualMethod(SimpleBindings, putAll, void, $Map*)},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, remove, $Object*, Object$*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleBindings, size, int32_t)},
	{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(SimpleBindings, values, $Collection*)},
	{}
};

$ClassInfo _SimpleBindings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.script.SimpleBindings",
	"java.lang.Object",
	"javax.script.Bindings",
	_SimpleBindings_FieldInfo_,
	_SimpleBindings_MethodInfo_
};

$Object* allocate$SimpleBindings($Class* clazz) {
	return $of($alloc(SimpleBindings));
}

void SimpleBindings::init$($Map* m) {
	$set(this, map, $cast($Map, $Objects::requireNonNull(m)));
}

void SimpleBindings::init$() {
	SimpleBindings::init$($$new($HashMap));
}

$Object* SimpleBindings::put($String* name, Object$* value) {
	checkKey(name);
	return $of($nc(this->map)->put(name, value));
}

void SimpleBindings::putAll($Map* toMerge) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(toMerge), "toMerge map is null"_s);
	{
		$var($Iterator, i$, $nc($($nc(toMerge)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, key, $cast($String, $nc(entry)->getKey()));
				checkKey(key);
				put(key, $(entry->getValue()));
			}
		}
	}
}

void SimpleBindings::clear() {
	$nc(this->map)->clear();
}

bool SimpleBindings::containsKey(Object$* key) {
	checkKey(key);
	return $nc(this->map)->containsKey(key);
}

bool SimpleBindings::containsValue(Object$* value) {
	return $nc(this->map)->containsValue(value);
}

$Set* SimpleBindings::entrySet() {
	return $nc(this->map)->entrySet();
}

$Object* SimpleBindings::get(Object$* key) {
	checkKey(key);
	return $of($nc(this->map)->get(key));
}

bool SimpleBindings::isEmpty() {
	return $nc(this->map)->isEmpty();
}

$Set* SimpleBindings::keySet() {
	return $nc(this->map)->keySet();
}

$Object* SimpleBindings::remove(Object$* key) {
	checkKey(key);
	return $of($nc(this->map)->remove(key));
}

int32_t SimpleBindings::size() {
	return $nc(this->map)->size();
}

$Collection* SimpleBindings::values() {
	return $nc(this->map)->values();
}

void SimpleBindings::checkKey(Object$* key) {
	$Objects::requireNonNull(key, "key can not be null"_s);
	if (!($instanceOf($String, key))) {
		$throwNew($ClassCastException, "key should be a String"_s);
	}
	if ($nc($of(key))->equals(""_s)) {
		$throwNew($IllegalArgumentException, "key can not be empty"_s);
	}
}

$Object* SimpleBindings::put(Object$* name, Object$* value) {
	return $of(this->put($cast($String, name), value));
}

SimpleBindings::SimpleBindings() {
}

$Class* SimpleBindings::load$($String* name, bool initialize) {
	$loadClass(SimpleBindings, name, initialize, &_SimpleBindings_ClassInfo_, allocate$SimpleBindings);
	return class$;
}

$Class* SimpleBindings::class$ = nullptr;

	} // script
} // javax
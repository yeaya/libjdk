#include <sun/rmi/server/WeakClassHashMap.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <sun/rmi/server/WeakClassHashMap$ValueCell.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakHashMap = ::java::util::WeakHashMap;
using $WeakClassHashMap$ValueCell = ::sun::rmi::server::WeakClassHashMap$ValueCell;

namespace sun {
	namespace rmi {
		namespace server {

void WeakClassHashMap::init$() {
	$set(this, internalMap, $new($WeakHashMap));
}

$Object* WeakClassHashMap::get($Class* remoteClass) {
	$useLocalObjectStack();
	$var($WeakClassHashMap$ValueCell, valueCell, nullptr);
	$synchronized(this->internalMap) {
		$assign(valueCell, $cast($WeakClassHashMap$ValueCell, this->internalMap->get(remoteClass)));
		if (valueCell == nullptr) {
			$assign(valueCell, $new($WeakClassHashMap$ValueCell));
			this->internalMap->put(remoteClass, valueCell);
		}
	}
	$synchronized(valueCell) {
		$var($Object, value, nullptr);
		if (valueCell->ref != nullptr) {
			$assign(value, valueCell->ref->get());
		}
		if (value == nullptr) {
			$assign(value, computeValue(remoteClass));
			$set(valueCell, ref, $new($SoftReference, value));
		}
		return value;
	}
}

WeakClassHashMap::WeakClassHashMap() {
}

$Class* WeakClassHashMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"internalMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Lsun/rmi/server/WeakClassHashMap$ValueCell<TV;>;>;", $PRIVATE, $field(WeakClassHashMap, internalMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(WeakClassHashMap, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TV;", $PROTECTED | $ABSTRACT, $virtualMethod(WeakClassHashMap, computeValue, $Object*, $Class*)},
		{"get", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)TV;", $PUBLIC, $virtualMethod(WeakClassHashMap, get, $Object*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.WeakClassHashMap$ValueCell", "sun.rmi.server.WeakClassHashMap", "ValueCell", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.rmi.server.WeakClassHashMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.server.WeakClassHashMap$ValueCell"
	};
	$loadClass(WeakClassHashMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WeakClassHashMap);
	});
	return class$;
}

$Class* WeakClassHashMap::class$ = nullptr;

		} // server
	} // rmi
} // sun
#include <java/beans/ChangeListenerMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/EventListener.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EventListener = ::java::util::EventListener;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

void ChangeListenerMap::init$() {
}

void ChangeListenerMap::add($String* name, $EventListener* listener) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->map == nullptr) {
			$set(this, map, $new($HashMap));
		}
		$var($EventListenerArray, array, $cast($EventListenerArray, $nc(this->map)->get(name)));
		int32_t size = (array != nullptr) ? array->length : 0;
		$var($EventListenerArray, clone, newArray(size + 1));
		$nc(clone)->set(size, listener);
		if (array != nullptr) {
			$System::arraycopy(array, 0, clone, 0, size);
		}
		$nc(this->map)->put(name, clone);
	}
}

void ChangeListenerMap::remove($String* name, $EventListener* listener) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->map != nullptr) {
			$var($EventListenerArray, array, $cast($EventListenerArray, this->map->get(name)));
			if (array != nullptr) {
				for (int32_t i = 0; i < array->length; ++i) {
					if ($nc($of(listener))->equals(array->get(i))) {
						int32_t size = array->length - 1;
						if (size > 0) {
							$var($EventListenerArray, clone, newArray(size));
							$System::arraycopy(array, 0, clone, 0, i);
							$System::arraycopy(array, i + 1, clone, i, size - i);
							$nc(this->map)->put(name, clone);
						} else {
							$nc(this->map)->remove(name);
							if (this->map->isEmpty()) {
								$set(this, map, nullptr);
							}
						}
						break;
					}
				}
			}
		}
	}
}

$EventListenerArray* ChangeListenerMap::get($String* name) {
	$synchronized(this) {
		return (this->map != nullptr) ? $cast($EventListenerArray, this->map->get(name)) : ($EventListenerArray*)nullptr;
	}
}

void ChangeListenerMap::set($String* name, $EventListenerArray* listeners) {
	if (listeners != nullptr) {
		if (this->map == nullptr) {
			$set(this, map, $new($HashMap));
		}
		$nc(this->map)->put(name, listeners);
	} else if (this->map != nullptr) {
		this->map->remove(name);
		if (this->map->isEmpty()) {
			$set(this, map, nullptr);
		}
	}
}

$EventListenerArray* ChangeListenerMap::getListeners() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->map == nullptr) {
			return newArray(0);
		}
		$var($List, list, $new($ArrayList));
		$var($EventListenerArray, listeners, $cast($EventListenerArray, $nc(this->map)->get(nullptr)));
		if (listeners != nullptr) {
			$var($EventListenerArray, arr$, listeners);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($EventListener, listener, arr$->get(i$));
				{
					list->add(listener);
				}
			}
		}
		{
			$var($Iterator, i$, $$nc(this->map->entrySet())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(entry)->getKey()));
					if (name != nullptr) {
						$var($EventListenerArray, arr$, $cast($EventListenerArray, entry->getValue()));
						for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
							$var($EventListener, listener, arr$->get(i$));
							{
								list->add($(newProxy(name, listener)));
							}
						}
					}
				}
			}
		}
		return $cast($EventListenerArray, list->toArray($(newArray(list->size()))));
	}
}

$EventListenerArray* ChangeListenerMap::getListeners($String* name) {
	if (name != nullptr) {
		$var($EventListenerArray, listeners, get(name));
		if (listeners != nullptr) {
			return $cast($EventListenerArray, listeners->clone());
		}
	}
	return newArray(0);
}

bool ChangeListenerMap::hasListeners($String* name) {
	$synchronized(this) {
		if (this->map == nullptr) {
			return false;
		}
		$var($EventListenerArray, array, $cast($EventListenerArray, $nc(this->map)->get(nullptr)));
		return (array != nullptr) || ((name != nullptr) && (nullptr != this->map->get(name)));
	}
}

$Set* ChangeListenerMap::getEntries() {
	return (this->map != nullptr) ? this->map->entrySet() : $Collections::emptySet();
}

ChangeListenerMap::ChangeListenerMap() {
}

$Class* ChangeListenerMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[TL;>;", $PRIVATE, $field(ChangeListenerMap, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ChangeListenerMap, init$, void)},
		{"add", "(Ljava/lang/String;Ljava/util/EventListener;)V", "(Ljava/lang/String;TL;)V", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(ChangeListenerMap, add, void, $String*, $EventListener*)},
		{"extract", "(Ljava/util/EventListener;)Ljava/util/EventListener;", "(TL;)TL;", $PUBLIC | $ABSTRACT, $virtualMethod(ChangeListenerMap, extract, $EventListener*, $EventListener*)},
		{"get", "(Ljava/lang/String;)[Ljava/util/EventListener;", "(Ljava/lang/String;)[TL;", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(ChangeListenerMap, get, $EventListenerArray*, $String*)},
		{"getEntries", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;[TL;>;>;", $PUBLIC | $FINAL, $method(ChangeListenerMap, getEntries, $Set*)},
		{"getListeners", "()[Ljava/util/EventListener;", "()[TL;", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(ChangeListenerMap, getListeners, $EventListenerArray*)},
		{"getListeners", "(Ljava/lang/String;)[Ljava/util/EventListener;", "(Ljava/lang/String;)[TL;", $PUBLIC | $FINAL, $method(ChangeListenerMap, getListeners, $EventListenerArray*, $String*)},
		{"hasListeners", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(ChangeListenerMap, hasListeners, bool, $String*)},
		{"newArray", "(I)[Ljava/util/EventListener;", "(I)[TL;", $PROTECTED | $ABSTRACT, $virtualMethod(ChangeListenerMap, newArray, $EventListenerArray*, int32_t)},
		{"newProxy", "(Ljava/lang/String;Ljava/util/EventListener;)Ljava/util/EventListener;", "(Ljava/lang/String;TL;)TL;", $PROTECTED | $ABSTRACT, $virtualMethod(ChangeListenerMap, newProxy, $EventListener*, $String*, $EventListener*)},
		{"remove", "(Ljava/lang/String;Ljava/util/EventListener;)V", "(Ljava/lang/String;TL;)V", $PUBLIC | $FINAL | $SYNCHRONIZED, $method(ChangeListenerMap, remove, void, $String*, $EventListener*)},
		{"set", "(Ljava/lang/String;[Ljava/util/EventListener;)V", "(Ljava/lang/String;[TL;)V", $PUBLIC | $FINAL, $method(ChangeListenerMap, set, void, $String*, $EventListenerArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.beans.ChangeListenerMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<L::Ljava/util/EventListener;>Ljava/lang/Object;"
	};
	$loadClass(ChangeListenerMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChangeListenerMap);
	});
	return class$;
}

$Class* ChangeListenerMap::class$ = nullptr;

	} // beans
} // java
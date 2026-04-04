#include <java/beans/PropertyChangeSupport.h>
#include <java/beans/IndexedPropertyChangeEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeListenerProxy.h>
#include <java/beans/PropertyChangeSupport$PropertyChangeListenerMap.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Serializable.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef TYPE

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $IndexedPropertyChangeEvent = ::java::beans::IndexedPropertyChangeEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeListenerProxy = ::java::beans::PropertyChangeListenerProxy;
using $PropertyChangeSupport$PropertyChangeListenerMap = ::java::beans::PropertyChangeSupport$PropertyChangeListenerMap;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace beans {

$ObjectStreamFieldArray* PropertyChangeSupport::serialPersistentFields = nullptr;

void PropertyChangeSupport::init$(Object$* sourceBean) {
	$set(this, map, $new($PropertyChangeSupport$PropertyChangeListenerMap));
	if (sourceBean == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, source, sourceBean);
}

void PropertyChangeSupport::addPropertyChangeListener($PropertyChangeListener* listener) {
	$useLocalObjectStack();
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($PropertyChangeListenerProxy, listener)) {
		$var($PropertyChangeListenerProxy, proxy, $cast($PropertyChangeListenerProxy, listener));
		$var($String, var$0, proxy->getPropertyName());
		addPropertyChangeListener(var$0, $$cast($PropertyChangeListener, proxy->getListener()));
	} else {
		$nc(this->map)->add(nullptr, listener);
	}
}

void PropertyChangeSupport::removePropertyChangeListener($PropertyChangeListener* listener) {
	$useLocalObjectStack();
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($PropertyChangeListenerProxy, listener)) {
		$var($PropertyChangeListenerProxy, proxy, $cast($PropertyChangeListenerProxy, listener));
		$var($String, var$0, proxy->getPropertyName());
		removePropertyChangeListener(var$0, $$cast($PropertyChangeListener, proxy->getListener()));
	} else {
		$nc(this->map)->remove(nullptr, listener);
	}
}

$PropertyChangeListenerArray* PropertyChangeSupport::getPropertyChangeListeners() {
	return $cast($PropertyChangeListenerArray, $nc(this->map)->getListeners());
}

void PropertyChangeSupport::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener$renamed) {
	$var($PropertyChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->add(propertyName, listener);
	}
}

void PropertyChangeSupport::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener$renamed) {
	$var($PropertyChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->remove(propertyName, listener);
	}
}

$PropertyChangeListenerArray* PropertyChangeSupport::getPropertyChangeListeners($String* propertyName) {
	return $cast($PropertyChangeListenerArray, $nc(this->map)->getListeners(propertyName));
}

void PropertyChangeSupport::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (oldValue == nullptr || newValue == nullptr || !$of(oldValue)->equals(newValue)) {
		firePropertyChange($$new($PropertyChangeEvent, this->source, propertyName, oldValue, newValue));
	}
}

void PropertyChangeSupport::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Integer::valueOf(oldValue));
		firePropertyChange(propertyName, var$0, $($Integer::valueOf(newValue)));
	}
}

void PropertyChangeSupport::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Boolean::valueOf(oldValue));
		firePropertyChange(propertyName, var$0, $($Boolean::valueOf(newValue)));
	}
}

void PropertyChangeSupport::firePropertyChange($PropertyChangeEvent* event) {
	$useLocalObjectStack();
	$var($Object, oldValue, $nc(event)->getOldValue());
	$var($Object, newValue, event->getNewValue());
	if (oldValue == nullptr || newValue == nullptr || !oldValue->equals(newValue)) {
		$var($String, name, event->getPropertyName());
		$var($PropertyChangeListenerArray, common, $cast($PropertyChangeListenerArray, $nc(this->map)->get(nullptr)));
		$var($PropertyChangeListenerArray, named, (name != nullptr) ? $cast($PropertyChangeListenerArray, $nc(this->map)->get(name)) : ($PropertyChangeListenerArray*)nullptr);
		fire(common, event);
		fire(named, event);
	}
}

void PropertyChangeSupport::fire($PropertyChangeListenerArray* listeners, $PropertyChangeEvent* event) {
	$init(PropertyChangeSupport);
	$useLocalObjectStack();
	if (listeners != nullptr) {
		$var($PropertyChangeListenerArray, arr$, listeners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($PropertyChangeListener, listener, arr$->get(i$));
			{
				$nc(listener)->propertyChange(event);
			}
		}
	}
}

void PropertyChangeSupport::fireIndexedPropertyChange($String* propertyName, int32_t index, Object$* oldValue, Object$* newValue) {
	if (oldValue == nullptr || newValue == nullptr || !$of(oldValue)->equals(newValue)) {
		firePropertyChange($$new($IndexedPropertyChangeEvent, this->source, propertyName, oldValue, newValue, index));
	}
}

void PropertyChangeSupport::fireIndexedPropertyChange($String* propertyName, int32_t index, int32_t oldValue, int32_t newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Integer::valueOf(oldValue));
		fireIndexedPropertyChange(propertyName, index, var$0, $($Integer::valueOf(newValue)));
	}
}

void PropertyChangeSupport::fireIndexedPropertyChange($String* propertyName, int32_t index, bool oldValue, bool newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Boolean::valueOf(oldValue));
		fireIndexedPropertyChange(propertyName, index, var$0, $($Boolean::valueOf(newValue)));
	}
}

bool PropertyChangeSupport::hasListeners($String* propertyName) {
	return $nc(this->map)->hasListeners(propertyName);
}

void PropertyChangeSupport::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$var($Hashtable, children, nullptr);
	$var($PropertyChangeListenerArray, listeners, nullptr);
	$synchronized(this->map) {
		$var($Iterator, i$, $$nc(this->map->getEntries())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, property, $cast($String, $nc(entry)->getKey()));
				if (property == nullptr) {
					$assign(listeners, $cast($PropertyChangeListenerArray, entry->getValue()));
				} else {
					if (children == nullptr) {
						$assign(children, $new($Hashtable));
					}
					$var(PropertyChangeSupport, pcs, $new(PropertyChangeSupport, this->source));
					$nc(pcs->map)->set(nullptr, $$cast($EventListenerArray, $cast($PropertyChangeListenerArray, entry->getValue())));
					$nc(children)->put(property, pcs);
				}
			}
		}
	}
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("children"_s, children);
	fields->put("source"_s, this->source);
	fields->put("propertyChangeSupportSerializedDataVersion"_s, 2);
	s->writeFields();
	if (listeners != nullptr) {
		$var($PropertyChangeListenerArray, arr$, listeners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($PropertyChangeListener, l, arr$->get(i$));
			if ($instanceOf($Serializable, l)) {
				s->writeObject(l);
			}
		}
	}
	s->writeObject(nullptr);
}

void PropertyChangeSupport::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$set(this, map, $new($PropertyChangeSupport$PropertyChangeListenerMap));
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Hashtable, children, $cast($Hashtable, $nc(fields)->get("children"_s, nullptr)));
	$set(this, source, fields->get("source"_s, nullptr));
	fields->get("propertyChangeSupportSerializedDataVersion"_s, 2);
	$var($Object, listenerOrNull, nullptr);
	while (nullptr != ($assign(listenerOrNull, s->readObject()))) {
		$nc(this->map)->add(nullptr, $cast($PropertyChangeListener, listenerOrNull));
	}
	if (children != nullptr) {
		$var($Iterator, i$, $$nc(children->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($PropertyChangeListenerArray, arr$, $$sure(PropertyChangeSupport, $nc(entry)->getValue())->getPropertyChangeListeners());
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($PropertyChangeListener, listener, arr$->get(i$));
					{
						$nc(this->map)->add($$cast($String, entry->getKey()), listener);
					}
				}
			}
		}
	}
}

void PropertyChangeSupport::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Hashtable);
	$assignStatic(PropertyChangeSupport::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "children"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "source"_s, $Object::class$),
		$$new($ObjectStreamField, "propertyChangeSupportSerializedDataVersion"_s, $Integer::TYPE)
	}));
}

PropertyChangeSupport::PropertyChangeSupport() {
}

$Class* PropertyChangeSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/beans/PropertyChangeSupport$PropertyChangeListenerMap;", nullptr, $PRIVATE, $field(PropertyChangeSupport, map)},
		{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyChangeSupport, source)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyChangeSupport, serialPersistentFields)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PropertyChangeSupport, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PropertyChangeSupport, init$, void, Object$*)},
		{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, addPropertyChangeListener, void, $PropertyChangeListener*)},
		{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, addPropertyChangeListener, void, $String*, $PropertyChangeListener*)},
		{"fire", "([Ljava/beans/PropertyChangeListener;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PropertyChangeSupport, fire, void, $PropertyChangeListenerArray*, $PropertyChangeEvent*)},
		{"fireIndexedPropertyChange", "(Ljava/lang/String;ILjava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, fireIndexedPropertyChange, void, $String*, int32_t, Object$*, Object$*)},
		{"fireIndexedPropertyChange", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, fireIndexedPropertyChange, void, $String*, int32_t, int32_t, int32_t)},
		{"fireIndexedPropertyChange", "(Ljava/lang/String;IZZ)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, fireIndexedPropertyChange, void, $String*, int32_t, bool, bool)},
		{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, firePropertyChange, void, $String*, Object$*, Object$*)},
		{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, firePropertyChange, void, $String*, int32_t, int32_t)},
		{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, firePropertyChange, void, $String*, bool, bool)},
		{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, firePropertyChange, void, $PropertyChangeEvent*)},
		{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, getPropertyChangeListeners, $PropertyChangeListenerArray*)},
		{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, getPropertyChangeListeners, $PropertyChangeListenerArray*, $String*)},
		{"hasListeners", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, hasListeners, bool, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PropertyChangeSupport, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
		{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, removePropertyChangeListener, void, $PropertyChangeListener*)},
		{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(PropertyChangeSupport, removePropertyChangeListener, void, $String*, $PropertyChangeListener*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PropertyChangeSupport, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.PropertyChangeSupport$PropertyChangeListenerMap", "java.beans.PropertyChangeSupport", "PropertyChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.PropertyChangeSupport",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.beans.PropertyChangeSupport$PropertyChangeListenerMap"
	};
	$loadClass(PropertyChangeSupport, name, initialize, &classInfo$$, PropertyChangeSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyChangeSupport);
	});
	return class$;
}

$Class* PropertyChangeSupport::class$ = nullptr;

	} // beans
} // java
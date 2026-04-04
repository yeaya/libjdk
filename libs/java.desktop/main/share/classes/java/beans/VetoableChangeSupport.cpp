#include <java/beans/VetoableChangeSupport.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeListenerProxy.h>
#include <java/beans/VetoableChangeSupport$VetoableChangeListenerMap.h>
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

using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeListenerProxy = ::java::beans::VetoableChangeListenerProxy;
using $VetoableChangeSupport$VetoableChangeListenerMap = ::java::beans::VetoableChangeSupport$VetoableChangeListenerMap;
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

$ObjectStreamFieldArray* VetoableChangeSupport::serialPersistentFields = nullptr;

void VetoableChangeSupport::init$(Object$* sourceBean) {
	$set(this, map, $new($VetoableChangeSupport$VetoableChangeListenerMap));
	if (sourceBean == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, source, sourceBean);
}

void VetoableChangeSupport::addVetoableChangeListener($VetoableChangeListener* listener) {
	$useLocalObjectStack();
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($VetoableChangeListenerProxy, listener)) {
		$var($VetoableChangeListenerProxy, proxy, $cast($VetoableChangeListenerProxy, listener));
		$var($String, var$0, proxy->getPropertyName());
		addVetoableChangeListener(var$0, $$cast($VetoableChangeListener, proxy->getListener()));
	} else {
		$nc(this->map)->add(nullptr, listener);
	}
}

void VetoableChangeSupport::removeVetoableChangeListener($VetoableChangeListener* listener) {
	$useLocalObjectStack();
	if (listener == nullptr) {
		return;
	}
	if ($instanceOf($VetoableChangeListenerProxy, listener)) {
		$var($VetoableChangeListenerProxy, proxy, $cast($VetoableChangeListenerProxy, listener));
		$var($String, var$0, proxy->getPropertyName());
		removeVetoableChangeListener(var$0, $$cast($VetoableChangeListener, proxy->getListener()));
	} else {
		$nc(this->map)->remove(nullptr, listener);
	}
}

$VetoableChangeListenerArray* VetoableChangeSupport::getVetoableChangeListeners() {
	return $cast($VetoableChangeListenerArray, $nc(this->map)->getListeners());
}

void VetoableChangeSupport::addVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener$renamed) {
	$var($VetoableChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->add(propertyName, listener);
	}
}

void VetoableChangeSupport::removeVetoableChangeListener($String* propertyName, $VetoableChangeListener* listener$renamed) {
	$var($VetoableChangeListener, listener, listener$renamed);
	if (listener == nullptr || propertyName == nullptr) {
		return;
	}
	$assign(listener, $nc(this->map)->extract(listener));
	if (listener != nullptr) {
		$nc(this->map)->remove(propertyName, listener);
	}
}

$VetoableChangeListenerArray* VetoableChangeSupport::getVetoableChangeListeners($String* propertyName) {
	return $cast($VetoableChangeListenerArray, $nc(this->map)->getListeners(propertyName));
}

void VetoableChangeSupport::fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (oldValue == nullptr || newValue == nullptr || !$of(oldValue)->equals(newValue)) {
		fireVetoableChange($$new($PropertyChangeEvent, this->source, propertyName, oldValue, newValue));
	}
}

void VetoableChangeSupport::fireVetoableChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Integer::valueOf(oldValue));
		fireVetoableChange(propertyName, var$0, $($Integer::valueOf(newValue)));
	}
}

void VetoableChangeSupport::fireVetoableChange($String* propertyName, bool oldValue, bool newValue) {
	$useLocalObjectStack();
	if (oldValue != newValue) {
		$var($Object, var$0, $Boolean::valueOf(oldValue));
		fireVetoableChange(propertyName, var$0, $($Boolean::valueOf(newValue)));
	}
}

void VetoableChangeSupport::fireVetoableChange($PropertyChangeEvent* event$renamed) {
	$useLocalObjectStack();
	$var($PropertyChangeEvent, event, event$renamed);
	$var($Object, oldValue, $nc(event)->getOldValue());
	$var($Object, newValue, event->getNewValue());
	if (oldValue == nullptr || newValue == nullptr || !oldValue->equals(newValue)) {
		$var($String, name, event->getPropertyName());
		$var($VetoableChangeListenerArray, common, $cast($VetoableChangeListenerArray, $nc(this->map)->get(nullptr)));
		$var($VetoableChangeListenerArray, named, (name != nullptr) ? $cast($VetoableChangeListenerArray, $nc(this->map)->get(name)) : ($VetoableChangeListenerArray*)nullptr);
		$var($VetoableChangeListenerArray, listeners, nullptr);
		if (common == nullptr) {
			$assign(listeners, named);
		} else if (named == nullptr) {
			$assign(listeners, common);
		} else {
			$assign(listeners, $new($VetoableChangeListenerArray, common->length + named->length));
			$System::arraycopy(common, 0, listeners, 0, common->length);
			$System::arraycopy(named, 0, listeners, common->length, named->length);
		}
		if (listeners != nullptr) {
			int32_t current = 0;
			try {
				while (current < listeners->length) {
					$nc(listeners->get(current))->vetoableChange(event);
					++current;
				}
			} catch ($PropertyVetoException& veto) {
				$assign(event, $new($PropertyChangeEvent, this->source, name, newValue, oldValue));
				for (int32_t i = 0; i < current; ++i) {
					try {
						$nc(listeners->get(i))->vetoableChange(event);
					} catch ($PropertyVetoException& exception) {
					}
				}
				$throw(veto);
			}
		}
	}
}

bool VetoableChangeSupport::hasListeners($String* propertyName) {
	return $nc(this->map)->hasListeners(propertyName);
}

void VetoableChangeSupport::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$var($Hashtable, children, nullptr);
	$var($VetoableChangeListenerArray, listeners, nullptr);
	$synchronized(this->map) {
		$var($Iterator, i$, $$nc(this->map->getEntries())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, property, $cast($String, $nc(entry)->getKey()));
				if (property == nullptr) {
					$assign(listeners, $cast($VetoableChangeListenerArray, entry->getValue()));
				} else {
					if (children == nullptr) {
						$assign(children, $new($Hashtable));
					}
					$var(VetoableChangeSupport, vcs, $new(VetoableChangeSupport, this->source));
					$nc(vcs->map)->set(nullptr, $$cast($EventListenerArray, $cast($VetoableChangeListenerArray, entry->getValue())));
					$nc(children)->put(property, vcs);
				}
			}
		}
	}
	$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
	$nc(fields)->put("children"_s, children);
	fields->put("source"_s, this->source);
	fields->put("vetoableChangeSupportSerializedDataVersion"_s, 2);
	s->writeFields();
	if (listeners != nullptr) {
		$var($VetoableChangeListenerArray, arr$, listeners);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($VetoableChangeListener, l, arr$->get(i$));
			if ($instanceOf($Serializable, l)) {
				s->writeObject(l);
			}
		}
	}
	s->writeObject(nullptr);
}

void VetoableChangeSupport::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$set(this, map, $new($VetoableChangeSupport$VetoableChangeListenerMap));
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($Hashtable, children, $cast($Hashtable, $nc(fields)->get("children"_s, nullptr)));
	$set(this, source, fields->get("source"_s, nullptr));
	fields->get("vetoableChangeSupportSerializedDataVersion"_s, 2);
	$var($Object, listenerOrNull, nullptr);
	while (nullptr != ($assign(listenerOrNull, s->readObject()))) {
		$nc(this->map)->add(nullptr, $cast($VetoableChangeListener, listenerOrNull));
	}
	if (children != nullptr) {
		$var($Iterator, i$, $$nc(children->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($VetoableChangeListenerArray, arr$, $$sure(VetoableChangeSupport, $nc(entry)->getValue())->getVetoableChangeListeners());
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($VetoableChangeListener, listener, arr$->get(i$));
					{
						$nc(this->map)->add($$cast($String, entry->getKey()), listener);
					}
				}
			}
		}
	}
}

void VetoableChangeSupport::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$load($Hashtable);
	$assignStatic(VetoableChangeSupport::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "children"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "source"_s, $Object::class$),
		$$new($ObjectStreamField, "vetoableChangeSupportSerializedDataVersion"_s, $Integer::TYPE)
	}));
}

VetoableChangeSupport::VetoableChangeSupport() {
}

$Class* VetoableChangeSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/beans/VetoableChangeSupport$VetoableChangeListenerMap;", nullptr, $PRIVATE, $field(VetoableChangeSupport, map)},
		{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(VetoableChangeSupport, source)},
		{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VetoableChangeSupport, serialPersistentFields)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VetoableChangeSupport, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(VetoableChangeSupport, init$, void, Object$*)},
		{"addVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, addVetoableChangeListener, void, $VetoableChangeListener*)},
		{"addVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, addVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
		{"fireVetoableChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, fireVetoableChange, void, $String*, Object$*, Object$*), "java.beans.PropertyVetoException"},
		{"fireVetoableChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, fireVetoableChange, void, $String*, int32_t, int32_t), "java.beans.PropertyVetoException"},
		{"fireVetoableChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, fireVetoableChange, void, $String*, bool, bool), "java.beans.PropertyVetoException"},
		{"fireVetoableChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, fireVetoableChange, void, $PropertyChangeEvent*), "java.beans.PropertyVetoException"},
		{"getVetoableChangeListeners", "()[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, getVetoableChangeListeners, $VetoableChangeListenerArray*)},
		{"getVetoableChangeListeners", "(Ljava/lang/String;)[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, getVetoableChangeListeners, $VetoableChangeListenerArray*, $String*)},
		{"hasListeners", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, hasListeners, bool, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(VetoableChangeSupport, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException"},
		{"removeVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, removeVetoableChangeListener, void, $VetoableChangeListener*)},
		{"removeVetoableChangeListener", "(Ljava/lang/String;Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC, $virtualMethod(VetoableChangeSupport, removeVetoableChangeListener, void, $String*, $VetoableChangeListener*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(VetoableChangeSupport, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.VetoableChangeSupport$VetoableChangeListenerMap", "java.beans.VetoableChangeSupport", "VetoableChangeListenerMap", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.VetoableChangeSupport",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.beans.VetoableChangeSupport$VetoableChangeListenerMap"
	};
	$loadClass(VetoableChangeSupport, name, initialize, &classInfo$$, VetoableChangeSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VetoableChangeSupport);
	});
	return class$;
}

$Class* VetoableChangeSupport::class$ = nullptr;

	} // beans
} // java
#include <com/sun/beans/introspect/EventSetInfo.h>
#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/introspect/MethodInfo.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EventListener.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/TooManyListenersException.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $MethodInfo = ::com::sun::beans::introspect::MethodInfo;
using $1ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $1MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $EventListener = ::java::util::EventListener;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $TooManyListenersException = ::java::util::TooManyListenersException;
using $TreeMap = ::java::util::TreeMap;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

void EventSetInfo::init$() {
}

bool EventSetInfo::initialize() {
	if ((this->add == nullptr) || (this->remove == nullptr) || (this->remove->type != this->add->type)) {
		return false;
	}
	if ((this->get$ != nullptr) && (this->get$->type != $nc(this->add)->type)) {
		$set(this, get$, nullptr);
	}
	return true;
}

$Class* EventSetInfo::getListenerType() {
	return $nc(this->add)->type;
}

$Method* EventSetInfo::getAddMethod() {
	return $nc(this->add)->method;
}

$Method* EventSetInfo::getRemoveMethod() {
	return $nc(this->remove)->method;
}

$Method* EventSetInfo::getGetMethod() {
	return (this->get$ == nullptr) ? ($Method*)nullptr : this->get$->method;
}

bool EventSetInfo::isUnicast() {
	$load($TooManyListenersException);
	return $nc(this->add)->isThrow($TooManyListenersException::class$);
}

$MethodInfo* EventSetInfo::getInfo($MethodInfo* info, $Method* method, int32_t prefix, int32_t postfix) {
	$useLocalObjectStack();
	$Class* type = (postfix > 0) ? $nc($MethodInfo::resolve(method, $($nc(method)->getGenericReturnType())))->getComponentType() : $MethodInfo::resolve(method, $nc($($nc(method)->getGenericParameterTypes()))->get(0));
	$load($EventListener);
	if ((type != nullptr) && $EventListener::class$->isAssignableFrom(type)) {
		$var($String, name, $nc(method)->getName());
		if (prefix + postfix < $nc(name)->length()) {
			if ($$nc(type->getName())->endsWith($(name->substring(prefix, name->length() - postfix)))) {
				if ((info == nullptr) || $nc(info->type)->isAssignableFrom(type)) {
					return $new($MethodInfo, method, type);
				}
			}
		}
	}
	return info;
}

EventSetInfo* EventSetInfo::getInfo($Map* map, $String* key) {
	$var(EventSetInfo, info, $cast(EventSetInfo, $nc(map)->get(key)));
	if (info == nullptr) {
		$assign(info, $new(EventSetInfo));
		map->put(key, info);
	}
	return info;
}

$Map* EventSetInfo::get($Class* type) {
	$useLocalObjectStack();
	$var($List, methods, $$nc($ClassInfo::get(type))->getMethods());
	if ($nc(methods)->isEmpty()) {
		return $Collections::emptyMap();
	}
	$var($Map, map, $cast($AbstractMap, $new($TreeMap)));
	{
		$var($Iterator, i$, $$nc($$nc($ClassInfo::get(type))->getMethods())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, method, $cast($Method, i$->next()));
			if (!$Modifier::isStatic($nc(method)->getModifiers())) {
				$Class* returnType = method->getReturnType();
				$var($String, name, method->getName());
				switch (method->getParameterCount()) {
				case 1:
					if ((returnType == $Void::TYPE) && $nc(name)->endsWith("Listener"_s)) {
						if (name->startsWith("add"_s)) {
							$var(EventSetInfo, info, getInfo(map, $(name->substring(3, name->length() - 8))));
							$set($nc(info), add, getInfo($nc(info)->add, method, 3, 0));
						} else if (name->startsWith("remove"_s)) {
							$var(EventSetInfo, info, getInfo(map, $(name->substring(6, name->length() - 8))));
							$set($nc(info), remove, getInfo($nc(info)->remove, method, 6, 0));
						}
					}
					break;
				case 0:
					{
						bool var$1 = $nc(returnType)->isArray();
						bool var$0 = var$1 && $nc(name)->startsWith("get"_s);
						if (var$0 && name->endsWith("Listeners"_s)) {
							$var(EventSetInfo, info, getInfo(map, $(name->substring(3, name->length() - 9))));
							$set($nc(info), get$, getInfo($nc(info)->get$, method, 3, 1));
						}
						break;
					}
				}
			}
		}
	}
	$var($Iterator, iterator, $$nc(map->values())->iterator());
	while ($nc(iterator)->hasNext()) {
		if (!$$sure(EventSetInfo, iterator->next())->initialize()) {
			iterator->remove();
		}
	}
	return !map->isEmpty() ? $Collections::unmodifiableMap(map) : $Collections::emptyMap();
}

EventSetInfo::EventSetInfo() {
}

$Class* EventSetInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"add", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(EventSetInfo, add)},
		{"remove", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(EventSetInfo, remove)},
		{"get", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(EventSetInfo, get$)},
		{}
	};
	$1MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(EventSetInfo, init$, void)},
		{"get", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;>;", $PUBLIC | $STATIC, $staticMethod(EventSetInfo, get, $Map*, $Class*)},
		{"getAddMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(EventSetInfo, getAddMethod, $Method*)},
		{"getGetMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(EventSetInfo, getGetMethod, $Method*)},
		{"getInfo", "(Lcom/sun/beans/introspect/MethodInfo;Ljava/lang/reflect/Method;II)Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(EventSetInfo, getInfo, $MethodInfo*, $MethodInfo*, $Method*, int32_t, int32_t)},
		{"getInfo", "(Ljava/util/Map;Ljava/lang/String;)Lcom/sun/beans/introspect/EventSetInfo;", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/EventSetInfo;>;Ljava/lang/String;)Lcom/sun/beans/introspect/EventSetInfo;", $PRIVATE | $STATIC, $staticMethod(EventSetInfo, getInfo, EventSetInfo*, $Map*, $String*)},
		{"getListenerType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(EventSetInfo, getListenerType, $Class*)},
		{"getRemoveMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(EventSetInfo, getRemoveMethod, $Method*)},
		{"initialize", "()Z", nullptr, $PRIVATE, $method(EventSetInfo, initialize, bool)},
		{"isUnicast", "()Z", nullptr, $PUBLIC, $method(EventSetInfo, isUnicast, bool)},
		{}
	};
	$1ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.introspect.EventSetInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EventSetInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventSetInfo);
	});
	return class$;
}

$Class* EventSetInfo::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com
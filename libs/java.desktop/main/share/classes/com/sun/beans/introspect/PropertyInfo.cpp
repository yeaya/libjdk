#include <com/sun/beans/introspect/PropertyInfo.h>
#include <com/sun/beans/finder/ClassFinder.h>
#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/introspect/MethodInfo.h>
#include <com/sun/beans/introspect/PropertyInfo$Name.h>
#include <java/beans/BeanProperty.h>
#include <java/lang/Math.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE
#undef TYPE
#undef VETO_EXCEPTION
#undef VETO_EXCEPTION_NAME

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $MethodInfo = ::com::sun::beans::introspect::MethodInfo;
using $PropertyInfo$Name = ::com::sun::beans::introspect::PropertyInfo$Name;
using $BeanProperty = ::java::beans::BeanProperty;
using $Boolean = ::java::lang::Boolean;
using $1ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $1MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EnumMap = ::java::util::EnumMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $TreeMap = ::java::util::TreeMap;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$String* PropertyInfo::VETO_EXCEPTION_NAME = nullptr;
$Class* PropertyInfo::VETO_EXCEPTION = nullptr;

void PropertyInfo::init$() {
}

bool PropertyInfo::initialize() {
	$useLocalObjectStack();
	bool isInitedToIsGetter = false;
	if (this->read != nullptr) {
		$set(this, type, this->read->type);
		isInitedToIsGetter = isPrefix($($nc(this->read->method)->getName()), "is"_s);
	}
	if (!isInitedToIsGetter && this->readList != nullptr) {
		{
			$var($Iterator, i$, this->readList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MethodInfo, info, $cast($MethodInfo, i$->next()));
				if ((this->read == nullptr) || $nc(this->read->type)->isAssignableFrom($nc(info)->type)) {
					$set(this, read, info);
					$set(this, type, $nc(info)->type);
				}
			}
		}
		$set(this, readList, nullptr);
	}
	$Class* writeType = this->type;
	if (this->writeList != nullptr) {
		{
			$var($Iterator, i$, this->writeList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MethodInfo, info, $cast($MethodInfo, i$->next()));
				if (writeType == nullptr) {
					$set(this, write, info);
					writeType = $nc(info)->type;
				} else if (writeType->isAssignableFrom($nc(info)->type)) {
					if ((this->write == nullptr) || $nc(this->write->type)->isAssignableFrom(info->type)) {
						$set(this, write, info);
						writeType = info->type;
					}
				}
			}
		}
		$set(this, writeList, nullptr);
	}
	if (this->type == nullptr) {
		$set(this, type, writeType);
	}
	if (this->indexed != nullptr) {
		if ((this->type != nullptr) && !this->type->isArray()) {
			$set(this, indexed, nullptr);
		} else if (!this->indexed->initialize()) {
			$set(this, indexed, nullptr);
		} else if ((this->type != nullptr) && ($nc(this->indexed)->type != this->type->getComponentType())) {
			$set(this, indexed, nullptr);
		} else {
			$set(this, map, $nc(this->indexed)->map);
			$set(this->indexed, map, nullptr);
		}
	}
	if ((this->type == nullptr) && (this->indexed == nullptr)) {
		return false;
	}
	bool done = initialize(this->read);
	if (!done) {
		initialize(this->write);
	}
	return true;
}

bool PropertyInfo::initialize($MethodInfo* info) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (info != nullptr) {
		$load($BeanProperty);
		$var($BeanProperty, annotation, $cast($BeanProperty, $nc(info->method)->getAnnotation($BeanProperty::class$)));
		if (annotation != nullptr) {
			if (!annotation->bound()) {
				$init($PropertyInfo$Name);
				put($PropertyInfo$Name::bound, $Boolean::FALSE);
			}
			$init($PropertyInfo$Name);
			put($PropertyInfo$Name::expert, annotation->expert());
			put($PropertyInfo$Name::required, annotation->required());
			put($PropertyInfo$Name::hidden, annotation->hidden());
			put($PropertyInfo$Name::preferred, annotation->preferred());
			put($PropertyInfo$Name::visualUpdate, annotation->visualUpdate());
			put($PropertyInfo$Name::description, $(annotation->description()));
			$var($StringArray, values, annotation->enumerationValues());
			try {
				$var($ObjectArray, array, $new($ObjectArray, 3 * $nc(values)->length));
				int32_t index = 0;
				{
					$var($StringArray, arr$, values);
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$var($String, value, arr$->get(i$));
						{
							$Class* type = info->method->getDeclaringClass();
							$var($String, name, value);
							int32_t pos = $nc(value)->lastIndexOf(u'.');
							if (pos > 0) {
								$assign(name, value->substring(0, pos));
								if (name->indexOf(u'.') < 0) {
									$var($String, pkg, $nc(type)->getName());
									$var($StringBuilder, var$0, $new($StringBuilder));
									int32_t var$1 = 1;
									int32_t var$3 = $nc(pkg)->lastIndexOf(u'.');
									int32_t var$2 = $Math::max(var$3, pkg->lastIndexOf(u'$'));
									var$0->append($($nc(pkg)->substring(0, var$1 + var$2)));
									var$0->append(name);
									$assign(name, $str(var$0));
								}
								type = $ClassFinder::findClass(name);
								$assign(name, value->substring(pos + 1));
							}
							$var($Field, field, $nc(type)->getField(name));
							bool var$4 = $Modifier::isStatic($nc(field)->getModifiers());
							if (var$4 && $nc(info->type)->isAssignableFrom(field->getType())) {
								array->set(index++, name);
								array->set(index++, $(field->get(nullptr)));
								array->set(index++, value);
							}
						}
					}
				}
				if (index == array->length) {
					put($PropertyInfo$Name::enumerationValues, array);
				}
			} catch ($Exception& ignored) {
				ignored->printStackTrace();
			}
			return true;
		}
	}
	return false;
}

$Class* PropertyInfo::getPropertyType() {
	return this->type;
}

$Method* PropertyInfo::getReadMethod() {
	return (this->read == nullptr) ? ($Method*)nullptr : this->read->method;
}

$Method* PropertyInfo::getWriteMethod() {
	return (this->write == nullptr) ? ($Method*)nullptr : this->write->method;
}

PropertyInfo* PropertyInfo::getIndexed() {
	return this->indexed;
}

bool PropertyInfo::isConstrained() {
	$useLocalObjectStack();
	if (this->write != nullptr) {
		if (PropertyInfo::VETO_EXCEPTION == nullptr) {
			$var($ClassArray, arr$, $nc(this->write->method)->getExceptionTypes());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$Class* type = arr$->get(i$);
				if ($$nc($nc(type)->getName())->equals(PropertyInfo::VETO_EXCEPTION_NAME)) {
					return true;
				}
			}
		} else if (this->write->isThrow(PropertyInfo::VETO_EXCEPTION)) {
			return true;
		}
	}
	return (this->indexed != nullptr) && this->indexed->isConstrained();
}

bool PropertyInfo::is($PropertyInfo$Name* name) {
	$var($Object, value, get(name));
	$init($PropertyInfo$Name);
	return ($instanceOf($Boolean, value)) ? $cast($Boolean, value)->booleanValue() : $PropertyInfo$Name::bound->equals(name);
}

$Object* PropertyInfo::get($PropertyInfo$Name* name) {
	return this->map == nullptr ? ($Object*)nullptr : this->map->get(name);
}

void PropertyInfo::put($PropertyInfo$Name* name, bool value) {
	if (value) {
		put(name, $Boolean::TRUE);
	}
}

void PropertyInfo::put($PropertyInfo$Name* name, $String* value) {
	if (0 < $nc(value)->length()) {
		put(name, $of(value));
	}
}

void PropertyInfo::put($PropertyInfo$Name* name, Object$* value) {
	if (this->map == nullptr) {
		$load($PropertyInfo$Name);
		$set(this, map, $new($EnumMap, $PropertyInfo$Name::class$));
	}
	$nc(this->map)->put(name, value);
}

$List* PropertyInfo::add($List* list$renamed, $Method* method, $Type* type) {
	$init(PropertyInfo);
	$useLocalObjectStack();
	$var($List, list, list$renamed);
	if (list == nullptr) {
		$assign(list, $new($ArrayList));
	}
	$nc(list)->add($$new($MethodInfo, method, type));
	return list;
}

bool PropertyInfo::isPrefix($String* name, $String* prefix) {
	$init(PropertyInfo);
	int32_t var$1 = $nc(name)->length();
	bool var$0 = var$1 > $nc(prefix)->length();
	return var$0 && name->startsWith(prefix);
}

PropertyInfo* PropertyInfo::getInfo($Map* map, $String* key, bool indexed) {
	$init(PropertyInfo);
	$var(PropertyInfo, info, $cast(PropertyInfo, $nc(map)->get(key)));
	if (info == nullptr) {
		$assign(info, $new(PropertyInfo));
		map->put(key, info);
	}
	if (!indexed) {
		return info;
	}
	if ($nc(info)->indexed == nullptr) {
		$set(info, indexed, $new(PropertyInfo));
	}
	return info->indexed;
}

$Map* PropertyInfo::get($Class* type) {
	$init(PropertyInfo);
	$useLocalObjectStack();
	$var($List, methods, $$nc($ClassInfo::get(type))->getMethods());
	if ($nc(methods)->isEmpty()) {
		return $Collections::emptyMap();
	}
	$var($Map, map, $cast($AbstractMap, $new($TreeMap)));
	{
		$var($Iterator, i$, methods->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, method, $cast($Method, i$->next()));
			if (!$Modifier::isStatic($nc(method)->getModifiers())) {
				$Class* returnType = method->getReturnType();
				$var($String, name, method->getName());
				switch (method->getParameterCount()) {
				case 0:
					{
						bool var$0 = $nc(returnType)->equals($Boolean::TYPE);
						if (var$0 && isPrefix(name, "is"_s)) {
							$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(2)), false));
							$set($nc(info), read, $new($MethodInfo, method, $Boolean::TYPE));
						} else {
							bool var$1 = !returnType->equals($Void::TYPE);
							if (var$1 && isPrefix(name, "get"_s)) {
								$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), false));
								$set($nc(info), readList, add($nc(info)->readList, method, $(method->getGenericReturnType())));
							}
						}
						break;
					}
				case 1:
					{
						bool var$2 = $nc(returnType)->equals($Void::TYPE);
						if (var$2 && isPrefix(name, "set"_s)) {
							$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), false));
							$set($nc(info), writeList, add($nc(info)->writeList, method, $nc($(method->getGenericParameterTypes()))->get(0)));
						} else {
							bool var$4 = !returnType->equals($Void::TYPE);
							bool var$3 = var$4 && $nc($nc($(method->getParameterTypes()))->get(0))->equals($Integer::TYPE);
							if (var$3 && isPrefix(name, "get"_s)) {
								$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), true));
								$set($nc(info), readList, add($nc(info)->readList, method, $(method->getGenericReturnType())));
							}
						}
						break;
					}
				case 2:
					{
						bool var$6 = $nc(returnType)->equals($Void::TYPE);
						bool var$5 = var$6 && $nc($nc($(method->getParameterTypes()))->get(0))->equals($Integer::TYPE);
						if (var$5 && isPrefix(name, "set"_s)) {
							$var(PropertyInfo, info, getInfo(map, $($nc(name)->substring(3)), true));
							$set($nc(info), writeList, add($nc(info)->writeList, method, $nc($(method->getGenericParameterTypes()))->get(1)));
						}
						break;
					}
				}
			}
		}
	}
	$var($Iterator, iterator, $$nc(map->values())->iterator());
	while ($nc(iterator)->hasNext()) {
		if (!$$sure(PropertyInfo, iterator->next())->initialize()) {
			iterator->remove();
		}
	}
	return !map->isEmpty() ? $Collections::unmodifiableMap(map) : $Collections::emptyMap();
}

void PropertyInfo::clinit$($Class* clazz) {
	$assignStatic(PropertyInfo::VETO_EXCEPTION_NAME, "java.beans.PropertyVetoException"_s);
	$beforeCallerSensitive();
	{
		$Class* type = nullptr;
		try {
			type = $Class::forName(PropertyInfo::VETO_EXCEPTION_NAME);
		} catch ($Exception& exception) {
			type = nullptr;
		}
		$assignStatic(PropertyInfo::VETO_EXCEPTION, type);
	}
}

PropertyInfo::PropertyInfo() {
}

$Class* PropertyInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"VETO_EXCEPTION_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyInfo, VETO_EXCEPTION_NAME)},
		{"VETO_EXCEPTION", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(PropertyInfo, VETO_EXCEPTION)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(PropertyInfo, type)},
		{"read", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(PropertyInfo, read)},
		{"write", "Lcom/sun/beans/introspect/MethodInfo;", nullptr, $PRIVATE, $field(PropertyInfo, write)},
		{"indexed", "Lcom/sun/beans/introspect/PropertyInfo;", nullptr, $PRIVATE, $field(PropertyInfo, indexed)},
		{"readList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;", $PRIVATE, $field(PropertyInfo, readList)},
		{"writeList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;", $PRIVATE, $field(PropertyInfo, writeList)},
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/beans/introspect/PropertyInfo$Name;Ljava/lang/Object;>;", $PRIVATE, $field(PropertyInfo, map)},
		{}
	};
	$1MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PropertyInfo, init$, void)},
		{"add", "(Ljava/util/List;Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/util/List;", "(Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/util/List<Lcom/sun/beans/introspect/MethodInfo;>;", $PRIVATE | $STATIC, $staticMethod(PropertyInfo, add, $List*, $List*, $Method*, $Type*)},
		{"get", "(Lcom/sun/beans/introspect/PropertyInfo$Name;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(PropertyInfo, get, $Object*, $PropertyInfo$Name*)},
		{"get", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;", $PUBLIC | $STATIC, $staticMethod(PropertyInfo, get, $Map*, $Class*)},
		{"getIndexed", "()Lcom/sun/beans/introspect/PropertyInfo;", nullptr, $PUBLIC, $method(PropertyInfo, getIndexed, PropertyInfo*)},
		{"getInfo", "(Ljava/util/Map;Ljava/lang/String;Z)Lcom/sun/beans/introspect/PropertyInfo;", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;Ljava/lang/String;Z)Lcom/sun/beans/introspect/PropertyInfo;", $PRIVATE | $STATIC, $staticMethod(PropertyInfo, getInfo, PropertyInfo*, $Map*, $String*, bool)},
		{"getPropertyType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $method(PropertyInfo, getPropertyType, $Class*)},
		{"getReadMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(PropertyInfo, getReadMethod, $Method*)},
		{"getWriteMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $method(PropertyInfo, getWriteMethod, $Method*)},
		{"initialize", "()Z", nullptr, $PRIVATE, $method(PropertyInfo, initialize, bool)},
		{"initialize", "(Lcom/sun/beans/introspect/MethodInfo;)Z", nullptr, $PRIVATE, $method(PropertyInfo, initialize, bool, $MethodInfo*)},
		{"is", "(Lcom/sun/beans/introspect/PropertyInfo$Name;)Z", nullptr, $PUBLIC, $method(PropertyInfo, is, bool, $PropertyInfo$Name*)},
		{"isConstrained", "()Z", nullptr, $PUBLIC, $method(PropertyInfo, isConstrained, bool)},
		{"isPrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(PropertyInfo, isPrefix, bool, $String*, $String*)},
		{"put", "(Lcom/sun/beans/introspect/PropertyInfo$Name;Z)V", nullptr, $PRIVATE, $method(PropertyInfo, put, void, $PropertyInfo$Name*, bool)},
		{"put", "(Lcom/sun/beans/introspect/PropertyInfo$Name;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(PropertyInfo, put, void, $PropertyInfo$Name*, $String*)},
		{"put", "(Lcom/sun/beans/introspect/PropertyInfo$Name;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(PropertyInfo, put, void, $PropertyInfo$Name*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.introspect.PropertyInfo$Name", "com.sun.beans.introspect.PropertyInfo", "Name", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$1ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.introspect.PropertyInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.beans.introspect.PropertyInfo$Name"
	};
	$loadClass(PropertyInfo, name, initialize, &classInfo$$, PropertyInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyInfo);
	});
	return class$;
}

$Class* PropertyInfo::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com
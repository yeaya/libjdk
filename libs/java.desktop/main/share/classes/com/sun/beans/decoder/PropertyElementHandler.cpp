#include <com/sun/beans/decoder/PropertyElementHandler.h>
#include <com/sun/beans/decoder/AccessorElementHandler.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/finder/MethodFinder.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/IndexedPropertyDescriptor.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

#undef GETTER
#undef SETTER
#undef TYPE

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $AccessorElementHandler = ::com::sun::beans::decoder::AccessorElementHandler;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $IndexedPropertyDescriptor = ::java::beans::IndexedPropertyDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Method = ::java::lang::reflect::Method;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$String* PropertyElementHandler::GETTER = nullptr;
$String* PropertyElementHandler::SETTER = nullptr;

void PropertyElementHandler::init$() {
	$AccessorElementHandler::init$();
}

void PropertyElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("index"_s)) {
		$set(this, index, $Integer::valueOf(value));
	} else {
		$AccessorElementHandler::addAttribute(name, value);
	}
}

bool PropertyElementHandler::isArgument() {
	return false;
}

$Object* PropertyElementHandler::getValue($String* name) {
	$useLocalObjectStack();
	try {
		return getPropertyValue($(getContextBean()), name, this->index);
	} catch ($Exception& exception) {
		$$nc(getOwner())->handleException(exception);
	}
	return nullptr;
}

void PropertyElementHandler::setValue($String* name, Object$* value) {
	$useLocalObjectStack();
	try {
		setPropertyValue($(getContextBean()), name, this->index, value);
	} catch ($Exception& exception) {
		$$nc(getOwner())->handleException(exception);
	}
}

$Object* PropertyElementHandler::getPropertyValue(Object$* bean, $String* name, $Integer* index) {
	$init(PropertyElementHandler);
	$useLocalObjectStack();
	$Class* type = $nc($of(bean))->getClass();
	if (index == nullptr) {
		return $MethodUtil::invoke($(findGetter(type, name, $$new($ClassArray, 0))), bean, $$new($ObjectArray, 0));
	} else if (type->isArray() && (name == nullptr)) {
		return $1Array::get(bean, index->intValue());
	} else {
		return $MethodUtil::invoke($(findGetter(type, name, $$new($ClassArray, {$Integer::TYPE}))), bean, $$new($ObjectArray, {index}));
	}
}

void PropertyElementHandler::setPropertyValue(Object$* bean, $String* name, $Integer* index, Object$* value) {
	$init(PropertyElementHandler);
	$useLocalObjectStack();
	$Class* type = $nc($of(bean))->getClass();
	$Class* param = (value != nullptr) ? $of(value)->getClass() : ($Class*)nullptr;
	if (index == nullptr) {
		$MethodUtil::invoke($(findSetter(type, name, $$new($ClassArray, {param}))), bean, $$new($ObjectArray, {value}));
	} else if (type->isArray() && (name == nullptr)) {
		$1Array::set(bean, index->intValue(), value);
	} else {
		$MethodUtil::invoke($(findSetter(type, name, $$new($ClassArray, {
			$Integer::TYPE,
			param
		}))), bean, $$new($ObjectArray, {
			index,
			value
		}));
	}
}

$Method* PropertyElementHandler::findGetter($Class* type, $String* name, $ClassArray* args) {
	$init(PropertyElementHandler);
	$useLocalObjectStack();
	if (name == nullptr) {
		return $MethodFinder::findInstanceMethod(type, PropertyElementHandler::GETTER, args);
	}
	$var($PropertyDescriptor, pd, getProperty(type, name));
	if ($nc(args)->length == 0) {
		$var($Method, method, $nc(pd)->getReadMethod());
		if (method != nullptr) {
			return method;
		}
	} else if ($instanceOf($IndexedPropertyDescriptor, pd)) {
		$var($IndexedPropertyDescriptor, ipd, $cast($IndexedPropertyDescriptor, pd));
		$var($Method, method, ipd->getIndexedReadMethod());
		if (method != nullptr) {
			return method;
		}
	}
	$throwNew($IntrospectionException, $$str({"Could not find getter for the "_s, name, " property"_s}));
}

$Method* PropertyElementHandler::findSetter($Class* type, $String* name, $ClassArray* args) {
	$init(PropertyElementHandler);
	$useLocalObjectStack();
	if (name == nullptr) {
		return $MethodFinder::findInstanceMethod(type, PropertyElementHandler::SETTER, args);
	}
	$var($PropertyDescriptor, pd, getProperty(type, name));
	if ($nc(args)->length == 1) {
		$var($Method, method, $nc(pd)->getWriteMethod());
		if (method != nullptr) {
			return method;
		}
	} else if ($instanceOf($IndexedPropertyDescriptor, pd)) {
		$var($IndexedPropertyDescriptor, ipd, $cast($IndexedPropertyDescriptor, pd));
		$var($Method, method, ipd->getIndexedWriteMethod());
		if (method != nullptr) {
			return method;
		}
	}
	$throwNew($IntrospectionException, $$str({"Could not find setter for the "_s, name, " property"_s}));
}

$PropertyDescriptor* PropertyElementHandler::getProperty($Class* type, $String* name) {
	$init(PropertyElementHandler);
	$useLocalObjectStack();
	{
		$var($PropertyDescriptorArray, arr$, $$nc($Introspector::getBeanInfo(type))->getPropertyDescriptors());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($PropertyDescriptor, pd, arr$->get(i$));
			if ($nc(name)->equals($($nc(pd)->getName()))) {
				return pd;
			}
		}
	}
	$throwNew($IntrospectionException, $$str({"Could not find the "_s, name, " property descriptor"_s}));
}

PropertyElementHandler::PropertyElementHandler() {
}

void PropertyElementHandler::clinit$($Class* clazz) {
	$assignStatic(PropertyElementHandler::GETTER, "get"_s);
	$assignStatic(PropertyElementHandler::SETTER, "set"_s);
}

$Class* PropertyElementHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GETTER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PropertyElementHandler, GETTER)},
		{"SETTER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PropertyElementHandler, SETTER)},
		{"index", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(PropertyElementHandler, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PropertyElementHandler, init$, void)},
		{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(PropertyElementHandler, addAttribute, void, $String*, $String*)},
		{"findGetter", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(PropertyElementHandler, findGetter, $Method*, $Class*, $String*, $ClassArray*), "java.beans.IntrospectionException,java.lang.NoSuchMethodException"},
		{"findSetter", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(PropertyElementHandler, findSetter, $Method*, $Class*, $String*, $ClassArray*), "java.beans.IntrospectionException,java.lang.NoSuchMethodException"},
		{"getProperty", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/beans/PropertyDescriptor;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/beans/PropertyDescriptor;", $PRIVATE | $STATIC, $staticMethod(PropertyElementHandler, getProperty, $PropertyDescriptor*, $Class*, $String*), "java.beans.IntrospectionException"},
		{"getPropertyValue", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(PropertyElementHandler, getPropertyValue, $Object*, Object$*, $String*, $Integer*), "java.lang.IllegalAccessException,java.beans.IntrospectionException,java.lang.reflect.InvocationTargetException,java.lang.NoSuchMethodException"},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(PropertyElementHandler, getValue, $Object*, $String*)},
		{"isArgument", "()Z", nullptr, $PROTECTED, $virtualMethod(PropertyElementHandler, isArgument, bool)},
		{"setPropertyValue", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PropertyElementHandler, setPropertyValue, void, Object$*, $String*, $Integer*, Object$*), "java.lang.IllegalAccessException,java.beans.IntrospectionException,java.lang.reflect.InvocationTargetException,java.lang.NoSuchMethodException"},
		{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(PropertyElementHandler, setValue, void, $String*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.PropertyElementHandler",
		"com.sun.beans.decoder.AccessorElementHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PropertyElementHandler, name, initialize, &classInfo$$, PropertyElementHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyElementHandler);
	});
	return class$;
}

$Class* PropertyElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/management/LockInfo.h>
#include <java/lang/management/MemoryNotificationInfo.h>
#include <java/lang/management/MemoryUsage.h>
#include <java/lang/management/MonitorInfo.h>
#include <java/lang/management/ThreadInfo.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/LockInfoCompositeData.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$1.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType$2.h>
#include <sun/management/MappedMXBeanType.h>
#include <sun/management/MemoryNotifInfoCompositeData.h>
#include <sun/management/MemoryUsageCompositeData.h>
#include <sun/management/MonitorInfoCompositeData.h>
#include <sun/management/ThreadInfoCompositeData.h>
#include <jcpp.h>

#undef COMPOSITE_DATA_CLASS
#undef TYPE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $LockInfo = ::java::lang::management::LockInfo;
using $MemoryNotificationInfo = ::java::lang::management::MemoryNotificationInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $MonitorInfo = ::java::lang::management::MonitorInfo;
using $ThreadInfo = ::java::lang::management::ThreadInfo;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $LockInfoCompositeData = ::sun::management::LockInfoCompositeData;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MappedMXBeanType$CompositeDataMXBeanType$1 = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType$1;
using $MappedMXBeanType$CompositeDataMXBeanType$2 = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType$2;
using $MemoryNotifInfoCompositeData = ::sun::management::MemoryNotifInfoCompositeData;
using $MemoryUsageCompositeData = ::sun::management::MemoryUsageCompositeData;
using $MonitorInfoCompositeData = ::sun::management::MonitorInfoCompositeData;
using $ThreadInfoCompositeData = ::sun::management::ThreadInfoCompositeData;

namespace sun {
	namespace management {

void MappedMXBeanType$CompositeDataMXBeanType::init$($Class* c) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$MappedMXBeanType::init$();
	this->isCompositeData = false;
	$set(this, fromMethod, nullptr);
	$set(this, toMethod, nullptr);
	$set(this, javaClass, c);
	$init($MappedMXBeanType);
	$set(this, mappedTypeClass, $MappedMXBeanType::COMPOSITE_DATA_CLASS);
	try {
		$set(this, fromMethod, $cast($Method, $AccessController::doPrivileged($$new($MappedMXBeanType$CompositeDataMXBeanType$1, this))));
	} catch ($PrivilegedActionException& e) {
	}
	if ($nc($MappedMXBeanType::COMPOSITE_DATA_CLASS)->isAssignableFrom(c)) {
		this->isCompositeData = true;
		$set(this, openType, nullptr);
	} else {
		this->isCompositeData = false;
		$var($MethodArray, methods, $cast($MethodArray, $AccessController::doPrivileged($$new($MappedMXBeanType$CompositeDataMXBeanType$2, this))));
		$var($List, names, $new($ArrayList));
		$var($List, types, $new($ArrayList));
		for (int32_t i = 0; i < $nc(methods)->length; ++i) {
			$var($Method, method, methods->get(i));
			$var($String, name, $nc(method)->getName());
			$var($Type, type, method->getGenericReturnType());
			$var($String, rest, nullptr);
			if ($nc(name)->startsWith("get"_s)) {
				$assign(rest, name->substring(3));
			} else if (name->startsWith("is"_s) && $instanceOf($Class, type) && $cast($Class, type) == $Boolean::TYPE) {
				$assign(rest, name->substring(2));
			} else {
				continue;
			}
			bool var$1 = $nc(rest)->isEmpty();
			bool var$0 = var$1 || $nc($(method->getParameterTypes()))->length > 0 || $equals(type, $Void::TYPE);
			if (var$0 || rest->equals("Class"_s)) {
				continue;
			}
			names->add($($MappedMXBeanType::decapitalize(rest)));
			types->add($(toOpenType(type)));
		}
		$var($StringArray, nameArray, $cast($StringArray, names->toArray($$new($StringArray, 0))));
		$var($String, var$2, $nc(c)->getName());
		$var($String, var$3, c->getName());
		$set(this, openType, $new($CompositeType, var$2, var$3, nameArray, nameArray, $$cast($OpenTypeArray, types->toArray($$new($OpenTypeArray, 0)))));
	}
}

$Type* MappedMXBeanType$CompositeDataMXBeanType::getJavaType() {
	return this->javaClass;
}

$String* MappedMXBeanType$CompositeDataMXBeanType::getName() {
	return $nc(this->javaClass)->getName();
}

$Object* MappedMXBeanType$CompositeDataMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->toMethod != nullptr) {
		try {
			return this->toMethod->invoke(nullptr, $$new($ObjectArray, {data}));
		} catch ($IllegalAccessException& e) {
			$throwNew($AssertionError, $of(e));
		} catch ($InvocationTargetException& e) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Failed to invoke "_s);
			var$0->append($(this->toMethod->getName()));
			var$0->append(" to convert "_s);
			var$0->append($($nc(this->javaClass)->getName()));
			var$0->append(" to CompositeData"_s);
			$var($OpenDataException, ode, $new($OpenDataException, $$str(var$0)));
			ode->initCause(e);
			$throw(ode);
		}
	}
	if ($instanceOf($MemoryUsage, data)) {
		return $MemoryUsageCompositeData::toCompositeData($cast($MemoryUsage, data));
	}
	if ($instanceOf($ThreadInfo, data)) {
		return $ThreadInfoCompositeData::toCompositeData($cast($ThreadInfo, data));
	}
	if ($instanceOf($LockInfo, data)) {
		if ($instanceOf($MonitorInfo, data)) {
			return $MonitorInfoCompositeData::toCompositeData($cast($MonitorInfo, data));
		}
		return $LockInfoCompositeData::toCompositeData($cast($LockInfo, data));
	}
	if ($instanceOf($MemoryNotificationInfo, data)) {
		return $MemoryNotifInfoCompositeData::toCompositeData($cast($MemoryNotificationInfo, data));
	}
	if (this->isCompositeData) {
		$var($CompositeData, cd, $cast($CompositeData, data));
		$var($CompositeType, ct, $nc(cd)->getCompositeType());
		$var($StringArray, itemNames, $cast($StringArray, $$nc($nc(ct)->keySet())->toArray($$new($StringArray, 0))));
		$var($ObjectArray, itemValues, cd->getAll(itemNames));
		return $of($new($CompositeDataSupport, ct, itemNames, itemValues));
	}
	$throwNew($OpenDataException, $$str({$($nc(this->javaClass)->getName()), " is not supported for platform MXBeans"_s}));
}

$Object* MappedMXBeanType$CompositeDataMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->fromMethod == nullptr) {
		$throwNew($AssertionError, $of("Does not support data conversion"_s));
	}
	try {
		return $nc(this->fromMethod)->invoke(nullptr, $$new($ObjectArray, {data}));
	} catch ($IllegalAccessException& e) {
		$throwNew($AssertionError, $of(e));
	} catch ($InvocationTargetException& e) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Failed to invoke "_s);
		var$0->append($($nc(this->fromMethod)->getName()));
		var$0->append(" to convert CompositeData  to "_s);
		var$0->append($($nc(this->javaClass)->getName()));
		$var($OpenDataException, ode, $new($OpenDataException, $$str(var$0)));
		ode->initCause(e);
		$throw(ode);
	}
	$shouldNotReachHere();
}

MappedMXBeanType$CompositeDataMXBeanType::MappedMXBeanType$CompositeDataMXBeanType() {
}

$Class* MappedMXBeanType$CompositeDataMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"javaClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MappedMXBeanType$CompositeDataMXBeanType, javaClass)},
		{"isCompositeData", "Z", nullptr, 0, $field(MappedMXBeanType$CompositeDataMXBeanType, isCompositeData)},
		{"fromMethod", "Ljava/lang/reflect/Method;", nullptr, 0, $field(MappedMXBeanType$CompositeDataMXBeanType, fromMethod)},
		{"toMethod", "Ljava/lang/reflect/Method;", nullptr, 0, $field(MappedMXBeanType$CompositeDataMXBeanType, toMethod)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(MappedMXBeanType$CompositeDataMXBeanType, init$, void, $Class*), "javax.management.openmbean.OpenDataException"},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(MappedMXBeanType$CompositeDataMXBeanType, getJavaType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType$CompositeDataMXBeanType, getName, $String*)},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$CompositeDataMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$CompositeDataMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$2", nullptr, nullptr, 0},
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$CompositeDataMXBeanType",
		"sun.management.MappedMXBeanType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType"
	};
	$loadClass(MappedMXBeanType$CompositeDataMXBeanType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$CompositeDataMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType$CompositeDataMXBeanType::class$ = nullptr;

	} // management
} // sun
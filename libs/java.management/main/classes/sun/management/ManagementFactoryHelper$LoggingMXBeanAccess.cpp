#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess.h>
#include <java/lang/Error.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <java/security/AccessController.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess$1.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef LOGGING_MXBEAN_CLASS_NAME
#undef LOG_MANAGER_CLASS
#undef LOG_MANAGER_CLASS_NAME

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $AccessController = ::java::security::AccessController;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ManagementFactoryHelper$LoggingMXBeanAccess$1 = ::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess$1;

namespace sun {
	namespace management {

$String* ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME = nullptr;
$String* ManagementFactoryHelper$LoggingMXBeanAccess::LOGGING_MXBEAN_CLASS_NAME = nullptr;
$Class* ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS = nullptr;

bool ManagementFactoryHelper$LoggingMXBeanAccess::isAvailable() {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	return ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS != nullptr;
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess::loadLoggingClass($String* className) {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	$beforeCallerSensitive();
	return $cast($Class, $AccessController::doPrivileged($$new($ManagementFactoryHelper$LoggingMXBeanAccess$1, className)));
}

$Map* ManagementFactoryHelper$LoggingMXBeanAccess::initMethodMap(Object$* impl) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (impl == nullptr) {
		return $Collections::emptyMap();
	}
	$Class* intfClass = loadLoggingClass(ManagementFactoryHelper$LoggingMXBeanAccess::LOGGING_MXBEAN_CLASS_NAME);
	$var($Map, methodsMap, $new($HashMap));
	{
		$var($MethodArray, arr$, $nc(intfClass)->getMethods());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			try {
				$load($PlatformLoggingMXBean);
				$var($String, var$0, $nc(m)->getName());
				$var($Method, specMethod, $PlatformLoggingMXBean::class$->getMethod(var$0, $(m->getParameterTypes())));
				if ($nc($nc(specMethod)->getReturnType())->isAssignableFrom(m->getReturnType())) {
					if (methodsMap->putIfAbsent($(m->getName()), m) != nullptr) {
						$throwNew($RuntimeException, $$str({"unexpected polymorphic method: "_s, $(m->getName())}));
					}
				}
			} catch ($NoSuchMethodException& x) {
				$throwNew($InternalError, x);
			}
		}
	}
	return $Collections::unmodifiableMap(methodsMap);
}

$Object* ManagementFactoryHelper$LoggingMXBeanAccess::getMXBeanImplementation() {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!isAvailable()) {
		$throwNew($NoClassDefFoundError, ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME);
	}
	try {
		$var($Method, m, $nc(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS)->getMethod("getLoggingMXBean"_s, $$new($ClassArray, 0)));
		return $nc(m)->invoke(nullptr, $$new($ObjectArray, 0));
	} catch ($NoSuchMethodException& x) {
		$throwNew($ExceptionInInitializerError, x);
	} catch ($IllegalAccessException& x) {
		$throwNew($ExceptionInInitializerError, x);
	} catch ($InvocationTargetException& x) {
		$throwNew($ExceptionInInitializerError, x);
	}
	$shouldNotReachHere();
}

void ManagementFactoryHelper$LoggingMXBeanAccess::init$() {
	$set(this, impl, getMXBeanImplementation());
	$set(this, methods, initMethodMap(this->impl));
}

$Object* ManagementFactoryHelper$LoggingMXBeanAccess::invoke($String* methodName, $ObjectArray* args) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Method, m, $cast($Method, $nc(this->methods)->get(methodName)));
	if (m == nullptr) {
		$throwNew($UnsupportedOperationException, methodName);
	}
	try {
		$var($Object, result, $nc(m)->invoke(this->impl, args));
		return result;
	} catch ($IllegalAccessException& ex) {
		$throwNew($UnsupportedOperationException, ex);
	} catch ($InvocationTargetException& ex) {
		$throw($(unwrap(ex)));
	}
	$shouldNotReachHere();
}

$RuntimeException* ManagementFactoryHelper$LoggingMXBeanAccess::unwrap($InvocationTargetException* x) {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	$var($Throwable, t, $nc(x)->getCause());
	if ($instanceOf($RuntimeException, t)) {
		return $cast($RuntimeException, t);
	}
	if ($instanceOf($Error, t)) {
		$throw($cast($Error, t));
	}
	return $new($UndeclaredThrowableException, t == nullptr ? $cast($Throwable, x) : t);
}

void ManagementFactoryHelper$LoggingMXBeanAccess::clinit$($Class* clazz) {
	$assignStatic(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME, "java.util.logging.LogManager"_s);
	$assignStatic(ManagementFactoryHelper$LoggingMXBeanAccess::LOGGING_MXBEAN_CLASS_NAME, "java.util.logging.LoggingMXBean"_s);
	$assignStatic(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS, ManagementFactoryHelper$LoggingMXBeanAccess::loadLoggingClass(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME));
}

ManagementFactoryHelper$LoggingMXBeanAccess::ManagementFactoryHelper$LoggingMXBeanAccess() {
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG_MANAGER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ManagementFactoryHelper$LoggingMXBeanAccess, LOG_MANAGER_CLASS_NAME)},
		{"LOGGING_MXBEAN_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ManagementFactoryHelper$LoggingMXBeanAccess, LOGGING_MXBEAN_CLASS_NAME)},
		{"LOG_MANAGER_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC | $FINAL, $staticField(ManagementFactoryHelper$LoggingMXBeanAccess, LOG_MANAGER_CLASS)},
		{"impl", "Ljava/lang/Object;", nullptr, $FINAL, $field(ManagementFactoryHelper$LoggingMXBeanAccess, impl)},
		{"methods", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $FINAL, $field(ManagementFactoryHelper$LoggingMXBeanAccess, methods)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ManagementFactoryHelper$LoggingMXBeanAccess, init$, void)},
		{"getMXBeanImplementation", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(ManagementFactoryHelper$LoggingMXBeanAccess, getMXBeanImplementation, $Object*)},
		{"initMethodMap", "(Ljava/lang/Object;)Ljava/util/Map;", "(Ljava/lang/Object;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $PRIVATE, $method(ManagementFactoryHelper$LoggingMXBeanAccess, initMethodMap, $Map*, Object$*)},
		{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;[Ljava/lang/Object;)TT;", $TRANSIENT, $method(ManagementFactoryHelper$LoggingMXBeanAccess, invoke, $Object*, $String*, $ObjectArray*)},
		{"isAvailable", "()Z", nullptr, $STATIC, $staticMethod(ManagementFactoryHelper$LoggingMXBeanAccess, isAvailable, bool)},
		{"loadLoggingClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(ManagementFactoryHelper$LoggingMXBeanAccess, loadLoggingClass, $Class*, $String*)},
		{"unwrap", "(Ljava/lang/reflect/InvocationTargetException;)Ljava/lang/RuntimeException;", nullptr, $PRIVATE | $STATIC, $staticMethod(ManagementFactoryHelper$LoggingMXBeanAccess, unwrap, $RuntimeException*, $InvocationTargetException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess", "sun.management.ManagementFactoryHelper", "LoggingMXBeanAccess", $STATIC | $FINAL},
		{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.ManagementFactoryHelper"
	};
	$loadClass(ManagementFactoryHelper$LoggingMXBeanAccess, name, initialize, &classInfo$$, ManagementFactoryHelper$LoggingMXBeanAccess::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactoryHelper$LoggingMXBeanAccess);
	});
	return class$;
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess::class$ = nullptr;

	} // management
} // sun
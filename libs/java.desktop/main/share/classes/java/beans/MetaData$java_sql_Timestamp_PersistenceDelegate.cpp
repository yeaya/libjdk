#include <java/beans/MetaData$java_sql_Timestamp_PersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData$java_util_Date_PersistenceDelegate.h>
#include <java/beans/MetaData.h>
#include <java/beans/Statement.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Encoder = ::java::beans::Encoder;
using $MetaData$java_util_Date_PersistenceDelegate = ::java::beans::MetaData$java_util_Date_PersistenceDelegate;
using $Statement = ::java::beans::Statement;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace beans {

$Method* MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$ = nullptr;

void MetaData$java_sql_Timestamp_PersistenceDelegate::init$() {
	$MetaData$java_util_Date_PersistenceDelegate::init$();
}

$Method* MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod() {
	$init(MetaData$java_sql_Timestamp_PersistenceDelegate);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName("java.sql.Timestamp"_s, true, $($ClassLoader::getPlatformClassLoader()));
		return c->getMethod("getNanos"_s, $$new($ClassArray, 0));
	} catch ($ClassNotFoundException& e) {
		return nullptr;
	} catch ($NoSuchMethodException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

int32_t MetaData$java_sql_Timestamp_PersistenceDelegate::getNanos(Object$* obj) {
	$init(MetaData$java_sql_Timestamp_PersistenceDelegate);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$ == nullptr) {
		$throwNew($AssertionError, $of("Should not get here"_s));
	}
	try {
		return $$sure($Integer, $nc(MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$)->invoke(obj, $$new($ObjectArray, 0)))->intValue();
	} catch ($InvocationTargetException& e) {
		$var($Throwable, cause, e->getCause());
		if ($instanceOf($RuntimeException, cause)) {
			$throw($cast($RuntimeException, cause));
		}
		if ($instanceOf($Error, cause)) {
			$throw($cast($Error, cause));
		}
		$throwNew($AssertionError, $of(e));
	} catch ($IllegalAccessException& iae) {
		$throwNew($AssertionError, $of(iae));
	}
	$shouldNotReachHere();
}

void MetaData$java_sql_Timestamp_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalObjectStack();
	int32_t nanos = getNanos(oldInstance);
	if (nanos != getNanos(newInstance)) {
		$nc(out)->writeStatement($$new($Statement, oldInstance, "setNanos"_s, $$new($ObjectArray, {$($Integer::valueOf(nanos))})));
	}
}

void MetaData$java_sql_Timestamp_PersistenceDelegate::clinit$($Class* clazz) {
	$assignStatic(MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod$, MetaData$java_sql_Timestamp_PersistenceDelegate::getNanosMethod());
}

MetaData$java_sql_Timestamp_PersistenceDelegate::MetaData$java_sql_Timestamp_PersistenceDelegate() {
}

$Class* MetaData$java_sql_Timestamp_PersistenceDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"getNanosMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetaData$java_sql_Timestamp_PersistenceDelegate, getNanosMethod$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MetaData$java_sql_Timestamp_PersistenceDelegate, init$, void)},
		{"getNanos", "(Ljava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MetaData$java_sql_Timestamp_PersistenceDelegate, getNanos, int32_t, Object$*)},
		{"getNanosMethod", "()Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticMethod(MetaData$java_sql_Timestamp_PersistenceDelegate, getNanosMethod, $Method*)},
		{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED, $virtualMethod(MetaData$java_sql_Timestamp_PersistenceDelegate, initialize, void, $Class*, Object$*, Object$*, $Encoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate", "java.beans.MetaData", "java_sql_Timestamp_PersistenceDelegate", $STATIC | $FINAL},
		{"java.beans.MetaData$java_util_Date_PersistenceDelegate", "java.beans.MetaData", "java_util_Date_PersistenceDelegate", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate",
		"java.beans.MetaData$java_util_Date_PersistenceDelegate",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$java_sql_Timestamp_PersistenceDelegate, name, initialize, &classInfo$$, MetaData$java_sql_Timestamp_PersistenceDelegate::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$java_sql_Timestamp_PersistenceDelegate);
	});
	return class$;
}

$Class* MetaData$java_sql_Timestamp_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java
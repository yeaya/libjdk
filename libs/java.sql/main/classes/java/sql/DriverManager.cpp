#include <java/sql/DriverManager.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/sql/Connection.h>
#include <java/sql/Driver.h>
#include <java/sql/DriverAction.h>
#include <java/sql/DriverInfo.h>
#include <java/sql/DriverManager$1.h>
#include <java/sql/DriverManager$2.h>
#include <java/sql/SQLException.h>
#include <java/sql/SQLPermission.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jcpp.h>

#undef DEREGISTER_DRIVER_PERMISSION
#undef JDBC_DRIVERS_PROPERTY
#undef SET_LOG_PERMISSION

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Connection = ::java::sql::Connection;
using $Driver = ::java::sql::Driver;
using $DriverAction = ::java::sql::DriverAction;
using $DriverInfo = ::java::sql::DriverInfo;
using $DriverManager$1 = ::java::sql::DriverManager$1;
using $DriverManager$2 = ::java::sql::DriverManager$2;
using $SQLException = ::java::sql::SQLException;
using $SQLPermission = ::java::sql::SQLPermission;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $Stream = ::java::util::stream::Stream;
using $Reflection = ::jdk::internal::reflect::Reflection;

namespace java {
	namespace sql {

$CompoundAttribute _DriverManager_MethodAnnotations_deregisterDriver1[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_drivers2[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_getConnection4[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_getConnection5[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_getConnection6[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_getDriver8[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_getDrivers9[] = {
	{"Ljdk/internal/reflect/CallerSensitive;", nullptr},
	{}
};

$NamedAttribute DriverManager_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_getLogStream11[] = {
	{"Ljava/lang/Deprecated;", DriverManager_Attribute_var$0},
	{}
};

$NamedAttribute DriverManager_Attribute_var$1[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _DriverManager_MethodAnnotations_setLogStream19[] = {
	{"Ljava/lang/Deprecated;", DriverManager_Attribute_var$1},
	{}
};

$FieldInfo _DriverManager_FieldInfo_[] = {
	{"registeredDrivers", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Ljava/util/concurrent/CopyOnWriteArrayList<Ljava/sql/DriverInfo;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DriverManager, registeredDrivers)},
	{"loginTimeout", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DriverManager, loginTimeout)},
	{"logWriter", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DriverManager, logWriter)},
	{"logStream", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DriverManager, logStream)},
	{"logSync", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DriverManager, logSync)},
	{"lockForInitDrivers", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DriverManager, lockForInitDrivers)},
	{"driversInitialized", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DriverManager, driversInitialized)},
	{"JDBC_DRIVERS_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DriverManager, JDBC_DRIVERS_PROPERTY)},
	{"SET_LOG_PERMISSION", "Ljava/sql/SQLPermission;", nullptr, $STATIC | $FINAL, $staticField(DriverManager, SET_LOG_PERMISSION)},
	{"DEREGISTER_DRIVER_PERMISSION", "Ljava/sql/SQLPermission;", nullptr, $STATIC | $FINAL, $staticField(DriverManager, DEREGISTER_DRIVER_PERMISSION)},
	{}
};

$MethodInfo _DriverManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DriverManager::*)()>(&DriverManager::init$))},
	{"deregisterDriver", "(Ljava/sql/Driver;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Driver*)>(&DriverManager::deregisterDriver)), "java.sql.SQLException", nullptr, _DriverManager_MethodAnnotations_deregisterDriver1},
	{"drivers", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/sql/Driver;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)()>(&DriverManager::drivers)), nullptr, nullptr, _DriverManager_MethodAnnotations_drivers2},
	{"ensureDriversInitialized", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DriverManager::ensureDriversInitialized))},
	{"getConnection", "(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Connection*(*)($String*,$Properties*)>(&DriverManager::getConnection)), "java.sql.SQLException", nullptr, _DriverManager_MethodAnnotations_getConnection4},
	{"getConnection", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Connection*(*)($String*,$String*,$String*)>(&DriverManager::getConnection)), "java.sql.SQLException", nullptr, _DriverManager_MethodAnnotations_getConnection5},
	{"getConnection", "(Ljava/lang/String;)Ljava/sql/Connection;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Connection*(*)($String*)>(&DriverManager::getConnection)), "java.sql.SQLException", nullptr, _DriverManager_MethodAnnotations_getConnection6},
	{"getConnection", "(Ljava/lang/String;Ljava/util/Properties;Ljava/lang/Class;)Ljava/sql/Connection;", "(Ljava/lang/String;Ljava/util/Properties;Ljava/lang/Class<*>;)Ljava/sql/Connection;", $PRIVATE | $STATIC, $method(static_cast<$Connection*(*)($String*,$Properties*,$Class*)>(&DriverManager::getConnection)), "java.sql.SQLException"},
	{"getDriver", "(Ljava/lang/String;)Ljava/sql/Driver;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Driver*(*)($String*)>(&DriverManager::getDriver)), "java.sql.SQLException", nullptr, _DriverManager_MethodAnnotations_getDriver8},
	{"getDrivers", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/sql/Driver;>;", $PUBLIC | $STATIC, $method(static_cast<$Enumeration*(*)()>(&DriverManager::getDrivers)), nullptr, nullptr, _DriverManager_MethodAnnotations_getDrivers9},
	{"getDrivers", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/sql/Driver;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Class*)>(&DriverManager::getDrivers))},
	{"getLogStream", "()Ljava/io/PrintStream;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$PrintStream*(*)()>(&DriverManager::getLogStream)), nullptr, nullptr, _DriverManager_MethodAnnotations_getLogStream11},
	{"getLogWriter", "()Ljava/io/PrintWriter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrintWriter*(*)()>(&DriverManager::getLogWriter))},
	{"getLoginTimeout", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DriverManager::getLoginTimeout))},
	{"isDriverAllowed", "(Ljava/sql/Driver;Ljava/lang/Class;)Z", "(Ljava/sql/Driver;Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Driver*,$Class*)>(&DriverManager::isDriverAllowed))},
	{"isDriverAllowed", "(Ljava/sql/Driver;Ljava/lang/ClassLoader;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Driver*,$ClassLoader*)>(&DriverManager::isDriverAllowed))},
	{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&DriverManager::println))},
	{"registerDriver", "(Ljava/sql/Driver;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Driver*)>(&DriverManager::registerDriver)), "java.sql.SQLException"},
	{"registerDriver", "(Ljava/sql/Driver;Ljava/sql/DriverAction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Driver*,$DriverAction*)>(&DriverManager::registerDriver)), "java.sql.SQLException"},
	{"setLogStream", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)($PrintStream*)>(&DriverManager::setLogStream)), nullptr, nullptr, _DriverManager_MethodAnnotations_setLogStream19},
	{"setLogWriter", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrintWriter*)>(&DriverManager::setLogWriter))},
	{"setLoginTimeout", "(I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t)>(&DriverManager::setLoginTimeout))},
	{}
};

$InnerClassInfo _DriverManager_InnerClassesInfo_[] = {
	{"java.sql.DriverManager$2", nullptr, nullptr, 0},
	{"java.sql.DriverManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DriverManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.DriverManager",
	"java.lang.Object",
	nullptr,
	_DriverManager_FieldInfo_,
	_DriverManager_MethodInfo_,
	nullptr,
	nullptr,
	_DriverManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.sql.DriverManager$2,java.sql.DriverManager$1"
};

$Object* allocate$DriverManager($Class* clazz) {
	return $of($alloc(DriverManager));
}

$CopyOnWriteArrayList* DriverManager::registeredDrivers = nullptr;
$volatile(int32_t) DriverManager::loginTimeout = 0;
$volatile($PrintWriter*) DriverManager::logWriter = nullptr;
$volatile($PrintStream*) DriverManager::logStream = nullptr;
$Object* DriverManager::logSync = nullptr;
$Object* DriverManager::lockForInitDrivers = nullptr;
$volatile(bool) DriverManager::driversInitialized = false;
$String* DriverManager::JDBC_DRIVERS_PROPERTY = nullptr;
$SQLPermission* DriverManager::SET_LOG_PERMISSION = nullptr;
$SQLPermission* DriverManager::DEREGISTER_DRIVER_PERMISSION = nullptr;

void DriverManager::init$() {
}

$PrintWriter* DriverManager::getLogWriter() {
	$init(DriverManager);
	return DriverManager::logWriter;
}

void DriverManager::setLogWriter($PrintWriter* out) {
	$init(DriverManager);
	$var($SecurityManager, sec, $System::getSecurityManager());
	if (sec != nullptr) {
		sec->checkPermission(DriverManager::SET_LOG_PERMISSION);
	}
	$assignStatic(DriverManager::logStream, nullptr);
	$assignStatic(DriverManager::logWriter, out);
}

$Connection* DriverManager::getConnection($String* url, $Properties* info) {
	$init(DriverManager);
	return (getConnection(url, info, $Reflection::getCallerClass()));
}

$Connection* DriverManager::getConnection($String* url, $String* user, $String* password) {
	$init(DriverManager);
	$var($Properties, info, $new($Properties));
	if (user != nullptr) {
		info->put("user"_s, user);
	}
	if (password != nullptr) {
		info->put("password"_s, password);
	}
	return (getConnection(url, info, $Reflection::getCallerClass()));
}

$Connection* DriverManager::getConnection($String* url) {
	$init(DriverManager);
	$var($Properties, info, $new($Properties));
	return (getConnection(url, info, $Reflection::getCallerClass()));
}

$Driver* DriverManager::getDriver($String* url) {
	$init(DriverManager);
	$useLocalCurrentObjectStackCache();
	println($$str({"DriverManager.getDriver(\""_s, url, "\")"_s}));
	ensureDriversInitialized();
	$Class* callerClass = $Reflection::getCallerClass();
	{
		$var($Iterator, i$, $nc(DriverManager::registeredDrivers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DriverInfo, aDriver, $cast($DriverInfo, i$->next()));
			{
				if (isDriverAllowed($nc(aDriver)->driver, callerClass)) {
					try {
						if ($nc($nc(aDriver)->driver)->acceptsURL(url)) {
							println($$str({"getDriver returning "_s, $($nc($of(aDriver->driver))->getClass()->getName())}));
							return (aDriver->driver);
						}
					} catch ($SQLException& sqe) {
					}
				} else {
					println($$str({"    skipping: "_s, $($nc($of($nc(aDriver)->driver))->getClass()->getName())}));
				}
			}
		}
	}
	println("getDriver: no suitable driver"_s);
	$throwNew($SQLException, "No suitable driver"_s, "08001"_s);
	$shouldNotReachHere();
}

void DriverManager::registerDriver($Driver* driver) {
	$init(DriverManager);
	registerDriver(driver, nullptr);
}

void DriverManager::registerDriver($Driver* driver, $DriverAction* da) {
	$init(DriverManager);
	$useLocalCurrentObjectStackCache();
	if (driver != nullptr) {
		$nc(DriverManager::registeredDrivers)->addIfAbsent($$new($DriverInfo, driver, da));
	} else {
		$throwNew($NullPointerException);
	}
	println($$str({"registerDriver: "_s, driver}));
}

void DriverManager::deregisterDriver($Driver* driver) {
	$init(DriverManager);
	$useLocalCurrentObjectStackCache();
	if (driver == nullptr) {
		return;
	}
	$var($SecurityManager, sec, $System::getSecurityManager());
	if (sec != nullptr) {
		sec->checkPermission(DriverManager::DEREGISTER_DRIVER_PERMISSION);
	}
	println($$str({"DriverManager.deregisterDriver: "_s, driver}));
	$var($DriverInfo, aDriver, $new($DriverInfo, driver, nullptr));
	$synchronized(DriverManager::lockForInitDrivers) {
		if ($nc(DriverManager::registeredDrivers)->contains(aDriver)) {
			if (isDriverAllowed(driver, $Reflection::getCallerClass())) {
				$var($DriverInfo, di, $cast($DriverInfo, $nc(DriverManager::registeredDrivers)->get($nc(DriverManager::registeredDrivers)->indexOf(aDriver))));
				if ($nc(di)->action() != nullptr) {
					$nc($(di->action()))->deregister();
				}
				$nc(DriverManager::registeredDrivers)->remove($of(aDriver));
			} else {
				$throwNew($SecurityException);
			}
		} else {
			println("    couldn\'t find driver to unload"_s);
		}
	}
}

$Enumeration* DriverManager::getDrivers() {
	$init(DriverManager);
	ensureDriversInitialized();
	return $Collections::enumeration($(getDrivers($Reflection::getCallerClass())));
}

$Stream* DriverManager::drivers() {
	$init(DriverManager);
	ensureDriversInitialized();
	return $nc($(getDrivers($Reflection::getCallerClass())))->stream();
}

$List* DriverManager::getDrivers($Class* callerClass) {
	$init(DriverManager);
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(DriverManager::registeredDrivers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DriverInfo, aDriver, $cast($DriverInfo, i$->next()));
			{
				if (isDriverAllowed($nc(aDriver)->driver, callerClass)) {
					result->add($nc(aDriver)->driver);
				} else {
					println($$str({"    skipping: "_s, $($nc($of($nc(aDriver)->driver))->getClass()->getName())}));
				}
			}
		}
	}
	return result;
}

void DriverManager::setLoginTimeout(int32_t seconds) {
	$init(DriverManager);
	DriverManager::loginTimeout = seconds;
}

int32_t DriverManager::getLoginTimeout() {
	$init(DriverManager);
	return (DriverManager::loginTimeout);
}

void DriverManager::setLogStream($PrintStream* out) {
	$init(DriverManager);
	$var($SecurityManager, sec, $System::getSecurityManager());
	if (sec != nullptr) {
		sec->checkPermission(DriverManager::SET_LOG_PERMISSION);
	}
	$assignStatic(DriverManager::logStream, out);
	if (out != nullptr) {
		$assignStatic(DriverManager::logWriter, $new($PrintWriter, static_cast<$OutputStream*>(out)));
	} else {
		$assignStatic(DriverManager::logWriter, nullptr);
	}
}

$PrintStream* DriverManager::getLogStream() {
	$init(DriverManager);
	return DriverManager::logStream;
}

void DriverManager::println($String* message) {
	$init(DriverManager);
	$synchronized(DriverManager::logSync) {
		if (DriverManager::logWriter != nullptr) {
			$nc(DriverManager::logWriter)->println(message);
			$nc(DriverManager::logWriter)->flush();
		}
	}
}

bool DriverManager::isDriverAllowed($Driver* driver, $Class* caller) {
	$init(DriverManager);
	$beforeCallerSensitive();
	$var($ClassLoader, callerCL, caller != nullptr ? $nc(caller)->getClassLoader() : ($ClassLoader*)nullptr);
	return isDriverAllowed(driver, callerCL);
}

bool DriverManager::isDriverAllowed($Driver* driver, $ClassLoader* classLoader) {
	$init(DriverManager);
	$beforeCallerSensitive();
	bool result = false;
	if (driver != nullptr) {
		$Class* aClass = nullptr;
		try {
			aClass = $Class::forName($($of(driver)->getClass()->getName()), true, classLoader);
		} catch ($Exception& ex) {
			result = false;
		}
		result = (aClass == $of(driver)->getClass()) ? true : false;
	}
	return result;
}

void DriverManager::ensureDriversInitialized() {
	$init(DriverManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (DriverManager::driversInitialized) {
		return;
	}
	$synchronized(DriverManager::lockForInitDrivers) {
		if (DriverManager::driversInitialized) {
			return;
		}
		$var($String, drivers, nullptr);
		try {
			$assign(drivers, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DriverManager$1)))));
		} catch ($Exception& ex) {
			$assign(drivers, nullptr);
		}
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DriverManager$2)));
		println($$str({"DriverManager.initialize: jdbc.drivers = "_s, drivers}));
		if (drivers != nullptr && !drivers->isEmpty()) {
			$var($StringArray, driversList, drivers->split(":"_s));
			println($$str({"number of Drivers:"_s, $$str(driversList->length)}));
			{
				$var($StringArray, arr$, driversList);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, aDriver, arr$->get(i$));
					{
						try {
							println($$str({"DriverManager.Initialize: loading "_s, aDriver}));
							$Class::forName(aDriver, true, $($ClassLoader::getSystemClassLoader()));
						} catch ($Exception& ex) {
							println($$str({"DriverManager.Initialize: load failed: "_s, ex}));
						}
					}
				}
			}
		}
		DriverManager::driversInitialized = true;
		println("JDBC DriverManager initialized"_s);
	}
}

$Connection* DriverManager::getConnection($String* url, $Properties* info, $Class* caller) {
	$init(DriverManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, callerCL, caller != nullptr ? $nc(caller)->getClassLoader() : ($ClassLoader*)nullptr);
	if (callerCL == nullptr || callerCL == $ClassLoader::getPlatformClassLoader()) {
		$assign(callerCL, $($Thread::currentThread())->getContextClassLoader());
	}
	if (url == nullptr) {
		$throwNew($SQLException, "The url cannot be null"_s, "08001"_s);
	}
	println($$str({"DriverManager.getConnection(\""_s, url, "\")"_s}));
	ensureDriversInitialized();
	$var($SQLException, reason, nullptr);
	{
		$var($Iterator, i$, $nc(DriverManager::registeredDrivers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DriverInfo, aDriver, $cast($DriverInfo, i$->next()));
			{
				if (isDriverAllowed($nc(aDriver)->driver, callerCL)) {
					try {
						println($$str({"    trying "_s, $($nc($of($nc(aDriver)->driver))->getClass()->getName())}));
						$var($Connection, con, $nc($nc(aDriver)->driver)->connect(url, info));
						if (con != nullptr) {
							println($$str({"getConnection returning "_s, $($nc($of(aDriver->driver))->getClass()->getName())}));
							return (con);
						}
					} catch ($SQLException& ex) {
						if (reason == nullptr) {
							$assign(reason, ex);
						}
					}
				} else {
					println($$str({"    skipping: "_s, $($nc($of($nc(aDriver)->driver))->getClass()->getName())}));
				}
			}
		}
	}
	if (reason != nullptr) {
		println($$str({"getConnection failed: "_s, reason}));
		$throw(reason);
	}
	println($$str({"getConnection: no suitable driver found for "_s, url}));
	$throwNew($SQLException, $$str({"No suitable driver found for "_s, url}), "08001"_s);
	$shouldNotReachHere();
}

void clinit$DriverManager($Class* class$) {
	$assignStatic(DriverManager::JDBC_DRIVERS_PROPERTY, "jdbc.drivers"_s);
	$assignStatic(DriverManager::registeredDrivers, $new($CopyOnWriteArrayList));
	DriverManager::loginTimeout = 0;
	$assignStatic(DriverManager::logWriter, nullptr);
	$assignStatic(DriverManager::logStream, nullptr);
	$assignStatic(DriverManager::logSync, $new($Object));
	$assignStatic(DriverManager::lockForInitDrivers, $new($Object));
	$assignStatic(DriverManager::SET_LOG_PERMISSION, $new($SQLPermission, "setLog"_s));
	$assignStatic(DriverManager::DEREGISTER_DRIVER_PERMISSION, $new($SQLPermission, "deregisterDriver"_s));
}

DriverManager::DriverManager() {
}

$Class* DriverManager::load$($String* name, bool initialize) {
	$loadClass(DriverManager, name, initialize, &_DriverManager_ClassInfo_, clinit$DriverManager, allocate$DriverManager);
	return class$;
}

$Class* DriverManager::class$ = nullptr;

	} // sql
} // java
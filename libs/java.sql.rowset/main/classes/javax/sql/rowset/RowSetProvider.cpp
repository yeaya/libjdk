#include <javax/sql/rowset/RowSetProvider.h>
#include <com/sun/rowset/RowSetFactoryImpl.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessControlException.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/sql/SQLException.h>
#include <java/util/Iterator.h>
#include <java/util/PropertyPermission.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <javax/sql/rowset/RowSetFactory.h>
#include <javax/sql/rowset/RowSetProvider$1.h>
#include <javax/sql/rowset/RowSetProvider$2.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef ROWSET_DEBUG_PROPERTY
#undef ROWSET_FACTORY_IMPL
#undef ROWSET_FACTORY_NAME

using $PermissionArray = $Array<::java::security::Permission>;
using $RowSetFactoryImpl = ::com::sun::rowset::RowSetFactoryImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessControlException = ::java::security::AccessControlException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SQLException = ::java::sql::SQLException;
using $Iterator = ::java::util::Iterator;
using $PropertyPermission = ::java::util::PropertyPermission;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $RowSetFactory = ::javax::sql::rowset::RowSetFactory;
using $RowSetProvider$1 = ::javax::sql::rowset::RowSetProvider$1;
using $RowSetProvider$2 = ::javax::sql::rowset::RowSetProvider$2;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace sql {
		namespace rowset {

$String* RowSetProvider::ROWSET_DEBUG_PROPERTY = nullptr;
$String* RowSetProvider::ROWSET_FACTORY_IMPL = nullptr;
$String* RowSetProvider::ROWSET_FACTORY_NAME = nullptr;
bool RowSetProvider::debug = false;

void RowSetProvider::init$() {
}

$RowSetFactory* RowSetProvider::newFactory() {
	$init(RowSetProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($RowSetFactory, factory, nullptr);
	$var($String, factoryClassName, nullptr);
	try {
		trace("Checking for Rowset System Property..."_s);
		$assign(factoryClassName, getSystemProperty(RowSetProvider::ROWSET_FACTORY_NAME));
		if (factoryClassName != nullptr) {
			trace($$str({"Found system property, value="_s, factoryClassName}));
			if (factoryClassName->equals(RowSetProvider::ROWSET_FACTORY_IMPL)) {
				return defaultRowSetFactory();
			}
			$var($Object, o, $nc(getFactoryClass(factoryClassName, nullptr, false))->newInstance());
			$assign(factory, $cast($RowSetFactory, o));
		}
	} catch ($Exception& e) {
		$throwNew($SQLException, $$str({"RowSetFactory: "_s, factoryClassName, " could not be instantiated: "_s}), e);
	}
	if (factory == nullptr) {
		$assign(factory, loadViaServiceLoader());
	}
	return factory == nullptr ? defaultRowSetFactory() : factory;
}

$RowSetFactory* RowSetProvider::defaultRowSetFactory() {
	$init(RowSetProvider);
	return $new($RowSetFactoryImpl);
}

$RowSetFactory* RowSetProvider::newFactory($String* factoryClassName, $ClassLoader* cl) {
	$init(RowSetProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	trace("***In newInstance()"_s);
	if (factoryClassName == nullptr) {
		$throwNew($SQLException, "Error: factoryClassName cannot be null"_s);
	}
	try {
		$ReflectUtil::checkPackageAccess(factoryClassName);
	} catch ($AccessControlException& e) {
		$throwNew($SQLException, "Access Exception"_s, e);
	}
	try {
		$Class* providerClass = getFactoryClass(factoryClassName, cl, false);
		$var($RowSetFactory, instance, $cast($RowSetFactory, $nc(providerClass)->newInstance()));
		if (RowSetProvider::debug) {
			trace($$str({"Created new instance of "_s, providerClass, " using ClassLoader: "_s, cl}));
		}
		return instance;
	} catch ($ClassNotFoundException& x) {
		$throwNew($SQLException, $$str({"Provider "_s, factoryClassName, " not found"_s}), x);
	} catch ($Exception& x) {
		$throwNew($SQLException, $$str({"Provider "_s, factoryClassName, " could not be instantiated: "_s, x}), x);
	}
	$shouldNotReachHere();
}

$ClassLoader* RowSetProvider::getContextClassLoader() {
	$init(RowSetProvider);
	$beforeCallerSensitive();
	return $cast($ClassLoader, $AccessController::doPrivileged($$new($RowSetProvider$1)));
}

$Class* RowSetProvider::getFactoryClass($String* factoryClassName, $ClassLoader* cl$renamed, bool doFallback) {
	$init(RowSetProvider);
	$useLocalObjectStack();
	$var($ClassLoader, cl, cl$renamed);
	$beforeCallerSensitive();
	$Class* factoryClass = nullptr;
	try {
		if (cl == nullptr) {
			$assign(cl, getContextClassLoader());
			if (cl == nullptr) {
				$throwNew($ClassNotFoundException);
			} else {
				factoryClass = cl->loadClass(factoryClassName);
			}
		} else {
			factoryClass = cl->loadClass(factoryClassName);
		}
	} catch ($ClassNotFoundException& e) {
		if (doFallback) {
			$load($RowSetFactory);
			factoryClass = $Class::forName(factoryClassName, true, $($RowSetFactory::class$->getClassLoader()));
		} else {
			$throw(e);
		}
	}
	$ReflectUtil::checkPackageAccess(factoryClass);
	return factoryClass;
}

$RowSetFactory* RowSetProvider::loadViaServiceLoader() {
	$init(RowSetProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($RowSetFactory, theFactory, nullptr);
	try {
		trace("***in loadViaServiceLoader():"_s);
		{
			$load($RowSetFactory);
			$var($Iterator, i$, $$nc($ServiceLoader::load($RowSetFactory::class$))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($RowSetFactory, factory, $cast($RowSetFactory, i$->next()));
				{
					trace($$str({" Loading done by the java.util.ServiceLoader :"_s, $($nc(factory)->getClass()->getName())}));
					$assign(theFactory, factory);
					break;
				}
			}
		}
	} catch ($ServiceConfigurationError& e) {
		$throwNew($SQLException, $$str({"RowSetFactory: Error locating RowSetFactory using Service Loader API: "_s, e}), e);
	}
	return theFactory;
}

$String* RowSetProvider::getSystemProperty($String* propName) {
	$init(RowSetProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, property, nullptr);
	try {
		$var($PrivilegedAction, var$0, $new($RowSetProvider$2, propName));
		$assign(property, $cast($String, $AccessController::doPrivileged(var$0, nullptr, $$new($PermissionArray, {$$new($PropertyPermission, propName, "read"_s)}))));
	} catch ($SecurityException& se) {
		trace($$str({"error getting "_s, propName, ":  "_s, se}));
		if (RowSetProvider::debug) {
			se->printStackTrace();
		}
	}
	return property;
}

void RowSetProvider::trace($String* msg) {
	$init(RowSetProvider);
	if (RowSetProvider::debug) {
		$nc($System::err)->println($$str({"###RowSets: "_s, msg}));
	}
}

void RowSetProvider::clinit$($Class* clazz) {
	$assignStatic(RowSetProvider::ROWSET_DEBUG_PROPERTY, "javax.sql.rowset.RowSetProvider.debug"_s);
	$assignStatic(RowSetProvider::ROWSET_FACTORY_IMPL, "com.sun.rowset.RowSetFactoryImpl"_s);
	$assignStatic(RowSetProvider::ROWSET_FACTORY_NAME, "javax.sql.rowset.RowSetFactory"_s);
	RowSetProvider::debug = true;
	{
		$var($String, val, RowSetProvider::getSystemProperty(RowSetProvider::ROWSET_DEBUG_PROPERTY));
		RowSetProvider::debug = val != nullptr && !"false"_s->equals(val);
	}
}

RowSetProvider::RowSetProvider() {
}

$Class* RowSetProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ROWSET_DEBUG_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RowSetProvider, ROWSET_DEBUG_PROPERTY)},
		{"ROWSET_FACTORY_IMPL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RowSetProvider, ROWSET_FACTORY_IMPL)},
		{"ROWSET_FACTORY_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RowSetProvider, ROWSET_FACTORY_NAME)},
		{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(RowSetProvider, debug)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(RowSetProvider, init$, void)},
		{"defaultRowSetFactory", "()Ljavax/sql/rowset/RowSetFactory;", nullptr, $PRIVATE | $STATIC, $staticMethod(RowSetProvider, defaultRowSetFactory, $RowSetFactory*)},
		{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $staticMethod(RowSetProvider, getContextClassLoader, $ClassLoader*), "java.lang.SecurityException"},
		{"getFactoryClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(RowSetProvider, getFactoryClass, $Class*, $String*, $ClassLoader*, bool), "java.lang.ClassNotFoundException"},
		{"getSystemProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(RowSetProvider, getSystemProperty, $String*, $String*)},
		{"loadViaServiceLoader", "()Ljavax/sql/rowset/RowSetFactory;", nullptr, $PRIVATE | $STATIC, $staticMethod(RowSetProvider, loadViaServiceLoader, $RowSetFactory*), "java.sql.SQLException"},
		{"newFactory", "()Ljavax/sql/rowset/RowSetFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(RowSetProvider, newFactory, $RowSetFactory*), "java.sql.SQLException"},
		{"newFactory", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/sql/rowset/RowSetFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(RowSetProvider, newFactory, $RowSetFactory*, $String*, $ClassLoader*), "java.sql.SQLException"},
		{"trace", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(RowSetProvider, trace, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.RowSetProvider$2", nullptr, nullptr, 0},
		{"javax.sql.rowset.RowSetProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.rowset.RowSetProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sql.rowset.RowSetProvider$2,javax.sql.rowset.RowSetProvider$1"
	};
	$loadClass(RowSetProvider, name, initialize, &classInfo$$, RowSetProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetProvider);
	});
	return class$;
}

$Class* RowSetProvider::class$ = nullptr;

		} // rowset
	} // sql
} // javax
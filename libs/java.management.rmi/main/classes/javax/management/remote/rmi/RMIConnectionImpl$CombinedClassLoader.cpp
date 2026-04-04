#include <javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper = ::javax::management::remote::rmi::RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$CombinedClassLoader::init$($ClassLoader* parent, $ClassLoader* defaultCL) {
	$ClassLoader::init$(parent);
	$set(this, defaultCL, $new($RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper, defaultCL));
}

$Class* RMIConnectionImpl$CombinedClassLoader::loadClass($String* name, bool resolve) {
	$useLocalObjectStack();
	$ReflectUtil::checkPackageAccess(name);
	try {
		$ClassLoader::loadClass(name, resolve);
	} catch ($Exception& e) {
		$var($Throwable, t, e);
		for (; t != nullptr; $assign(t, t->getCause())) {
			if ($instanceOf($SecurityException, t)) {
				$throw($equals(t, e) ? $cast($SecurityException, t) : $$new($SecurityException, $(t->getMessage()), e));
			}
		}
	}
	$Class* cl = $nc(this->defaultCL)->loadClass(name, resolve);
	return cl;
}

RMIConnectionImpl$CombinedClassLoader::RMIConnectionImpl$CombinedClassLoader() {
}

$Class* RMIConnectionImpl$CombinedClassLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultCL", "Ljavax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper;", nullptr, $FINAL, $field(RMIConnectionImpl$CombinedClassLoader, defaultCL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(RMIConnectionImpl$CombinedClassLoader, init$, void, $ClassLoader*, $ClassLoader*)},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(RMIConnectionImpl$CombinedClassLoader, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader", "javax.management.remote.rmi.RMIConnectionImpl", "CombinedClassLoader", $PRIVATE | $STATIC | $FINAL},
		{"javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper", "javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader", "ClassLoaderWrapper", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$CombinedClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$CombinedClassLoader);
	});
	return class$;
}

$Class* RMIConnectionImpl$CombinedClassLoader::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax
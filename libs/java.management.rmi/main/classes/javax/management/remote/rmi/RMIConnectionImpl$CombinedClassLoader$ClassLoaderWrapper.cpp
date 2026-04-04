#include <javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/remote/rmi/RMIConnectionImpl$CombinedClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper::init$($ClassLoader* cl) {
	$ClassLoader::init$(cl);
}

$Class* RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper::loadClass($String* name, bool resolve) {
	return $ClassLoader::loadClass(name, resolve);
}

RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper::RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper() {
}

$Class* RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper, init$, void, $ClassLoader*)},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader", "javax.management.remote.rmi.RMIConnectionImpl", "CombinedClassLoader", $PRIVATE | $STATIC | $FINAL},
		{"javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper", "javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader", "ClassLoaderWrapper", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper);
	});
	return class$;
}

$Class* RMIConnectionImpl$CombinedClassLoader$ClassLoaderWrapper::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax
#include <java/rmi/server/RMIClassLoaderSpi.h>

#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

$MethodInfo _RMIClassLoaderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RMIClassLoaderSpi, init$, void)},
	{"getClassAnnotation", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(RMIClassLoaderSpi, getClassAnnotation, $String*, $Class*)},
	{"getClassLoader", "(Ljava/lang/String;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RMIClassLoaderSpi, getClassLoader, $ClassLoader*, $String*), "java.net.MalformedURLException"},
	{"loadClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(RMIClassLoaderSpi, loadClass, $Class*, $String*, $String*, $ClassLoader*), "java.net.MalformedURLException,java.lang.ClassNotFoundException"},
	{"loadProxyClass", "(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(RMIClassLoaderSpi, loadProxyClass, $Class*, $String*, $StringArray*, $ClassLoader*), "java.net.MalformedURLException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _RMIClassLoaderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.rmi.server.RMIClassLoaderSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RMIClassLoaderSpi_MethodInfo_
};

$Object* allocate$RMIClassLoaderSpi($Class* clazz) {
	return $of($alloc(RMIClassLoaderSpi));
}

void RMIClassLoaderSpi::init$() {
}

RMIClassLoaderSpi::RMIClassLoaderSpi() {
}

$Class* RMIClassLoaderSpi::load$($String* name, bool initialize) {
	$loadClass(RMIClassLoaderSpi, name, initialize, &_RMIClassLoaderSpi_ClassInfo_, allocate$RMIClassLoaderSpi);
	return class$;
}

$Class* RMIClassLoaderSpi::class$ = nullptr;

		} // server
	} // rmi
} // java
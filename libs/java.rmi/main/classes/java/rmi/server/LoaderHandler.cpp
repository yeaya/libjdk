#include <java/rmi/server/LoaderHandler.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace java {
	namespace rmi {
		namespace server {

$String* LoaderHandler::packagePrefix = nullptr;

void LoaderHandler::clinit$($Class* clazz) {
	$assignStatic(LoaderHandler::packagePrefix, "sun.rmi.server"_s);
}

$Class* LoaderHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"packagePrefix", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LoaderHandler, packagePrefix)},
		{}
	};
	$CompoundAttribute getSecurityContextmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute loadClassmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute loadClassmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getSecurityContext", "(Ljava/lang/ClassLoader;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(LoaderHandler, getSecurityContext, $Object*, $ClassLoader*), nullptr, nullptr, getSecurityContextmethodAnnotations$$},
		{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(LoaderHandler, loadClass, $Class*, $String*), "java.net.MalformedURLException,java.lang.ClassNotFoundException", nullptr, loadClassmethodAnnotations$$},
		{"loadClass", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(LoaderHandler, loadClass, $Class*, $URL*, $String*), "java.net.MalformedURLException,java.lang.ClassNotFoundException", nullptr, loadClassmethodAnnotations$$$1},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.LoaderHandler",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LoaderHandler, name, initialize, &classInfo$$, LoaderHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LoaderHandler);
	});
	return class$;
}

$Class* LoaderHandler::class$ = nullptr;

		} // server
	} // rmi
} // java
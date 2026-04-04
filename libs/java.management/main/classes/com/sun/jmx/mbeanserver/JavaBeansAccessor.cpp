#include <com/sun/jmx/mbeanserver/JavaBeansAccessor.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/access/JavaBeansAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $JavaBeansAccess = ::jdk::internal::access::JavaBeansAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void JavaBeansAccessor::init$() {
}

$JavaBeansAccess* JavaBeansAccessor::getJavaBeansAccess() {
	$init(JavaBeansAccessor);
	return $SharedSecrets::getJavaBeansAccess();
}

bool JavaBeansAccessor::isAvailable() {
	$init(JavaBeansAccessor);
	return getJavaBeansAccess() != nullptr;
}

$Method* JavaBeansAccessor::getReadMethod($Class* clazz, $String* property) {
	$init(JavaBeansAccessor);
	$var($JavaBeansAccess, jba, getJavaBeansAccess());
	return jba != nullptr ? jba->getReadMethod(clazz, property) : ($Method*)nullptr;
}

$StringArray* JavaBeansAccessor::getConstructorPropertiesValue($Constructor* ctr) {
	$init(JavaBeansAccessor);
	$var($JavaBeansAccess, jba, getJavaBeansAccess());
	return jba != nullptr ? jba->getConstructorPropertiesValue(ctr) : ($StringArray*)nullptr;
}

void JavaBeansAccessor::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$Class::forName("java.beans.Introspector"_s, true, $(JavaBeansAccessor::class$->getClassLoader()));
		} catch ($ClassNotFoundException& ignore) {
		}
	}
}

JavaBeansAccessor::JavaBeansAccessor() {
}

$Class* JavaBeansAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JavaBeansAccessor, init$, void)},
		{"getConstructorPropertiesValue", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", $STATIC, $staticMethod(JavaBeansAccessor, getConstructorPropertiesValue, $StringArray*, $Constructor*)},
		{"getJavaBeansAccess", "()Ljdk/internal/access/JavaBeansAccess;", nullptr, $PRIVATE | $STATIC, $staticMethod(JavaBeansAccessor, getJavaBeansAccess, $JavaBeansAccess*)},
		{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $STATIC, $staticMethod(JavaBeansAccessor, getReadMethod, $Method*, $Class*, $String*), "java.lang.Exception"},
		{"isAvailable", "()Z", nullptr, $STATIC, $staticMethod(JavaBeansAccessor, isAvailable, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.JavaBeansAccessor",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaBeansAccessor, name, initialize, &classInfo$$, JavaBeansAccessor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavaBeansAccessor);
	});
	return class$;
}

$Class* JavaBeansAccessor::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
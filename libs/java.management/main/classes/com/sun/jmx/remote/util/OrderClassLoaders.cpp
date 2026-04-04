#include <com/sun/jmx/remote/util/OrderClassLoaders.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

void OrderClassLoaders::init$($ClassLoader* cl1, $ClassLoader* cl2) {
	$ClassLoader::init$(cl1);
	$set(this, cl2, cl2);
}

$Class* OrderClassLoaders::loadClass($String* name, bool resolve) {
	$ReflectUtil::checkPackageAccess(name);
	try {
		return $ClassLoader::loadClass(name, resolve);
	} catch ($ClassNotFoundException& cne) {
		if (this->cl2 != nullptr) {
			return this->cl2->loadClass(name);
		} else {
			$throw(cne);
		}
	}
	$shouldNotReachHere();
}

OrderClassLoaders::OrderClassLoaders() {
}

$Class* OrderClassLoaders::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cl2", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(OrderClassLoaders, cl2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(OrderClassLoaders, init$, void, $ClassLoader*, $ClassLoader*)},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(OrderClassLoaders, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.remote.util.OrderClassLoaders",
		"java.lang.ClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OrderClassLoaders, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OrderClassLoaders);
	});
	return class$;
}

$Class* OrderClassLoaders::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com
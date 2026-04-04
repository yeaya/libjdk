#include <javax/management/DefaultLoaderRepository.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/loading/DefaultLoaderRepository.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultLoaderRepository = ::javax::management::loading::DefaultLoaderRepository;

namespace javax {
	namespace management {

void DefaultLoaderRepository::init$() {
}

$Class* DefaultLoaderRepository::loadClass($String* className) {
	return $DefaultLoaderRepository::loadClass(className);
}

$Class* DefaultLoaderRepository::loadClassWithout($ClassLoader* loader, $String* className) {
	return $DefaultLoaderRepository::loadClassWithout(loader, className);
}

DefaultLoaderRepository::DefaultLoaderRepository() {
}

$Class* DefaultLoaderRepository::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultLoaderRepository, init$, void)},
		{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(DefaultLoaderRepository, loadClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"loadClassWithout", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(DefaultLoaderRepository, loadClassWithout, $Class*, $ClassLoader*, $String*), "java.lang.ClassNotFoundException"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.DefaultLoaderRepository",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DefaultLoaderRepository, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultLoaderRepository);
	});
	return class$;
}

$Class* DefaultLoaderRepository::class$ = nullptr;

	} // management
} // javax
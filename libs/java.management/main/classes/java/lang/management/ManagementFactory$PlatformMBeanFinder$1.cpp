#include <java/lang/management/ManagementFactory$PlatformMBeanFinder$1.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory$PlatformMBeanFinder.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ServiceLoader.h>
#include <sun/management/spi/PlatformMBeanProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServiceLoader = ::java::util::ServiceLoader;
using $PlatformMBeanProvider = ::sun::management::spi::PlatformMBeanProvider;

namespace java {
	namespace lang {
		namespace management {

void ManagementFactory$PlatformMBeanFinder$1::init$() {
}

$Object* ManagementFactory$PlatformMBeanFinder$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($List, all, $new($ArrayList));
	{
		$load($PlatformMBeanProvider);
		$var($Iterator, i$, $$nc($ServiceLoader::loadInstalled($PlatformMBeanProvider::class$))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PlatformMBeanProvider, provider, $cast($PlatformMBeanProvider, i$->next()));
			{
				all->add(provider);
			}
		}
	}
	all->add($$new($DefaultPlatformMBeanProvider));
	return all;
}

ManagementFactory$PlatformMBeanFinder$1::ManagementFactory$PlatformMBeanFinder$1() {
}

$Class* ManagementFactory$PlatformMBeanFinder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ManagementFactory$PlatformMBeanFinder$1, init$, void)},
		{"run", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider;>;", $PUBLIC, $virtualMethod(ManagementFactory$PlatformMBeanFinder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.ManagementFactory$PlatformMBeanFinder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.ManagementFactory$PlatformMBeanFinder", "java.lang.management.ManagementFactory", "PlatformMBeanFinder", $PRIVATE | $STATIC},
		{"java.lang.management.ManagementFactory$PlatformMBeanFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.ManagementFactory$PlatformMBeanFinder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.management.ManagementFactory"
	};
	$loadClass(ManagementFactory$PlatformMBeanFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$PlatformMBeanFinder$1);
	});
	return class$;
}

$Class* ManagementFactory$PlatformMBeanFinder$1::class$ = nullptr;

		} // management
	} // lang
} // java
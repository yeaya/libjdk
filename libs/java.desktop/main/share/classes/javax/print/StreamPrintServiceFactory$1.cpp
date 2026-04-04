#include <javax/print/StreamPrintServiceFactory$1.h>
#include <java/lang/SecurityManager.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;

namespace javax {
	namespace print {

void StreamPrintServiceFactory$1::init$() {
}

$Object* StreamPrintServiceFactory$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($StreamPrintServiceFactory);
	$var($Iterator, iterator, $$nc($ServiceLoader::load($StreamPrintServiceFactory::class$))->iterator());
	$var($ArrayList, lof, $StreamPrintServiceFactory::getListOfFactories());
	while ($nc(iterator)->hasNext()) {
		try {
			$nc(lof)->add($$cast($StreamPrintServiceFactory, iterator->next()));
		} catch ($ServiceConfigurationError& err) {
			if ($System::getSecurityManager() != nullptr) {
				err->printStackTrace();
			} else {
				$throw(err);
			}
		}
	}
	return nullptr;
}

StreamPrintServiceFactory$1::StreamPrintServiceFactory$1() {
}

$Class* StreamPrintServiceFactory$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StreamPrintServiceFactory$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StreamPrintServiceFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.print.StreamPrintServiceFactory",
		"getAllFactories",
		"()Ljava/util/ArrayList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.StreamPrintServiceFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.StreamPrintServiceFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.StreamPrintServiceFactory"
	};
	$loadClass(StreamPrintServiceFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamPrintServiceFactory$1);
	});
	return class$;
}

$Class* StreamPrintServiceFactory$1::class$ = nullptr;

	} // print
} // javax
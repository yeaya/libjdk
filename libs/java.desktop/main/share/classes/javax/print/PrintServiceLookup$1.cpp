#include <javax/print/PrintServiceLookup$1.h>
#include <java/lang/SecurityManager.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <javax/print/PrintServiceLookup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $PrintServiceLookup = ::javax::print::PrintServiceLookup;

namespace javax {
	namespace print {

void PrintServiceLookup$1::init$() {
}

$Object* PrintServiceLookup$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($PrintServiceLookup);
	$var($Iterator, iterator, $$nc($ServiceLoader::load($PrintServiceLookup::class$))->iterator());
	$var($ArrayList, los, $PrintServiceLookup::getListOfLookupServices());
	while ($nc(iterator)->hasNext()) {
		try {
			$nc(los)->add($$cast($PrintServiceLookup, iterator->next()));
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

PrintServiceLookup$1::PrintServiceLookup$1() {
}

$Class* PrintServiceLookup$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PrintServiceLookup$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintServiceLookup$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.print.PrintServiceLookup",
		"getAllLookupServices",
		"()Ljava/util/ArrayList;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.PrintServiceLookup$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.PrintServiceLookup$1",
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
		"javax.print.PrintServiceLookup"
	};
	$loadClass(PrintServiceLookup$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceLookup$1);
	});
	return class$;
}

$Class* PrintServiceLookup$1::class$ = nullptr;

	} // print
} // javax
#include <sun/util/logging/resources/logging.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace util {
		namespace logging {
			namespace resources {

void logging::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"All"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			"Config"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			"Fine"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			"Finer"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			"Finest"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			"Info"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			"Off"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Severe"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			"Warning"_s
		})
	});
}

logging::logging() {
}

$Class* logging::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging);
	});
	return class$;
}

$Class* logging::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
#include <sun/util/logging/resources/logging_sv.h>
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

void logging_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"Alla"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			"Konfig"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			"Fin"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			"Finare"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			"Finaste"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			"Info"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			"Av"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Allvarlig"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			"Varning"_s
		})
	});
}

logging_sv::logging_sv() {
}

$Class* logging_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_sv);
	});
	return class$;
}

$Class* logging_sv::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
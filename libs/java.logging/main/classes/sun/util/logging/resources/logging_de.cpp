#include <sun/util/logging/resources/logging_de.h>
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

void logging_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_de::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"Alle"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			"Konfiguration"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			"Fein"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			"Feiner"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			"Am feinsten"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			"Information"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			"Deaktiviert"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Schwerwiegend"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			"Warnung"_s
		})
	});
}

logging_de::logging_de() {
}

$Class* logging_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_de);
	});
	return class$;
}

$Class* logging_de::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
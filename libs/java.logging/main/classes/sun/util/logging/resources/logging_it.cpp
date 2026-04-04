#include <sun/util/logging/resources/logging_it.h>
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

void logging_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"Tutto"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			"Configurazione"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			"Buono"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			"Migliore"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			"Ottimale"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			"Informazioni"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			"Non attivo"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Grave"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			"Avvertenza"_s
		})
	});
}

logging_it::logging_it() {
}

$Class* logging_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_it);
	});
	return class$;
}

$Class* logging_it::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
#include <sun/util/logging/resources/logging_es.h>
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

void logging_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_es::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			"Todo"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			"Configurar"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			"Detallado"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			"Muy Detallado"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			u"Más Detallado"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			u"Información"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			"Desactivado"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			"Grave"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			"Advertencia"_s
		})
	});
}

logging_es::logging_es() {
}

$Class* logging_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_es",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_es);
	});
	return class$;
}

$Class* logging_es::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
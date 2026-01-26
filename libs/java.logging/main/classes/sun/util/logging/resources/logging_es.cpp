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

$MethodInfo _logging_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(logging_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _logging_es_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_es",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_es_MethodInfo_
};

$Object* allocate$logging_es($Class* clazz) {
	return $of($alloc(logging_es));
}

void logging_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("Todo"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of("Configurar"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of("Detallado"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of("Muy Detallado"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of(u"Más Detallado"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of(u"Información"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of("Desactivado"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of("Advertencia"_s)
		})
	});
}

logging_es::logging_es() {
}

$Class* logging_es::load$($String* name, bool initialize) {
	$loadClass(logging_es, name, initialize, &_logging_es_ClassInfo_, allocate$logging_es);
	return class$;
}

$Class* logging_es::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
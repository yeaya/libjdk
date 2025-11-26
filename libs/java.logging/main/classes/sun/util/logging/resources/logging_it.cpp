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

$MethodInfo _logging_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_it::*)()>(&logging_it::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_it_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_it_MethodInfo_
};

$Object* allocate$logging_it($Class* clazz) {
	return $of($alloc(logging_it));
}

void logging_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("Tutto"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of("Configurazione"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of("Buono"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of("Migliore"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of("Ottimale"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of("Informazioni"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of("Non attivo"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of("Avvertenza"_s)
		})
	});
}

logging_it::logging_it() {
}

$Class* logging_it::load$($String* name, bool initialize) {
	$loadClass(logging_it, name, initialize, &_logging_it_ClassInfo_, allocate$logging_it);
	return class$;
}

$Class* logging_it::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
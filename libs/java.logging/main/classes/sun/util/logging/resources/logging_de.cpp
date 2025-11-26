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

$MethodInfo _logging_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_de::*)()>(&logging_de::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_de_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_de",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_de_MethodInfo_
};

$Object* allocate$logging_de($Class* clazz) {
	return $of($alloc(logging_de));
}

void logging_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("Alle"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of("Konfiguration"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of("Fein"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of("Feiner"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of("Am feinsten"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of("Information"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of("Deaktiviert"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Schwerwiegend"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of("Warnung"_s)
		})
	});
}

logging_de::logging_de() {
}

$Class* logging_de::load$($String* name, bool initialize) {
	$loadClass(logging_de, name, initialize, &_logging_de_ClassInfo_, allocate$logging_de);
	return class$;
}

$Class* logging_de::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
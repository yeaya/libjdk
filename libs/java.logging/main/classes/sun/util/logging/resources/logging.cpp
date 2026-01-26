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

$MethodInfo _logging_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(logging, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _logging_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_MethodInfo_
};

$Object* allocate$logging($Class* clazz) {
	return $of($alloc(logging));
}

void logging::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("All"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of("Config"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of("Fine"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of("Finer"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of("Finest"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of("Info"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of("Off"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Severe"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of("Warning"_s)
		})
	});
}

logging::logging() {
}

$Class* logging::load$($String* name, bool initialize) {
	$loadClass(logging, name, initialize, &_logging_ClassInfo_, allocate$logging);
	return class$;
}

$Class* logging::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
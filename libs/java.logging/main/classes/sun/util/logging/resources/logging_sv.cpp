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

$MethodInfo _logging_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(logging_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _logging_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_sv_MethodInfo_
};

$Object* allocate$logging_sv($Class* clazz) {
	return $of($alloc(logging_sv));
}

void logging_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("Alla"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of("Konfig"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of("Fin"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of("Finare"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of("Finaste"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of("Info"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of("Av"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Allvarlig"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of("Varning"_s)
		})
	});
}

logging_sv::logging_sv() {
}

$Class* logging_sv::load$($String* name, bool initialize) {
	$loadClass(logging_sv, name, initialize, &_logging_sv_ClassInfo_, allocate$logging_sv);
	return class$;
}

$Class* logging_sv::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
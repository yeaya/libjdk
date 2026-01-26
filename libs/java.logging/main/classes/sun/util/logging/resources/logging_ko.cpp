#include <sun/util/logging/resources/logging_ko.h>

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

$MethodInfo _logging_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(logging_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _logging_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_ko_MethodInfo_
};

$Object* allocate$logging_ko($Class* clazz) {
	return $of($alloc(logging_ko));
}

void logging_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of(u"모두"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of(u"구성"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of(u"미세"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of(u"보다 미세"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of(u"가장 미세"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of(u"정보"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of(u"해제"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of(u"심각"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of(u"경고"_s)
		})
	});
}

logging_ko::logging_ko() {
}

$Class* logging_ko::load$($String* name, bool initialize) {
	$loadClass(logging_ko, name, initialize, &_logging_ko_ClassInfo_, allocate$logging_ko);
	return class$;
}

$Class* logging_ko::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
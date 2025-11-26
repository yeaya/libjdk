#include <sun/util/logging/resources/logging_ja.h>

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

$MethodInfo _logging_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_ja::*)()>(&logging_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_ja_MethodInfo_
};

$Object* allocate$logging_ja($Class* clazz) {
	return $of($alloc(logging_ja));
}

void logging_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of(u"\u3059\u3079\u3066"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of(u"\u69cb\u6210"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of(u"\u666e\u901a"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of(u"\u8a73\u7d30"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of(u"\u6700\u3082\u8a73\u7d30"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of(u"\u60c5\u5831"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of(u"\u30aa\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of(u"\u91cd\u5927"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of(u"\u8b66\u544a"_s)
		})
	});
}

logging_ja::logging_ja() {
}

$Class* logging_ja::load$($String* name, bool initialize) {
	$loadClass(logging_ja, name, initialize, &_logging_ja_ClassInfo_, allocate$logging_ja);
	return class$;
}

$Class* logging_ja::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
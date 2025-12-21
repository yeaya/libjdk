#include <sun/util/logging/resources/logging_zh_HK.h>

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

$MethodInfo _logging_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_zh_HK::*)()>(&logging_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_zh_HK_MethodInfo_
};

$Object* allocate$logging_zh_HK($Class* clazz) {
	return $of($alloc(logging_zh_HK));
}

void logging_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of(u"所有"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of(u"組態"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of(u"詳細"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of(u"較詳細"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of(u"最詳細"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of(u"資訊"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of(u"關閉"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of(u"嚴重"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of(u"警告"_s)
		})
	});
}

logging_zh_HK::logging_zh_HK() {
}

$Class* logging_zh_HK::load$($String* name, bool initialize) {
	$loadClass(logging_zh_HK, name, initialize, &_logging_zh_HK_ClassInfo_, allocate$logging_zh_HK);
	return class$;
}

$Class* logging_zh_HK::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
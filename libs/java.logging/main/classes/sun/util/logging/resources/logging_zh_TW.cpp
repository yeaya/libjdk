#include <sun/util/logging/resources/logging_zh_TW.h>

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

$MethodInfo _logging_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(logging_zh_TW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_zh_TW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _logging_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_zh_TW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_zh_TW_MethodInfo_
};

$Object* allocate$logging_zh_TW($Class* clazz) {
	return $of($alloc(logging_zh_TW));
}

void logging_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_zh_TW::getContents() {
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

logging_zh_TW::logging_zh_TW() {
}

$Class* logging_zh_TW::load$($String* name, bool initialize) {
	$loadClass(logging_zh_TW, name, initialize, &_logging_zh_TW_ClassInfo_, allocate$logging_zh_TW);
	return class$;
}

$Class* logging_zh_TW::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
#include <sun/util/logging/resources/logging_zh_CN.h>

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

$MethodInfo _logging_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_zh_CN::*)()>(&logging_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_zh_CN_MethodInfo_
};

$Object* allocate$logging_zh_CN($Class* clazz) {
	return $of($alloc(logging_zh_CN));
}

void logging_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of(u"全部"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of(u"配置"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of(u"详细"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of(u"较详细"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of(u"非常详细"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of(u"信息"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of(u"禁用"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of(u"严重"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of(u"警告"_s)
		})
	});
}

logging_zh_CN::logging_zh_CN() {
}

$Class* logging_zh_CN::load$($String* name, bool initialize) {
	$loadClass(logging_zh_CN, name, initialize, &_logging_zh_CN_ClassInfo_, allocate$logging_zh_CN);
	return class$;
}

$Class* logging_zh_CN::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
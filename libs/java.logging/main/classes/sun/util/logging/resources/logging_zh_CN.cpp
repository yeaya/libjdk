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

void logging_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			u"全部"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			u"配置"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			u"详细"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			u"较详细"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			u"非常详细"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			u"信息"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			u"禁用"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			u"严重"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			u"警告"_s
		})
	});
}

logging_zh_CN::logging_zh_CN() {
}

$Class* logging_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_zh_CN);
	});
	return class$;
}

$Class* logging_zh_CN::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
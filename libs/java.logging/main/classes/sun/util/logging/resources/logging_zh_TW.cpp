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

void logging_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_zh_TW::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			u"所有"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			u"組態"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			u"詳細"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			u"較詳細"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			u"最詳細"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			u"資訊"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			u"關閉"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			u"嚴重"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			u"警告"_s
		})
	});
}

logging_zh_TW::logging_zh_TW() {
}

$Class* logging_zh_TW::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_zh_TW",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_zh_TW, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_zh_TW);
	});
	return class$;
}

$Class* logging_zh_TW::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
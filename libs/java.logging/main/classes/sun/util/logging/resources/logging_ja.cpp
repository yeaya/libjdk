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

void logging_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			u"すべて"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			u"構成"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			u"普通"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			u"詳細"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			u"最も詳細"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			u"情報"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			u"オフ"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			u"重大"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			u"警告"_s
		})
	});
}

logging_ja::logging_ja() {
}

$Class* logging_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_ja);
	});
	return class$;
}

$Class* logging_ja::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
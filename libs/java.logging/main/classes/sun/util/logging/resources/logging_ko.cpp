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

void logging_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_ko::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ALL"_s,
			u"모두"_s
		}),
		$$new($ObjectArray, {
			"CONFIG"_s,
			u"구성"_s
		}),
		$$new($ObjectArray, {
			"FINE"_s,
			u"미세"_s
		}),
		$$new($ObjectArray, {
			"FINER"_s,
			u"보다 미세"_s
		}),
		$$new($ObjectArray, {
			"FINEST"_s,
			u"가장 미세"_s
		}),
		$$new($ObjectArray, {
			"INFO"_s,
			u"정보"_s
		}),
		$$new($ObjectArray, {
			"OFF"_s,
			u"해제"_s
		}),
		$$new($ObjectArray, {
			"SEVERE"_s,
			u"심각"_s
		}),
		$$new($ObjectArray, {
			"WARNING"_s,
			u"경고"_s
		})
	});
}

logging_ko::logging_ko() {
}

$Class* logging_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(logging_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(logging_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.logging.resources.logging_ko",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(logging_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(logging_ko);
	});
	return class$;
}

$Class* logging_ko::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
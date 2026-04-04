#include <sun/text/resources/ext/CollationData_ca.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void CollationData_ca::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_ca::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		"@"_s
	})});
}

CollationData_ca::CollationData_ca() {
}

$Class* CollationData_ca::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_ca, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_ca, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_ca",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_ca, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_ca);
	});
	return class$;
}

$Class* CollationData_ca::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
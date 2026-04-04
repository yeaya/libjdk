#include <sun/text/resources/ext/CollationData_sq.h>
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

void CollationData_sq::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sq::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		"@"_s
	})});
}

CollationData_sq::CollationData_sq() {
}

$Class* CollationData_sq::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_sq, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_sq, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_sq",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_sq, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_sq);
	});
	return class$;
}

$Class* CollationData_sq::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
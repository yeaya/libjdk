#include <sun/text/resources/ext/CollationData_sv.h>
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

void CollationData_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sv::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& Z < å , Å< ä , Ä < a̋, A̋ < æ , Æ < ö , Ö < ő , Ő ; ø , Ø & V ; w , W& Y, ü , Ü; ű, Ű "_s
	})});
}

CollationData_sv::CollationData_sv() {
}

$Class* CollationData_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_sv);
	});
	return class$;
}

$Class* CollationData_sv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
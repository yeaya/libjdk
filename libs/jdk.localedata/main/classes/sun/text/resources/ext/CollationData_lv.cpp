#include <sun/text/resources/ext/CollationData_lv.h>
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

void CollationData_lv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_lv::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"@& C < č , Č & G < ģ , Ģ & I < y, Y& K < ķ , Ķ & L < ļ , Ļ & N < ņ , Ņ & S < š , Š & Z < ž , Ž "_s
	})});
}

CollationData_lv::CollationData_lv() {
}

$Class* CollationData_lv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_lv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_lv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_lv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_lv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_lv);
	});
	return class$;
}

$Class* CollationData_lv::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
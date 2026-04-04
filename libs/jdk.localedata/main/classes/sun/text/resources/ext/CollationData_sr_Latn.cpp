#include <sun/text/resources/ext/CollationData_sr_Latn.h>
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

void CollationData_sr_Latn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_sr_Latn::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& \u200f = ̌ & ̆ = ̍ & C < č , Č < ć , Ć & D < ǳ , ǲ , Ǳ < dz , dZ , Dz , DZ < ǆ , ǅ , Ǆ < đ , Đ & L < lj , lJ , Lj , LJ & N < nj , nJ , Nj , NJ & S < š , Š & Z < ž , Ž "_s
	})});
}

CollationData_sr_Latn::CollationData_sr_Latn() {
}

$Class* CollationData_sr_Latn::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_sr_Latn, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_sr_Latn, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_sr_Latn",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_sr_Latn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_sr_Latn);
	});
	return class$;
}

$Class* CollationData_sr_Latn::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
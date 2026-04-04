#include <sun/util/resources/ext/CurrencyNames_id_ID.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void CurrencyNames_id_ID::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_id_ID::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"IDR"_s,
		"Rp"_s
	})});
}

CurrencyNames_id_ID::CurrencyNames_id_ID() {
}

$Class* CurrencyNames_id_ID::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_id_ID, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_id_ID, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_id_ID",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_id_ID, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_id_ID);
	});
	return class$;
}

$Class* CurrencyNames_id_ID::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
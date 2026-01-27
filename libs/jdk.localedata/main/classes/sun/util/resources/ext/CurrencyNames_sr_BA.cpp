#include <sun/util/resources/ext/CurrencyNames_sr_BA.h>

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

$MethodInfo _CurrencyNames_sr_BA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sr_BA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sr_BA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sr_BA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sr_BA",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_BA_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_BA($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_BA));
}

void CurrencyNames_sr_BA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_BA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BAM"_s),
			$of(u"КМ."_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		})
	});
}

CurrencyNames_sr_BA::CurrencyNames_sr_BA() {
}

$Class* CurrencyNames_sr_BA::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_BA, name, initialize, &_CurrencyNames_sr_BA_ClassInfo_, allocate$CurrencyNames_sr_BA);
	return class$;
}

$Class* CurrencyNames_sr_BA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
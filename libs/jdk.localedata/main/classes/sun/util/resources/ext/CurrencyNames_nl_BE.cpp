#include <sun/util/resources/ext/CurrencyNames_nl_BE.h>

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

$MethodInfo _CurrencyNames_nl_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nl_BE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_nl_BE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nl_BE_MethodInfo_
};

$Object* allocate$CurrencyNames_nl_BE($Class* clazz) {
	return $of($alloc(CurrencyNames_nl_BE));
}

void CurrencyNames_nl_BE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BEF"_s),
			$of("BF"_s)
		}),
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		})
	});
}

CurrencyNames_nl_BE::CurrencyNames_nl_BE() {
}

$Class* CurrencyNames_nl_BE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nl_BE, name, initialize, &_CurrencyNames_nl_BE_ClassInfo_, allocate$CurrencyNames_nl_BE);
	return class$;
}

$Class* CurrencyNames_nl_BE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
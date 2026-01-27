#include <sun/util/resources/ext/CurrencyNames_ga_IE.h>

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

$MethodInfo _CurrencyNames_ga_IE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ga_IE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ga_IE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ga_IE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ga_IE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ga_IE_MethodInfo_
};

$Object* allocate$CurrencyNames_ga_IE($Class* clazz) {
	return $of($alloc(CurrencyNames_ga_IE));
}

void CurrencyNames_ga_IE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ga_IE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("EUR"_s),
		$of(u"€"_s)
	})});
}

CurrencyNames_ga_IE::CurrencyNames_ga_IE() {
}

$Class* CurrencyNames_ga_IE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ga_IE, name, initialize, &_CurrencyNames_ga_IE_ClassInfo_, allocate$CurrencyNames_ga_IE);
	return class$;
}

$Class* CurrencyNames_ga_IE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
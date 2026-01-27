#include <sun/util/resources/ext/CurrencyNames_nl_NL.h>

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

$MethodInfo _CurrencyNames_nl_NL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_NL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_NL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nl_NL_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_nl_NL",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nl_NL_MethodInfo_
};

$Object* allocate$CurrencyNames_nl_NL($Class* clazz) {
	return $of($alloc(CurrencyNames_nl_NL));
}

void CurrencyNames_nl_NL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_NL::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("NLG"_s),
			$of("fl"_s)
		})
	});
}

CurrencyNames_nl_NL::CurrencyNames_nl_NL() {
}

$Class* CurrencyNames_nl_NL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nl_NL, name, initialize, &_CurrencyNames_nl_NL_ClassInfo_, allocate$CurrencyNames_nl_NL);
	return class$;
}

$Class* CurrencyNames_nl_NL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
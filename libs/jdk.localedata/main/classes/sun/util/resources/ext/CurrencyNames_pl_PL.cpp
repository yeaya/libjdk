#include <sun/util/resources/ext/CurrencyNames_pl_PL.h>

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

$MethodInfo _CurrencyNames_pl_PL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pl_PL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pl_PL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pl_PL_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_pl_PL",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pl_PL_MethodInfo_
};

$Object* allocate$CurrencyNames_pl_PL($Class* clazz) {
	return $of($alloc(CurrencyNames_pl_PL));
}

void CurrencyNames_pl_PL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_pl_PL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PLN"_s),
		$of(u"zł"_s)
	})});
}

CurrencyNames_pl_PL::CurrencyNames_pl_PL() {
}

$Class* CurrencyNames_pl_PL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pl_PL, name, initialize, &_CurrencyNames_pl_PL_ClassInfo_, allocate$CurrencyNames_pl_PL);
	return class$;
}

$Class* CurrencyNames_pl_PL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
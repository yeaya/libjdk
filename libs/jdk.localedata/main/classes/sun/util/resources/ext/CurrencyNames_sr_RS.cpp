#include <sun/util/resources/ext/CurrencyNames_sr_RS.h>

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

$MethodInfo _CurrencyNames_sr_RS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sr_RS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sr_RS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sr_RS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sr_RS",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_RS_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_RS($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_RS));
}

void CurrencyNames_sr_RS::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_RS::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("RSD"_s),
		$of(u"дин."_s)
	})});
}

CurrencyNames_sr_RS::CurrencyNames_sr_RS() {
}

$Class* CurrencyNames_sr_RS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_RS, name, initialize, &_CurrencyNames_sr_RS_ClassInfo_, allocate$CurrencyNames_sr_RS);
	return class$;
}

$Class* CurrencyNames_sr_RS::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
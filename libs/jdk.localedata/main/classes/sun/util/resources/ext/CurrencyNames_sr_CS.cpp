#include <sun/util/resources/ext/CurrencyNames_sr_CS.h>

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

$MethodInfo _CurrencyNames_sr_CS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sr_CS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sr_CS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sr_CS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sr_CS",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sr_CS_MethodInfo_
};

$Object* allocate$CurrencyNames_sr_CS($Class* clazz) {
	return $of($alloc(CurrencyNames_sr_CS));
}

void CurrencyNames_sr_CS::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sr_CS::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("EUR"_s),
		$of(u"€"_s)
	})});
}

CurrencyNames_sr_CS::CurrencyNames_sr_CS() {
}

$Class* CurrencyNames_sr_CS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sr_CS, name, initialize, &_CurrencyNames_sr_CS_ClassInfo_, allocate$CurrencyNames_sr_CS);
	return class$;
}

$Class* CurrencyNames_sr_CS::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
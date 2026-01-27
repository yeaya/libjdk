#include <sun/util/resources/cldr/ext/CurrencyNames_ff_Latn_NG.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _CurrencyNames_ff_Latn_NG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff_Latn_NG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff_Latn_NG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_Latn_NG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff_Latn_NG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_Latn_NG_MethodInfo_
};

$Object* allocate$CurrencyNames_ff_Latn_NG($Class* clazz) {
	return $of($alloc(CurrencyNames_ff_Latn_NG));
}

void CurrencyNames_ff_Latn_NG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff_Latn_NG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NGN"_s),
		$of(u"₦"_s)
	})}));
	return data;
}

CurrencyNames_ff_Latn_NG::CurrencyNames_ff_Latn_NG() {
}

$Class* CurrencyNames_ff_Latn_NG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff_Latn_NG, name, initialize, &_CurrencyNames_ff_Latn_NG_ClassInfo_, allocate$CurrencyNames_ff_Latn_NG);
	return class$;
}

$Class* CurrencyNames_ff_Latn_NG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
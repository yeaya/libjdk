#include <sun/util/resources/cldr/ext/CurrencyNames_en_NG.h>

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

$MethodInfo _CurrencyNames_en_NG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_NG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_NG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_NG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_NG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_NG_MethodInfo_
};

$Object* allocate$CurrencyNames_en_NG($Class* clazz) {
	return $of($alloc(CurrencyNames_en_NG));
}

void CurrencyNames_en_NG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_NG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NGN"_s),
		$of(u"₦"_s)
	})}));
	return data;
}

CurrencyNames_en_NG::CurrencyNames_en_NG() {
}

$Class* CurrencyNames_en_NG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_NG, name, initialize, &_CurrencyNames_en_NG_ClassInfo_, allocate$CurrencyNames_en_NG);
	return class$;
}

$Class* CurrencyNames_en_NG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
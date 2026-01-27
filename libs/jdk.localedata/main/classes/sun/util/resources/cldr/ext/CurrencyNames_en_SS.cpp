#include <sun/util/resources/cldr/ext/CurrencyNames_en_SS.h>

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

$MethodInfo _CurrencyNames_en_SS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_SS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_SS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_SS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SS",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SS_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SS($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SS));
}

void CurrencyNames_en_SS::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SS::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"GB£"_s)
		}),
		$$new($ObjectArray, {
			$of("SSP"_s),
			$of(u"£"_s)
		})
	}));
	return data;
}

CurrencyNames_en_SS::CurrencyNames_en_SS() {
}

$Class* CurrencyNames_en_SS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SS, name, initialize, &_CurrencyNames_en_SS_ClassInfo_, allocate$CurrencyNames_en_SS);
	return class$;
}

$Class* CurrencyNames_en_SS::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
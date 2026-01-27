#include <sun/util/resources/cldr/ext/CurrencyNames_ckb.h>

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

$MethodInfo _CurrencyNames_ckb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ckb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ckb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ckb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ckb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ckb_MethodInfo_
};

$Object* allocate$CurrencyNames_ckb($Class* clazz) {
	return $of($alloc(CurrencyNames_ckb));
}

void CurrencyNames_ckb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ckb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("IQD"_s),
		$of(u"د.ع.\u200f"_s)
	})}));
	return data;
}

CurrencyNames_ckb::CurrencyNames_ckb() {
}

$Class* CurrencyNames_ckb::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ckb, name, initialize, &_CurrencyNames_ckb_ClassInfo_, allocate$CurrencyNames_ckb);
	return class$;
}

$Class* CurrencyNames_ckb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
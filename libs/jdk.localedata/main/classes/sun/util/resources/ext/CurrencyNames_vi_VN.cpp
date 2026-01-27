#include <sun/util/resources/ext/CurrencyNames_vi_VN.h>

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

$MethodInfo _CurrencyNames_vi_VN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_vi_VN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_vi_VN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_vi_VN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_vi_VN",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_vi_VN_MethodInfo_
};

$Object* allocate$CurrencyNames_vi_VN($Class* clazz) {
	return $of($alloc(CurrencyNames_vi_VN));
}

void CurrencyNames_vi_VN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_vi_VN::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("VND"_s),
		$of(u"đ"_s)
	})});
}

CurrencyNames_vi_VN::CurrencyNames_vi_VN() {
}

$Class* CurrencyNames_vi_VN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_vi_VN, name, initialize, &_CurrencyNames_vi_VN_ClassInfo_, allocate$CurrencyNames_vi_VN);
	return class$;
}

$Class* CurrencyNames_vi_VN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
#include <sun/util/resources/ext/CurrencyNames_ja_JP.h>

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

$MethodInfo _CurrencyNames_ja_JP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ja_JP, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ja_JP, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ja_JP_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ja_JP",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ja_JP_MethodInfo_
};

$Object* allocate$CurrencyNames_ja_JP($Class* clazz) {
	return $of($alloc(CurrencyNames_ja_JP));
}

void CurrencyNames_ja_JP::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ja_JP::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("JPY"_s),
		$of(u"￥"_s)
	})});
}

CurrencyNames_ja_JP::CurrencyNames_ja_JP() {
}

$Class* CurrencyNames_ja_JP::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ja_JP, name, initialize, &_CurrencyNames_ja_JP_ClassInfo_, allocate$CurrencyNames_ja_JP);
	return class$;
}

$Class* CurrencyNames_ja_JP::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
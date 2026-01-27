#include <sun/util/resources/ext/CurrencyNames_tr_TR.h>

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

$MethodInfo _CurrencyNames_tr_TR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_tr_TR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_tr_TR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_tr_TR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_tr_TR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_tr_TR_MethodInfo_
};

$Object* allocate$CurrencyNames_tr_TR($Class* clazz) {
	return $of($alloc(CurrencyNames_tr_TR));
}

void CurrencyNames_tr_TR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_tr_TR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TRL"_s),
			$of("TL"_s)
		}),
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of("TL"_s)
		})
	});
}

CurrencyNames_tr_TR::CurrencyNames_tr_TR() {
}

$Class* CurrencyNames_tr_TR::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_tr_TR, name, initialize, &_CurrencyNames_tr_TR_ClassInfo_, allocate$CurrencyNames_tr_TR);
	return class$;
}

$Class* CurrencyNames_tr_TR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
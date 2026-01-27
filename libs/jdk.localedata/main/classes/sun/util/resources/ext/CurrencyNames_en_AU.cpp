#include <sun/util/resources/ext/CurrencyNames_en_AU.h>

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

$MethodInfo _CurrencyNames_en_AU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_AU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_AU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_AU_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_AU",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_AU_MethodInfo_
};

$Object* allocate$CurrencyNames_en_AU($Class* clazz) {
	return $of($alloc(CurrencyNames_en_AU));
}

void CurrencyNames_en_AU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_AU::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AUD"_s),
		$of("$"_s)
	})});
}

CurrencyNames_en_AU::CurrencyNames_en_AU() {
}

$Class* CurrencyNames_en_AU::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_AU, name, initialize, &_CurrencyNames_en_AU_ClassInfo_, allocate$CurrencyNames_en_AU);
	return class$;
}

$Class* CurrencyNames_en_AU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
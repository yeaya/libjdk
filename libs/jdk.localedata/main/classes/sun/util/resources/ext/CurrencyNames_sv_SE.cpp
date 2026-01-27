#include <sun/util/resources/ext/CurrencyNames_sv_SE.h>

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

$MethodInfo _CurrencyNames_sv_SE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sv_SE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sv_SE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sv_SE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_sv_SE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sv_SE_MethodInfo_
};

$Object* allocate$CurrencyNames_sv_SE($Class* clazz) {
	return $of($alloc(CurrencyNames_sv_SE));
}

void CurrencyNames_sv_SE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sv_SE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("SEK"_s),
			$of("kr"_s)
		})
	});
}

CurrencyNames_sv_SE::CurrencyNames_sv_SE() {
}

$Class* CurrencyNames_sv_SE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sv_SE, name, initialize, &_CurrencyNames_sv_SE_ClassInfo_, allocate$CurrencyNames_sv_SE);
	return class$;
}

$Class* CurrencyNames_sv_SE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
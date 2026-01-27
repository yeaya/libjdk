#include <sun/util/resources/ext/CurrencyNames_en_IE.h>

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

$MethodInfo _CurrencyNames_en_IE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_IE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_IE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_IE_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_en_IE",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_IE_MethodInfo_
};

$Object* allocate$CurrencyNames_en_IE($Class* clazz) {
	return $of($alloc(CurrencyNames_en_IE));
}

void CurrencyNames_en_IE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_IE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("IEP"_s),
			$of(u"IR£"_s)
		})
	});
}

CurrencyNames_en_IE::CurrencyNames_en_IE() {
}

$Class* CurrencyNames_en_IE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_IE, name, initialize, &_CurrencyNames_en_IE_ClassInfo_, allocate$CurrencyNames_en_IE);
	return class$;
}

$Class* CurrencyNames_en_IE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
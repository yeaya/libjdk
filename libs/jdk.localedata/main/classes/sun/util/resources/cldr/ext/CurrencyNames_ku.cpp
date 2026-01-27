#include <sun/util/resources/cldr/ext/CurrencyNames_ku.h>

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

$MethodInfo _CurrencyNames_ku_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ku, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ku, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ku_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ku",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ku_MethodInfo_
};

$Object* allocate$CurrencyNames_ku($Class* clazz) {
	return $of($alloc(CurrencyNames_ku));
}

void CurrencyNames_ku::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ku::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TRY"_s),
			$of(u"₺"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("ewro"_s)
		})
	}));
	return data;
}

CurrencyNames_ku::CurrencyNames_ku() {
}

$Class* CurrencyNames_ku::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ku, name, initialize, &_CurrencyNames_ku_ClassInfo_, allocate$CurrencyNames_ku);
	return class$;
}

$Class* CurrencyNames_ku::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
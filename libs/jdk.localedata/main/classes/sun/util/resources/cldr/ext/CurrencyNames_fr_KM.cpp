#include <sun/util/resources/cldr/ext/CurrencyNames_fr_KM.h>

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

$MethodInfo _CurrencyNames_fr_KM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_KM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_KM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_KM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_KM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_KM_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_KM($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_KM));
}

void CurrencyNames_fr_KM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_KM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("KMF"_s),
		$of("CF"_s)
	})}));
	return data;
}

CurrencyNames_fr_KM::CurrencyNames_fr_KM() {
}

$Class* CurrencyNames_fr_KM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_KM, name, initialize, &_CurrencyNames_fr_KM_ClassInfo_, allocate$CurrencyNames_fr_KM);
	return class$;
}

$Class* CurrencyNames_fr_KM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
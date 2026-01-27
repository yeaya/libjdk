#include <sun/util/resources/cldr/ext/CurrencyNames_fr_CD.h>

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

$MethodInfo _CurrencyNames_fr_CD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_CD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_CD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_CD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_CD",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_CD_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_CD($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_CD));
}

void CurrencyNames_fr_CD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_CD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("CDF"_s),
		$of("FC"_s)
	})}));
	return data;
}

CurrencyNames_fr_CD::CurrencyNames_fr_CD() {
}

$Class* CurrencyNames_fr_CD::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_CD, name, initialize, &_CurrencyNames_fr_CD_ClassInfo_, allocate$CurrencyNames_fr_CD);
	return class$;
}

$Class* CurrencyNames_fr_CD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
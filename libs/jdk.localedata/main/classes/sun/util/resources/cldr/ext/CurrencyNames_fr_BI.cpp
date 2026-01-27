#include <sun/util/resources/cldr/ext/CurrencyNames_fr_BI.h>

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

$MethodInfo _CurrencyNames_fr_BI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_BI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_BI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_BI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_BI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_BI_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_BI($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_BI));
}

void CurrencyNames_fr_BI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_BI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BIF"_s),
		$of("FBu"_s)
	})}));
	return data;
}

CurrencyNames_fr_BI::CurrencyNames_fr_BI() {
}

$Class* CurrencyNames_fr_BI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_BI, name, initialize, &_CurrencyNames_fr_BI_ClassInfo_, allocate$CurrencyNames_fr_BI);
	return class$;
}

$Class* CurrencyNames_fr_BI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
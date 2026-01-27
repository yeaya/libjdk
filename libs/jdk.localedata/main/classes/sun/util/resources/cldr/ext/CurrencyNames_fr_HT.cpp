#include <sun/util/resources/cldr/ext/CurrencyNames_fr_HT.h>

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

$MethodInfo _CurrencyNames_fr_HT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_HT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_HT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_HT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_HT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_HT_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_HT($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_HT));
}

void CurrencyNames_fr_HT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_HT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("HTG"_s),
		$of("G"_s)
	})}));
	return data;
}

CurrencyNames_fr_HT::CurrencyNames_fr_HT() {
}

$Class* CurrencyNames_fr_HT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_HT, name, initialize, &_CurrencyNames_fr_HT_ClassInfo_, allocate$CurrencyNames_fr_HT);
	return class$;
}

$Class* CurrencyNames_fr_HT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
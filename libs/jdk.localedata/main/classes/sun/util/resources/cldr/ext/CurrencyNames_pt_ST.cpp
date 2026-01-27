#include <sun/util/resources/cldr/ext/CurrencyNames_pt_ST.h>

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

$MethodInfo _CurrencyNames_pt_ST_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt_ST, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt_ST, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_ST_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_ST",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_ST_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_ST($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_ST));
}

void CurrencyNames_pt_ST::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_ST::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("STN"_s),
		$of("Db"_s)
	})}));
	return data;
}

CurrencyNames_pt_ST::CurrencyNames_pt_ST() {
}

$Class* CurrencyNames_pt_ST::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_ST, name, initialize, &_CurrencyNames_pt_ST_ClassInfo_, allocate$CurrencyNames_pt_ST);
	return class$;
}

$Class* CurrencyNames_pt_ST::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
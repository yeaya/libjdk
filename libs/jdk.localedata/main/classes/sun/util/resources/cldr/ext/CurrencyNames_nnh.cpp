#include <sun/util/resources/cldr/ext/CurrencyNames_nnh.h>

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

$MethodInfo _CurrencyNames_nnh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nnh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nnh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nnh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nnh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nnh_MethodInfo_
};

$Object* allocate$CurrencyNames_nnh($Class* clazz) {
	return $of($alloc(CurrencyNames_nnh));
}

void CurrencyNames_nnh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nnh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("xaf"_s),
		$of(u"feláŋ CFA"_s)
	})}));
	return data;
}

CurrencyNames_nnh::CurrencyNames_nnh() {
}

$Class* CurrencyNames_nnh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nnh, name, initialize, &_CurrencyNames_nnh_ClassInfo_, allocate$CurrencyNames_nnh);
	return class$;
}

$Class* CurrencyNames_nnh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
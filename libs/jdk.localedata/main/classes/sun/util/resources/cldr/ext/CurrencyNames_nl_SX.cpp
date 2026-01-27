#include <sun/util/resources/cldr/ext/CurrencyNames_nl_SX.h>

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

$MethodInfo _CurrencyNames_nl_SX_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_SX, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_SX, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nl_SX_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nl_SX",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nl_SX_MethodInfo_
};

$Object* allocate$CurrencyNames_nl_SX($Class* clazz) {
	return $of($alloc(CurrencyNames_nl_SX));
}

void CurrencyNames_nl_SX::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_SX::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ANG"_s),
		$of("NAf."_s)
	})}));
	return data;
}

CurrencyNames_nl_SX::CurrencyNames_nl_SX() {
}

$Class* CurrencyNames_nl_SX::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nl_SX, name, initialize, &_CurrencyNames_nl_SX_ClassInfo_, allocate$CurrencyNames_nl_SX);
	return class$;
}

$Class* CurrencyNames_nl_SX::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
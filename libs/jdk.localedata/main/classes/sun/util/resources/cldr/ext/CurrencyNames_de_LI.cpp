#include <sun/util/resources/cldr/ext/CurrencyNames_de_LI.h>

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

$MethodInfo _CurrencyNames_de_LI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_de_LI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_de_LI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_de_LI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_de_LI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_de_LI_MethodInfo_
};

$Object* allocate$CurrencyNames_de_LI($Class* clazz) {
	return $of($alloc(CurrencyNames_de_LI));
}

void CurrencyNames_de_LI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_de_LI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("EUR"_s),
		$of("EUR"_s)
	})}));
	return data;
}

CurrencyNames_de_LI::CurrencyNames_de_LI() {
}

$Class* CurrencyNames_de_LI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_de_LI, name, initialize, &_CurrencyNames_de_LI_ClassInfo_, allocate$CurrencyNames_de_LI);
	return class$;
}

$Class* CurrencyNames_de_LI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
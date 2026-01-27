#include <sun/util/resources/cldr/ext/CurrencyNames_fr_GN.h>

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

$MethodInfo _CurrencyNames_fr_GN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_GN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_GN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_GN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_GN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_GN_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_GN($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_GN));
}

void CurrencyNames_fr_GN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_GN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GNF"_s),
		$of("FG"_s)
	})}));
	return data;
}

CurrencyNames_fr_GN::CurrencyNames_fr_GN() {
}

$Class* CurrencyNames_fr_GN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_GN, name, initialize, &_CurrencyNames_fr_GN_ClassInfo_, allocate$CurrencyNames_fr_GN);
	return class$;
}

$Class* CurrencyNames_fr_GN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
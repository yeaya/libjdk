#include <sun/util/resources/cldr/ext/CurrencyNames_fr_SC.h>

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

$MethodInfo _CurrencyNames_fr_SC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_SC, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_SC, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_SC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_SC",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_SC_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_SC($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_SC));
}

void CurrencyNames_fr_SC::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_SC::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SCR"_s),
		$of("SR"_s)
	})}));
	return data;
}

CurrencyNames_fr_SC::CurrencyNames_fr_SC() {
}

$Class* CurrencyNames_fr_SC::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_SC, name, initialize, &_CurrencyNames_fr_SC_ClassInfo_, allocate$CurrencyNames_fr_SC);
	return class$;
}

$Class* CurrencyNames_fr_SC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
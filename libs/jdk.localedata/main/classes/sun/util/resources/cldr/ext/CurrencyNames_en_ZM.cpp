#include <sun/util/resources/cldr/ext/CurrencyNames_en_ZM.h>

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

$MethodInfo _CurrencyNames_en_ZM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_ZM, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_ZM, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_ZM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_ZM",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_ZM_MethodInfo_
};

$Object* allocate$CurrencyNames_en_ZM($Class* clazz) {
	return $of($alloc(CurrencyNames_en_ZM));
}

void CurrencyNames_en_ZM::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_ZM::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("ZMW"_s),
		$of("K"_s)
	})}));
	return data;
}

CurrencyNames_en_ZM::CurrencyNames_en_ZM() {
}

$Class* CurrencyNames_en_ZM::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_ZM, name, initialize, &_CurrencyNames_en_ZM_ClassInfo_, allocate$CurrencyNames_en_ZM);
	return class$;
}

$Class* CurrencyNames_en_ZM::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
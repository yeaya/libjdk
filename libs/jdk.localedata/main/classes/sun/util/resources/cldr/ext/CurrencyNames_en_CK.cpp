#include <sun/util/resources/cldr/ext/CurrencyNames_en_CK.h>

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

$MethodInfo _CurrencyNames_en_CK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_CK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_CK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_CK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_CK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_CK_MethodInfo_
};

$Object* allocate$CurrencyNames_en_CK($Class* clazz) {
	return $of($alloc(CurrencyNames_en_CK));
}

void CurrencyNames_en_CK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_CK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NZD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_CK::CurrencyNames_en_CK() {
}

$Class* CurrencyNames_en_CK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_CK, name, initialize, &_CurrencyNames_en_CK_ClassInfo_, allocate$CurrencyNames_en_CK);
	return class$;
}

$Class* CurrencyNames_en_CK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
#include <sun/util/resources/cldr/ext/CurrencyNames_en_TZ.h>

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

$MethodInfo _CurrencyNames_en_TZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_TZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_TZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_TZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_TZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_TZ_MethodInfo_
};

$Object* allocate$CurrencyNames_en_TZ($Class* clazz) {
	return $of($alloc(CurrencyNames_en_TZ));
}

void CurrencyNames_en_TZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_TZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("TZS"_s),
		$of("TSh"_s)
	})}));
	return data;
}

CurrencyNames_en_TZ::CurrencyNames_en_TZ() {
}

$Class* CurrencyNames_en_TZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_TZ, name, initialize, &_CurrencyNames_en_TZ_ClassInfo_, allocate$CurrencyNames_en_TZ);
	return class$;
}

$Class* CurrencyNames_en_TZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
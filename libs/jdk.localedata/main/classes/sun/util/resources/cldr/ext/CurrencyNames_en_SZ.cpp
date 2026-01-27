#include <sun/util/resources/cldr/ext/CurrencyNames_en_SZ.h>

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

$MethodInfo _CurrencyNames_en_SZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_SZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_SZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_SZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SZ",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SZ_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SZ($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SZ));
}

void CurrencyNames_en_SZ::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SZL"_s),
		$of("E"_s)
	})}));
	return data;
}

CurrencyNames_en_SZ::CurrencyNames_en_SZ() {
}

$Class* CurrencyNames_en_SZ::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SZ, name, initialize, &_CurrencyNames_en_SZ_ClassInfo_, allocate$CurrencyNames_en_SZ);
	return class$;
}

$Class* CurrencyNames_en_SZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
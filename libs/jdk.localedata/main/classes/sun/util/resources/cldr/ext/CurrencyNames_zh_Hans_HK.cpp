#include <sun/util/resources/cldr/ext/CurrencyNames_zh_Hans_HK.h>

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

$MethodInfo _CurrencyNames_zh_Hans_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_Hans_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_zh_Hans_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_zh_Hans_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_zh_Hans_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_Hans_HK_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_Hans_HK($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_Hans_HK));
}

void CurrencyNames_zh_Hans_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_Hans_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"CN¥"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"开曼群岛元"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"白银"_s)
		})
	}));
	return data;
}

CurrencyNames_zh_Hans_HK::CurrencyNames_zh_Hans_HK() {
}

$Class* CurrencyNames_zh_Hans_HK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_Hans_HK, name, initialize, &_CurrencyNames_zh_Hans_HK_ClassInfo_, allocate$CurrencyNames_zh_Hans_HK);
	return class$;
}

$Class* CurrencyNames_zh_Hans_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
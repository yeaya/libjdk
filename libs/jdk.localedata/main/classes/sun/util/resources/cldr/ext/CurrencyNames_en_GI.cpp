#include <sun/util/resources/cldr/ext/CurrencyNames_en_GI.h>

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

$MethodInfo _CurrencyNames_en_GI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_GI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_GI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_GI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_GI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_GI_MethodInfo_
};

$Object* allocate$CurrencyNames_en_GI($Class* clazz) {
	return $of($alloc(CurrencyNames_en_GI));
}

void CurrencyNames_en_GI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_GI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of(u"GB£"_s)
		}),
		$$new($ObjectArray, {
			$of("GIP"_s),
			$of(u"£"_s)
		})
	}));
	return data;
}

CurrencyNames_en_GI::CurrencyNames_en_GI() {
}

$Class* CurrencyNames_en_GI::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_GI, name, initialize, &_CurrencyNames_en_GI_ClassInfo_, allocate$CurrencyNames_en_GI);
	return class$;
}

$Class* CurrencyNames_en_GI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
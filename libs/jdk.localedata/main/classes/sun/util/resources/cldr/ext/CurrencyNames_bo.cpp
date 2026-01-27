#include <sun/util/resources/cldr/ext/CurrencyNames_bo.h>

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

$MethodInfo _CurrencyNames_bo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bo_MethodInfo_
};

$Object* allocate$CurrencyNames_bo($Class* clazz) {
	return $of($alloc(CurrencyNames_bo));
}

void CurrencyNames_bo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"¥"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"ཡུ་ཨན་"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"རྒྱ་གར་སྒོར་"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ཨ་རིའི་སྒོར་"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"མ་རྟོགས་པའི་ནུས་མེད་དངུལ་ལོར"_s)
		})
	}));
	return data;
}

CurrencyNames_bo::CurrencyNames_bo() {
}

$Class* CurrencyNames_bo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bo, name, initialize, &_CurrencyNames_bo_ClassInfo_, allocate$CurrencyNames_bo);
	return class$;
}

$Class* CurrencyNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
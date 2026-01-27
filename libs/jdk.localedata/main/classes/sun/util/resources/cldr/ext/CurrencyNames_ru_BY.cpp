#include <sun/util/resources/cldr/ext/CurrencyNames_ru_BY.h>

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

$MethodInfo _CurrencyNames_ru_BY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ru_BY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ru_BY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ru_BY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ru_BY",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ru_BY_MethodInfo_
};

$Object* allocate$CurrencyNames_ru_BY($Class* clazz) {
	return $of($alloc(CurrencyNames_ru_BY));
}

void CurrencyNames_ru_BY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ru_BY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BYN"_s),
			$of("Br"_s)
		}),
		$$new($ObjectArray, {
			$of("RUR"_s),
			$of("RUR"_s)
		})
	}));
	return data;
}

CurrencyNames_ru_BY::CurrencyNames_ru_BY() {
}

$Class* CurrencyNames_ru_BY::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ru_BY, name, initialize, &_CurrencyNames_ru_BY_ClassInfo_, allocate$CurrencyNames_ru_BY);
	return class$;
}

$Class* CurrencyNames_ru_BY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
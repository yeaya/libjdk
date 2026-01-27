#include <sun/util/resources/cldr/ext/CurrencyNames_en_SE.h>

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

$MethodInfo _CurrencyNames_en_SE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_SE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_SE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_SE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SE_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SE($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SE));
}

void CurrencyNames_en_SE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SEK"_s),
		$of("kr"_s)
	})}));
	return data;
}

CurrencyNames_en_SE::CurrencyNames_en_SE() {
}

$Class* CurrencyNames_en_SE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SE, name, initialize, &_CurrencyNames_en_SE_ClassInfo_, allocate$CurrencyNames_en_SE);
	return class$;
}

$Class* CurrencyNames_en_SE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
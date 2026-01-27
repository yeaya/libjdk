#include <sun/util/resources/cldr/ext/CurrencyNames_en_GG.h>

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

$MethodInfo _CurrencyNames_en_GG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_GG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_GG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_GG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_GG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_GG_MethodInfo_
};

$Object* allocate$CurrencyNames_en_GG($Class* clazz) {
	return $of($alloc(CurrencyNames_en_GG));
}

void CurrencyNames_en_GG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_GG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("gbp"_s),
		$of("UK Pound"_s)
	})}));
	return data;
}

CurrencyNames_en_GG::CurrencyNames_en_GG() {
}

$Class* CurrencyNames_en_GG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_GG, name, initialize, &_CurrencyNames_en_GG_ClassInfo_, allocate$CurrencyNames_en_GG);
	return class$;
}

$Class* CurrencyNames_en_GG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
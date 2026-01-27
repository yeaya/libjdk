#include <sun/util/resources/cldr/ext/CurrencyNames_en_JE.h>

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

$MethodInfo _CurrencyNames_en_JE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_JE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_JE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_JE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_JE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_JE_MethodInfo_
};

$Object* allocate$CurrencyNames_en_JE($Class* clazz) {
	return $of($alloc(CurrencyNames_en_JE));
}

void CurrencyNames_en_JE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_JE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("gbp"_s),
		$of("UK Pound"_s)
	})}));
	return data;
}

CurrencyNames_en_JE::CurrencyNames_en_JE() {
}

$Class* CurrencyNames_en_JE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_JE, name, initialize, &_CurrencyNames_en_JE_ClassInfo_, allocate$CurrencyNames_en_JE);
	return class$;
}

$Class* CurrencyNames_en_JE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
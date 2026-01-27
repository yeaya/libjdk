#include <sun/util/resources/cldr/ext/CurrencyNames_es_VE.h>

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

$MethodInfo _CurrencyNames_es_VE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_VE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_VE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_VE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_VE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_VE_MethodInfo_
};

$Object* allocate$CurrencyNames_es_VE($Class* clazz) {
	return $of($alloc(CurrencyNames_es_VE));
}

void CurrencyNames_es_VE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_VE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("VEF"_s),
			$of("Bs."_s)
		}),
		$$new($ObjectArray, {
			$of("VES"_s),
			$of("Bs.S"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar soberano"_s)
		})
	}));
	return data;
}

CurrencyNames_es_VE::CurrencyNames_es_VE() {
}

$Class* CurrencyNames_es_VE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_VE, name, initialize, &_CurrencyNames_es_VE_ClassInfo_, allocate$CurrencyNames_es_VE);
	return class$;
}

$Class* CurrencyNames_es_VE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
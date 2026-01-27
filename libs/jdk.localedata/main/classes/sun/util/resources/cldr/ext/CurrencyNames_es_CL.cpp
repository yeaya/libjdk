#include <sun/util/resources/cldr/ext/CurrencyNames_es_CL.h>

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

$MethodInfo _CurrencyNames_es_CL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_CL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_CL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_es_CL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_es_CL",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_es_CL_MethodInfo_
};

$Object* allocate$CurrencyNames_es_CL($Class* clazz) {
	return $of($alloc(CurrencyNames_es_CL));
}

void CurrencyNames_es_CL::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_CL::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CLP"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("US$"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("Peso chileno"_s)
		})
	}));
	return data;
}

CurrencyNames_es_CL::CurrencyNames_es_CL() {
}

$Class* CurrencyNames_es_CL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_es_CL, name, initialize, &_CurrencyNames_es_CL_ClassInfo_, allocate$CurrencyNames_es_CL);
	return class$;
}

$Class* CurrencyNames_es_CL::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
#include <sun/util/resources/cldr/ext/CurrencyNames_en_SL.h>

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

$MethodInfo _CurrencyNames_en_SL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_SL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_SL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_SL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_SL",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_SL_MethodInfo_
};

$Object* allocate$CurrencyNames_en_SL($Class* clazz) {
	return $of($alloc(CurrencyNames_en_SL));
}

void CurrencyNames_en_SL::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SL::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("SLL"_s),
		$of("Le"_s)
	})}));
	return data;
}

CurrencyNames_en_SL::CurrencyNames_en_SL() {
}

$Class* CurrencyNames_en_SL::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_SL, name, initialize, &_CurrencyNames_en_SL_ClassInfo_, allocate$CurrencyNames_en_SL);
	return class$;
}

$Class* CurrencyNames_en_SL::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
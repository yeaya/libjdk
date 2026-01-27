#include <sun/util/resources/cldr/ext/CurrencyNames_en_MG.h>

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

$MethodInfo _CurrencyNames_en_MG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_MG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_MG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_MG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_MG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_MG_MethodInfo_
};

$Object* allocate$CurrencyNames_en_MG($Class* clazz) {
	return $of($alloc(CurrencyNames_en_MG));
}

void CurrencyNames_en_MG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_MG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MGA"_s),
		$of("Ar"_s)
	})}));
	return data;
}

CurrencyNames_en_MG::CurrencyNames_en_MG() {
}

$Class* CurrencyNames_en_MG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_MG, name, initialize, &_CurrencyNames_en_MG_ClassInfo_, allocate$CurrencyNames_en_MG);
	return class$;
}

$Class* CurrencyNames_en_MG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
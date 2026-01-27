#include <sun/util/resources/cldr/ext/CurrencyNames_fr_MG.h>

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

$MethodInfo _CurrencyNames_fr_MG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_MG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_MG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fr_MG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fr_MG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fr_MG_MethodInfo_
};

$Object* allocate$CurrencyNames_fr_MG($Class* clazz) {
	return $of($alloc(CurrencyNames_fr_MG));
}

void CurrencyNames_fr_MG::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_MG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MGA"_s),
		$of("Ar"_s)
	})}));
	return data;
}

CurrencyNames_fr_MG::CurrencyNames_fr_MG() {
}

$Class* CurrencyNames_fr_MG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fr_MG, name, initialize, &_CurrencyNames_fr_MG_ClassInfo_, allocate$CurrencyNames_fr_MG);
	return class$;
}

$Class* CurrencyNames_fr_MG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
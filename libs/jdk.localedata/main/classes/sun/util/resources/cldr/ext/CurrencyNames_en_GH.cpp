#include <sun/util/resources/cldr/ext/CurrencyNames_en_GH.h>

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

$MethodInfo _CurrencyNames_en_GH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_GH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_GH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_GH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_GH",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_GH_MethodInfo_
};

$Object* allocate$CurrencyNames_en_GH($Class* clazz) {
	return $of($alloc(CurrencyNames_en_GH));
}

void CurrencyNames_en_GH::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_GH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("GHS"_s),
		$of(u"GH₵"_s)
	})}));
	return data;
}

CurrencyNames_en_GH::CurrencyNames_en_GH() {
}

$Class* CurrencyNames_en_GH::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_GH, name, initialize, &_CurrencyNames_en_GH_ClassInfo_, allocate$CurrencyNames_en_GH);
	return class$;
}

$Class* CurrencyNames_en_GH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
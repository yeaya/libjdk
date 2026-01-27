#include <sun/util/resources/cldr/ext/CurrencyNames_en_NF.h>

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

$MethodInfo _CurrencyNames_en_NF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_NF, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_NF, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_NF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_NF",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_NF_MethodInfo_
};

$Object* allocate$CurrencyNames_en_NF($Class* clazz) {
	return $of($alloc(CurrencyNames_en_NF));
}

void CurrencyNames_en_NF::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_NF::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("AUD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_NF::CurrencyNames_en_NF() {
}

$Class* CurrencyNames_en_NF::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_NF, name, initialize, &_CurrencyNames_en_NF_ClassInfo_, allocate$CurrencyNames_en_NF);
	return class$;
}

$Class* CurrencyNames_en_NF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
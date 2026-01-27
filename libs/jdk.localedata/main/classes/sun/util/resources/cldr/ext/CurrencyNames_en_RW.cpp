#include <sun/util/resources/cldr/ext/CurrencyNames_en_RW.h>

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

$MethodInfo _CurrencyNames_en_RW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_RW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_RW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_RW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_RW",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_RW_MethodInfo_
};

$Object* allocate$CurrencyNames_en_RW($Class* clazz) {
	return $of($alloc(CurrencyNames_en_RW));
}

void CurrencyNames_en_RW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_RW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("RWF"_s),
		$of("RF"_s)
	})}));
	return data;
}

CurrencyNames_en_RW::CurrencyNames_en_RW() {
}

$Class* CurrencyNames_en_RW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_RW, name, initialize, &_CurrencyNames_en_RW_ClassInfo_, allocate$CurrencyNames_en_RW);
	return class$;
}

$Class* CurrencyNames_en_RW::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
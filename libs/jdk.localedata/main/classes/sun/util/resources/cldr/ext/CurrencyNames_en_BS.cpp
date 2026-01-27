#include <sun/util/resources/cldr/ext/CurrencyNames_en_BS.h>

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

$MethodInfo _CurrencyNames_en_BS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_BS, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_BS, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_BS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_BS",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_BS_MethodInfo_
};

$Object* allocate$CurrencyNames_en_BS($Class* clazz) {
	return $of($alloc(CurrencyNames_en_BS));
}

void CurrencyNames_en_BS::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_BS::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("BSD"_s),
		$of("$"_s)
	})}));
	return data;
}

CurrencyNames_en_BS::CurrencyNames_en_BS() {
}

$Class* CurrencyNames_en_BS::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_BS, name, initialize, &_CurrencyNames_en_BS_ClassInfo_, allocate$CurrencyNames_en_BS);
	return class$;
}

$Class* CurrencyNames_en_BS::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
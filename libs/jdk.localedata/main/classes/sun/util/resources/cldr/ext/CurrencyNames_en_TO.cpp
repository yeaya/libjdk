#include <sun/util/resources/cldr/ext/CurrencyNames_en_TO.h>

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

$MethodInfo _CurrencyNames_en_TO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_TO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_TO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_TO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_TO",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_TO_MethodInfo_
};

$Object* allocate$CurrencyNames_en_TO($Class* clazz) {
	return $of($alloc(CurrencyNames_en_TO));
}

void CurrencyNames_en_TO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_TO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("TOP"_s),
		$of("T$"_s)
	})}));
	return data;
}

CurrencyNames_en_TO::CurrencyNames_en_TO() {
}

$Class* CurrencyNames_en_TO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_TO, name, initialize, &_CurrencyNames_en_TO_ClassInfo_, allocate$CurrencyNames_en_TO);
	return class$;
}

$Class* CurrencyNames_en_TO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
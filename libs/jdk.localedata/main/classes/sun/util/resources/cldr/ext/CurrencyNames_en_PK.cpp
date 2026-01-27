#include <sun/util/resources/cldr/ext/CurrencyNames_en_PK.h>

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

$MethodInfo _CurrencyNames_en_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_PK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_PK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_en_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_en_PK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_en_PK_MethodInfo_
};

$Object* allocate$CurrencyNames_en_PK($Class* clazz) {
	return $of($alloc(CurrencyNames_en_PK));
}

void CurrencyNames_en_PK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_PK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("PKR"_s),
		$of("Rs"_s)
	})}));
	return data;
}

CurrencyNames_en_PK::CurrencyNames_en_PK() {
}

$Class* CurrencyNames_en_PK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_en_PK, name, initialize, &_CurrencyNames_en_PK_ClassInfo_, allocate$CurrencyNames_en_PK);
	return class$;
}

$Class* CurrencyNames_en_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
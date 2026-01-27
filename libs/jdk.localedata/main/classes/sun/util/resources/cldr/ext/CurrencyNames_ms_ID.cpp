#include <sun/util/resources/cldr/ext/CurrencyNames_ms_ID.h>

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

$MethodInfo _CurrencyNames_ms_ID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ms_ID, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ms_ID, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ms_ID_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ms_ID",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ms_ID_MethodInfo_
};

$Object* allocate$CurrencyNames_ms_ID($Class* clazz) {
	return $of($alloc(CurrencyNames_ms_ID));
}

void CurrencyNames_ms_ID::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ms_ID::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("IDR"_s),
		$of("Rp"_s)
	})}));
	return data;
}

CurrencyNames_ms_ID::CurrencyNames_ms_ID() {
}

$Class* CurrencyNames_ms_ID::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ms_ID, name, initialize, &_CurrencyNames_ms_ID_ClassInfo_, allocate$CurrencyNames_ms_ID);
	return class$;
}

$Class* CurrencyNames_ms_ID::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
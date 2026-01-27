#include <sun/util/resources/cldr/ext/CurrencyNames_rw.h>

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

$MethodInfo _CurrencyNames_rw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_rw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_rw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_rw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_rw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_rw_MethodInfo_
};

$Object* allocate$CurrencyNames_rw($Class* clazz) {
	return $of($alloc(CurrencyNames_rw));
}

void CurrencyNames_rw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_rw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("RWF"_s),
		$of("RF"_s)
	})}));
	return data;
}

CurrencyNames_rw::CurrencyNames_rw() {
}

$Class* CurrencyNames_rw::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_rw, name, initialize, &_CurrencyNames_rw_ClassInfo_, allocate$CurrencyNames_rw);
	return class$;
}

$Class* CurrencyNames_rw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
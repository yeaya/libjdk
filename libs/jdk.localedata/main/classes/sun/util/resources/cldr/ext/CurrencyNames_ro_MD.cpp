#include <sun/util/resources/cldr/ext/CurrencyNames_ro_MD.h>

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

$MethodInfo _CurrencyNames_ro_MD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ro_MD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ro_MD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ro_MD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ro_MD",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ro_MD_MethodInfo_
};

$Object* allocate$CurrencyNames_ro_MD($Class* clazz) {
	return $of($alloc(CurrencyNames_ro_MD));
}

void CurrencyNames_ro_MD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ro_MD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("MDL"_s),
		$of("L"_s)
	})}));
	return data;
}

CurrencyNames_ro_MD::CurrencyNames_ro_MD() {
}

$Class* CurrencyNames_ro_MD::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ro_MD, name, initialize, &_CurrencyNames_ro_MD_ClassInfo_, allocate$CurrencyNames_ro_MD);
	return class$;
}

$Class* CurrencyNames_ro_MD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
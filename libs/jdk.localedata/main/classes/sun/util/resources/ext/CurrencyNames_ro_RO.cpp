#include <sun/util/resources/ext/CurrencyNames_ro_RO.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_ro_RO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ro_RO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ro_RO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ro_RO_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_ro_RO",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ro_RO_MethodInfo_
};

$Object* allocate$CurrencyNames_ro_RO($Class* clazz) {
	return $of($alloc(CurrencyNames_ro_RO));
}

void CurrencyNames_ro_RO::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ro_RO::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ROL"_s),
			$of("LEI"_s)
		}),
		$$new($ObjectArray, {
			$of("RON"_s),
			$of("LEI"_s)
		})
	});
}

CurrencyNames_ro_RO::CurrencyNames_ro_RO() {
}

$Class* CurrencyNames_ro_RO::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ro_RO, name, initialize, &_CurrencyNames_ro_RO_ClassInfo_, allocate$CurrencyNames_ro_RO);
	return class$;
}

$Class* CurrencyNames_ro_RO::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
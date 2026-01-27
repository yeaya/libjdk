#include <sun/util/resources/ext/CurrencyNames_pt_PT.h>

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

$MethodInfo _CurrencyNames_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt_PT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt_PT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_PT_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_pt_PT",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_PT_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_PT($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_PT));
}

void CurrencyNames_pt_PT::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_PT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("EUR"_s),
			$of(u"€"_s)
		}),
		$$new($ObjectArray, {
			$of("PTE"_s),
			$of("Esc."_s)
		})
	});
}

CurrencyNames_pt_PT::CurrencyNames_pt_PT() {
}

$Class* CurrencyNames_pt_PT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_PT, name, initialize, &_CurrencyNames_pt_PT_ClassInfo_, allocate$CurrencyNames_pt_PT);
	return class$;
}

$Class* CurrencyNames_pt_PT::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
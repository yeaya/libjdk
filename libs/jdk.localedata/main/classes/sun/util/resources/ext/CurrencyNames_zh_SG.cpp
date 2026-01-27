#include <sun/util/resources/ext/CurrencyNames_zh_SG.h>

#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <sun/util/resources/LocaleData.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

#undef CHINA

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;
using $LocaleData = ::sun::util::resources::LocaleData;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_zh_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(CurrencyNames_zh_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_zh_SG_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_zh_SG",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_SG_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_SG($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_SG));
}

void CurrencyNames_zh_SG::init$() {
	$useLocalCurrentObjectStackCache();
	$OpenListResourceBundle::init$();
	$init($Locale);
	$var($ResourceBundle, bundle, $nc($($nc(($cast($ResourceBundleBasedAdapter, $($LocaleProviderAdapter::forJRE()))))->getLocaleData()))->getCurrencyNames($Locale::CHINA));
	setParent(bundle);
}

$ObjectArray2* CurrencyNames_zh_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of("CNY"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("S$"_s)
		})
	});
}

CurrencyNames_zh_SG::CurrencyNames_zh_SG() {
}

$Class* CurrencyNames_zh_SG::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_SG, name, initialize, &_CurrencyNames_zh_SG_ClassInfo_, allocate$CurrencyNames_zh_SG);
	return class$;
}

$Class* CurrencyNames_zh_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
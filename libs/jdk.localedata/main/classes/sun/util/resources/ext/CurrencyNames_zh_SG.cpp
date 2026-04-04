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
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void CurrencyNames_zh_SG::init$() {
	$useLocalObjectStack();
	$OpenListResourceBundle::init$();
	$init($Locale);
	$var($ResourceBundle, bundle, $$nc($$sure($ResourceBundleBasedAdapter, $LocaleProviderAdapter::forJRE())->getLocaleData())->getCurrencyNames($Locale::CHINA));
	setParent(bundle);
}

$ObjectArray2* CurrencyNames_zh_SG::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CNY"_s,
			"CNY"_s
		}),
		$$new($ObjectArray, {
			"SGD"_s,
			"S$"_s
		})
	});
}

CurrencyNames_zh_SG::CurrencyNames_zh_SG() {
}

$Class* CurrencyNames_zh_SG::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_SG, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(CurrencyNames_zh_SG, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_zh_SG",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_zh_SG, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_zh_SG);
	});
	return class$;
}

$Class* CurrencyNames_zh_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
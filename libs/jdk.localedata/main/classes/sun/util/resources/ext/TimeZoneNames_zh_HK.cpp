#include <sun/util/resources/ext/TimeZoneNames_zh_HK.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <sun/util/resources/LocaleData.h>
#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef TAIWAN

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void TimeZoneNames_zh_HK::init$() {
	$useLocalObjectStack();
	$TimeZoneNamesBundle::init$();
	$init($Locale);
	$var($ResourceBundle, bundle, $$nc($$sure($ResourceBundleBasedAdapter, $LocaleProviderAdapter::forJRE())->getLocaleData())->getTimeZoneNames($Locale::TAIWAN));
	setParent(bundle);
}

$ObjectArray2* TimeZoneNames_zh_HK::getContents() {
	return $new($ObjectArray2, 0);
}

TimeZoneNames_zh_HK::TimeZoneNames_zh_HK() {
}

$Class* TimeZoneNames_zh_HK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_zh_HK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(TimeZoneNames_zh_HK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.TimeZoneNames_zh_HK",
		"sun.util.resources.TimeZoneNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeZoneNames_zh_HK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeZoneNames_zh_HK);
	});
	return class$;
}

$Class* TimeZoneNames_zh_HK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
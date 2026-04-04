#include <sun/text/resources/ext/FormatData_zh_HK.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <sun/util/resources/LocaleData.h>
#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

#undef TAIWAN

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void FormatData_zh_HK::init$() {
	$useLocalObjectStack();
	$ParallelListResourceBundle::init$();
	$init($Locale);
	$var($ResourceBundle, bundle, $$nc($$sure($ResourceBundleBasedAdapter, $LocaleProviderAdapter::forJRE())->getLocaleData())->getDateFormatData($Locale::TAIWAN));
	setParent(bundle);
}

$ObjectArray2* FormatData_zh_HK::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				u"1月"_s,
				u"2月"_s,
				u"3月"_s,
				u"4月"_s,
				u"5月"_s,
				u"6月"_s,
				u"7月"_s,
				u"8月"_s,
				u"9月"_s,
				u"10月"_s,
				u"11月"_s,
				u"12月"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"日"_s,
				u"一"_s,
				u"二"_s,
				u"三"_s,
				u"四"_s,
				u"五"_s,
				u"六"_s
			})
		}),
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s,
				"#,##0%"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				u"ahh\'時\'mm\'分\'ss\'秒\' z"_s,
				u"ahh\'時\'mm\'分\'ss\'秒\'"_s,
				"ahh:mm:ss"_s,
				"ah:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"yyyy\'年\'MM\'月\'dd\'日\' EEEE"_s,
				u"yyyy\'年\'MM\'月\'dd\'日\' EEEE"_s,
				u"yyyy\'年\'M\'月\'d\'日\'"_s,
				u"yy\'年\'M\'月\'d\'日\'"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GanjkHmsSEDFwWxhKzZ"_s
		})
	});
}

FormatData_zh_HK::FormatData_zh_HK() {
}

$Class* FormatData_zh_HK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_zh_HK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_zh_HK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_zh_HK",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_zh_HK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_zh_HK);
	});
	return class$;
}

$Class* FormatData_zh_HK::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
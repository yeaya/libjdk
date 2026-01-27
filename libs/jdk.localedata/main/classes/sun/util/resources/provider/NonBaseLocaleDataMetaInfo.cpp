#include <sun/util/resources/provider/NonBaseLocaleDataMetaInfo.h>

#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/util/locale/provider/LocaleProviderAdapter$Type.h>
#include <jcpp.h>

#undef JRE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $LocaleProviderAdapter$Type = ::sun::util::locale::provider::LocaleProviderAdapter$Type;

namespace sun {
	namespace util {
		namespace resources {
			namespace provider {

$FieldInfo _NonBaseLocaleDataMetaInfo_FieldInfo_[] = {
	{"resourceNameToLocales", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(NonBaseLocaleDataMetaInfo, resourceNameToLocales)},
	{}
};

$MethodInfo _NonBaseLocaleDataMetaInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NonBaseLocaleDataMetaInfo, init$, void)},
	{"availableLanguageTags", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NonBaseLocaleDataMetaInfo, availableLanguageTags, $String*, $String*)},
	{"getSupportedLocaleString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(NonBaseLocaleDataMetaInfo, getSupportedLocaleString, $String*, $String*)},
	{"getType", "()Lsun/util/locale/provider/LocaleProviderAdapter$Type;", nullptr, $PUBLIC, $virtualMethod(NonBaseLocaleDataMetaInfo, getType, $LocaleProviderAdapter$Type*)},
	{}
};

$ClassInfo _NonBaseLocaleDataMetaInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.provider.NonBaseLocaleDataMetaInfo",
	"java.lang.Object",
	"sun.util.locale.provider.LocaleDataMetaInfo",
	_NonBaseLocaleDataMetaInfo_FieldInfo_,
	_NonBaseLocaleDataMetaInfo_MethodInfo_
};

$Object* allocate$NonBaseLocaleDataMetaInfo($Class* clazz) {
	return $of($alloc(NonBaseLocaleDataMetaInfo));
}

$Map* NonBaseLocaleDataMetaInfo::resourceNameToLocales = nullptr;

void NonBaseLocaleDataMetaInfo::init$() {
}

$String* NonBaseLocaleDataMetaInfo::getSupportedLocaleString($String* resourceName) {
	$init(NonBaseLocaleDataMetaInfo);
	return $cast($String, $nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->getOrDefault(resourceName, ""_s));
}

$LocaleProviderAdapter$Type* NonBaseLocaleDataMetaInfo::getType() {
	$init($LocaleProviderAdapter$Type);
	return $LocaleProviderAdapter$Type::JRE;
}

$String* NonBaseLocaleDataMetaInfo::availableLanguageTags($String* category) {
	return getSupportedLocaleString(category);
}

void clinit$NonBaseLocaleDataMetaInfo($Class* class$) {
	$assignStatic(NonBaseLocaleDataMetaInfo::resourceNameToLocales, $new($HashMap, 9));
	{
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("FormatData"_s, "  ar ar-JO ar-LB ar-SY be be-BY bg bg-BG ca ca-ES cs cs-CZ da da-DK de de-AT de-CH de-DE de-LU el el-CY el-GR en-AU en-CA en-GB en-IE en-IN en-MT en-NZ en-PH en-SG en-ZA es es-AR es-BO es-CL es-CO es-CR es-DO es-EC es-ES es-GT es-HN es-MX es-NI es-PA es-PE es-PR es-PY es-SV es-US es-UY es-VE et et-EE fi fi-FI fr fr-BE fr-CA fr-CH fr-FR ga ga-IE he he-IL hi-IN hr hr-HR hu hu-HU id id-ID is is-IS it it-CH it-IT ja ja-JP ko ko-KR lt lt-LT lv lv-LV mk mk-MK ms ms-MY mt mt-MT nb nb-NO nl nl-BE nl-NL nn-NO no no-NO no-NO-NY pl pl-PL pt pt-BR pt-PT ro ro-RO ru ru-RU sk sk-SK sl sl-SI sq sq-AL sr sr-BA sr-CS sr-Latn sr-Latn-ME sr-ME sr-RS sv sv-SE th th-TH tr tr-TR uk uk-UA vi vi-VN zh zh-CN zh-HK zh-Hans-CN zh-Hans-SG zh-Hant-HK zh-Hant-TW zh-SG zh-TW "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("CollationData"_s, "  ar be bg ca cs da el es et fi fr he hi hr hu is ja ko lt lv mk nb nb-NO nn-NO no pl ro ru sk sl sq sr sr-Latn sv th tr uk vi zh zh-HK zh-Hant-HK zh-Hant-TW zh-TW "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("BreakIteratorInfo"_s, "  nb nb-NO nn-NO th "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("BreakIteratorRules"_s, "  nb nb-NO nn-NO th "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("TimeZoneNames"_s, "  de en-CA en-GB en-IE es fr hi it ja ko nb nb-NO nn-NO pt-BR sv zh-CN zh-HK zh-Hans-CN zh-Hant-HK zh-Hant-TW zh-TW "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("LocaleNames"_s, "  ar be bg ca cs da de el el-CY en-MT en-PH en-SG es es-US et fi fr ga he hi hr hu id is it ja ko lt lv mk ms mt nb nb-NO nl nn-NO no no-NO-NY pl pt pt-BR pt-PT ro ru sk sl sq sr sr-Latn sv th tr uk vi zh zh-HK zh-Hans-SG zh-Hant-HK zh-Hant-TW zh-SG zh-TW "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("CurrencyNames"_s, "  ar-AE ar-BH ar-DZ ar-EG ar-IQ ar-JO ar-KW ar-LB ar-LY ar-MA ar-OM ar-QA ar-SA ar-SD ar-SY ar-TN ar-YE be-BY bg-BG ca-ES cs-CZ da-DK de de-AT de-CH de-DE de-LU el-CY el-GR en-AU en-CA en-GB en-IE en-IN en-MT en-NZ en-PH en-SG en-ZA es es-AR es-BO es-CL es-CO es-CR es-CU es-DO es-EC es-ES es-GT es-HN es-MX es-NI es-PA es-PE es-PR es-PY es-SV es-US es-UY es-VE et-EE fi-FI fr fr-BE fr-CA fr-CH fr-FR fr-LU ga-IE he-IL hi-IN hr-HR hu-HU id-ID is-IS it it-CH it-IT ja ja-JP ko ko-KR lt-LT lv-LV mk-MK ms-MY mt-MT nb nb-NO nl-BE nl-NL nn-NO no-NO pl-PL pt pt-BR pt-PT ro-RO ru-RU sk-SK sl-SI sq-AL sr-BA sr-CS sr-Latn-BA sr-Latn-ME sr-Latn-RS sr-ME sr-RS sv sv-SE th-TH tr-TR uk-UA vi-VN zh-CN zh-HK zh-Hans-CN zh-Hans-SG zh-Hant-HK zh-Hant-TW zh-SG zh-TW "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("CalendarData"_s, "  ar be bg ca cs da de el el-CY en-GB en-IE en-MT es es-ES es-US et fi fr fr-CA he hi hr hu id-ID is it ja ko lt lv mk ms-MY mt mt-MT nb nb-NO nl nn-NO no pl pt pt-BR pt-PT ro ru sk sl sq sr sr-Latn-BA sr-Latn-ME sr-Latn-RS sv th tr uk vi zh "_s);
		$nc(NonBaseLocaleDataMetaInfo::resourceNameToLocales)->put("AvailableLocales"_s, " ar ar-AE ar-BH ar-DZ ar-EG ar-IQ ar-JO ar-KW ar-LB ar-LY ar-MA ar-OM ar-QA ar-SA ar-SD ar-SY ar-TN ar-YE be be-BY bg bg-BG ca ca-ES cs cs-CZ da da-DK de de-AT de-CH de-DE de-LU el el-CY el-GR en-AU en-CA en-GB en-IE en-IN en-MT en-NZ en-PH en-SG en-ZA es es-AR es-BO es-CL es-CO es-CR es-CU es-DO es-EC es-ES es-GT es-HN es-MX es-NI es-PA es-PE es-PR es-PY es-SV es-US es-UY es-VE et et-EE fi fi-FI fr fr-BE fr-CA fr-CH fr-FR fr-LU ga ga-IE he he-IL hi hi-IN hr hr-HR hu hu-HU id id-ID is is-IS it it-CH it-IT ja ja-JP ja-JP-JP ko ko-KR lt lt-LT lv lv-LV mk mk-MK ms ms-MY mt mt-MT nb nb-NO nl nl-BE nl-NL nn-NO no no-NO no-NO-NY pl pl-PL pt pt-BR pt-PT ro ro-RO ru ru-RU sk sk-SK sl sl-SI sq sq-AL sr sr-BA sr-CS sr-Latn sr-Latn-BA sr-Latn-ME sr-Latn-RS sr-ME sr-RS sv sv-SE th th-TH th-TH-TH tr tr-TR uk uk-UA vi vi-VN zh zh-CN zh-HK zh-Hans-CN zh-Hans-SG zh-Hant-HK zh-Hant-TW zh-SG zh-TW "_s);
	}
}

NonBaseLocaleDataMetaInfo::NonBaseLocaleDataMetaInfo() {
}

$Class* NonBaseLocaleDataMetaInfo::load$($String* name, bool initialize) {
	$loadClass(NonBaseLocaleDataMetaInfo, name, initialize, &_NonBaseLocaleDataMetaInfo_ClassInfo_, clinit$NonBaseLocaleDataMetaInfo, allocate$NonBaseLocaleDataMetaInfo);
	return class$;
}

$Class* NonBaseLocaleDataMetaInfo::class$ = nullptr;

			} // provider
		} // resources
	} // util
} // sun
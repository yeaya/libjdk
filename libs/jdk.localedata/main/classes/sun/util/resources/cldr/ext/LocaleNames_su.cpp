#include <sun/util/resources/cldr/ext/LocaleNames_su.h>
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

void LocaleNames_su::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_su::getContents() {
	$useLocalObjectStack();
	$var($String, metaValue_CN, "Tiongkok"_s);
	$var($String, metaValue_DE, u"Jérman"_s);
	$var($String, metaValue_FR, "Prancis"_s);
	$var($String, metaValue_IT, "Italia"_s);
	$var($String, metaValue_JP, "Jepang"_s);
	$var($String, metaValue_RU, "Rusia"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ZZ"_s,
			"Wilayah Teu Dikenal"_s
		}),
		$$new($ObjectArray, {
			"de"_s,
			metaValue_DE
		}),
		$$new($ObjectArray, {
			"DE"_s,
			metaValue_DE
		}),
		$$new($ObjectArray, {
			"de_AT"_s,
			u"Jérman Austria"_s
		}),
		$$new($ObjectArray, {
			"zh_Hans"_s,
			"Tiongkok Sederhana"_s
		}),
		$$new($ObjectArray, {
			"ru"_s,
			metaValue_RU
		}),
		$$new($ObjectArray, {
			"RU"_s,
			metaValue_RU
		}),
		$$new($ObjectArray, {
			"pt"_s,
			"Portugis"_s
		}),
		$$new($ObjectArray, {
			"JP"_s,
			metaValue_JP
		}),
		$$new($ObjectArray, {
			"en_AU"_s,
			"Inggris Australia"_s
		}),
		$$new($ObjectArray, {
			"Zzzz"_s,
			"Tulisan Teu Dikenal"_s
		}),
		$$new($ObjectArray, {
			"pt_BR"_s,
			"Portugis Brasil"_s
		}),
		$$new($ObjectArray, {
			"fr"_s,
			metaValue_FR
		}),
		$$new($ObjectArray, {
			"FR"_s,
			metaValue_FR
		}),
		$$new($ObjectArray, {
			"type.co.standard"_s,
			"Aturan Runtuyan Standar"_s
		}),
		$$new($ObjectArray, {
			"BR"_s,
			"Brasil"_s
		}),
		$$new($ObjectArray, {
			"es_419"_s,
			u"Spanyol Amérika Latin"_s
		}),
		$$new($ObjectArray, {
			"de_CH"_s,
			u"Jérman Swiss Luhur"_s
		}),
		$$new($ObjectArray, {
			"es_MX"_s,
			u"Spanyol Méksiko"_s
		}),
		$$new($ObjectArray, {
			"GB"_s,
			"Britania Raya"_s
		}),
		$$new($ObjectArray, {
			"es_ES"_s,
			u"Spanyol Éropa"_s
		}),
		$$new($ObjectArray, {
			"zh_Hant"_s,
			"Tiongkok Tradisional"_s
		}),
		$$new($ObjectArray, {
			"US"_s,
			u"Amérika Sarikat"_s
		}),
		$$new($ObjectArray, {
			"su"_s,
			"Basa Sunda"_s
		}),
		$$new($ObjectArray, {
			"fr_CA"_s,
			"Prancis Kanada"_s
		}),
		$$new($ObjectArray, {
			"IN"_s,
			"India"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			"Inggris"_s
		}),
		$$new($ObjectArray, {
			"und"_s,
			"Basa teu dikenal"_s
		}),
		$$new($ObjectArray, {
			"fr_CH"_s,
			"Prancis Swiss"_s
		}),
		$$new($ObjectArray, {
			"CN"_s,
			metaValue_CN
		}),
		$$new($ObjectArray, {
			"it"_s,
			metaValue_IT
		}),
		$$new($ObjectArray, {
			"IT"_s,
			metaValue_IT
		}),
		$$new($ObjectArray, {
			"Latn"_s,
			"Latin"_s
		}),
		$$new($ObjectArray, {
			"zh"_s,
			metaValue_CN
		}),
		$$new($ObjectArray, {
			"es"_s,
			"Spanyol"_s
		}),
		$$new($ObjectArray, {
			"Cyrl"_s,
			"Sirilik"_s
		}),
		$$new($ObjectArray, {
			"type.ca.gregorian"_s,
			u"Kalénder Grégorian"_s
		}),
		$$new($ObjectArray, {
			"Zxxx"_s,
			"Non-tulisan"_s
		}),
		$$new($ObjectArray, {
			"en_CA"_s,
			"Inggris Kanada"_s
		}),
		$$new($ObjectArray, {
			"en_US"_s,
			"Inggris Amerika"_s
		}),
		$$new($ObjectArray, {
			"ja"_s,
			metaValue_JP
		}),
		$$new($ObjectArray, {
			"Hans"_s,
			"Sederhana"_s
		}),
		$$new($ObjectArray, {
			"type.nu.latn"_s,
			"Digit Barat"_s
		}),
		$$new($ObjectArray, {
			"Hant"_s,
			"Tradisional"_s
		}),
		$$new($ObjectArray, {
			"pt_PT"_s,
			u"Portugis Éropa"_s
		})
	}));
	return data;
}

LocaleNames_su::LocaleNames_su() {
}

$Class* LocaleNames_su::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_su, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_su, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_su",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_su, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_su);
	});
	return class$;
}

$Class* LocaleNames_su::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
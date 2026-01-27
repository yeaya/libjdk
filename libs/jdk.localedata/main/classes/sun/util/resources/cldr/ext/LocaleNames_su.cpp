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

$MethodInfo _LocaleNames_su_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_su, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_su, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_su_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_su",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_su_MethodInfo_
};

$Object* allocate$LocaleNames_su($Class* clazz) {
	return $of($alloc(LocaleNames_su));
}

void LocaleNames_su::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_su::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CN, "Tiongkok"_s);
	$var($String, metaValue_DE, u"Jérman"_s);
	$var($String, metaValue_FR, "Prancis"_s);
	$var($String, metaValue_IT, "Italia"_s);
	$var($String, metaValue_JP, "Jepang"_s);
	$var($String, metaValue_RU, "Rusia"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Wilayah Teu Dikenal"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Jérman Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Tiongkok Sederhana"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugis"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Inggris Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Tulisan Teu Dikenal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Portugis Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Aturan Runtuyan Standar"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasil"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Spanyol Amérika Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Jérman Swiss Luhur"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Spanyol Méksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Britania Raya"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Spanyol Éropa"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Tiongkok Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amérika Sarikat"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Basa Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Prancis Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Inggris"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Basa teu dikenal"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Prancis Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(metaValue_CN)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_CN)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Sirilik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Kalénder Grégorian"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Non-tulisan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Inggris Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Inggris Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_JP)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("Sederhana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Digit Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradisional"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Portugis Éropa"_s)
		})
	}));
	return data;
}

LocaleNames_su::LocaleNames_su() {
}

$Class* LocaleNames_su::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_su, name, initialize, &_LocaleNames_su_ClassInfo_, allocate$LocaleNames_su);
	return class$;
}

$Class* LocaleNames_su::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
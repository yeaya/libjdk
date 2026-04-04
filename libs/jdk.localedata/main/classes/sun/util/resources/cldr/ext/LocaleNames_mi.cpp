#include <sun/util/resources/cldr/ext/LocaleNames_mi.h>
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

void LocaleNames_mi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mi::getContents() {
	$useLocalObjectStack();
	$var($String, metaValue_DE, "Tiamana"_s);
	$var($String, metaValue_FR, u"Wīwī"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			"Tiamana Atiria"_s
		}),
		$$new($ObjectArray, {
			"zh_Hans"_s,
			u"Hainamana Māmā"_s
		}),
		$$new($ObjectArray, {
			"pt"_s,
			u"Pōtikī"_s
		}),
		$$new($ObjectArray, {
			"Zzzz"_s,
			u"Momotuhi Tē Mōhiotia"_s
		}),
		$$new($ObjectArray, {
			"pt_BR"_s,
			u"Pōtikī Parahi"_s
		}),
		$$new($ObjectArray, {
			"type.co.standard"_s,
			u"Raupapa Kōmaka Arowhānui"_s
		}),
		$$new($ObjectArray, {
			"es_419"_s,
			"Paniora Amerika ki te Tonga"_s
		}),
		$$new($ObjectArray, {
			"es_MX"_s,
			u"Paniora Mēhikana"_s
		}),
		$$new($ObjectArray, {
			"es_ES"_s,
			"Paniora Uropi"_s
		}),
		$$new($ObjectArray, {
			"mi"_s,
			u"te reo Māori"_s
		}),
		$$new($ObjectArray, {
			"zh_Hant"_s,
			"Hainamana Tukuiho"_s
		}),
		$$new($ObjectArray, {
			"MK"_s,
			u"Makerōnia ki te Raki"_s
		}),
		$$new($ObjectArray, {
			"US"_s,
			"Hononga o Amerika"_s
		}),
		$$new($ObjectArray, {
			"IN"_s,
			"Inia"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			"Ingarihi"_s
		}),
		$$new($ObjectArray, {
			"IT"_s,
			u"Itāria"_s
		}),
		$$new($ObjectArray, {
			"it"_s,
			u"Ītariana"_s
		}),
		$$new($ObjectArray, {
			"Arab"_s,
			"Arapika"_s
		}),
		$$new($ObjectArray, {
			"es"_s,
			"Paniora"_s
		}),
		$$new($ObjectArray, {
			"zh"_s,
			"Hainamana"_s
		}),
		$$new($ObjectArray, {
			"type.ca.gregorian"_s,
			u"Maramataka Pākehā"_s
		}),
		$$new($ObjectArray, {
			"en_US"_s,
			"Ingarihi Amerikana"_s
		}),
		$$new($ObjectArray, {
			"ja"_s,
			"Hapanihi"_s
		}),
		$$new($ObjectArray, {
			"Hans"_s,
			u"Māmā"_s
		}),
		$$new($ObjectArray, {
			"type.nu.latn"_s,
			u"Ngā Mati Pākehā"_s
		}),
		$$new($ObjectArray, {
			"Hant"_s,
			"Tukuiho"_s
		}),
		$$new($ObjectArray, {
			"ZZ"_s,
			u"Rohe Tē Mōhiotia"_s
		}),
		$$new($ObjectArray, {
			"RU"_s,
			u"Rūhia"_s
		}),
		$$new($ObjectArray, {
			"ru"_s,
			"Ruhiana"_s
		}),
		$$new($ObjectArray, {
			"JP"_s,
			"Hapani"_s
		}),
		$$new($ObjectArray, {
			"en_AU"_s,
			"Ingarihi Ahitereiriana"_s
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
			"NZ"_s,
			"Aotearoa"_s
		}),
		$$new($ObjectArray, {
			"BR"_s,
			"Parahi"_s
		}),
		$$new($ObjectArray, {
			"de_CH"_s,
			u"Tiamana Ōkawa Huiterangi"_s
		}),
		$$new($ObjectArray, {
			"GB"_s,
			"Hononga o Piritene"_s
		}),
		$$new($ObjectArray, {
			"fr_CA"_s,
			u"Wīwī Kānata"_s
		}),
		$$new($ObjectArray, {
			"und"_s,
			u"Reo Tē Mōhiotia"_s
		}),
		$$new($ObjectArray, {
			"fr_CH"_s,
			u"Wīwī Huiterangi"_s
		}),
		$$new($ObjectArray, {
			"CN"_s,
			"Haina"_s
		}),
		$$new($ObjectArray, {
			"Latn"_s,
			u"Rātina"_s
		}),
		$$new($ObjectArray, {
			"Cyrl"_s,
			u"Hīririki"_s
		}),
		$$new($ObjectArray, {
			"en_GB"_s,
			"Ingarihi Piritene"_s
		}),
		$$new($ObjectArray, {
			"Zxxx"_s,
			"Tuhikore"_s
		}),
		$$new($ObjectArray, {
			"en_CA"_s,
			u"Ingarihi Kānata"_s
		}),
		$$new($ObjectArray, {
			"pt_PT"_s,
			u"Pōtikī Uropi"_s
		})
	}));
	return data;
}

LocaleNames_mi::LocaleNames_mi() {
}

$Class* LocaleNames_mi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_mi",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_mi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_mi);
	});
	return class$;
}

$Class* LocaleNames_mi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
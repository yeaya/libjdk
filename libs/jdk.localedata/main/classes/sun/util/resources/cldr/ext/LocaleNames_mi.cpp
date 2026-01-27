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

$MethodInfo _LocaleNames_mi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_mi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_mi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_mi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_mi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_mi_MethodInfo_
};

$Object* allocate$LocaleNames_mi($Class* clazz) {
	return $of($alloc(LocaleNames_mi));
}

void LocaleNames_mi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_mi::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, "Tiamana"_s);
	$var($String, metaValue_FR, u"Wīwī"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			$of("Tiamana Atiria"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Hainamana Māmā"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Pōtikī"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Momotuhi Tē Mōhiotia"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Pōtikī Parahi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Raupapa Kōmaka Arowhānui"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Paniora Amerika ki te Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Paniora Mēhikana"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Paniora Uropi"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"te reo Māori"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Hainamana Tukuiho"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Makerōnia ki te Raki"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Hononga o Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Inia"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ingarihi"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itāria"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Ītariana"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arapika"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Paniora"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Hainamana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Maramataka Pākehā"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Ingarihi Amerikana"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Hapanihi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Māmā"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Ngā Mati Pākehā"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tukuiho"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Rohe Tē Mōhiotia"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rūhia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Ruhiana"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Hapani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Ingarihi Ahitereiriana"_s)
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
			$of("NZ"_s),
			$of("Aotearoa"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Parahi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Tiamana Ōkawa Huiterangi"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Hononga o Piritene"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Wīwī Kānata"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Reo Tē Mōhiotia"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Wīwī Huiterangi"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Haina"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Rātina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Hīririki"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Ingarihi Piritene"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Tuhikore"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Ingarihi Kānata"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Pōtikī Uropi"_s)
		})
	}));
	return data;
}

LocaleNames_mi::LocaleNames_mi() {
}

$Class* LocaleNames_mi::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_mi, name, initialize, &_LocaleNames_mi_ClassInfo_, allocate$LocaleNames_mi);
	return class$;
}

$Class* LocaleNames_mi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
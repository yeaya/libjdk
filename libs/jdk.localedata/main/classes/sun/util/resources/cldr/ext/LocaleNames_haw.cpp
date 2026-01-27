#include <sun/util/resources/cldr/ext/LocaleNames_haw.h>

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

$MethodInfo _LocaleNames_haw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_haw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_haw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_haw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_haw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_haw_MethodInfo_
};

$Object* allocate$LocaleNames_haw($Class* clazz) {
	return $of($alloc(LocaleNames_haw));
}

void LocaleNames_haw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_haw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"Kelemānia"_s);
	$var($String, metaValue_DK, "Kenemaka"_s);
	$var($String, metaValue_FR, "Palani"_s);
	$var($String, metaValue_GR, "Helene"_s);
	$var($String, metaValue_IT, u"ʻĪkālia"_s);
	$var($String, metaValue_NL, u"Hōlani"_s);
	$var($String, metaValue_RU, u"Lūkia"_s);
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
			$of("zh_Hans"_s),
			$of(u"Pākē Hoʻomaʻalahi ʻia"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Pukikī"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Polapola"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(metaValue_DK)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Kuikilani Kelemānia"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Pukikī Palakila"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"ʻIlelani"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Māori"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Pākē Kuʻuna"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ʻAmelika Hui Pū ʻIa"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"ʻŌlelo Hawaiʻi"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"ʻIseraʻela"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ʻĪnia"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Pelekānia"_s)
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
			$of("MX"_s),
			$of("Mekiko"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Kepania"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Paniolo"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Pākē"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"ʻAlapia"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Wiekanama"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Nūhōlani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Pelekānia ʻAmelika"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Kepanī"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(metaValue_NL)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(metaValue_NL)
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
			$of("fj"_s),
			$of(u"Pīkī"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Iāpana"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Pelekāne Nū Hōlani"_s)
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
			$of("ga"_s),
			$of(u"ʻAiliki"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Kāmoa"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Aupuni Mōʻī Hui Pū ʻIa"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanakā"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Kuekene"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Palani Kanakā"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Kōlea"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ʻIke ʻole ‘ia a kūpono ʻole paha ka ʻōlelo"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Kuikilani"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(metaValue_GR)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Kina"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Pelekānia Pekekāne"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Lākina"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wale"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Pelekāne Kanakā"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"ʻĀina Pilipino"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(metaValue_DK)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Hebera"_s)
		})
	}));
	return data;
}

LocaleNames_haw::LocaleNames_haw() {
}

$Class* LocaleNames_haw::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_haw, name, initialize, &_LocaleNames_haw_ClassInfo_, allocate$LocaleNames_haw);
	return class$;
}

$Class* LocaleNames_haw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
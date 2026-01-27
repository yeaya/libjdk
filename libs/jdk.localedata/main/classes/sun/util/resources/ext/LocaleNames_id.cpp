#include <sun/util/resources/ext/LocaleNames_id.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _LocaleNames_id_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_id, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_id, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_id_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_id",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_id_MethodInfo_
};

$Object* allocate$LocaleNames_id($Class* clazz) {
	return $of($alloc(LocaleNames_id));
}

void LocaleNames_id::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_id::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Uni Emirat Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua dan Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AN"_s),
			$of("Antilles Belanda"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia dan Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgia"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Kepulauan Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarusia"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kepulauan Cocos"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Republik Demokratik Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Republik Afrika Tengah"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Pantai Gading"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kepulauan Cook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Cina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombia"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Tanjung Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Pulau Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Siprus"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Republik Ceko"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Jerman"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Republik Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Mesir"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Sahara Barat"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Kepulauan Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Kepulauan Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Perancis"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Inggris Raya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyana Perancis"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guinea Khatulistiwa"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Yunani"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Georgia Selatan dan Kepulauan Sandwich Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong S.A.R., Cina"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Pulau Heard dan Kepulauan McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroasia"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islandia"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Yordania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboja"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoros"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts dan Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Korea Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Korea Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kepulauan Kayman"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Santa Lusia"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Kepulauan Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makao S.A.R. Cina"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Kepualuan Mariana Utara"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Kepulauan Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwegia"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Selandia Baru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polynesia Perancis"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Nugini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipina"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polandia"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre dan Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Otoritas Palestina"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugis"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusia"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arab Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Kepulauan Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapura"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard dan Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome dan Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad dan Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Amerika Serikat"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent dan Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Kepulauan British Virgin"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Kepulauan U.S. Virgin"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis dan Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrika Selatan"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abkhaz"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharik"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assam"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avarik"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaijan"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusia"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengal"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibet"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Ceko"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Jerman"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Yunani"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Inggris"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Spanyol"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persia"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faro"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Perancis"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Frisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Irlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Gaelik Skotlandia"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of("Ibrani"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroasia"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Bahasa Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of("Bahasa Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of("Ibrani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Jawa"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisut"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmir"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburg"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Belanda"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja; Chichewa; Chewa"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossetic"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pashto (Pushto)"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugis"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Rhaeto-Romance"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sundan"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Swedia"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Cina"_s)
		})
	});
}

LocaleNames_id::LocaleNames_id() {
}

$Class* LocaleNames_id::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_id, name, initialize, &_LocaleNames_id_ClassInfo_, allocate$LocaleNames_id);
	return class$;
}

$Class* LocaleNames_id::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
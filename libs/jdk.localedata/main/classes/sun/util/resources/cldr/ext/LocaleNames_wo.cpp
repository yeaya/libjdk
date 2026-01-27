#include <sun/util/resources/cldr/ext/LocaleNames_wo.h>

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

$MethodInfo _LocaleNames_wo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_wo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_wo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_wo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_wo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_wo_MethodInfo_
};

$Object* allocate$LocaleNames_wo($Class* clazz) {
	return $of($alloc(LocaleNames_wo));
}

void LocaleNames_wo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_wo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_BY, "Belaris"_s);
	$var($String, metaValue_MT, "Malt"_s);
	$var($String, metaValue_ar, "Araab"_s);
	$var($String, metaValue_la, "Latin"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipiye"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Bali"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Español bu Tugël"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andoor"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Emira Arab Ini"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antiguwa ak Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angiiy"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albani"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armeni"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharik"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Àngolaa"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktik"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arsàntin"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samowa bu Amerig"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asame"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Ótiriis"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Ostarali"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Àngale bu Amerik"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Duni Aalànd"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbayjaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Aserbayjane"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosni Ersegowin"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baskir"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbad"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Sibiyanoo"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bengalades"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belsig"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bilgari"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bilgaar"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahreyin"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benee"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saŋ Bartalemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermid"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Burney"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Baŋla"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwi"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Beresil"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Breton"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Bosñak"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Butaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Dunu Buwet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(metaValue_BY)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belis"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanadaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Duni Koko (Kilin)"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Repiblik Sàntar Afrik"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Siwis"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Kodiwaar"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Duni Kuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Sili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Siin"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombi"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Kors"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Cek"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kabo Werde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kursawo"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Dunu Kirismas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Siipar"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Wels"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Réewum Cek"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danuwa"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Portugees bu Tugël"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Almaañ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Almaa"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danmàrk"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominik"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Repiblik Dominiken"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Diweyi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Español bu Amerik Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alseri"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dsongkaa"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekwaatër"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiyamento"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estoni"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Esipt"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Gereg"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Àngale"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperantoo"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Ceroki"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritere"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Españ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Español"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ecopi"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Estoñiye"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Bask"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Arminaatu Gregoriyee"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Sorab-Kaw"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Pers"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Buñ woyofal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Siifari Tugal"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Cosaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Pël"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Finlànd"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Feylànde"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fijji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Duni Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikoronesi"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Duni Faro"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Feroos"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Faraans"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Farañse"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gaboŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Irlànde"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Ruwaayom Ini"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Garanad"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Galuwaa bu Ekos"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Seworsi"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Guyaan Farañse"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernase"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Sibraltaar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Girinlànd"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galisiye"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gàmbi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Garani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guwaadelup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gine Ekuwatoriyal"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Làkk wuñ xamul"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Gerees"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Seworsi di Sid ak Duni Sàndwiis di Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guwam"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gine-Bisaawóo"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Giyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hawsa"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Kurdi gu Diggu"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Ebrë"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Endo"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Almaa bu Ótiriis"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Duni Hërd ak Duni MakDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Onduraas"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Korowasi"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Krowat"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Ayti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Kereyolu Ayti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ongari"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ongruwaa"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Armaniye"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesi"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Endonesiye"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irlànd"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israyel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Dunu Maan"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("End"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Terituwaaru Brëtaañ ci Oseyaa Enjeŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irag"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Iraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Islànd"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Islànde"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Italiye"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inuktitit"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Sapone"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Serse"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Samayig"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Sordani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Sàppoŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("Sami gu Saalum"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Almaa bu Kawe bu Swis"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Sorsiye"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Eskolt Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Keeña"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kàmboj"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kasax"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoor"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Xmer"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Saŋ Kits ak Newis"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannadaa"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Frañse bu Kanadaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Koreye"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Kore Noor"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kashmiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Frañse bu Swis"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kowet"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Duni Kaymaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgiis"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kasaxstaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Sirilik"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lawos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libaa"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Liksàmbursuwaa"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Saŋ Lusi"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liktensteyin"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Siri Lànka"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laaw"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberiya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litiyani"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituyaniye"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Liksàmbur"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letoni"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Letoniye"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marog"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldawi"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegoro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Saŋ Marteŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskaar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Duni Marsaal"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Mawri"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Maseduwaan bëj Gànnaar"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Maseduwaane"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Miyanmaar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongoli"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mongoliye"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Duni Mariyaan Noor"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mooritani"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marati"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Mooseraa"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(metaValue_MT)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(metaValue_MT)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Moriis"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiiw"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malesi"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birmes"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mosàmbig"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Sorab-Suuf"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Nuwel Kaledoni"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niiseer"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepale"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Dunu Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Niseriya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaraguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Peyi Baa"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Neyerlànde"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norwees"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Nerwesiye"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepaal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nawru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niw"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Sewa"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nuwel Selànd"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Ositan"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omaan"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Oja"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Àngale bu Grànd Brëtaañ"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinesi Farañse"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papuwasi Gine Gu Bees"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Poloñ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polone"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saŋ Peer ak Mikeloŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Duni Pitkayirn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Pasto"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portigaal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Purtugees"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palaw"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguwe"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Purtugees bu Bresil"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kataar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niweyan"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Kesuwa"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reeñoo"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romaas"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumani"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rumaniyee"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbi"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Risi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Rus"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"Ruwànda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Kinyarwànda"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Àngale bu Óstraali"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Arabi Sawudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Duni Salmoon"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seysel"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindi"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suwed"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Penku Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapuur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Saŋ Eleen"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Esloweni"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinala"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Swalbaar ak Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Eslowaki"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Eslowaki (Eslowak)"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siyera Lewon"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Esloweniye"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegaal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Somali (làkk)"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albane"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Sirinam"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serb"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Sudaŋ di Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sawo Tome ak Pirinsipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salwadoor"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Suweduwaa"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sin Marten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siri"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Suwasilànd"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("Ibibiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Duni Tirk ak Kaykos"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Càdd"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Teer Ostraal gu Fraas"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tajis"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Taylànd"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Tay"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Tigriña"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajikistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Àngale bu Kanadaa"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokoloo"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Tirkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tirkmenistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tinisi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tirki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Tirk"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tirinite ak Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuwalo"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taywan"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Taŋsani"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Mbind muñ xamul"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ikeren"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ugànda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uygur"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ikreniye"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Duni Amerig Utar meer"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Etaa Sini"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaye"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruge"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usbekistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Usbek"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Tamasis gu Digg Atlaas"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Site bu Watikaa"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Saŋ Weesaa ak Garanadin"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Wenesiyela"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Wenda"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Duni Wirsin yu Brëtaañ"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Duni Wirsin yu Etaa-sini"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Wiyetnaamiye"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Wiyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("Kishe"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Wanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("Siryak"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walis ak Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samowa"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosowo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Luñ bindul"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mowak"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"SSO (Toftalin wiñ gën a xam)"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yidis"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Español bu Meksik"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayot"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Afrik di Sid"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Sinuwaa"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Sàmbi"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Gox buñ xamul"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Sinuwaa buñ woyofal"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Sinuwaa bu cosaan"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Saxa"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kuruks"_s)
		})
	}));
	return data;
}

LocaleNames_wo::LocaleNames_wo() {
}

$Class* LocaleNames_wo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_wo, name, initialize, &_LocaleNames_wo_ClassInfo_, allocate$LocaleNames_wo);
	return class$;
}

$Class* LocaleNames_wo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
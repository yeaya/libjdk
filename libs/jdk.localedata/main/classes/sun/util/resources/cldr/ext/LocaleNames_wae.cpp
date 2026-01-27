#include <sun/util/resources/cldr/ext/LocaleNames_wae.h>

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

$MethodInfo _LocaleNames_wae_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_wae, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_wae, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_wae_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_wae",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_wae_MethodInfo_
};

$Object* allocate$LocaleNames_wae($Class* clazz) {
	return $of($alloc(LocaleNames_wae));
}

void LocaleNames_wae::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_wae::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_TO, "Tonga"_s);
	$var($String, metaValue_ar, u"Arabiš"_s);
	$var($String, metaValue_bn, u"Bengališ"_s);
	$var($String, metaValue_el, u"Gričiš"_s);
	$var($String, metaValue_gu, "Gujarati"_s);
	$var($String, metaValue_he, u"Hebräiš"_s);
	$var($String, metaValue_hy, u"Armeniš"_s);
	$var($String, metaValue_ja, u"Japaniš"_s);
	$var($String, metaValue_ka, u"Georgiš"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_la, u"Latiniš"_s);
	$var($String, metaValue_lo, u"Laotiš"_s);
	$var($String, metaValue_my, u"Burmesiš"_s);
	$var($String, metaValue_or, "Oriya"_s);
	$var($String, metaValue_si, u"Singalesiš"_s);
	$var($String, metaValue_ta, u"Tamiliš"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Filipiniš"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Iberišes Schpaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"Abčasiš"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Himmelfártsinsla"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Vereinigti Arabiše Emirat"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Flämiš"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganištan"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Afrikáns"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua und Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albanie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armenie"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amhariš"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentinie"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Amerikaniš Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Assamesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Öštrič"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Australie"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Amerikanišes Engliš"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Alandinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbaidšan"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Serbaidšaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnie und Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeš"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgie"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Wísrussiš"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgarie"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bulgariš"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bačrain"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Benin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St. Bartholomäus-Insla"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliwie"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tibetiš"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilie"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Bosniš"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvetinsla"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Wísrussland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Katalaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Zentralafrikaniši Rebublik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Schwiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Elfebeiküšta"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cookinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Tšile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("China"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbie"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Clipperton Insla"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Costa Rica"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Tšečiš"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kap Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Wienäčtsinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zypre"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Walisiš"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Tšečie"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Däniš"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Iberišes Portugisiš"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Titšland"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Titš"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dšibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dänemark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Doninica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikaniši Rebublik"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"Malediwiš"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Latiamerikanišes Schpaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algerie"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Butaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta und Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Eštland"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Weštsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Engliš"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Schpanie"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Schpaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Ethiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Estniš"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europäiši Unio"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Baskiš"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregorianišä Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Persiš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Vereifačt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Arabiši Zálä"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Traditionell"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Finiš"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidši"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"Fidšianiš"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Falklandinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesie"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöe"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"Frankrič"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Wälš"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Iriš"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("England"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Georgie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Französiš Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grönland"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Galiziš"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Ginea"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Equatorialginea"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Unbekannti Schprač"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gričeland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Südgeorgie und d’südliče Senwičinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Ginea Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Öštričišes Titš"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Sonderverwaltigszona Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard- und McDonald-Inslä"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroatie"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Kroatiš"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"Haitianiš"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungare"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Ungariš"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanariše Inslä"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesie"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Indonesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indie"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britišes Territorium em indiše Ozean"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Iisländiš"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italie"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Italieniš"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"Malaisiš"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordanie"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Schwizer Hočtitš"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latíamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirgištan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodša"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kazačiš"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komore"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Kambodšaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts und Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanadišes Wälš"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Koreaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Nordkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Südkorea"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kašmiriš"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kurdiš"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Schwizer Wälš"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"Niwmelanesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kaimaninslä"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kirgisiš"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kasačstan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"Kirilliš"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Luxemburgiš"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Liečteštei"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litaue"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Litauiš"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxeburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Lettiš"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Lübie"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"Thána"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monago"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Montenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagási"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Maršalinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Standard Unicode Sortierreiefolg"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Mazedoniš"_s)
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
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolei"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Mongoliš"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Sonderverwaltigszona Makau"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nördliči Mariane"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinique"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretanie"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Monserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Malaíš"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Maltesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediwe"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Allgmeini Süeč"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegiš Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Niwkaledonie"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nordndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepalesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolkinsla"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holand"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Holändiš"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Norwegiš Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norwäge"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Niwséland"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Osétiš"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Pandšabiš"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Britišes Engliš"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Französiš Polinesie"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Niwginea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakištan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Pole"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Polniš"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierre und Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Rico"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Paleština"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Paštu"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portugisiš"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Brasilianišes Portugisiš"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Üssers Ozeanie"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Quečua"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Wäld"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Ethiopiš"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nordamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Südamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Ozeanie"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rätromaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumänie"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rumäniš"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbie"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Rusiš"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Ruandiš"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Auštrališes Engliš"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabie"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomone"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Weštafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sečelle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Zentralamerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Schwede"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Nordsamiš"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Oštafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Mittelafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slowenie"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Südličs Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard und Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amerikaniš Kontinänt"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slowakei"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Slowakiš"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Sloweniš"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Samoaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shona"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Somališ"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Albaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Serbiš"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"São Tomé and Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Südsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Sundanesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Schwediš"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Suaheliš"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sürie"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swasiland"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Nördličs Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- und Caicosinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Zentralasie"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Tšad"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Weštasie"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Französiši Süd- und Antarktisgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tadšikiš"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thailändiš"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tadšikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanadišes Engliš"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibik"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Turkmeniš"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Ošttimor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmeništan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunesie"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(metaValue_TO)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türkei"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Türkiš"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad und Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwan"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"Taitiš"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Unkodierti Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraine"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Oštasie"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Ošteuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nordeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Südasie"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Wešteuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Südoštasie"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Uiguriš"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Korianiš"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Südeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Ukrainiš"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Amerikaniš Ozeanie"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"Hawaíaniš"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugauy"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usbekištan"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Usbekiš"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"St. Vincent und d’Grenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britiši Jungfröiwinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Amerikaniši Jungfröiwinslä"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Vietnamesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Auštralie und Niwséland"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanesie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis und Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronesišes Inselgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walser"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinesie"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Schriftlos"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Jéme"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Moyette"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Südafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Chinesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Unbekannti Regio"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nordsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Vereifačts Chinesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Traditionells Chinesiš"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Jakutiš"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		})
	}));
	return data;
}

LocaleNames_wae::LocaleNames_wae() {
}

$Class* LocaleNames_wae::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_wae, name, initialize, &_LocaleNames_wae_ClassInfo_, allocate$LocaleNames_wae);
	return class$;
}

$Class* LocaleNames_wae::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
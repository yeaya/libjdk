#include <sun/util/resources/cldr/ext/LocaleNames_sg.h>

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

$MethodInfo _LocaleNames_sg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sg_MethodInfo_
};

$Object* allocate$LocaleNames_sg($Class* clazz) {
	return $of($alloc(LocaleNames_sg));
}

void LocaleNames_sg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_DE, u"Zâmani"_s);
	$var($String, metaValue_FR, u"Farânzi"_s);
	$var($String, metaValue_IN, u"Ênnde"_s);
	$var($String, metaValue_RW, u"Ruandäa"_s);
	$var($String, metaValue_SO, u"Somalïi"_s);
	$var($String, metaValue_UA, u"Ukrêni"_s);
	$var($String, metaValue_VN, u"Vietnäm"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Porto Rîko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Sêse tî Palestîni"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Pörtugäle, Ködörö Pûra"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Portugëe, Pûra"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"Paraguëe"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"Katära"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Andôro"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Arâbo Emirâti Ôko"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Faganïta, Afganïstäan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antîgua na Barbûda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Angûîla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Akâan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Armenïi"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Amarîki"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Angoläa"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Arzantîna"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Arâbo"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samöa tî Amerîka"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Otrîsi"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reinïon"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ostralïi, Sotralïi"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Arûba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Zerebaidyäan, Azerbaidyäan,"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rumëen"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnïi na Herzegovînni"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Barabâda"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bengladêshi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bêleze, Belezîki"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rusïi"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Bielörûsi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Rûsi"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(metaValue_RW)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bulugarïi"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Bulugäri"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bahrâina"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Burundïi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Benëen"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Beremûda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brunêi"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Bengäli"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolivïi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saûdi Arabïi"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Zûâ Salomöon"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brezîli"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Sëyshêle"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bahâmasa"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudäan"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Butäan"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suêde"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"Sïngäpûru"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"Sängö"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Sênt-Helêna"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"Solovenïi"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Belarüsi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Belîzi"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Solovakïi"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sierä-Leône"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"Sên-Marëen"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Senegäle"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(metaValue_SO)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kanadäa"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"Surinäm"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Ködörösêse tî Ngunuhalëzo tî kongö"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sâô Tömê na Prinsîpe"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Ködörösêse tî Bêafrîka"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salvadöro"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Sueduäa"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongö"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Sûîsi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kôdivüära"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sirïi"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Swäzïlânde"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"âzûâ Kûku"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Shilïi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamerûne"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Shîna"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kolombïi"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Tämûli"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kôsta Rîka"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Âzûâ Turku na Kaîki"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Tyâde"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Tyêki"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kubäa"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Azûâ tî Kâpo-Vêre"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"Togö"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Tailânde"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thâi"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Sîpri"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Taazikiistäan"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ködörösêse tî Tyêki"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Timôro tî Tö"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkumenistäan"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunizïi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Turukïi"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Tûrûku"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinitùee na Tobagö"_s)
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
			$of("TV"_s),
			$of(u"Tüvalü"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Tâiwâni"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Dibutùii"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Danemêrke"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dömïnîka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Ködörösêse tî Dominîka"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"Ugandäa"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(metaValue_UA)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alzerïi"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Ûrdu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekuatëre"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ÂLeaa-Ôko tî Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Estonïi"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Kâmitâ"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"Uruguëe"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekistäan"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Gerêki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Anglëe"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Letëe tî Vatikäan"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Eritrëe"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Sên-Vensäan na âGrenadîni"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Espânye"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Espanyöl"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Etiopïi"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Venezueläa"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Âzôâ Viîrîggo tî Anglëe"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Âzûâ Virîgo tî Amerîka"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(metaValue_VN)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Farsî"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"Vanuatü"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"Fëlânde"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidyïi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Âzûâ tî Mälüîni"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronezïi"_s)
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
			$of("WF"_s),
			$of(u"Walîsi na Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gaböon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Ködörögbïä--Ôko"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Samoäa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"Grenâda"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Zorzïi"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Güyâni tî farânzi"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Ganäa"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Zibraltära, Zibaratära"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gorolânde"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"Gambïi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"Ginëe"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadelûpu"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Ginëe tî Ekuatëre"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Gerêsi"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"Guatêmälä"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"Guâm"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"Gninëe-Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Gayâna"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Haüsä"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Hîndi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Honduräsi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kroasïi"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haitïi"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yëmêni"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Hongirùii"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Hongruäa"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Ênndonezïi"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Mäyôte"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Enndonezïi"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"Irlânde"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Ïgbö"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israëli"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Sêse tî Anglëe na Ngûyämä tî Ênnde"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Mbongo-Afrîka"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Irâki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Iräan"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Islânde"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IN)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Italùii"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Shinuäa"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Zambïi"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Zaponëe"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Zûlu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbäbwe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Zamaîka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Zordanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Zapöon"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Zavanëe"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Kenyäa"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kirigizitùaan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kämbôzi"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Kömôro"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Kmêre"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Sên-Krïstôfo-na-Nevîsi"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Koreyëen"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Korëe tî Banga"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Korëe tî Mbongo"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Köwêti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Âzûâ Ngundë, Kaimäni"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakisitäan"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"Lùaôsi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Libùaan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Sênt-Lisïi"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein,"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Sirî-Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Liberïa"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"Lesôtho"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lugzambûru"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Letonùii"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Libïi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marôko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"Monaköo"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Moldavùii"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"Madagaskära"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Âzûâ Märshâl"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"Malïi"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"Myämâra"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mongolïi"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Âzûâ Märïâni tî Banga"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"Märtïnîki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Moritanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Monserâte"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Malëe"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"Mâlta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"Mörîsi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"Maldîva"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"Malawïi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mekisîki"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Malezïi"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Miamära, Birimäni"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Mözämbîka"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"Namibùii"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Finî Kaledonïi"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nizëre"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Nepalëe"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Zûâ Nôrfôlko"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nizerïa"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Holände"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Holandëe"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Nörvêzi"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nëpâli"_s)
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
			$of("NZ"_s),
			$of(u"Finî Zelânde"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omâni"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Penzäbï"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"Perüu"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Polinezïi tî farânzi"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papû Finî Ginëe, Papuazïi"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filipîni"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pakistäan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pölôni"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Polonëe"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Sên-Pyêre na Mikelöon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitikêrni"_s)
		})
	}));
	return data;
}

LocaleNames_sg::LocaleNames_sg() {
}

$Class* LocaleNames_sg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sg, name, initialize, &_LocaleNames_sg_ClassInfo_, allocate$LocaleNames_sg);
	return class$;
}

$Class* LocaleNames_sg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
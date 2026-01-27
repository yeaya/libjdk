#include <sun/util/resources/cldr/ext/LocaleNames_nmg.h>

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

$MethodInfo _LocaleNames_nmg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_nmg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_nmg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_nmg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nmg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nmg_MethodInfo_
};

$Object* allocate$LocaleNames_nmg($Class* clazz) {
	return $of($alloc(LocaleNames_nmg));
}

void LocaleNames_nmg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nmg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ES, u"Paŋá"_s);
	$var($String, metaValue_FR, "Fala"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Puɛrto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palɛstin"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Pɔrtugal"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Kiɛl bó pɔ̄rtugɛ̂"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palo"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Andɔ́ra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Minlambɔ́ Nsaŋ́nsa mí Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afganistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Antíga bá Barbúda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Anguílla"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Kiɛl akan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arménia"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Kiɛl amaria"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Argentína"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Kiɛl b’árabe"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Samoa m ́Amɛ́rka"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Ötrish"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réuniɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Östraliá"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Árúba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Azerbaïjaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Roumania"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Kiɛl bó rumɛ̂n"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bosnia na Ɛrzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbado"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bɛŋgladɛsh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bɛlgik"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russi"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Kiɛl belarussie"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Kiɛl russia"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Kiɛl bulgaria"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Kiɛl rwandā"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
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
			$of("BM"_s),
			$of(u"Bɛrmuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brunɛi"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Kiɛl bengalia"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivia"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Maŋ́ má Salomɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brésil"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seychɛlle"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Sudaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Butaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Suɛd"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Lina"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bɛliz"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakia"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"Sierra Leɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"Somália"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Kiɛl somaliā"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongó Zaïre"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tomé ba Prinship"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Sentrafríka"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Salvadɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Kiɛl bó suedois"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Switzɛrland"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kote d´Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Syria"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swaziland"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Maŋ́ má Kook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Tshili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Shine"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kɔlɔ́mbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Kiɛl tamul"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kosta Ríka"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Maŋ́ má Turk na Kaiko"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tshad"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Kiɛl bó tchɛk"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Maŋ́ má Kapvɛr"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"Taïland"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Kiɛl thaï"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Sipria"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tajikistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Nlambɔ́ bó tschɛk"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelo"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"Timɔr tsindikēh"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmɛnistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tunisiá"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"Tɔnga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Kiɛl bó turk"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"Trinidad ba Tobágó"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Jaman"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Jáman"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"Tuvalú"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"Taïwan"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Jibúti"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tanzánía"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemark"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dominíka"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Nlambɔ́ Dominíka"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"Ukrɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Kiɛl b’ukrɛ̄nien"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Kiɛl úrdu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekuateur"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amɛŕka"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"Ɛstonia"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ägyptɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Usbǝkistaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Kiɛl bó grɛk"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Ngɛ̄lɛ̄n"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Erytrea"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ba Grenadines"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(metaValue_ES)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Ethiopiá"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Vǝnǝzuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Minsilɛ́ mímaŋ mí ngɛ̄lɛ̄n"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Minsilɛ mí maŋ́ m´Amɛrka"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Kiɛl viɛtnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Viɛtnam"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Kiɛl pɛrsia"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlande"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fijiá"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Maŋ má Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronesia"_s)
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
			$of("Wallis ba Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"Gabɔŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Nlambɔ́ Ngɛlɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Jɔrgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Guyane Fala"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"Gána"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gilbratar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Guine Ekuatorial"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Grɛce"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guine Bisso"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Kiɛl máwúsá"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Kiɛl b’indien"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"Ɔndúras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroasia"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"Haïti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"Yǝmɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Ɔngría"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Kiɛl b’ɔ́ngrois"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Yorúbâ"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"Mayɔt"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Kiɛl indonesie"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Kiɛl ikbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Äsrɛl"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Nlambɔ́ ngɛlɛn ma yí maŋ ntsiɛh"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afríka yí sí"_s)
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
			$of("IT"_s),
			$of("Italia"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Kiɛl italia"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Kiɛl bó chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Kiɛl bó japonɛ̌"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbabwǝ"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jɔrdania"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"Japɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Kiɛl bó javanɛ̌"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Kɛnya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kyrgystaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Kɔmɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Kiɛl bó mɛr"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts na Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Kiɛl koré"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Koré yí bvuɔ"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Koré yí sí"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kowɛit"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Maŋ́ má kumbi"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazakstaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Libaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lishenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"Lituaniá"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latvia"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"Marɔk"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"Mɔldavia"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Maŋ́ má Marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Mɔngolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Maŋ́ Mariá"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Mɔnserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Kiɛl Malɛ̌siā"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Morisse"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivia"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"Mɛxik"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Kiɛl birmania"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoni nwanah"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Kiɛl nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Maŋ́ má Nɔrfɔrk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Nedɛrland"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Kiɛl bóllandais"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Nɔrvɛg"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Noru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"Niuɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Zeland nwanah"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Oman"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Kiɛl pɛndjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polynesia Fala"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Guine Papuasi"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"Pɔlɔŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Kiɛl pɔlɔŋe"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Saint Peter ba Mikelɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkairn"_s)
		})
	}));
	return data;
}

LocaleNames_nmg::LocaleNames_nmg() {
}

$Class* LocaleNames_nmg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nmg, name, initialize, &_LocaleNames_nmg_ClassInfo_, allocate$LocaleNames_nmg);
	return class$;
}

$Class* LocaleNames_nmg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
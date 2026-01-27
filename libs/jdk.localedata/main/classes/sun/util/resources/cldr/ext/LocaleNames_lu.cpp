#include <sun/util/resources/cldr/ext/LocaleNames_lu.h>

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

$MethodInfo _LocaleNames_lu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_lu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_lu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_lu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_lu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_lu_MethodInfo_
};

$Object* allocate$LocaleNames_lu($Class* clazz) {
	return $of($alloc(LocaleNames_lu));
}

void LocaleNames_lu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_lu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_PL, "Mpoloni"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Mpotoriku"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Palesine"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Mputulugeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Mputulugɛsi"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Palagwei"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katari"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andore"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Lemila alabu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afuganisita"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antiga ne Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angiye"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Liakan"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Alubani"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Ameni"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Liamhariki"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Alijantine"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Arabi"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samoa wa Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Otilisi"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Lenyo"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Ositali"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Ajelbayidja"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romani"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Liromani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Mbosini ne Hezegovine"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barebade"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Benguladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belejiki"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Risi"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Belarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Lirisi"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Bukinafaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Biligari"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulegari"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrene"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Bene"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brineyi"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Mbolivi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Alabu Nsawudi"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Lutanda lua Solomu"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Mnulezile"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seshele"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamase"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Suda"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butani"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Suwedi"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapure"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Mbotswana"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Santu eleni"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Siloveni"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Byelorisi"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Silovaki"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siera Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Santu Marine"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegale"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Lisomali"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Ditunga wa Kongu"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao Tome ne Presipɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Ditunga dya Afrika wa munkatshi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Savadore"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Lisuwidi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongu"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Swise"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Kotedivuale"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siri"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swazilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Lutanda lua Kookɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Shili"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerune"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Shine"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombi"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Mtamuili"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kositarika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Lutanda lua Tuluki ne Kaiko"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tshadi"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tsheki"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Lutanda lua Kapevele"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togu"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tayilanda"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Ntailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Shipele"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tazikisita"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Ditunga dya Tsheka"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timoru wa diboku"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Tukemenisita"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tinizi"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Tuluki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Ntuluki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tinidade ne Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Alemanu"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Lizelumani"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwani"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danemalaku"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Duminiku"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Ditunga wa Duminiku"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukreni"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Alijeri"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Nkrani"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekwatele"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Esitoni"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Mushidi"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Irigwei"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uzibekisita"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Giliki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Lingelesa"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Nvatika"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Elitele"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Santu vesa ne Ngelenadine"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Nsipani"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Lihispania"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etshiopi"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Lutanda lua Vierzi wa Angeletele"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Lutanda lua Vierzi wa Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Liviyetinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Viyetiname"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Mpepajemi"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Filande"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fuji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Lutanda lua Maluni"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezi"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Nfalanse"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Mfwàlànsa"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walise ne Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Ngabu"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Angeletele"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Ngelenade"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Joriji"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Giyane wa Nfalanse"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ngana"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Jibeletale"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Ngowelande"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambi"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Ngine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Ngwadelupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Gine Ekwatele"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Ngeleka"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Ngwatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Ngwame"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Nginebisau"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Ngiyane"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Hindi"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Ondurase"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Krowasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Ayiti"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemenu"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ongili"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hongili"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Nyoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonezi"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayote"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Lindonezia"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irelande"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Isirayele"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Inde"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Lutanda lwa Angeletele ku mbu wa Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Afrika ya Súdi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Ira"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Isilande"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itali"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Litali"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"shinɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambi"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Liyapani"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Nzulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaiki"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jodani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japu"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Java"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kigizisita"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodza"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoru"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Santu krístofe ne Neves"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Likoreya"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Kore wa muulu"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Kore wa mwinshi"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Koweti"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Lutanda lua Kayima"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakusita"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Lawosi"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Liba"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Santu lisi"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lishuteni"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sirilanka"_s)
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
			$of("Litwani"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Likisambulu"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Tshiluba"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letoni"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroke"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaku"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Molidavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagasikari"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Lutanda lua Marishale"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myamare"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongoli"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Lutanda lua Mariane wa muulu"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martiniki"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritani"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Musera"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Limalezia"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malite"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Morise"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Madive"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksike"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledoni wa mumu"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nijere"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Lutanda lua Norfok"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nijerya"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragwa"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"Olandɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("olandi"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noriveje"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nepálɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Nyue"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Zelanda wa mumu"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omane"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Lipunjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Polinezi wa Nfalanse"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papwazi wa Nginɛ wa mumu"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Nfilipi"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakisita"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(metaValue_PL)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(metaValue_PL)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Santu pététo ne Mikelu"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pikairni"_s)
		})
	}));
	return data;
}

LocaleNames_lu::LocaleNames_lu() {
}

$Class* LocaleNames_lu::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_lu, name, initialize, &_LocaleNames_lu_ClassInfo_, allocate$LocaleNames_lu);
	return class$;
}

$Class* LocaleNames_lu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
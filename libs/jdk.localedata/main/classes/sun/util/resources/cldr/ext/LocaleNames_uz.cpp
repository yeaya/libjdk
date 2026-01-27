#include <sun/util/resources/cldr/ext/LocaleNames_uz.h>

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

$MethodInfo _LocaleNames_uz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_uz, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_uz, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_uz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_uz",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_uz_MethodInfo_
};

$Object* allocate$LocaleNames_uz($Class* clazz) {
	return $of($alloc(LocaleNames_uz));
}

void LocaleNames_uz::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_uz::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, "arab"_s);
	$var($String, metaValue_bn, "bengal"_s);
	$var($String, metaValue_bo, "tibet"_s);
	$var($String, metaValue_el, "grek"_s);
	$var($String, metaValue_gu, "gujarot"_s);
	$var($String, metaValue_he, "ivrit"_s);
	$var($String, metaValue_hy, "arman"_s);
	$var($String, metaValue_ja, "yapon"_s);
	$var($String, metaValue_kn, "kannada"_s);
	$var($String, metaValue_lo, "laos"_s);
	$var($String, metaValue_ml, "malayalam"_s);
	$var($String, metaValue_mn, "mongol"_s);
	$var($String, metaValue_or, "oriya"_s);
	$var($String, metaValue_si, "singal"_s);
	$var($String, metaValue_ta, "tamil"_s);
	$var($String, metaValue_te, "telugu"_s);
	$var($String, metaValue_th, "tay"_s);
	$var($String, metaValue_zh, "xitoy"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("kyoln"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("miranda"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("belgilar"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of("chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("timne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("rapanui"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Me’roj oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Birlashgan Arab Amirliklari"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamand"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afgʻoniston"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua va Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("habash taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Angilya"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armaniston"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktida"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentina"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerika Samoasi"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Avstriya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Avstraliya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("ingliz (Amerika)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Aland orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Ozarbayjon"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosniya va Gertsegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("sebuan"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"qo‘miq"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgiya"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina-Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bolgariya"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrayn"_s)
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
			$of("Sen-Bartelemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Bruney"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliviya"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Boneyr, Sint-Estatius va Saba"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Braziliya"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bagama orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Buve oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliz"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("fors taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("ivrit raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokos (Kiling) orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mozandaron"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo – Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Markaziy Afrika Respublikasi"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongo – Brazzavil"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Shveytsariya"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kot-d’Ivuar"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Kuk orollari"_s)
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
			$of("Xitoy"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Klipperton oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta-Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kabo-Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kyurasao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Rojdestvo oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kipr"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Chexiya"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Germaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("achin"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diyego-Garsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Daniya"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("brayl"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("arman kichik raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominikan Respublikasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("zuni"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Jazoir"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("pangasinan"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seuta va Melilya"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiyamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Misr"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"G‘arbiy Sahroi Kabir"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("palau"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("chukot"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("mari"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("choktav"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cheroki"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreya"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Ispaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Efiopiya"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Yevropa Ittifoqi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("grigorian taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("yevrozona"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("cheyenn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujarot raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("adigey"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Folklend orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Farer orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Fransiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Buyuk Britaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("kreol (Nigeriya)"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruziya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Fransuz Gvianasi"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Gernsi"_s)
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
			$of("Grenlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gvineya"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gvadelupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvatorial Gvineya"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Gretsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Janubiy Georgiya va Janubiy Sendvich orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Gvatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gvineya-Bisau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("klingon"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Gayana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("sorani-kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"til tarkibi yo‘q"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of("nemis (Avstriya)"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Gonkong (Xitoy MMH)"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Xerd va Makdonald orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Gonduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Xorvatiya"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("agem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("nemis (Shveytsariya)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Gaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Vengriya"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Kanar orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("neapolitan"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("nama"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Isroil"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Men oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindiston"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britaniyaning Hind okeanidagi hududi"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iroq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Eron"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Islandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Italiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("matematik ifodalar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("tay raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengal raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("islomiy taqvim"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Yamayka"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Iordaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Yaponiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("aynu"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannada raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("yuqori nemis (Shveytsariya)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("buddizm taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keniya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Lotin Amerikasi"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Qirgʻiziston"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodja"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komor orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sent-Kits va Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("fransuz (Kanada)"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Shimoliy Koreya"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Janubiy Koreya"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("fransuz (Shveytsariya)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Quvayt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok-piksin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Kayman orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Qozogʻiston"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("kirill"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Livan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Sent-Lyusiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("gvichin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("quyi nemis"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Lixtenshteyn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Shri-Lanka"_s)
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
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lyuksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latviya"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Liviya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("taana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokash"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldova"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Chernogoriya"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Sent-Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshall orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("aleut"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Shimoliy Makedoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanma (Birma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongoliya"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("nevar"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makao (Xitoy MMH)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Shimoliy Mariana orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinika"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mavritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mavrikiy"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of("janubiy oltoy"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldiv orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malavi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("yapon taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malayziya"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Sahro janubidagi Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("yahudiy taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Yangi Kaledoniya"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Niderlandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norvegiya"_s)
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
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Yangi Zelandiya"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Ummon"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("kreol (Seyshel)"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("ingliz (Britaniya)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Fransuz Polineziyasi"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua – Yangi Gvineya"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pokiston"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polsha"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("evondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sen-Pyer va Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitkern orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto-Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Falastin hududlari"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("kichik grek raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paragvay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qatar"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niue"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Tashqi Okeaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezgin"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Dunyo"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Shimoliy Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reyunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Janubiy Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okeaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Ruminiya"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rossiya"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudiya Arabistoni"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Solomon orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasavak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"G‘arbiy Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seyshel orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Markaziy Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Shvetsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Sharqiy Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Shimoliy Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Muqaddas Yelena oroli"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"qatorni qat’iy uzish"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Markaziy Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sloveniya"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Janubiy Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Shpitsbergen va Yan-Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Syerra-Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San-Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapuche"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaxo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"an’anaviy tamil raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Janubiy Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("San-Tome va Prinsipi"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint-Marten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Suriya"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Svazilend"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan-da-Kunya"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"AQSH o‘lchov tizimi"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Shimoliy Amerika – AQSH va Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks va Kaykos orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Chad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Fransuz Janubiy hududlari"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tojikiston"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karib havzasi"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timor-Leste"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmaniston"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunis"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turkiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad va Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tayvan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("asturiy"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kvasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"noma’lum yozuv"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraina"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("arumin"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Sharqiy Osiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuva"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suaxili (Kongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Janubiy Osiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Janubi-sharqiy Osiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Janubiy Yevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("AQSH yondosh orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Birlashgan Millatlar Tashkiloti"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerika Qo‘shma Shtatlari"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("gavaycha"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Urugvay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("pruss"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Oʻzbekiston"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("markaziy atlas tamazigxt"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiyembun"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sent-Vinsent va Grenadin"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venesuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britaniya Virgin orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("AQSH Virgin orollari"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Vyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"no‘g‘ay"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Avstralaziya"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneziya"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Uollis va Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikroneziya mintaqasi"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("lakota"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("valis"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("volamo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Qalbaki urg‘u"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("varay"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Qalbaki Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("avadxi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polineziya"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("yozuvsiz"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("valbiri"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of("nko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("standart saralash tartibi"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotta"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Janubiy Afrika Respublikasi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("qatorni yumshoq uzish"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("gruzin raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Noma’lum mintaqa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("metrik tizim"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("shimoliy soto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("machame"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("soddalashgan xitoy raqamlari (moliyaviy)"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("hiligaynon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("kengaytirilgan arab-hind raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("dakota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"to‘liq enli raqamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("dargva"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("shimoliy luri"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("kxmer"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("rim raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("saxa"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("santali"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukxi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("luba-lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filipincha"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("xmong"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushay"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("bali"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("ispan (Yevropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("shotland"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("sitsiliya"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("abxaz"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("amxar"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("aragon"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("katakana yoki hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("assam"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("avar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of("janubiy kurd"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("ozarbayjon"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("boshqird"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("bolgar"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("breton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("bosniy"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("myanma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laos raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("katalan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro-senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("korsikan"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("chex"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("slavyan (cherkov)"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("chuvash"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("valliy"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("habash raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("dan"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("portugal (Yevropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("nemischa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("standart valyuta formati"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("divexi"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("ispan (Lotin Amerikasi)"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("dzongka"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("xitoy taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("grek raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("eve"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("qatorni odatiy uzish"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldovan"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("inglizcha"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("ispancha"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("estoncha"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("bask"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("tashelxit"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(metaValue_zh)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("yuqori sorb"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("shan"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("fors"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("soddalashgan xitoy"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("zamonaviy arab raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"an’anaviy xitoy"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fula"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("fincha"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"g‘arbiy baluj"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("kanton"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("farercha"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("fransuzcha"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"g‘arbiy friz"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("irland"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("shotland-gel"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("galisiy"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bxojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"noma’lum til"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("men"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("xausa"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("hind"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("xupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("xorvat"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("gaityan"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("venger"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("gerero"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingva"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("indonez"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibet raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("sichuan"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("island"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("italyan"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("inuktitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of("janubiy saam"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("yavan"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("madur"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("lule-saam"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("maythili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("inari-saam"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("gruzincha"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("skolt-saam"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("masay"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("kvanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("qozoqcha"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("grenland"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("xmer"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("koreyscha"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("kashmircha"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("kurdcha"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("korn"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"qirgʻizcha"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("lotincha"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("lyuksemburgcha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malayalam raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburg"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friul"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Britaniya o‘lchov tizimi"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("litva"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("luba-katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("latishcha"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("malagasiy"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("marshall"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("standart Unicode saralash tartibi"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("makedon"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("maratxi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("malay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("maltiy"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("birman"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("quyi sorb"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("qidiruv"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("norveg-bokmal"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("shimoliy ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepal"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("niderland"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("norveg-nyunorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("janubiy ndebel"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("navaxo"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("cheva"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("kachin"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabil"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("oksitan"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("kaji"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("arman raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("osetin"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("kabardin"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan-tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("panjobcha"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("duala"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("polyakcha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("dangi taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("pushtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("portugalcha"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("saralash tartibi"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("portugal (Braziliya)"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("maxuva-mitto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("valyuta formati"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("taqvim"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("meta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 soatlik tizim (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 soatlik tizim (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("birma raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("kechua"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of("habash"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 soatlik tizim (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 soatlik tizim (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("romansh"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("rundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("valyuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("rumincha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("oriya raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"xitoy o‘nli raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("ruscha"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinyaruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("mikmak"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("ingliz (Avstraliya)"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardin"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("shimoliy saam"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("sango"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("slovakcha"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("slovencha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("shona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("somalicha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arab-hind raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("alban"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("serbcha"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("svati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("moliyaviy valyuta formati"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("janubiy soto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("sundan"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("shved"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suaxili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"an’anaviy xitoy raqamlari (moliyaviy)"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Osiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Markaziy Osiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"G‘arbiy Osiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("tojik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("bugi"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("ingliz (Kanada)"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("turkman"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("diola-fogni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("yapon raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("turk"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("qamar"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("tatar"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("taiti"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Yevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Sharqiy Yevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Shimoliy Yevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazag"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"G‘arbiy Yevropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"uyg‘ur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("koreys"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("umumiy"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("ukrain"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("qalmoq"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"o‘zbek"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("kxasi"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("quyi sakson"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Mingo taqvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("vyetnam"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra-chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("soat tizimi (12 yoki 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("volapyuk"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of("kiche"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("vallon"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("gagauz"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("suriyacha"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of("gan"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("volof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("tamazigxt"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("standart arab"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("manipur"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("lotin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("soddalashgan xitoy raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"an’anaviy xitoy raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("kxosa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("kichik rim raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("blin"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohauk"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("idish"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of("ispan (Meksika)"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("vai"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_zh)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("qatorni uzish uslubi"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("gruzin"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("yapon raqamlari (moliyaviy)"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("xitoy (soddalashgan)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("komi-permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("konkan"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"xitoy (an’anaviy)"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("kxmer raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukxi raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("bir nechta til"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"o‘lchov tizimi"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("krik"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbert"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamil raqamlari"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("qorachoy-bolqor"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("ingush"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("karel"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("efik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("raqamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("kurux"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("shambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafiya"_s)
		})
	}));
	return data;
}

LocaleNames_uz::LocaleNames_uz() {
}

$Class* LocaleNames_uz::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_uz, name, initialize, &_LocaleNames_uz_ClassInfo_, allocate$LocaleNames_uz);
	return class$;
}

$Class* LocaleNames_uz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
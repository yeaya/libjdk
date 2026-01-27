#include <sun/util/resources/cldr/ext/LocaleNames_cs.h>

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

$MethodInfo _LocaleNames_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_cs, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_cs, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_cs",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_cs_MethodInfo_
};

$Object* allocate$LocaleNames_cs($Class* clazz) {
	return $of($alloc(LocaleNames_cs));
}

void LocaleNames_cs::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_cs::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ccp, u"čakma"_s);
	$var($String, metaValue_kpe, "kpelle"_s);
	$var($String, metaValue_nqo, u"n’ko"_s);
	$var($String, metaValue_vai, "vai"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"kolínština"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"ogamské"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"mirandština"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symboly"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"márvárština"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"emilijština"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"mentavajština"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"emodži"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"mingrelština"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"egyptština stará"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"rádžastánština"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("temne"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"rapanujština"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"rarotongánština"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"tetumština"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Spojené arabské emiráty"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"vlámština"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Afghánistán"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua a Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Etiopský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"gilačtina"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"Časové pásmo"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Albánie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Arménie"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("tengwar"_s)
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
			$of("Prti"_s),
			$of(u"parthské klínové"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Americká Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Rakousko"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Austrálie"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"angličtina (USA)"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Ålandy"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Ázerbájdžán"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna a Hercegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"cebuánština"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladéš"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"kumyčtina"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgie"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"hornoněmčina (středověká)"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulharsko"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrajn"_s)
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
			$of(u"Svatý Bartoloměj"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermudy"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"kutenajština"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"erzjanština"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunej"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bolívie"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karibské Nizozemsko"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Brazílie"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamy"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"sogština"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bhútán"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Bouvetův ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bělorusko"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"viditelná řeč"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Perský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Hebrejské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosové ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"mázandaránština"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo – Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Středoafrická republika"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kongo – Brazzaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"Švýcarsko"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Pobřeží slonoviny"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cookovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Chile"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Čína"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbie"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Clippertonův ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kostarika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Kapverdy"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Vánoční ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Kypr"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Balijské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Česko"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("pau cin hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"vlámština (západní)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Německo"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"hornoněmčina (stará)"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehština"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego García"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"konkánština (Goa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Číslice písma dévanágarí"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Džibutsko"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dánsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"akolština"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"góndština"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Braillovo písmo"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"bráhmí"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Malé arménské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dominikánská republika"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("gorontalo"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"gótština"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"němčina (mohansko-franské dialekty)"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"mejtej majek (manipurské)"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"zunijština"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"tigrejština"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"takrí"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Alžírsko"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"pangasinanština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Poloviční šířka"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"pahlavština"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta a Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"čibča"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("papangau"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekvádor"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonsko"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"tivština"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Egypt"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Západní Sahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"čagatajština"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"palauština"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"čukština"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"činuk pidžin"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"marijština"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"čipevajština"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"čoktština"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"čerokézština"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"Španělsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Evropská unie"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"elamitština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregoriánský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"eurozóna"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"čejenština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gudžarátské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"harappské"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"adygejština"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"arabština (tuniská)"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finsko"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"Fidži"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Falklandské ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"Mikronésie"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"Varianta národního prostředí"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faerské ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"tamilské"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Francie"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"picardština"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"tokelauština"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indický národní kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"romaňolština"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"starořečtina"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"cachurština"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"votština"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Spojené království"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"nigerijský pidžin"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Gruzie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Francouzská Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guernsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("tai le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grónsko"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"angličtina (středověká)"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambie"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Rovníková Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"Řecko"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Jižní Georgie a Jižní Sandwichovy ostrovy"_s)
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
			$of("pdc"_s),
			$of(u"němčina (pensylvánská)"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Guinea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"klingonština"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"tai lü nové"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"kurdština (sorání)"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"žádný jazykový obsah"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"džürčenské"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"talyština"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"němčina (plautdietsch)"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Hongkong – ZAO Číny"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heardův ostrov a McDonaldovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Chorvatsko"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"němčina (Švýcarsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Muslimský kalendář (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"Maďarsko"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"rífština"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"tamašek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanárské ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"čínština (dialekty Minnan)"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"Indonésie"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"staroperština"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irsko"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"neapolština"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"namaština"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Izrael"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"nabatejské"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ostrov Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indie"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Evropské řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britské indickooceánské území"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"Irák"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"Írán"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Island"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itálie"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"matematický zápis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Thajské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"võruština"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"wayúuština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Bengálské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"falčtina"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Islámský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamajka"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"bengálské"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jordánsko"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"ainština"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"mendské"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"tonžština (nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannadské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("kayah li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"němčina standardní (Švýcarsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetické řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"ingrijština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Buddhistický kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"Keňa"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Latinská Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kyrgyzstán"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kambodža"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komory"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Svatý Kryštof a Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"kannadské"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Severní Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Jižní Korea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"Pollardova fonetická abeceda"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuvajt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("tok pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Kajmanské ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kazachstán"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("cyrilice"_s)
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
			$of("LC"_s),
			$of(u"Svatá Lucie"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"féničtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"cyrilce - staroslověnská"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"gwichʼin"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"dolnoněmčina"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lichtenštejnsko"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"Srí Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"akkadština"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"koptština"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"Libérie"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"jupikština (středoaljašská)"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"pahlavské knižní"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litva"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lucembursko"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"Lotyšsko"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("sora sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libye"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"ladinština"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"alabamština"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"lahndština"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"mahádžaní"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Maroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldavsko"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"nü-šu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Černá Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"Svatý Martin (Francie)"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"lambština"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"aleutština"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"thajské"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vaiské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Severní Makedonie"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Barma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolsko"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"névárština"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Macao – ZAO Číny"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"albánština (Gheg)"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Severní Mariany"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"Mauritánie"_s)
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
			$of("cps"_s),
			$of(u"kapiznonština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("Transliterace podle UNGEGN"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauricius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"altajština (jižní)"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maledivy"_s)
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
			$of("type.ca.japanese"_s),
			$of(u"Japonský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malajsie"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"pahlavské klínové"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibie"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"subsaharská Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebrejský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Slovníkové řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nová Kaledonie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of("Wade-Giles"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"turojština"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nigérie"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"pahlavské žalmové"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"hmongské"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nizozemsko"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norsko"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"Nepál"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of("Nauru"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"tsakonština"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"fénické"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"tsimšijské jazyky"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nový Zéland"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"meroitické psací"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"romština"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"meroitické"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"turečtina (krymská)"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"staroangličtina"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Omán"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"kreolština (seychelská)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"staroperské klínové písmo"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Muslimský občanský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"kašubština"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"angličtina (Velká Británie)"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"tatština"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Francouzská Polynésie"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"Papua-Nová Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"Filipíny"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"Pákistán"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polsko"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint-Pierre a Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairnovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Portoriko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Palestinská území"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"balijské"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugalsko"_s)
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
			$of(u"Malé řecké číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"tumbukština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"hebrejské"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"angličtina (Skotsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"jamajská kreolština"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"piemonština"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"niueština"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"vnější Oceánie"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"extremadurština"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"lezginština"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"tuvalština"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("tai viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"svět"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"ao (jazyky Nágálandu)"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Severní Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Réunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Jižní Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("lingua franca nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"pontština"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"redžanské"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Oceánie"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumunsko"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Srbsko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusko"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"manichejské"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"ugaritské klínové"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"kháróšthí"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"Saúdská Arábie"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"pohnpeiština"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"mandejské"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Šalamounovy ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"západní Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychely"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"Súdán"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Střední Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"Švédsko"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"východní Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"aramejština"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"severní Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Svatá Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Striktní styl zalamování řádků"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"střední Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovinsko"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"jižní Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Špicberky a Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovensko"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"bamumské"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"karolínské (woleai)"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leone"_s)
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
			$of(u"Somálsko"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"arapažština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Tamilské tradiční číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"araonština"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Jižní Súdán"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Svatý Tomáš a Princův ostrov"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"arabština (alžírská)"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"arabština (Nadžd)"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"Svatý Martin (Nizozemsko)"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Sýrie"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"jaoština"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"arawacké jazyky"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"arabština (egyptská)"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"arabština (marocká)"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"japština"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"rotumanština"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Americká měrná soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Severní Amerika (oblast)"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks a Caicos"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"jangbenština"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Čad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Francouzská jižní území"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"znaková řeč (americká)"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thajsko"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"Tádžikistán"_s)
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
			$of("TL"_s),
			$of(u"Východní Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of("yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Vyhledávat podle počáteční souhlásky písma hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Turkmenistán"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunisko"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turecko"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad a Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Tchaj-wan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"asturština"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"rusínština"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"rovianština"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"orchonské"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanie"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"neznámé písmo"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"chudábádí"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrajina"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"ligurština"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"arumunština"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"východní Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"tuvinština"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"svahilština (Kongo)"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"jižní Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"haidština"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"jihovýchodní Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"čínština (dialekty Hakka)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Řazení podle pchin-jinu"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"jižní Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"sinhálské"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Menší odlehlé ostrovy USA"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"livonština"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Organizace spojených národů"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Spojené státy"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"havajština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Řazení pro zjednodušenou čínštinu – GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"pruština"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Uzbekistán"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"tamazight (střední Maroko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Řazení podle tahů"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Vatikán"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"provensálština"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Svatý Vincenc a Grenadiny"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britské Panenské ostrovy"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Americké Panenské ostrovy"_s)
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
			$of("nog"_s),
			$of(u"nogajština"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"norština historická"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Australasie"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Melanésie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis a Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Tradiční řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronésie (region)"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"lakotština"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finanční zápis čísel"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Předchozí řazení, kompatibilita"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"němčina (walser)"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("bassa vah"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"wolajtština"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"waština"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"simulovaná diakritika"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"warajština"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"simulovaný obousměrný zápis"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"awadhština"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polynésie"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosovo"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"gudžarátí"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"bez zápisu"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"santálské (ol chiki)"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"batacké"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"Blissovo písmo"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Standardní řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"lombardština"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("fang"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"fantština"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("SignWriting"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Jihoafrická republika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Sundské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Volný styl zalamování řádků"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"dévanágarí"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Gruzínské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Ču-jin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambie"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"neznámá oblast"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"runové"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Metrická soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Kalendář ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"mongština"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"sotština (severní)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Telugské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"kreolština (Louisiana)"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"lozština"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("naxi geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"mašame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"hindština (Fidži)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Finanční číslice zjednodušené čínštiny"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"hiligajnonština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Rozšířené arabsko-indické číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"nuerština"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"dakotština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Číslice – plná šířka"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"chetitština"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"dargština"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"mayské hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"lúrština (severní)"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"koptské"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"newarština (klasická)"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"udmurtština"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"khmerské"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"sandawština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Římské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"jakutština"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"latgalština"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"samarština"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"kavkazskoalbánské"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"sasakština"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"santálština"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"berberské"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"judeoperština"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(u"saurášterština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"Numerický"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"Nativní číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"luba-luluaština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Plná šířka"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"sangoština"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"luiseňo"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"ňankolština"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"ňamwežština"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"lundština"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"ňorština"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"luoština"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"filipínština"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"hmongština"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"delawarština"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"mizoština"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"balúčština"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"slejvština (athabaský jazyk)"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"balijština"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"ugaritština"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"finština (tornedalská)"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("luhja"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"bavorština"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"judeoarabština"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"španělština (Evropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"skotština"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"sicilština"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"afarština"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"abcházština"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("nastaliq"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("batak toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"avestánština"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"afrikánština"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"akanština"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"amharština"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"aragonština"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"arabské"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"japonské"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"arabština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"japonské slabičné"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"ásámština"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"sassarština"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"lineární A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"avarština"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"lineární B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"kurdština (jižní)"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"ajmarština"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"ázerbájdžánština"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"chodžiki"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"baškirština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Řazení podle radikálů"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"běloruština"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"bulharština"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"bislamština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Javánské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"bambarština"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"bengálština"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"tibetština"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"bretonština"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"bosenština"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("seneca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"myanmarské"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of(u"seriština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Laoské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"selkupština"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"katalánština"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("koyraboro senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"čečenština"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"čamoro"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"korsičtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"urijské"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"kríjština"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"čeština"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"staroslověnština"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"čuvaština"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"velština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Etiopské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"dánština"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"portugalština (Evropa)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"němčina"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Standardní měnový formát"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"bedža"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"dinkština"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"jutština"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"buginské"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"bembština"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"irština (stará)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Mongolské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"maledivština"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"batavština"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"dzongkä"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Čínský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"čínština (klasická)"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraserovo"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"zarmština"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"žemaitština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Řecké číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"eweština"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Běžný styl zalamování řádků"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"moldavština"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"řečtina"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"angličtina"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"badagština"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"lazština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Řazení pro tradiční čínštinu – Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"španělština"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"estonština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"baskičtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"buhidské"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"samařské"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"tašelhit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"hornolužická srbština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"šanština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"hanunóo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"perština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"zjednodušené"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Západní číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"tradiční"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"fulbština"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"arabština (čadská)"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"čínština (dialekty Xiang)"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"finština"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"fidžijština"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"fonština"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"balúčština (západní)"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"kantonština"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"faerština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("Transliterace podle BGN"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"francouzština"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"fríština (západní)"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"irština"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"skotská gaelština"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"galicijština"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"guaranština"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"bhódžpurština"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"neznámý jazyk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"Etiopský kalendář (Amete-Alem)"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"gudžarátština"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"manština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Somálské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"hauština"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"hebrejština"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"hindština"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"bikolština"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("hiri motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"chorvatština"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haitština"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"maďarština"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"arménština"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"hererština"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"francouzština (cajunská)"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"indonéština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibetské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"igboština"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"iština (sečuánská)"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"francouzština (středověká)"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"inupiakština"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"francouzština (stará)"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"franko-provensálština"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"fríština (východní)"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"bandžarština"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"fríština (severní)"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"islandština"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"italština"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"inuktitutština"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"němčina (slezská)"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"japonština"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"malajlámské"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"starojihoarabské"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"dogarština"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"selajarština"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"sámština (jižní)"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javánština"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shawova abeceda"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"madurština"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"sámština (lulejská)"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"magahijština"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"maithiliština"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"sámština (inarijská)"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"gruzínština"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("siksika"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"makasarština"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"čínština (dialekty Wu)"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"sámština (skoltská)"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"mandingština"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"konžština"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"gotické"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"kikujština"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"masajština"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"kuaňamština"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"kazaština"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grónština"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"khmérština"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"kannadština"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"korejština"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("kanuri"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"kašmírština"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("kirt"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"lepčské"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"avestánské"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"kurdština"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"komijština"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"kornština"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"kyrgyzština"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"sonikština"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("latina"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"lucemburština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malajálamské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"gandština"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"limburština"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"tibetské"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"lingalština"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"furlanština"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laoština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Britská měrná soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"litevština"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"lubu-katanžština"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"lotyština"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"sogdština"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"malgaština"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"maršálština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Výchozí řazení Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"maorština"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"makedonština"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"malajálamština"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"mongolština"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"maráthština"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"malajština"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"maltština"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"barmština"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"saurášterské"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"arménské"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"mokšanština"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"dolnolužická srbština"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"aramejské (imperiální)"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"naurština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Obecné hledání"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"norština (bokmål)"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele (Zimbabwe)"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"nepálština"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"ndondština"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"nizozemština"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"norština (nynorsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"norština"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"ndebele (Jižní Afrika)"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"navažština"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"karakalpačtina"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"ňandžština"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"kačijština"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"kabylština"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"okcitánština"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"kambština"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("mende"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"odžibvejština"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Arménské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"oromština"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"kadazandusunština"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"urijština"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"modí"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"osetština"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"bišnuprijskomanipurština"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"kabardinština"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"mauricijská kreolština"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"paňdžábština"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"dualština"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"sererština"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"pálí"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"bachtijárština"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"polština"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"holandština (středověká)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Saurášterské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Korejský kalendář Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"paštština"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"portugalština"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"irština (středověká)"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("makhuwa-meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Měnový formát"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"bradžština"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"laoské"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24hodinový systém (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24hodinový systém (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of("saho"_s)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"brahujština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Myanmarské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"kečuánština"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"zapotéčtina"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"bodoština"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"fríština (saterlandská)"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"etiopské"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12hodinový systém (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12hodinový systém (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"rétorománština"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"kirundština"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Měna"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"rumunština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Urijské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Čínské desítkové číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ruština"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"kiňarwandština"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"bliss systém"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"kapverdština"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("sukuma"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployého těsnopis"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("sanskrt"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"sardština"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"sindhština"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"sámština (severní)"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"sangština"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"srbochorvatština"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"sinhálština"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"sumerština"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"slovenština"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"slovinština"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"samojština"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"šonština"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"somálština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Arabsko-indické číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"albánština"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"srbština"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"siswatština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Účetní měnový formát"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sotština (jižní)"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"javánské"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"sundština"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"švédština"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"svahilština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Finanční číslice tradiční čínštiny"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of("ibibio"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"ibanština"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"tamilština"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"burjatština"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Střední Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"telugština"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"západní Asie"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"tádžičtina"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"thajština"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"tigrinijština"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"bugiština"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("koro"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"turkmenština"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"setswanština"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"tongánština"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("jola-fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Japonské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"turečtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"komorština"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"tatarština"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("djula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"tahitština"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"východní Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"severní Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"západní Evropa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"ujgurština"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"etruské"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"korejské"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"obecné"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"ukrajinština"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"zélandština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Koptský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"urdština"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"kalmyčtina"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"uzbečtina"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"khásí"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"dolnosaština"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"sylhetské"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("venda"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"varang kšiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kalendář Čínské republiky"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"vietnamština"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"chotánština"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("koyra chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Hodinový cyklus (12 vs. 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"chovarština"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"syrština (klasická)"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"osmanské"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"kičé"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"kečuánština (chimborazo)"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"gaština"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"valonština"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"gagauzština"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"syrština"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"řecké"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"čínština (dialekty Gan)"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"zazakština"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"lýdské"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"sumero-akkadské klínové písmo"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"wolofština"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight (standardní marocký)"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"arabština (moderní standardní)"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"slabičné písmo kanadských domorodců"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"mongolské"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"mandžuština"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"latinka - lomená"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"slezština"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"anatolské hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("gbaja"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"manipurština"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("latinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latinka - galská"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Číslice zjednodušené čínštiny"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Číslice tradiční čínštiny"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"xhoština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Malé římské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"blinština"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"lýkijské"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"daríjština (zoroastrijská)"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"Moonovo písmo"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"mohawkština"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("kako"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"jidiš"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("mosi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"syrské"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"jorubština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"Tradiční číslovky"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"syrské - západní"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"turečtina (osmanská)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"syrské - estrangelo"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"čuangština"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"karijské"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"kalendžin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"čínština"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"staropermské"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Styl zalamování řádků"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"zuluština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Řazení telefonního seznamu"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"gruzínské"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"šáradá"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"kimbundština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Japonské finanční číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"čam"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"marijština (západní)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"syrské - východní"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"elbasanské"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"staroseveroarabské"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Reformované řazení"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"tagalské"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"egyptské démotické"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"egyptské hieratické"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"palmýrské"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"egyptské hieroglyfy"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"gruzínské chutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"čínština (zjednodušená)"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"komi-permjačtina"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"staromaďarské"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"konkánština"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"kosrajština"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"benátština"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"sundské"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"vepština"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(metaValue_kpe)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Khmerské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"ilokánština"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"kyperské"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Číslice gurmukhí"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"více jazyků"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Měrná soustava"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"kríkština"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("hlaholice"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"kiribatština"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"čerokí"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"karibština"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"kajugština"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamilské číslice"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"karačajevo-balkarština"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"inguština"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("kinaraj-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"darí"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"karelština"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"efikština"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"tuluština"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Čísla"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"kuruchština"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"šambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"telugské"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("bafia"_s)
		})
	}));
	return data;
}

LocaleNames_cs::LocaleNames_cs() {
}

$Class* LocaleNames_cs::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_cs, name, initialize, &_LocaleNames_cs_ClassInfo_, allocate$LocaleNames_cs);
	return class$;
}

$Class* LocaleNames_cs::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
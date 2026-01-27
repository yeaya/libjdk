#include <sun/util/resources/cldr/ext/LocaleNames_so.h>

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

$MethodInfo _LocaleNames_so_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_so, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_so, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_so_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_so",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_so_MethodInfo_
};

$Object* allocate$LocaleNames_so($Class* clazz) {
	return $of($alloc(LocaleNames_so));
}

void LocaleNames_so::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_so::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CA, "Kanada"_s);
	$var($String, metaValue_DE, "Jarmal"_s);
	$var($String, metaValue_ET, "Itoobiya"_s);
	$var($String, metaValue_FR, "Faransiis"_s);
	$var($String, metaValue_IT, "Talyaani"_s);
	$var($String, metaValue_RU, "Ruush"_s);
	$var($String, metaValue_ar, "Carabi"_s);
	$var($String, metaValue_el, "Giriik"_s);
	$var($String, metaValue_gu, "Gujaraati"_s);
	$var($String, metaValue_he, "Cibraani"_s);
	$var($String, metaValue_hy, "Armeeniyaan"_s);
	$var($String, metaValue_ja, "Jabaaniis"_s);
	$var($String, metaValue_ko, "Kuuriyaan"_s);
	$var($String, metaValue_la, "Laatiin"_s);
	$var($String, metaValue_or, "Oodhiya"_s);
	$var($String, metaValue_ccp, "Jakma"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of("Kologniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Calaamado"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of("Godadka Tai Tham"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Calaamad Dareen Muujin"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("lahjada Gniva/Njiva"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Qoraalka Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of("Madefaidrin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of("Godadka Khudawadi"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teeso"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of("Jasiiradda Asensiyoon"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of("lahjada kooxda Barlavento ee kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of("Godadka Sinhala Lith"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andora"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Midawga Imaaraatka Carabta"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Af faleemi"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afgaanistaan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua & Barbuuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of("Godadka Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Habeentiriska Itoobiya"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguula"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Albaaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armeeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angoola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antaarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arjentiina"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of("Qoraalka Parthian"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Samowa Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Awsteriya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Awstaraaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of("Ingiriis Maraykan"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Jasiiradda Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Asarbajan"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Boosniya & Harsegofina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Baarbadoos"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Sebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangaladhesh"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Biljam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of("Sogdiyaankii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkiina Faaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaariya"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Baxreyn"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of("Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of("Biniin"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of("St. Baathelemiy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Barmuuda"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Buruneey"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliifiya"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Karibiyaan Nadarlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Baraasiil"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahaamas"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Sooga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Buutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Buufet Island"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botuswaana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Beliis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of("Habeentiriska Baarshiyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("Nidaam Tireedka Cibraanka"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("Kits"_s),
			$of("Qoraalka yar ee Khitan"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Jasiiradda Kookoos"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Masanderaani"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Jamhuuriyadda Dimuquraadiga Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Jamhuuriyadda Afrikada Dhexe"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Swiiserlaand"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Ayfori Koost"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Jasiiradda Kook"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Jili"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kaameruun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Koloombiya"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of("Jasiiradda Kilibarton"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Riika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of("Kuuba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Jasiiradda Kayb Faarde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of("Kurakaaw"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of("Jasiiradda Kirismas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Qubrus"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of("Godadka Balinese"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Jekiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Dadka Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Baaw Sin Haaw"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of("Sogdiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Jiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diyeego Karsiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("Godadka Defangaari"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Jabuuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Qoraalka Indhoolaha"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Dhirta Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of("Nidaam Tireedka Yaryar ee Armeeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Jamhuuriyaddda Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Qoraalka Luuqada Meitei"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Aljeeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Seyuta & Meliila"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ikuwadoor"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estooniya"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of("Masar"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Saxaraha Galbeed"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of("Godad Xisaabeedka Waaweeyn"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("Jerookee"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritreeya"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Isbeyn"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Midowga Yurub"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Habeetiriska Geregoriyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("Yurusoon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("Godadka Gujaraati"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Jaziiradaha Fooklaan"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of("Jasiiradda Faroo"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Taamiil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of("Fudud"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of("alfabeetka Dajnko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Habeentiris Qarameedka Hindiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gaaboon"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Boqortooyada Midowday"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Bidjinka Nayjeeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Giriinaada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Joorjiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of("Faransiis Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of("Guurnsey"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of("Gaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of("Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Greenland"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeluub"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekuwatooriyal Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Giriig"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of("Jasiiradda Joorjiyada Koonfureed & Sandwij"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guwaatamaala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guaam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of("Godad Xisaabeedka Monospace"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gini-Bisaaw"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Tai Lue cusub"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("Bartamaha Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of("Luuqad Looma Hayo"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("Dadka Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of("Jasiiradda Haad & MakDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Korweeshiya"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Ageem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of("Jarmal Iswiis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of("Taariikhda Islaamiga(Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hangari"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of("Jasiiradda Kanari"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of("Adlam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of("Godadka Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ayrlaand"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of("lahjada Ndyuka"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of("Godadka Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Luuqada Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Israaʼiil"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nabataean"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Jasiiradda Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of("Xeerarka Dalabka Yurub"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Dhul xadeedka Badweynta Hindiya ee Biritishka"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Ciraaq"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iiraan"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Ayslaand"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of("Aqoonsiga Xisaabta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("Godka Tirada Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Kombiyuutar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("Godadka Banglaa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of("Lambarada Cyrillic"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jaarsey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Habeentiriska islaamka"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Baangla"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of("dhaqyada isku jirka ah ee Serbiyaanka iyo Ekviyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Urdun"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Jabaan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("Fransiiskii dhexe ee ugu dambeeyay ilaa 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Guusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("Godadka Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah LI"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of("Jarmal (Iswiiserlaand)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Habeentiriska Buudhist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Laatiin Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgistaan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kamboodiya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komooros"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_CA)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts & Nefis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("Dhaxlay"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of("Faransiiska Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Kuuriyada Waqooyi"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Kuuriyada Koonfureed"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Shibanaha"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of("Faransiis (Iswiiserlaand)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuwayt"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of("Cayman Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasaakhistaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Siriylik"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lubnaan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lusia"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of("LUUNA1918"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of("Jarmal Hooseeya"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liyjtensteyn"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sirilaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of("Hmonga Nyiakeng Puachue"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laybeeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Losooto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituweeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luksemboorg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latfiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("Qoraalka Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Liibya"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Fuunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("Mahajani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Laangi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Daana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Morooko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Moonako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Moldofa"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Moontenegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Maartin"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Jasiiradda Maarshal"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Taay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of("Godadka Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Masedooniya Waqooyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of("Godad Xisaabeedka Labalaabma"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Maali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Mayanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongooliya"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Makaaw"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Jasiiradda Waqooyiga Mariaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Maartinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Muritaaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Montserrat"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of("Luuqada Korasmiyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Maalta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mawrishiyaas"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maaldiifis"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Meksiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of("Habeentiriska jabbaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malaysiya"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Musambiik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Qoraaladii hore ee Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namiibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of("Afrikada ka hooseysa Saxaraha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of("Habeentiriska yuhuudda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of("Isku hagaajinta Qaamuuska"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Jasiiradda Niyuu Kaledooniya"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of("orthographyga mideeysan ee hadana ladul maray"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nayjer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Jasiiradda Noorfolk"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nayjeeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Qoraalka midig laga bilaabo ee faarsiyiintii"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaraaguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Hmonga pahawh"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nederlaands"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noorweey"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nebaal"_s)
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
			$of("Phnx"_s),
			$of("Luuqada Phoenicianka"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Niyuusiilaand"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of("Meroitic Curve"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of("Shirkii orthografiga ee Portuguese-Brazilian 1945"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitic"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Cumaan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of("Godadka Nyiakeng Puachue Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("Faarsigii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of("Nidaam Tireedka Hebrew"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Baanama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Taariikhda Islaamiga (tabular, civil epoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of("Ingiriis Biritish"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Beeru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of("Booliyneesiya Faransiiska"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Babwa Niyuu Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filibiin"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Bakistaan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NICARD"_s),
			$of("KAARKANI"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Booland"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Eewondho"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre and Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Bitkairn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Bueerto Riiko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of("Dhulka Falastiiniyiinta daanta galbeed iyo marinka qasa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Baliniis"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Bortugaal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Balaaw"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of("Nidaam Tireedka Yaryar ee Giriiga"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Baraguaay"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Qadar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of("Heerka Ingiriisiga Iskootishka"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Dhulxeebeedka Osheeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of("Godadka Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of("Godadka Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Farta lagu Qoro Luuqadaha Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("Dunida"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Waqooyi Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Riyuuniyon"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of("Koonfur Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Dadka Rejan"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Osheeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("Elym"_s),
			$of("Qoraalka Elymaic"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Rumaaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Seerbiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of("Godadka cusub ee Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of("alfaabeetka nmetelko"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of("Manichaean"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of("Luuqada Ugaritic"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Koraalka kharooshi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Sacuudi Carabiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Luuqada Mandaean"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Jasiiradda Solomon"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasaawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Galbeeka Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Sishelis"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Suudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Bartamaha Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Iswidhan"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Afrikada Bari"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Waqooyiga Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singaboor"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saynt Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("Habka Jabinta Xariiqda Adag"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Afrikada Dhexe"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Islofeeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of("Godadka Myanmar Tai Laing"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of("Afrikada Koonfureed"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Jasiiradda Sfaldbaad & Jaan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Ameerikaas"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Islofaakiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siraaliyoon"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Sinigaal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Soomaaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("Nidaam Tireedki Hore ee Taaamiil"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surineym"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of("Koonfur Suudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome & Birincibal"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salfadoor"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Siint Maarteen"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Suuriya"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Eswaatiini"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tiristan da Kunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of("Nidaamka Cabbirka ee US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Waqooyiga Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of("Turks & Kaikos Island"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yaangbeen"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Jaad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Qoraalka Sawgiga"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of("Dhul xadeedka Koonfureed ee Faransiiska"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Toogo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Taylaand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tajikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karibiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelaaw"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Timoor"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of("Raadinta Shibanaha Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Luuqada Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuniisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of("Folabuka casriga ah"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of("Turki"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tirinidaad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tufaalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taywaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of("Astuuriyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orkhon"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansaaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kuwaasiyo"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Far aan la aqoon amase aan saxnayn"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("khudwadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Yukrayn"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Aasiyada Bari"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of("Aasiyada Koonfureed"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of("Aasiyada Koonfur-galbeed"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Ugaanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Isku hagaajinta Pinyin"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of("Yurubta Koonfureed"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Sinhaala"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Jasiiradaha ka baxsan Maraykanka"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("Qaramada Midoobay"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of("Maraykanka"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaay"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Tacliin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("Isku hagaajinta Farta shiineeska"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguwaay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Brashiyaanki Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Usbakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Bartamaha Atlaas Tamasayt"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Isku hagaajinta Farta"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ingiyembuun"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Faatikaan"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Finsent & Girenadiins"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Fenisuweela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Biritish Farjin Island"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("U.S Fargin Island"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of("Soyombo"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Fiyetnaam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Fanuaatu"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of("Marchen"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Raawa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Austraalaasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Walis & Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Isku hagaajin Fareedkii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Gobolka Aasiyada yar"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ingoomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Laakoota"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of("Iswaafajinta Isku hajintii hore"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of("Walseer"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samoowa"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of("Qoraalka Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of("Godadka Meetei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of("Shigshiga"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of("Pseudo-Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Booliyneesiya"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of("heerka orthographyga"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Koosofo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of("Godadka Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Aan la qorin"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Jiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yaman"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of("Amarka Kala Soocidda Caadiga ah"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of("Xarafka laba jibaaran ee kujira Xarfaha Zanabazar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of("Lahjada Balanka ee Anii"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("Qaabka dhagoolka loola hadlo"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of("Godadka cham"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEWFOUND"_s),
			$of("HELITAANCUSUB"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of("Koonfur Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of("Godadka Sundaniiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("Habka Jabinta Xariiqda Dabacsan"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Dhefangaari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("Nidaam Tireedka Giyoorgiyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of("Isku hagaajinta Farta Zhuyin"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Saambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbaabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of("Gobol aan la aqoonin amase aan saxnayn"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Dadka Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Nidaamka Metric"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("Habeentiriska ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("Godka Tirada Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Louisiana Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Chaga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("Nidaam Tireedka Hore La Fududeeyay ee Dhaqaalaha Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("Tirooyinka Dheeraadka ah ee Godadka Carabi-Hindiya"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuweer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("Ballac Godadka Buuxa"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taiita"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Koonfurta Luuri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of("Isku hagaajinta Emojiga"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of("Dadka Kotiga"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khamer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Habeentiriska Islaamka (Sacuudiga, aragtida)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("Nidaam Tireedka Roomaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Saaqa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of("Godadka Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of("Qoraalka Luuqada Caucasian Albanian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("GARAACID"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Sambuuru"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Farta Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Luuqada gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of("Lahjada Aluku"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of("Godadka Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of("Godadka Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Inyankoole"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luwada"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filibiino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hamong"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of("Godadka Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luhya"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of("Qaacideeynta orthographygii 1943"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Isbaanish (Isbayn)"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of("Farta Luuqada Faarsiga"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of("Godadka Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Axmaari"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("lahjada Stolvizza/Solbica"_s)
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
			$of("Qoraalka Xuruufta Jabaaniiska"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Asaamiis"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Nidaamka qoraalka Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Nidaamka qoraalka Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Asarbayjan"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of("Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Qoraalka Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("lahjada Oseacco/Osojane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of("Isku hagaajinta Farta Radical-Stroke"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Beleruusiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgeeriyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of("Godadka Javanese"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambaara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bangladesh"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of("Tibeetaan"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Biriton"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of("Qoraalka Bhaiksuki"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Mayanmaar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("Godadka Laao"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Seena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Seenni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Jejen"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsikan"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Jeeg"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Kaniisadda Islaafik"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Welsh"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("Nidaam Tireedka Itoobiya"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Tiknoolajiyada Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Dhaanish"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Boortaqiis (Boortuqaal)"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(metaValue_DE)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of("Habka Heerka Lacagta"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Luuqada Buginiiska"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of("Godadka Mongooliyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Isbaanishka Laatiin Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"D’zongqa"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of("Habeetiriska Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Wabiga Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Sarma"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("Nidaam Tireedka Giriiga"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Eewe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("Habka Jabinta Xariiqda Caadiga ah"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ingiriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Isberaanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Isku hagaajinta Shiineeskii Hore - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Isbaanish"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Istooniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("luuqada Han iyo Farta Mandariinka Taywaan"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Basquu"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Luuqada Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hanguul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Dadka Samaritan"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of("Shilha"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Sorobiyaanka Sare"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Luuqada Han"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Qoraalka Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Faarisi"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("La fududeeyay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("Godadka Ree Galbeedka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fuulah"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finishka"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kantoneese"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Farowsi"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(metaValue_FR)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Firiisiyan Galbeed"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Ayrish"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of("Dadka wanjo"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of("Iskot Giilik"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of("Gumjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galiisiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of("Qoraalka Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Af aan la aqoon ama aan sax ahayn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Taariikhda Itoobiya ee Amete Alem"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Taariikhda Islaamiga (tabular, astronomical epoch)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Mankis"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of("Godadka Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hawsa"_s)
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
			$of("hr"_s),
			$of(u"Koro’eeshiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Heeytiyaan Karawle"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Hangariyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of("Faransiiska Cajun"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlinguwa"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jaamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indunusiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("Godka Tirada Tibetan"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sijuwan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of("Heshiiska luuqada orthografiga burtuqiiska 1990"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of("Ayslandays"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(metaValue_IT)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Maalayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of("Crabiyaankii Hore ee Wuqooyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of("Godadka Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Jafaaniis"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("calaamad qoris"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Dadka Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inaari Saami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of("Joorijiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Dadka Gothic"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masaay"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kasaaq"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of("Kalaallisuut"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kamboodhian"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannadays"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaashmiir"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lebja"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Luuqada Avestan"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdishka"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornish"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgiis"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of("Multani"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of("Qoraalka Hatran"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luksaamboorgish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("Godadka Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Gandha"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibetaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Firiyuuliyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of("Nidaamka Cabbirka Imperial-ka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of("Godadka Tai Tham Hora"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Lituwaanays"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luuba-kataanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Laatfiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Malagaasi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of("Lambar Sireedka Caalamiga ee Kala Soocidda Dalabka"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maaoori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Masadooniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of("Mangooli"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Maarati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malaay"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltiis"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Burmese"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Sawrashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Soorbiyaanka Hoose"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("Luuqada Imperial Aramaic"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of("Raadinta Guud"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of("Noorwijiyaan Bokma"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Indhebeele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nebaali"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Holandays"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Nowrwejiyan (naynoroski)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of("Godadka Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Inyaanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabayle"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kaamba"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of("Ingiriiskii hore ee casriga ahaa"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meeru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("Nidaam Tireedka Armeeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Moodi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Oseetic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of("ALA-LC Romanization, 1997 daabacaad"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Moorisayn"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Bunjaabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duaala"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("Lahjada Lipavaz ee Resiyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Boolish"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of("Godadka Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Habeetiriska Dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Bashtuu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Boortaqiis"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Kala Soocidda Dalabka"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Boortaqiiska Baraasiil"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"Farta Bohorič"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of("Habka Lacagta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"Godadka N’Ko"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Habeentiris"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Dalka Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of("Meetaa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 Saac ee Nidaamka Saacadda (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 Saac ee Nidaamka Saacadda (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("Godadka Mayanmaar"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quwejuwa"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of("Bodo"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of("Kimakonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 Saac ee Nidaamka Saacadda (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 Saac ee Nidaamka Saacadda (0–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of("Romaanis"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundhi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Lacagta"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Romanka"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saaho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("Godadka Oodhiya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("Nidaamka Tireedka Tobanle ee Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(metaValue_RU)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Ruwaandha"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kabuferdiyanu"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of("Ingiriis Austaraaliyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of("Qoraalka Duployan shorthand"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of("orthograpghyga mideeysan"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Siindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Koonfurta Saami"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinhaleys"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Isloofaak"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Islofeeniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Qoraalka Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samowan"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Shoona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Soomaali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("Gdadka Carabi-Hindiya"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albeeniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Seerbiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of("Habka Xisaabinta Lacagta"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("Sesooto"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Jafaniis"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Suudaaniis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("lahjada Natisone"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Swiidhis"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Sawaaxili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of("Godadka Wancho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("Nidaam Tireedkii Hore ee Dhaqaalaha Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamiil"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Aasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Bartamaha Aasiya"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Teluugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Aasiyada Galbeed"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Taajik"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Taaylandays"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of("Ingiriis Kanadiyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkumaanish"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Toongan"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Joola-Foonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("Nidaam Tireedka Jabbaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Turkish"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Taatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of("Lahjada San Giorgio/Bila"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Yurub"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Yurubta Bari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.rohg"_s),
			$of("Godadka Hanifi Rohingya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of("Godad xisaabeedka waaweeyn ee Sans-Serif"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Yurubta Waqooyi"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Yurubta Galbeed"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uighur"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Itaaliggii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Caadi ahaan"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Yukreeniyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of("Habeentiriska Koptiga"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urduu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of("Heerka orthographyga Resiyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Usbakis"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of("Orthigraphygii jarmal ee 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Qoraalka Luuqada Sylheti"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Nidaamka Qoraalka Luuqada Ho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of("Habeentiriska Minguwo"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Fiitnaamays"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Jiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Wareegga Saacadda (12 ilaa 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of("orthographyga Taraskievica"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of("Folabuuk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("Godad xisaabeedka Sans-Serif"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of("Lambarada Masaram Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of("Newa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of("Godadka Gunjala Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydian"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Qoraalkii Hore ee dadka Sumaariyiinta ee dhulka mesobataamiya"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Woolof"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Morokaanka Tamasayt Rasmiga"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("Carabiga rasmiga ah"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("Qoraalka Luuqada Aborajiinka ee Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of("Mongooliyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Qoraalka Anatolian Hieroglyphs"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Maniburi"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of("Nandinagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("Nidaam Tireedka Hore La Fududeeyay ee Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("Nidaam Tireedka Hore ee Shiinaha"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Hoosta"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of("Nidaam Tireedka yaryar ee Roomaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of("Dadka Dogra"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lyciantii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kaako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of("Faransiiskii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Yadhish"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("Lahjada Syriac"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Gobalka Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruuba"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Faayi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Luuqada kaariyaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjiin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Shiinaha Mandarin"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Farta Manadariinka Taywaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Permic gii hore"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("Habka Jebinta Xariiqda"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zuulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Isku hagaajinta foonbuuga"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("MOONOTOONIK"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of("Jiyoorjoyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of("LENGADOK"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("Nidaam Tireedka Dhaqaalaha Jabbaanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Jam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of("Godadka Myanmar Shan"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Magaalada Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Carabiyadii Hore ee Wuqooye"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of("Godadka Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of("Isku hagaajinta Reformed"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Luuqada Tagalog"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of("Dadka Yesiidiga"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmyrene"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embuu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("Fartii hore ee Masaarida"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("Shiinaha Rasmiga ah"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Hangariyaankii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of("orthofraphygii hore ee Jarmalka"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of("Godadka Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Shiinahii Hore"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Dadka Sundaniiska"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("Godadka Khamer"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Qoraalka Luuqada Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Faleensiyaawi"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("sibraas dhalad ah"_s)
		}),
		$$new($ObjectArray, {
			$of("Diak"_s),
			$of("Luuqadaha Dives Akuru"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("Farta Latin Turkiga ee Mideeysan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of("dhawaaqyada Serbiyaanka iyo Ijekaviyaan"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Miyundhaang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("Godadka Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of("BOONHOLM"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Luuqado kala duwan"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of("Nidaamka Cabbiraadda"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Qoraalka Glagolitic"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of("orhographyga caadiga ah"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of("Jerokee"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("Godka Tirada Taamiil"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Faarsi"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of("hinggaadinta Qaamuuska Ingiriisiga Oxford"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Tirooyinka"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of("Shambaala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Teeluguu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafiya"_s)
		})
	}));
	return data;
}

LocaleNames_so::LocaleNames_so() {
}

$Class* LocaleNames_so::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_so, name, initialize, &_LocaleNames_so_ClassInfo_, allocate$LocaleNames_so);
	return class$;
}

$Class* LocaleNames_so::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
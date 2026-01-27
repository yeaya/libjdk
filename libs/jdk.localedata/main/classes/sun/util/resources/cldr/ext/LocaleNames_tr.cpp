#include <sun/util/resources/cldr/ext/LocaleNames_tr.h>

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

$MethodInfo _LocaleNames_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_tr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_tr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_tr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_tr_MethodInfo_
};

$Object* allocate$LocaleNames_tr($Class* clazz) {
	return $of($alloc(LocaleNames_tr));
}

void LocaleNames_tr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_tr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_CY, u"Kıbrıs"_s);
	$var($String, metaValue_ET, "Etiyopya"_s);
	$var($String, metaValue_ko, "Korece"_s);
	$var($String, metaValue_bug, "Bugis"_s);
	$var($String, metaValue_ccp, "Chakma"_s);
	$var($String, metaValue_nqo, u"N’Ko"_s);
	$var($String, metaValue_saz, "Saurashtra"_s);
	$var($String, metaValue_ssy, "Saho"_s);
	$var($String, metaValue_vai, "Vai"_s);
	$var($String, metaValue_zbl, "Blis Sembolleri"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Köln lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Miranda dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("Sembol"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marvari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"Tai Tham Tham Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of("Emilia Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of("Mentawai"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanva"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of("Emoji"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Gniva/Njiva Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of("Megrelce"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Eski Mısır Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of("Rajasthani"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of("Phags-pa"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of("Timne"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"Khudawadi Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of("Teso"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Rapanui dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Ascension Adası"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotongan"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"Sinhala Lith Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Birleşik Arap Emirlikleri"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("Flamanca"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganistan"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of("Antigua ve Barbuda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"Mro Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of("Etiyopik Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of("Gilanice"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of("Anguilla"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of("Saat Dilimi"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of("Arnavutluk"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Ermenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengvar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktika"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Arjantin"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"Partça Kitabe Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Amerikan Samoası"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Avusturya"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Avustralya"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Amerikan İngilizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Åland Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of("Myene"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of("Azerbaycan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"Doğu Ermenicesi"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosna-Hersek"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Sebuano dili"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bangladeş"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"Kumukça"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Belçika"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Ortaçağ Yüksek Almancası"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaristan"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahreyn"_s)
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
			$of("Saint Barthelemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai dili"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of("Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Bolivya"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"Karayip Hollandası"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brezilya"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahamalar"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of("Soga"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Butan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Bouvet Adası"_s)
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
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"Konuşma Sesleri Çizimlemesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"İran Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"İbrani Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Cocos (Keeling) Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Mazenderanca"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kongo - Kinşasa"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Orta Afrika Cumhuriyeti"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo - Brazavil"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"İsviçre"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Côte d’Ivoire"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cook Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Şili"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of("Kaithi"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Çin"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolombiya"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Clipperton Adası"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Kosta Rika"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Küba"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of("Cape Verde"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Christmas Adası"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"Bali Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Çekya"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of("Pau Cin Hau"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"Batı Flamanca"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of("Almanya"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Eski Yüksek Almanca"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"Açece"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of("Kiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of("Diego Garcia"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of("Goa Konkanicesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Devanagari Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Cibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of("Danimarka"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acoli"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of("Braille"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Dominika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Küçük Harf Ermeni Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Dominik Cumhuriyeti"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Gorontalo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"Gotça"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of("Main Frankonya Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zunice"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of("Takri"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Cezayir"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinan dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"Yarım genişlik"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Pehlevi Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of("Ceuta ve Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"Çibça dili"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanga"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ekvador"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of("Papiamento"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of("Adangme"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Estonya"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Mısır"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Batı Sahra"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"Çağatayca"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of("Palau dili"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Chuukese"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"Çinuk dili"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Mari dili"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"Çipevya dili"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"Çoktav dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"Kalın Matematiksel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Çerokice"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritre"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"İspanya"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Avrupa Birliği"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of("Miladi Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Euro Bölgesi"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"Şayence"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Gücerat Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adigece"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"Tunus Arapçası"_s)
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
			$of(u"Falkland Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikronezya"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of("Yerel Varyant"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Faroe Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of("Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Fransa"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of("Kpelle"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of("Picard Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelau dili"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of("Ulusal Hint Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of("Romanyolca"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Antik Yunanca"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of("Sahurca"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"Votça"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Birleşik Krallık"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("Nijerya Pidgin dili"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Gürcistan"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Fransız Guyanası"_s)
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
			$of("Tale"_s),
			$of("Tai Le"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"Cebelitarık"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Grönland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Ortaçağ İngilizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Guadeloupe"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekvator Ginesi"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Yunanistan"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Güney Georgia ve Güney Sandwich Adaları"_s)
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
			$of(u"Pensilvanya Almancası"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"Eşit Aralıklı Matematiksel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gine-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingonca"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("New Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Orta Kürtçe"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Dilbilim içeriği yok"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of("Jurchen"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"Talışça"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of("Plautdietsch"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Avusturya Almancası"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Çin Hong Kong ÖİB"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heard Adası ve McDonald Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Hırvatistan"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of("Aghem"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"İsviçre Almancası"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"Hicri Takvim (Ümmü-l Kurra Takvimi)"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Macaristan"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of("Rif Berbericesi"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"Tamaşek"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanarya Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"Min Nan Çincesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Endonezya"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"Eski Farsça"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"Kayah Li Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"İrlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Napolice"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of("Nama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"Sora Sompeng Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zazaca"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of("Tangut"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"İsrail"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of("Nebati"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Man Adası"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Hindistan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"Avrupa Sıralama Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Britanya Hint Okyanusu Toprakları"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Irak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"İran"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"İzlanda"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"İtalya"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Matematiksel Gösterim"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Tay Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"Võro"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of("Wayuu dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Bilgisayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Bengal Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"Palatin Almancası"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"Kiril Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of("Hicri Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of("Bengal"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Ürdün"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of("Frafra"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japonya"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606‘ya Dek Geç Ortaçağ Fransızcası"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ayni Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of("Mende"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Nyasa Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Kannada Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of("Siddham"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"İsviçre Yüksek Almancası"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"Fonetik Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"İngriya Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of("Budist Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latin Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kırgızistan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kamboçya"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorlar"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Saint Kitts ve Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"Kalıtsal"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanada Fransızcası"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Kuzey Kore"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Güney Kore"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Fonetik"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"İsviçre Fransızcası"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuveyt"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Tok Pisin"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Cayman Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kazakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kiril"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"Lübnan"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("Saint Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of("Fenike dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"Eski Kilise Slavcası Kiril"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"Guçince"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Aşağı Almanca"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of("Liechtenstein"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akad Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Kıptice"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Liberya"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"Merkezi Yupikçe"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Kitap Pehlevi Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Litvanya"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"Lüksemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Letonya"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of("Sora Sompeng"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Vunjo"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of("Alabamaca"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahnda"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of("Mahajani"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of("Langi"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Fas"_s)
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
			$of("Nshu"_s),
			$of(u"Nüshu"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"Karadağ"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("Saint Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lamba dili"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Marshall Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleut dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Tay"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"Vai Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of("Kuzey Makedonya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"Çift Çizgili Matematiksel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"Moğolistan"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Çin Makao ÖİB"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"Gheg Arnavutçası"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Kuzey Mariana Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinik"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Moritanya"_s)
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
			$of("Capiznon"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of("UN GEGN Transliterasyon"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Güney Altayca"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivler"_s)
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
			$of("Japon Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malezya"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of("Pehlevi Kitabe Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibya"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Sahra Altı Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"İbrani Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"Sözlük Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Yeni Kaledonya"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"Wade-Giles (Latin Alfabesinde Yazımı)"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of("Turoyo"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"Gözden Geçirilmiş Birleştirilmiş Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Nijer"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Norfolk Adası"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nijerya"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of("Taroko"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("Psalter Pehlevi"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahavh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Hollanda"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Norveç"_s)
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
			$of("tsd"_s),
			$of("Tsakonca"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of("Niue"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of("Fenike"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of("Rombo"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of("Yeni Zelanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"Meroitik El Yazısı"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of("Romanca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitik"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"Kırım Türkçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Eski İngilizce"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Umman"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"Seselwa Kreole Fransızcası"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of("Eski Fars"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"Pahawh Hmong Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("Arap Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kashubian"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"İngiliz İngilizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"Tatça"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Fransız Polinezyası"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua Yeni Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipinler"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakistan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polonya"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Saint Pierre ve Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitcairn Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Porto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Filistin Bölgeleri"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of("Bali Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portekiz"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Palau"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Küçük Harf Yunan Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguay"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"İbrani"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Katar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Standart İskoç İngilizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of("Jamaika Patois Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of("Piyemontece"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niue dili"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of("Uzak Okyanusya"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of("Ekstremadura Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lezgice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"Ahom Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("UPA Ses Bilimi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"Takri Basamakları"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Tuvalyanca"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of("Tai Viet"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Dünya"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of("Ao Naga"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Kuzey Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Güney Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of("Lingua Franca Nova"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojban"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"Kuzeybatı Kafkasya"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Okyanusya"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romanya"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Sırbistan"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of("Mro"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Rusya"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"New Tai Lue Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"Ugarit Çivi Yazısı"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Suudi Arabistan"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Pohnpeian"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of("Manden"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Solomon Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawaq"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Batı Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seyşeller"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Orta Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"İsveç"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Doğu Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of("Aramice"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of("Loma"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Kuzey Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Katı Satır Sonu Stili"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Orta Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Slovenya"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"Myanmar Tai Laing Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Afrika’nın Güneyi"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard ve Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of("Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Slovakya"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of("Bamum"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of("Woleai"_s)
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
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"Mapuçe dili"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Geleneksel Tamil Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of("Araona"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Güney Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome ve Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"Cezayir Arapçası"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Necd Arapçası"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Suriye"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Esvatini"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"Mısır Arapçası"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"Fas Arapçası"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"Yapça"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of("Rotuman"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Cunha"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"ABD Ölçü Sistemi"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Amerika’nın Kuzeyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks ve Caicos Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of("Yangben"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Çad"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Fransız Güney Toprakları"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"Amerikan İşaret Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tayland"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tacikistan"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of("Karayipler"_s)
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
			$of("Yemba"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"Hangul İlk Sessiz Harfe Göre Arama"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Türkmenistan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tunus"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türkiye"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad ve Tobago"_s)
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
			$of(u"Asturyasça"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of("Rusince"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of("Roviana"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of("Orhun"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tanzanya"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of("Kwasio"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Bilinmeyen Alfabe"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of("Khudabadi"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukrayna"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of("Ligurca"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"Ulahça"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Doğu Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuvaca"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("Kongo Svahili"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Güney Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haydaca"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Güneydoğu Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"Hakka Çincesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"Basitleştirilmiş Çince Pinyin Sıralaması"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Güney Avrupa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of("Seylan"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"ABD Küçük Harici Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of("Livonca"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Birleşmiş Milletler"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amerika Birleşik Devletleri"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaii dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of("Akademik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Basitleştirilmiş Çince Sıralaması - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of("Prusyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Özbekistan"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("Orta Atlas Tamazigti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"Geleneksel Çince Vuruş Sıralaması"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of("Ngiemboon"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikan"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Eski Provensal"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Saint Vincent ve Grenadinler"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanya Virjin Adaları"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"ABD Virjin Adaları"_s)
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
			$of("Nogayca"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Rwa"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Eski Nors dili"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of("Avustralasya"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"Batı Ermenicesi"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melanezya"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis ve Futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"Geleneksel Sıralama"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Mikronezya Bölgesi"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of("Ngomba"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of("Lakotaca"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of("Novial"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"Finansal Sayılar"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of("Kotava"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"Önceki Sıralama Düzeni (uyumluluk için)"_s)
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
			$of("Bass"_s),
			$of("Bassa Vah"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"Meetei Mayek Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Valamo"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"Vaşo"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"Psödo Aksanlar"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Varay"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"Psödo Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polinezya"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of("Kosova"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"Brahmi Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Gücerat"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Yazılı Olmayan"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of("Warlpiri"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Batak"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemen"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Standart Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"Lombardça"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Fang"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"Resia Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"İşaret Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayotte"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"Cham Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Güney Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"Sunda Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Serbest Satır Sonu Stili"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of("Devanagari"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Gürcü Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"Zhuyin Sıralaması"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"Pinyin (Latin Alfabesinde Yazımı)"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Zimbabve"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Bilinmeyen Bölge"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of("Runik"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of("Metrik Sistem"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of("ISO-8601 Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Kuzey Sotho dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Telugu Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of("Louisiana Kreolcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Lozi"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of("Naksi Geba"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of("Machame"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"Fiji Hintçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Finansal Basitleştirilmiş Çin Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynon dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Genişletilmiş Hint-Arap Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of("Nuer"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Dakotaca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Tam Genişlikte Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"Hititçe"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Dargince"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of("Taita"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("Maya Hiyeroglifleri"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("Kuzey Luri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"Emoji Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"Kıpti"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Klasik Nevari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"Udmurtça"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Kmer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of("Hicri Takvim (Suudi)"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandave"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Roma Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Yakutça"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"Sharada Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of("Latgalian"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"Samarit Aramcası"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"Kafkas Albanyası"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of("Sasak"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of("Santali"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of("Tifinagh"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"Yahudi Farsçası"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of("Rakam"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of("Yerel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of("Ngambay"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of("Gurmukhi"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of("Luba-Lulua"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"Tirhuta Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"Tam Genişlik"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of("Luiseno"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamvezi"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipince"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"Beluçça"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slavey dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of("Bali dili"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of("Ugarit dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"Warang Citi Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of("Tornedalin Fincesi"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("Luyia"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of("Bavyera dili"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basa Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of("Bamun"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Yahudi Arapçası"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Avrupa İspanyolcası"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima dili"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"İskoçça"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sicilyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abhazca"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"Nestâlik"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of("Batak Toba"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"Avestçe"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaanca"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"Chakma Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of("Ghomala"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharca"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonca"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of("Arap"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza/Solbica Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of("Japon"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Arapça"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("Japon hece alfabeleri"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamca"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of("Sassari Sarduca"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Lineer A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Avar Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Lineer B"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"Güney Kürtçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Azerbaycan dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of("Khojki"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco/Osojane Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"Başkırtça"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"Radical-Stroke Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Belarusça"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgarca"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"Cava Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Bengalce"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tibetçe"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of("Dogrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of("Bretonca"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Boşnakça"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of("Seneca dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of("Seri"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Lao Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of("Sena"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkup dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalanca"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koyraboro Senni"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Çeçence"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"Çamorro dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Gözden Geçirilmiş Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsikaca"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Krice"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Çekçe"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Kilise Slavcası"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of("Nheengatu"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"Çuvaşça"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Galce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Ge’ez Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of("Danca"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Avrupa Portekizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Almanca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Standart Para Biçimi"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Beja dili"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Dinka dili"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of("Yutland Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"Eski İrlandaca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"Moğolca Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Divehi dili"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Latin Amerika İspanyolcası"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of("Betawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("Bena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Çin Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"Edebi Çince"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of("Fraser"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of("Zarma"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"Samogitçe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Yunan Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of("Bafut"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Normal Satır Sonu Stili"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldovaca"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Yunanca"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"İngilizce"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of("Badaga"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of("Lazca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"Geleneksel Çince Sıralaması - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"İspanyolca"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Estonca"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("Han - Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Baskça"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Hangıl"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of("Samarit"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Taşelit"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Yukarı Sorbça"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of("Han"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Shan dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Farsça"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Basitleştirilmiş"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Batı Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Geleneksel"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"Güney Azerice"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Fula dili"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"Çad Arapçası"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"Xiang Çincesi"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Fince"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fiji dili"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Batı Balochi"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of("Kantonca"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of("Faroe dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of("US BGN Transliterasyon"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Umbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Fransızca"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Batı Frizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"İrlandaca"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"İskoç Gaelcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Galiçyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani dili"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Arayanice"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Bilinmeyen Dil"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of("Etiyopik Amete Alem Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Güceratça"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of("Hicri Takvim (Astronomik Evreler)"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Man dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"Osmanya Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa dili"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"İbranice"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Hintçe"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of("Hupaca"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikol"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Hırvatça"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haiti Kreyolu"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Macarca"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of("Ermenice"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero dili"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"Cajun Fransızcası"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("IPA Ses Bilimi"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"İnterlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of("Jamo"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Endonezce"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Tibet Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"İbo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sichuan Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Ortaçağ Fransızcası"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"İnyupikçe"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Eski Fransızca"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of("Arpitanca"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"Doğu Frizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of("Banjar Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Kuzey Frizce"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"İzlandaca"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"İtalyanca"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"İnuktitut dili"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"Aşağı Silezyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Japonca"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"Eski Güney Arap"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Dogri"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of("Selayar"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"Lepça Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of("Kom"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Güney Laponcası"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Cava dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shavian"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Madura Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"Lule Laponcası"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Magahi"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of("Mafa"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"İnari Laponcası"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Gürcüce"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Karaayak dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makasar"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"Wu Çincesi"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"Skolt Laponcası"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Mandingo"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of("Gotik"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Masai"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kuanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kazakça"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Grönland dili"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Khmer dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of("Kannada dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Keşmir dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of("Cirth"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of("Lepcha"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of("Avesta"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kürtçe"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Kernevekçe"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kırgızca"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Latince"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Lüksemburgca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Malayalam Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgca"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of("Tibet"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friuli dili"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Lao dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"İngiliz Ölçü Sistemi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"Tai Tham Hora Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litvanca"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Letonca"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdiana Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malgaşça"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"Marshall Adaları dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Saptanmış Unicode Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Makedonca"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"Moğolca"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malayca"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltaca"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birman dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of("Ermeni"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"Mokşa dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of("Maba"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Aşağı Sorbça"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"İmparatorluk Aramicesi"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauru dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Genel Amaçlı Arama"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norveççe Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Kuzey Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalce"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandar"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Felemenkçe"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Norveççe Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Norveççe"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Güney Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"Modi Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navaho dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"Karakalpakça"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Nyanja"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"Kaçin dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabiliyece"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politonik"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Oksitan dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of("Jju"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of("Kamba"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of("Mende dili"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibva dili"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of("Meru"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Ermeni Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of("Orta Kadazan"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Oriya dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of("Modi"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Osetçe"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of("Bishnupriya"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardeyce"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Sranan Tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Pencapça"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"Resia Lipovaz Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of("Kanembu"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of("Bahtiyari"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Lehçe"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Ortaçağ Felemenkçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"Saurashtra Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of("Dangi Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Peştuca"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portekizce"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Ortaçağ İrlandacası"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brezilya Portekizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meetto"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Para Birimi Biçimi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"N’Ko Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of("Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Lao"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Meta’"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 Saat Sistemi (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 Saat Sistemi (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of("Brohice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Myanmar Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Keçuva dili"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotek dili"_s)
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
			$of("Makonde"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(metaValue_ET)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of("Saterland Frizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 Saat Sistemi (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 Saat Sistemi (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Romanşça"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Kirundi"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of("Para Birimi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Rumence"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Oriya Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Çin Ondalık Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Rusça"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("Akoose"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Kinyarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("Kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma dili"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Avustralya İngilizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployé Stenografi"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanskrit"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"Birleştirilmiş Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardunya dili"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi dili"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Kuzey Laponcası"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"Sırp-Hırvat Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of("Kenyang"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of("Sinhali dili"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"Sümerce"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Slovakça"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slovence"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of("Grantha"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoa dili"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Şona dili"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somalice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"Hint-Arap Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Arnavutça"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Sırpça"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Sisvati"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Muhasebe Para Biçimi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Güney Sotho dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Cava Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of("Sunda dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Natisone Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"İsveççe"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Svahili dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Finansal Geleneksel Çin Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"İbibio dili"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Iban"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Tamilce"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"Buryatça"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Orta Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of("Telugu dili"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Batı Asya"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tacikçe"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Tayca"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinya dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanada İngilizcesi"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Türkmence"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of("Tagalogca"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Setsvana"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tonga dili"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of("Bulu"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Japon Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Türkçe"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("Komorca"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatarca"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Dyula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Tvi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahiti dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San Giorgio/Bila Lehçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Avrupa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Doğu Avrupa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"Kalın Sans Serif Matematiksel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Kuzey Avrupa"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of("Dazaga"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Batı Avrupa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uygurca"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"Eski İtalyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of("Kaingang"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Ortak"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukraynaca"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of("Zelandaca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"Kıpti Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urduca"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Standart Resia Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Kalmıkça"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga dili"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Özbekçe"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasi dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 Almanca Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"Aşağı Saksonca"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Varang Kshiti"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Çin Cumhuriyeti Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamca"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Hotanca"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of("Koyra Chiini"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of("Saat Sistemi (12 - 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskievica Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"Çitral Dili"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"Klasik Süryanice"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of("Sans Serif Matematiksel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of("Osmanya"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"Kiçece"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"Masaram Gondi Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of("Chimborazo Highland Quichua"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga dili"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Valonca"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of("Gagavuzca"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"Süryanice"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of("Yunan"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"Gan Çincesi"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"Kırmançça"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lidya"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"Sümer-Akad Çivi Yazısı"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Volofça"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("Standart Fas Tamazigti"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"Modern Standart Arapça"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("UCAS"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"Moğol"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"Mançurya dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Fraktur Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Silezyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of("Anadolu Hiyeroglifleri"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Manipuri dili"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of("Gael Latin"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Basitleştirilmiş Çin Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Geleneksel Çin Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Zosa dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Küçük Harf Roma Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Likya"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of("Medumba"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"Zerdüşt Daricesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohavk dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of("Kako"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"Erken Modern Fransızca"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Yidiş"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"Süryani"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Deseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yorubaca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of("Geleneksel Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Meksika İspanyolcası"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"Batı Süryani"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"Osmanlı Türkçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"Estrangela Süryani"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(metaValue_vai)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuangca"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Karya"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of("Kalenjin"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Çince"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of("Afaka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Eski Permik"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Satır Sonu Stili"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zuluca"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"Telefon Defteri Sıralaması"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonik"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Gürcü"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of("Sharada"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Finansal Japon Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of("Cham"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"Ova Çirmişçesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"Doğu Süryani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"Myanmar Shan Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of("Elbasan"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of("Eski Kuzey Arap"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"Ol Chiki Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"Yeni Sıralama Düzeni"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of("Takalot"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Demotik Mısır"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Hiyeratik Mısır"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of("Palmira"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("Embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Mısır Hiyeroglifleri"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"Hutsuri Gürcü"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Basitleştirilmiş Çince"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of("Komi-Permyak"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Eski Macar"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani dili"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Geleneksel Almanca Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraean"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"Venedikçe"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"Limbu Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Geleneksel Çince"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of("Sunda"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of("Veps dili"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Kmer Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of("Tirhuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Iloko"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("Valensiyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(metaValue_CY)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Birleştirilmiş Yeni Türk Alfabesi"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of("Mundang"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Gurmukhi Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Birden Fazla Dil"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kado dili"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Ölçü Sistemi"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"Krikçe"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolit"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Kiribatice"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"Ortak Yazım Kuralları"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"Çeroki"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Carib"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of("Kayuga dili"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Tamil Rakamları"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"Karaçay-Balkarca"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"İnguşça"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of("Kinaray-a"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of("Krio"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("Darice"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelyaca"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efik"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of("Tuluca"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("Rakamlar"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Kurukh dili"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"Şambala"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of("Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of("Bafia"_s)
		})
	}));
	return data;
}

LocaleNames_tr::LocaleNames_tr() {
}

$Class* LocaleNames_tr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_tr, name, initialize, &_LocaleNames_tr_ClassInfo_, allocate$LocaleNames_tr);
	return class$;
}

$Class* LocaleNames_tr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
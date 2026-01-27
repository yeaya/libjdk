#include <sun/util/resources/cldr/ext/LocaleNames_gsw.h>

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

$MethodInfo _LocaleNames_gsw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_gsw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_gsw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_gsw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_gsw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_gsw_MethodInfo_
};

$Object* allocate$LocaleNames_gsw($Class* clazz) {
	return $of($alloc(LocaleNames_gsw));
}

void LocaleNames_gsw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gsw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_PW, "Palau"_s);
	$var($String, metaValue_ar, "Arabisch"_s);
	$var($String, metaValue_bn, "Bengalisch"_s);
	$var($String, metaValue_bo, "Tibeetisch"_s);
	$var($String, metaValue_el, "Griechisch"_s);
	$var($String, metaValue_he, u"Hebräisch"_s);
	$var($String, metaValue_hy, "Armenisch"_s);
	$var($String, metaValue_ja, "Japanisch"_s);
	$var($String, metaValue_ka, "Georgisch"_s);
	$var($String, metaValue_kn, "Kannada"_s);
	$var($String, metaValue_mn, "Mongolisch"_s);
	$var($String, metaValue_si, "Singhalesisch"_s);
	$var($String, metaValue_su, "Sundanesisch"_s);
	$var($String, metaValue_ta, "Tamilisch"_s);
	$var($String, metaValue_te, "Telugu"_s);
	$var($String, metaValue_tl, "Tagalog"_s);
	$var($String, metaValue_zh, "Chineesisch"_s);
	$var($String, metaValue_ban, "Balinesisch"_s);
	$var($String, metaValue_chr, "Cherokee"_s);
	$var($String, metaValue_cop, "Koptisch"_s);
	$var($String, metaValue_got, "Gotisch"_s);
	$var($String, metaValue_nqo, u"N’Ko"_s);
	$var($String, metaValue_ota, "Osmanisch"_s);
	$var($String, metaValue_peo, "Altpersisch"_s);
	$var($String, metaValue_sam, "Samaritanisch"_s);
	$var($String, metaValue_syr, "Syrisch"_s);
	$var($String, metaValue_uga, "Ugaritisch"_s);
	$var($String, metaValue_zbl, "Bliss-Symbool"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of("Ogham"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of("Mirandesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of("Atsam"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of("Marwarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of("Tagbanwa"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of("Njiva-Mundart"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"Altägyptisch"_s)
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
			$of("Temne"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of("Oschterinsel-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of("Tereno-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of("Rarotonganisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of("Tetum-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of("Andorra"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Veräinigti Arabischi Emirate"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"Fläämisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of("Afganischtan"_s)
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
			$of("Albaanie"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of("Armeenie"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of("Tengwar"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of("Angoola"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of("Antarktis"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of("Argentiinie"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of("Amerikaanisch-Samoa"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Ööschtriich"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of("Auschtraalie"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of("Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"Amerikanischs Änglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Aaland-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Aserbäidschan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("Oschtarmeenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnie und Herzegowina"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of("Barbados"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of("Bangladesch"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"Kumükisch"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of("Belgie"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"Mittelhochtüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of("Burkina Faaso"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of("Bulgaarie"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Bachräin"_s)
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
			$of("St. Barthelemi"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of("Bermuuda"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of("Kutenai-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of("Erzya"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Brunäi Tarussalam"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of("Boliivie"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of("Brasilie"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of("Bahaamas"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of("Bhutan"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of("Bouvet-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of("Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Wiissrussland"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of("Belize"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("Sichtbari Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of("Kokos-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Temokraatischi Republik Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Zentraalafrikaanischi Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of("Schwiiz"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Elfebäiküschte"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of("Cook-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of("Tschile"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Kamerun"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of("Chiina"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of("Kolumbie"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of("Coschta Rica"_s)
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
			$of("Wienachts-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of("Zypere"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of("Tschechischi Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of("Ekajuk"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Tüütschland"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"Althochtüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of("Aceh"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of("Tschibuuti"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Tänemark"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of("Acholi"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of("Gondi"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Blindäschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of("Brahmi"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of("Tominica"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Tominikaanischi Republik"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of("Mongondou"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of("Meitei Mayek"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of("Zuni-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of("Tigre"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of("Algeerie"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of("Mittelpersisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Tschibtscha"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of("Pampanggan-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of("Ecuador"_s)
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
			$of("Eestland"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("Tiv-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Ägüpte"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of("Weschtsahara"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("Tschagataisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of("Trukesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of("Chinook"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of("Tscheremissisch"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of("Chipewyan"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of("Choctaw"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"Äritreea"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Schpanie"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"Äthiopie"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Europääischi Unioon"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("Elamisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Gregoriaanisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of("Cheyenne"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of("Indus-Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of("Adygai"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Finnland"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fitschi"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Falkland-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Mikroneesie"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Färöer"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Frankriich"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("Tokelauanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of("Grebo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"Indisch Nationaalkaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("Altgriechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabun"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of("Wotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Veräinigts Chönigriich"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Grenada"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of("Geoorgie"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Französisch-Guäjaana"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"Gäärnsi"_s)
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
			$of("afh"_s),
			$of("Afrihili"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"Gröönland"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"Mittelänglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gineea"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"Guadälup"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"Äquatoriaalgineea"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Griecheland"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Süüdgeorgie und d’süüdlichi Sändwitsch-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemaala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guam"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gineea-Bissau"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of("Tlingit-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of("Klingonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of("Tai Lue"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"Guäjaana"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Kän schpraachliche Inhalt"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Öschtriichischs Tüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of("Sonderverwaltigszone Hongkong"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of("Vai"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Höörd- und MäcDonald-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Kroaazie"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Schwiizertüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Ungarn"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of("Tamaseq"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indoneesie"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Irland"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of("Neapolitanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("Zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of("Israel"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"Insle vo Män"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("Indie"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of("Britischs Territoorium im Indische Oozean"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraak"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Iraan"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of("Iisland"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of("Itaalie"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of("Posix"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"Dschörsi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Islaamisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"Dschamäika"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of("Jordaanie"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"Schpaats Mittelfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of("Ainu"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("Tsonga-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of("Kayah Li"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Schwiizer Hochtüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Buddhischtisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Keenia"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of("Latiinameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of("Kirgiisischtan"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of("Kambodscha"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribaati"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komoore"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St. Kitts und Niuwis"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"G’eerbtä Schriftwärt"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Kanadischs Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of("Demokraatischi Volksrepublik Koreea"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of("Republik Koreea"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of("Pollard Phonetisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Schwiizer Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"Kuwäit"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of("Neumelanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Käimän-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of("Kasachschtan"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of("Kyrillisch"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laaos"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Libanon"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St. Lutschiia"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"Phönikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("Altchileslawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of("Kutchinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Nidertüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Liächteschtäi"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Schri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of("Akkadisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Libeeria"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesooto"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of("Pahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Littaue"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxemburg"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Lettland"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of("Katakana"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"Lüübie"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("Ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of("Lahndanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Marokko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monaco"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Republik Moldau"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of("Monteneegro"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St. Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of("Lambanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of("Madagaschkar"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of("Marshallinsle"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of("Aleutisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of("Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Maali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar (Burma)"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mongolei"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of("Newarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of("Sonderverwaltigszone Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"Nördlichi Mariaane"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Martinigg"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Mauretaanie"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"Moosörrat"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Mauriizius"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"Süüd-Altaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Malediiwe"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malaawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mexiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Japaanisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"Maläisia"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of("Mosambik"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namiibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Hebrääisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"Nöikaledoonie"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of("Niger"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of("Norfolk-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of("Nigeeria"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nicaraagua"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("Pahawh Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Holland"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Norweege"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Neepal"_s)
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
			$of(u"Phönizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of("Tsimshian-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Nöiseeland"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"Zigüünerschpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of("Meroitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of("Krimtatarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Altänglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of("Omaan"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of("Angika"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"Bürgerlich islaamisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of("Kaschubisch"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Britischs Änglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Französisch-Polineesie"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Papua-Neuguinea"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Philippiine"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakischtan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Poole"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of("Ewondo"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St. Pierr und Miggelo"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"Pitggäärn"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of("Puerto Riggo"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Paläschtinänsischi Gebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of("Portugal"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(metaValue_PW)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of("Nias-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguai"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of("Tumbuka-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Ggatar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"Schottischs Schtandardänglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niue-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Üssers Ozeaanie"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("Lesgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("Foneetisch (UPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("Elliceanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Wält"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of("Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of("Nordameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Reünioon"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Süüdameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of("Lojbanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of("Rejang"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of("Ozeaanie"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"Rumäänie"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"Särbie"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of("Russland"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruanda"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"Manichäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of("Kharoshthi"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi-Araabie"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of("Ponapeanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"Mandäisch"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Salomoone"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of("Weschtafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Seischälle"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Mittelameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Schweede"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Oschtafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"Aramääisch"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of("Nordafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapuur"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of("Zentraalafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Sloweenie"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Süüdlichs Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"Svalbard und Jaan Määie"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Nord-, Mittel- und Süüdameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slowakäi"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Sierra Leoone"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("San Mariino"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of("Senegal"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somaalie"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("Araukanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("Arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinam"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of("Sao Tome und Prinssipe"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of("El Salvador"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"Süürie"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of("Yao-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of("Swasiland"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of("Arawak"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of("Yapesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Nördlichs Ameerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Törks- und Gaiggos-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of("Tschad"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Französischi Süüd- und Antarktisgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Toogo"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Thailand"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Tadschikischtan"_s)
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
			$of("Oschttimor"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of("Turkmeenischtan"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of("Boontling"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of("Tuneesie"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türggei"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Trinidad und Tobaago"_s)
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
			$of("ast"_s),
			$of("Aschturianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"Orchon-Runä"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of("Tansaniia"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("Uncodiirti Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukraiine"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("Aromunisch"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Oschtaasie"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("Tuwinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Süüdaasie"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of("Haida"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Süüdoschtaasie"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("Pinyin-Sortiirregle"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Süüdeuropa"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Amerikanisch-Ozeaanie"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Veräinigti Schtaate"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"Veräifachts Chineesisch - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Uruguay"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of("Uschbeekischtan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of("Strichfolg"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of("Vatikanstadt"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of("Altprovenzalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"St. Vincent und d’Grönadiine"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of("Venezueela"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of("Britischi Jungfere-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("Amerikaanischi Jungfere-Insle"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of("Wietnam"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Wanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("Nogaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("Altnordisch"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Auschtraalie und Nöiseeland"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("Weschtarmeenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of("Melaneesie"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wallis und Futuuna"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of("Tradizionelli Sortiir-Regle"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of("Mikroneesischs Inselgebiet"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of("Samooa"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("Walamo-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of("Washo-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("Waray"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of("Awadhi"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of("Polineesie"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of("Guscharati"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of("Schriftlosi Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of("Ol Chiki"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of("Battakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Jeeme"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of("Pangwe-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of("Resianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of("Fanti-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"Gebäärdeschpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Majott"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Süüdafrika"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Tövanagaari"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of("Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of("Simbabwe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Unbekannti oder ungültigi Regioon"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"Runäschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of("Mongo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("Nord-Sotho-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of("Rotse-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of("Hiligaynonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of("Takota"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of("Hethitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of("Targiinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"Maya-Hieroglyphä"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("Alt-Newari"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("Udmurtisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of("Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("Limbu"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of("Sandawe-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Jakutisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("Scouse-Mundart"_s)
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
			$of("jpr"_s),
			$of(u"Jüüdisch-Persisch"_s)
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
			$of("lui"_s),
			$of("Luiseno-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of("Nyankole"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of("Nyamwezi-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of("Lunda-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of("Nyoro"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of("Luo-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Miao"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delaware-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("Lushai-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of("Belutschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("Slavey"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"Jüüdisch-Arabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of("Ibeerischs Schpanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of("Nzima"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of("Schottisch"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of("Sizilianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of("Afar"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of("Abchasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of("Avestisch"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of("Afrikaans"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Amharisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of("Aragonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of("Solbica-Mundart"_s)
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
			$of("Katakana oder Hiragana"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of("Assamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of("Linear A"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of("Awarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of("Linear B"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of("Aymara"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of("Aserbaidschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of("Osojane-Mundart"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of("Baschkirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Wiissrussisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Bulgaarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of("Bislama"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("Bambara"_s)
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
			$of("Togrib"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Brötoonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of("Bosnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of("Burmesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(metaValue_nqo)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of("Selkupisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of("Katalaanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("Tschetscheenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of("Chamorro"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"Nööi Rächtschriibig"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of("Korsisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of("Oriya"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of("Cree"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Tschechisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("Chileslawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("Tschuwaschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of("Walisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of("Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Tänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of("Iberischs Portugiisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Tüütsch"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of("Bedauye"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of("Tinka"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of("Buginesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Bemba"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("Altirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of("Malediivisch"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of("Latiinamerikanischs Schpanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of("Dschongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Chineesisch Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of("Ewe"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("Moldawisch"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Änglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of("Eschperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("Tradizionells Chineesisch - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Schpanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of("Eestnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("Baskisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of("Buhid"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of("Hangul"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(metaValue_sam)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(metaValue_zh)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of("Obersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of("Schan-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of("Hanunoo"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Persisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"Veräifachti Chineesischi Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of("Tradizionelli Chineesischi Schrift"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("Ful"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of("Finnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of("Fidschianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of("Fon"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Färöisch"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of("Mbundu-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Französisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of("Sidamo"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of("Friesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of("Iirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Schottisch-Gäälisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of("Galizisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of("Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("Bhodschpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of("Unbeschtimmti Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of("Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Manx-Gäälisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Haussa"_s)
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
			$of("hup"_s),
			$of("Hupa"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of("Bikolisch"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of("Bini"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of("Hiri-Motu"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("Kroazisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ungarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of("Herero"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("Foneetisch (IPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of("Interlingua"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Indonesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of("Interlingue"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Igbo"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of("Sezuanischs Yi"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"Mittelfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("Inupiak"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"Altfranzösisch"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of("Ido"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("Oschtfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of("Nordfriesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Iisländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Italiänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of("Inukitut"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of("Malaysisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of("Sarati"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of("Togri"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"Süüd-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Javanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of("Shaw-Alphabet"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Maduresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of("Lule-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of("Khotta"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of("Maithili"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of("Blackfoot-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of("Makassarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of("Skolt-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of("Manding-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of("Kongolesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(metaValue_got)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of("Kikuyu-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of("Massai-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of("Kwanyama"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of("Kasachisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Gröönländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Kambodschanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Koreaanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of("Kanuri-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of("Kaschmirisch"_s)
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
			$of("Aveschtisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of("Kurdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of("Komi-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("Kornisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of("Kirgiisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of("Soninke-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of("Latiin"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of("Luxemburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of("Rongorongo"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("Limburgisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of("Lingala"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("Laozisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of("Litauisch"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of("Luba"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of("Lettisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of("Sogdisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("Madagassisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of("Marschallesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of("Maori"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of("Mazedonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of("Malayalam"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of("Marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Malaiisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of("Maltesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Birmanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of("Saurashtra"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("Mokschamordwinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of("Nidersorbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of("Nauruisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Norwegisch Bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("Nord-Ndebele-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Nepalesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of("Ndonga"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of("Mandaresisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Niderländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("Norwegisch Nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("Norwegisch"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"Süüd-Ndebele-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of("Navajo-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of("Karakalpakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of("Chewa-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of("Kachin-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("Kabylisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of("Politonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of("Okzitanisch"_s)
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
			$of("Mende-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of("Ojibwa-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of("Oromo"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of("Kawi"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of("Orija"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of("Ossezisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of("Kabardinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("Srananisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Pandschabisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of("Tuala"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of("Serer-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("Lipowaz-Mundart"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of("Pali"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Polnisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"Mittelniderländisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of("Paschtu"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Portugiisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Mittelirisch"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of("Sortiirig"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of("Brasilianischs Portugiisisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of("Tyap"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of("Braj-Bhakha"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kaländer"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of("Laotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of("Quechua"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("Zapotekisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of("Lanna"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Äzioopisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rätoromanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of("Rundi-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Wäährig"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Rumänisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("Saho"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Russisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(metaValue_zbl)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Ruandisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of("Micmac-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of("Sukuma-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Auschtralischs Änglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of("Sanschkrit"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("Sardisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of("Susu"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of("Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of("Nord-Samisch"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of("Minangkabau-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Serbo-Kroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(metaValue_si)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of("Sumerisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of("Slowakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of("Slowenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of("Samoanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of("Schhona"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of("Albanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of("Serbisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("Swazi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Süüd-Sotho-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of("Javanesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of("Natisone-Mundart"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Schwedisch"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("Suaheli"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of("Ibanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of("Aasie"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of("Burjatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of("Zentraalaasie"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of("Weschtaasie"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of("Tadschikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Thailändisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of("Tigrinja"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of("Bugineesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of("Koro"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Kanadischs Änglisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of("Turkmenisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("Tswana-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of("Tongaisch"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Türkisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of("Tsonga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of("Tatarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of("Tiula"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of("Twi"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of("Tahitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"Bela-Tialäkt"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of("Euroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Oschteuroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of("Nordeuroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of("Weschteuroopa"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of("Uigurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("Altitalisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of("Koreanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of("Unbeschtimmt"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ukrainisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Urdu"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"Schtandardisierti Resianischi Rächtschriibig"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"Kalmückisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of("Zenaga"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of("Usbekisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of("Khasisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"Nööi tüütschi Rächtschriibig"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of("Syloti Nagri"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of("Venda-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kaländer vor Republik Chiina"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Vietnamesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of("Sakisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskievica-Rächtschriibig"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Volapük"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of("Altsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(metaValue_ota)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of("Ga"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of("Wallonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of("Lydisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("Sumerisch-akkadischi Keilschrift"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("Wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of("UCAS"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of("Gayo"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of("Mandschurisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("Latiinisch - Fraktur-Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of("Gbaya"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of("Meithei-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of("Latiinisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"Latiinisch - Gäälischi Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Blin"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of("Lykisch"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of("Osage-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of("Moon"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("Mohawk-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(metaValue_syr)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of("Jiddisch"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of("Mossi-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of("Teseret"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("Weschtsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(metaValue_ota)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("Syrisch - Eschtrangelo-Variante"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of("Vai-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of("Zhuang"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of("Karisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(metaValue_zh)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of("Bopomofo"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("Altpermisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of("Telifonbuech-Sortiirregle"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of("Monotonisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of("Kimbundu-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of("Geez"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("Oschtsyrisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(metaValue_tl)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"Temozisch-Ägüptisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"Hiraazisch-Ägüptisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"Ägüptischi Hiroglüüfe"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("Ghutsuri"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Veräifachts Chineesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("Altungarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of("Konkani"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"Alti tüütschi Rächtschriibig"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of("Kosraeanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("Tradizionells Chineesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of("Kpelle-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of("Ilokano"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of("Zypriotisch"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"Äinheitlichs Türggischs Alfabeet"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of("Mehrschpraachig"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Caddo"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of("Glagolitisch"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("Gilbertesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("Kariibisch"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("Karatschaiisch-Balkarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of("Inguschisch"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of("Karelisch"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of("Efikisch"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of("Oraon-Schpraach"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		})
	}));
	return data;
}

LocaleNames_gsw::LocaleNames_gsw() {
}

$Class* LocaleNames_gsw::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_gsw, name, initialize, &_LocaleNames_gsw_ClassInfo_, allocate$LocaleNames_gsw);
	return class$;
}

$Class* LocaleNames_gsw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
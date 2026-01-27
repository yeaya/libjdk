#include <sun/util/resources/cldr/ext/LocaleNames_yo.h>

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

$MethodInfo _LocaleNames_yo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_yo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_yo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_yo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_yo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_yo_MethodInfo_
};

$Object* allocate$LocaleNames_yo($Class* clazz) {
	return $of($alloc(LocaleNames_yo));
}

void LocaleNames_yo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_yo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_lo, u"Láò"_s);
	$var($String, metaValue_ml, u"Málàyálámù"_s);
	$var($String, metaValue_mn, u"Mòngólíà"_s);
	$var($String, metaValue_or, u"Òdíà"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of("Sangu"_s)
		}),
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"Èdè Colognian"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"Ńyákọ́lè"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"Àwọn àmì"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"Èdè Filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"Émójì"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"Èdè Chakma"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"Luyíà"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Èdè Basaa"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"Èdè Sípáníìṣì (orílẹ̀-èdè Yúróòpù)"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"Tẹ́sò"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"Erékùsù Ascension"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"Ààndórà"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"Ẹmirate ti Awọn Arabu"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"Àfùgànístánì"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"Èdè Afrikani"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"Ààntígúà àti Báríbúdà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"Kàlẹ́ńdà Ẹtíópíìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"Ààngúlílà"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"Èdè Akani"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"Àlùbàníánì"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"Améníà"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"Èdè Amariki"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"èdè Lárúbáwá"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"Ààngólà"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"Antakítíkà"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"èdè jàpáànù"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"Agentínà"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"Èdè Árábìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"ìlànà àfọwọ́kọ ará Jàpánù"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"Sámóánì ti Orílẹ́ède Àméríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"Èdè Ti Assam"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"Asítíríà"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"Ástràlìá"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"Árúbà"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"Àwọn Erékùsù ti Åland"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"Asẹ́bájánì"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"Èdè Azerbaijani"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bọ̀síníà àti Ẹtisẹgófínà"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"Bábádósì"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"Èdè Cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"Bángáládésì"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"Bégíọ́mù"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"Èdè Belarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"Bùùkíná Fasò"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"Bùùgáríà"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"Èdè Bugaria"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"Báránì"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"Bùùrúndì"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"Bẹ̀nẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St. Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"Bémúdà"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"Èdè Báḿbàrà"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"Búrúnẹ́lì"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"Èdè Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"Bọ̀lífíyà"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"Tibetán"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of("Caribbean Netherlands"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"Bàràsílì"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"Èdè Bretoni"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"Bàhámásì"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"Èdè Bosnia"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"Ṣógà"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"Bútánì"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"Erékùsù Bouvet"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"Bọ̀tìsúwánà"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"Myánmarà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"Àwọn díjíìtì Láó"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Bélárúsì"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"Ṣẹnà"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"Bèlísẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"Kàlẹ́ńdà Pásíànù"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"Àwọn nọ́ńbà Hébérù"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"Kánádà"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"Èdè Catala"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Erékùsù Cocos (Keeling)"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("Masanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of("Koiraboro Seni"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"Kóńgò – Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"Èdè Chechen"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"Àrin gùngun Áfíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Kóńgò – Brazaville"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"switiṣilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"Kóútè forà"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Etíokun Kùúkù"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"Ṣílè"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kamerúúnì"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"Ṣáínà"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"Kòlómíbìa"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"Èdè Corsican"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"Erékùsù Clipperston"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"Kuusita Ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"Èdè Seeki"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"Kúbà"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"Èdè Síláfííkì Ilé Ìjọ́sìn"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"Etíokun Kápé féndè"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"Curaçao"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"Erékùsù Christmas"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"Kúrúsì"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"Èdè Welshi"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Ṣẹ́ẹ́kì"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"Àwọn nọ́ńbà Ẹtiópíìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"Èdè Ilẹ̀ Denmark"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"Èdè Pọtogí (orílẹ̀-èdè Yúróòpù)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Jámánì"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"Èdè Jámánì"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"Èdè Chiga"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"Diego Gaṣia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"Ìgúnrégé Gbèdéke Kọ́rẹ́ńsì"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"Àwọn díjììtì Defanagárì"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"Díbọ́ótì"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"Dẹ́mákì"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"Bíráìlè"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"Dòmíníkà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"Àwọn Nọ́ńbà Kékèké ti Amẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"Dòmíníkánì"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"Èdè Béḿbà"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"Èdè Sípáníìṣì (orílẹ̀-èdè Látìn-Amẹ́ríkà)"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"Àlùgèríánì"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"Èdè Dzongkha"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"Èdè Bẹ́nà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"Kàlẹ́ńdà ti Ṣáìnà"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"Seuta àti Melilla"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"Ekuádò"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"Ṣárúmà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"Àwọn nọ́ńbà Gíríìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of("Esitonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"Èdè Ewè"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"Àra Ìda Ìlà Déédéé"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"Égípítì"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"Ìwọ̀òòrùn Sàhárà"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"Èdè Giriki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"Èdè Gẹ̀ẹ́sì"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"Èdè Esperanto"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"Èdè Shẹ́rókiì"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of("Eritira"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of("Sipani"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"Èdè Sípáníìṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of("Etopia"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"Èdè Estonia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"Han pẹ̀lú Bopomófò"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"Àpapọ̀ Yúróòpù"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"Èdè Baski"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"Háńgùlù"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"Kàlẹ́ńdà Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"Agbègbè Yúrò"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"Taṣelíìtì"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"Àwọn díjíìtì Gùjárátì"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"Sorbian Apá Òkè"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"Háànù"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"Èdè Pasia"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"tí wọ́n mú rọrùn."_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"Díjíítì Ìwọ̀ Oòrùn"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"Hans àtọwọ́dọ́wọ́"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Èdè Fúlàní"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of("Filandi"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"Èdè Finisi"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of("Fiji"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of("Etikun Fakalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of("Makoronesia"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"Èdè Cantonese"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Àwọn Erékùsù ti Faroe"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"Èdè Faroesi"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"Támílì"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of("Faranse"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"Èdè Faransé"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"Èdè Frisia"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of("Gabon"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"Èdè Ireland"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"Gẹ̀ẹ́sì"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of("Genada"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"Èdè Gaelik ti Ilu Scotland"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"Gọgia"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"Firenṣi Guana"_s)
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
			$of("Gibaratara"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of("Gerelandi"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"Èdè Galicia"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of("Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of("Gene"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"Èdè Guarani"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of("Gadelope"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of("Ekutoria Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"Èdè àìmọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of("Geriisi"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Gúúsù Georgia àti Gúúsù Àwọn Erékùsù Sandwich"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of("Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of("Guamu"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"Èdè Gujarati"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"Máǹkì"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of("Gene-Busau"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"Èdè Klingoni"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of("Guyana"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"Èdè Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"Ààrin Gbùngbùn Kurdish"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"Kò sí àkóònú elédè"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"Èdè Heberu"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"Èdè Híńdì"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"Èdè Jámánì (Ọ́síríà )"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"Agbègbè Ìṣàkóso Ìṣúná Hong Kong Tí Ṣánà Ń Darí"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Erékùsù Heard àti Erékùsù McDonald"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of("Hondurasi"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"Kòróátíà"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"Èdè Kroatia"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"Èdè Ágẹ̀ẹ̀mù"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"Súwísì ti Jámánì"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of("Haati"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of("Haitian Creole"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of("Hungari"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"Èdè Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"Èdè Ile Armenia"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"Èdè pipo"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Ẹrékùsù Kánárì"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of("Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"Èdè Indonéṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"Àwọn díjíìtì Tibetán"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of("Ailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"Iru Èdè"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"Èdè Yíbò"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"Námà"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"Ṣíkuán Yì"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"Iserẹli"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Isle of Man"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of("India"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"Etíkun Índíánì ti Ìlú Bírítísì"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of("Iraki"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of("Irani"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Aṣilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"Èdè Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"Itáli"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"Èdè Ítálì"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"Àmì Ìṣèsìrò"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"Àwọn díjíìtì Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"Àwọn díjíìtì Báńgílà"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"Èdè Jàpáànù"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of("Jersey"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"Kàlẹ́ńdà Lárúbáwá"_s)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of("Jamaika"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"Báńgílà"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"Jọdani"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of("Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"Èdè Javanasi"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of("Gusii"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"Àwọn díjíìtì kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"Èdè Ilẹ̀ Jámánì (Orílẹ́ède swítsàlandì)"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of("Inari Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"Èdè Georgia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"Kàlẹ́ńdà Buddhist"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of("Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"Látín Amẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"Kuriṣisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"Kàmùbódíà"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of("Kiribati"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"Kíkúyù"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"Másáì"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"Kaṣakì"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"Kalaalísùtì"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"Kòmòrósì"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"Èdè kameri"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Kiiti ati Neefi"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"Èdè Kannada"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of("Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"Èdè Faransé (orílẹ̀-èdè Kánádà)"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"Èdè Kòríà"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Guusu Kọria"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"Ariwa Kọria"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"Kaṣímirì"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"Kọdiṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"Èdè Faranṣé (Súwísàlaǹdì)"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of("Kuweti"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"Èdè Kọ́nììṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Etíokun Kámánì"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"Kírígíìsì"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"Kaṣaṣatani"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"èdè ilẹ̀ Rọ́ṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of("Laosi"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"Èdè Latini"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of("Lebanoni"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"Lùṣẹ́mbọ́ọ̀gì"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"Luṣia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"Àwọn díjíìtì Málàyálámù"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of("Ganda"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"Jámánì ìpìlẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"Lẹṣitẹnisiteni"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of("Siri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"Tíbétán"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"Lìǹgálà"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"Firiúlíànì"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"Èto Ìdiwọ̀n Ọba"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of("Laberia"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of("Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of("Lituania"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"Èdè Lithuania"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Lusemogi"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"Lúbà-Katanga"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of("Latifia"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"Èdè Latvianu"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"Katakánà"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of("Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of("Funjo"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"Láńgì"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("Taana"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of("Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of("Monako"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of("Modofia"_s)
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
			$of("Madasika"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"Malagasì"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Etikun Máṣali"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"Ètò Ẹlẹ́sẹẹsẹ Àkùàyàn Unicode"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"Màórì"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Àríwá Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"Èdè Macedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of("Mali"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Manamari"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of("Mogolia"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"Agbègbè Ìṣàkóso Pàtàkì Macao"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Etikun Guusu Mariana"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of("Matinikuwi"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of("Maritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"Èdè marathi"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of("Motserati"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"Èdè Malaya"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of("Malata"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"Èdè Malta"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of("Maritiusi"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maladifi"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of("Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of("Mesiko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"Kàlẹ́ńdà ti Jàpánù"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of("Malasia"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"Èdè Bumiisi"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"Moṣamibiku"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"Àmẹ́níà"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"Ṣóbíánù Apá Ìṣàlẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of("Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"Ìṣàwárí Ète-Gbogbogbò"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"Apá Sàhárà Áfíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"Nọ́ọ́wè Bokímàl"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"Kàlẹ́ńdà Hébérù"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of("Kaledonia Titun"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"Àríwá Ndebele"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"Nàìjá"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"Èdè Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"Etikun Nọ́úfókì"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"Nàìjíríà"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of("Nikaragua"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of("Nedalandi"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"Èdè Dọ́ọ̀ṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"Nọ́ọ́wè Nínọ̀sìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"Nọọwii"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"Èdè Norway"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of("Nepa"_s)
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
			$of(u"Róńbò"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"Ńyájà"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"Ṣilandi Titun"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"Kabilè"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"Èdè Occitani"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"Káńbà"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"Mérù"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"Àwọn nọ́ńbà Àmẹ́níà"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"Ọọma"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"Òròmọ́"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"Ọṣẹ́tíìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("Morisiyen"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of("Panama"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"Èdè Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"Èdè Duala"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"Èdè òyìnbó Gẹ̀ẹ́sì"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of("Peru"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"Firenṣi Polinesia"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of("Paapu ti Giini"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filipini"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of("Pakisitan"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of("Polandi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"Èdè Póláǹdì"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Èdè Èwóǹdò"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Pẹẹri ati mikuloni"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pikarini"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"Kàlẹ́ńdà dangi"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"Pọto Riko"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"Agbègbè ara Palẹsítínì"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"Páshítò"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"Pọ́túgà"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"Èdè Pọtogí"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"Ètò Ẹlẹ́sẹẹsẹ"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of("Paalu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"Àwọn Nọ́ńbà Gíríìkì Kékèké"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of("Paraguye"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"Èdè Pọtogí (Orilẹ̀-èdè Bràsíl)"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of("Makhuwa-Meeto"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"Hébérù"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"Ìgúnrégé Kọ́rẹ́ńsì"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of("Kota"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"Kàlẹ́ńdà"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"Métà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"Èto Wákàtí 24 (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"Èto Wákàtí 24 (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"Àwọn díjíìtì Myánmarí"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"Agbègbè Òṣọ́ọ́níà"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"Kúẹ́ńjùà"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"Èdè Bódò"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"Mákondé"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"Agbáyé"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"Ẹtiópíìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"Áfíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"Àríwá Amẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Riuniyan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"Èto Wákàtí 12 (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"Gúúṣù Amẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"Èto Wákàtí 12 (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"Òsọ́ọ́níà"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"Rómáǹṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"Rúńdì"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"Kọ́rẹ́ńsì"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of("Romaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"Èdè Romania"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of("Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"Àwọn díjíìtì Òdíà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"Àwọn nọ́ńbà Dẹ́símà Ṣáìnà"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"Rọṣia"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"Èdè Rọ́ṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of("Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"Èdè Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"Kabufadíánù"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"Èdè Gẹ̀ẹ́sì (órílẹ̀-èdè Ọsirélíà)"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of("Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"Èdè awon ara Indo"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of("Etikun Solomoni"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of("Tasawak"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"Ìwọ̀ oorùn Afíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"Ṣeṣẹlẹsi"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of("Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"Èdè Sindhi"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"Ààrin Gbùgbùn Àmẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of("Swidini"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"Apáàríwá Sami"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"Ìlà Oorùn Áfíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"Àríwá Afíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of("Singapo"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of("Sango"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"Hẹlena"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"Èdè Serbo-Croatiani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"Àra Ìda Ìlà Mímúná"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"Ààrín gbùngbùn Afíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of("Silofania"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"Èdè Sinhalese"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Apágúúsù Áfíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard & Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"Amẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of("Silofakia"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Èdè Slovaki"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of("Siria looni"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"Èdè Slovenia"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of("Sani Marino"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"Sámóánù"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"Sẹnẹga"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"Ṣọnà"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of("Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"Èdè ara Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"àwọn díjítì Làrubáwá-Índíà"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"Èdè Albania"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"Àwọn díjíìtì Ìbílẹ̀ Támílù"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of("Surinami"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"Èdè Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"Gúúsù Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"Ìgúnrégé Ìṣirò Owó Kọ́rẹ́ńsì"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"Sao tomi ati piriiṣipi"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"Èdè Sesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"Èdè Sudanísì"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"Ẹẹsáfádò"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"Èdè Suwidiisi"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"Èdè Swahili"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of("Sint Maarten"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of("Siria"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"Àwọn nọ́ńbà Ìṣúná Ìbílẹ̀ Ṣáìnà"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"Saṣiland"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of("Tristan da Kunha"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"Èdè Tamili"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"Èdè Asu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"Èto Ìdiwọ̀n US"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"Apáàríwá Amẹ́ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"Áṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Tọọki ati Etikun Kakọsi"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Yangbẹn"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"Ààrin Gbùngbùn Éṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"Ṣààdì"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"Èdè Telugu"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"Ìwọ̀ Òòrùn Eṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Agbègbè Gúúsù Faranṣé"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of("Togo"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"Tàjíìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of("Tailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"Èdè Tai"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"Èdè Tigrinya"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of("Takisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"Èdè Gẹ̀ẹ́sì (Orílẹ̀-èdè Kánádà)"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"Káríbíànù"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of("Tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"Èdè Turkmen"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"ÌlàOòrùn Tímọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"Tọọkimenisita"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"Tuniṣia"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of("Tonga"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"Tóńgàn"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of("Jola-Fonyi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"Àwọn nọ́ńbà Jápànù"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Tọọki"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Èdè Tọọkisi"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of("Tirinida ati Tobaga"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"Tatarí"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of("Tufalu"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of("Taiwani"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"Èdè Asturian"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"Tàǹsáníà"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"Kíwáṣíò"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"Ìṣọwọ́kọ̀wé àìmọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"Yúróòpù"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of("Ukarini"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"Ìlà Òòrùn Eṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"Ìlà Òrùn Yúrópù"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"Àríwá Yúróòpù"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"Gúúṣù Eṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"Ìwọ̀ Òòrùn Yúrópù"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Gúúṣù ìlà òòrùn Éṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of("Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"Yúgọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"Kóríà"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"Wọ́pọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"Gúúṣù Yúróòpù"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"Èdè Ukania"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"Sìnhálà"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Àwọn Erékùsù Kékèké Agbègbè US"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"Ìṣọ̀kan àgbáyé"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"Èdè Udu"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"Amẹrikà"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiian"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of("Nruguayi"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"Púrúṣíànù"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"Nṣibẹkisitani"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"Èdè Uzbek"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"Ààrin Gbùngbùn Atlas Tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Ngiembùnù"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"Ìlú Vatican"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Fisẹnnti ati Genadina"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"Fẹnẹṣuẹla"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"Kàlẹ́ńdà Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Etíkun Fágínì ti ìlú Bírítísì"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Etikun Fagini ti Amẹrika"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"Èdè Jetinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"Koira Ṣíínì"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"Òbíríkiti Wákàtí (12 vs 24)"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"Fẹtinami"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"Fọ́lápùùkù"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of("Faniatu"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of("Riwa"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"Ọṣirélaṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"Mẹlanéṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of("Wali ati futuna"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"Jọ́jíà"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"Agbègbè Maikironéṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"Ńgòmbà"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"Lákota"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"Wọ́lọ́ọ̀fù"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"Wọsà"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"Àfẹnùkò Támásáìtì ti Mòrókò"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"Samọ"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"ìsọ̀rọ̀sí irọ́"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"ibi irọ́"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"Polineṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"Èdè Látìn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"Àwọn nọ́ńbà Ìrọ̀rùn ti Ṣáìnà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"Àwọn nọ́ńbà Ìbílẹ̀ Ṣáìnà"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"Èdè Xhosa"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"Kòsófò"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"Àwọn díjíìtì Rómánù Kékeré"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"Gujaráti"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"Aikọsilẹ"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Kàkó"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of("Yemeni"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"Ìlànà Onírúurú Ètò"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"Èdè Yiddishi"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"Èdè Yorùbá"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"Èdè Sípáníìṣì (orílẹ̀-èdè Mẹ́síkò)"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of("Mayote"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"Gúúṣù Áfíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"Àra Ìda Ìlà Títú"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"Kálẹnjín"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"Dẹfanagárì"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"Edè Ṣáínà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"Àwọn nọ́ńbà Jọ́jíà"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"Hiragánà"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"Ṣamibia"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"Bopomófò"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"Àra Ìda Ìlà"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"Èdè Ṣulu"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Ṣimibabe"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"Àgbègbè àìmọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"Jọ́jíànù"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"Èto Mẹ́tíríìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"Kàlẹ́ńdà ISO-8601"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"Àwọn díjíìtì Télúgù"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"Àwọn nọ́ńbà Ìṣúná Jàpáànù"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"Èdè Ẹmbù"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"Máṣámè"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"Ẹdè Ṣáínà Onírọ̀rùn"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"Àwọn nọ́ńbà Ìṣúná Ìrọ̀rùn Ṣáìnà"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"Kónkánì"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"Àwọn Díjíìtì Lárúbáwá-Índíà fífẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"Núẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"Àwọn Díjíìtì Fífẹ̀-Ẹ̀kún"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"Táítà"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"Apáàríwá Lúrì"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"Èdè Ṣáínà Ìbílẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"Àwọn díjíìtì Kẹ́mẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"Múndàngì"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"Àwọn Díjíìtì Gurumukì"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"Kẹmẹ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"Ọlọ́pọ̀ èdè"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"Èto Ìdiwọ̀n"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"Àwọn díjíìtì Rómánù"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"Sàkíhà"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"Àwọn díjíìtì Tàmílù"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of("Samburu"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"Àwọn nọ́ńbà"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"Gurumúkhì"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"Ṣáńbálà"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"Télúgù"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"Èdè Báfíà"_s)
		})
	}));
	return data;
}

LocaleNames_yo::LocaleNames_yo() {
}

$Class* LocaleNames_yo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_yo, name, initialize, &_LocaleNames_yo_ClassInfo_, allocate$LocaleNames_yo);
	return class$;
}

$Class* LocaleNames_yo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
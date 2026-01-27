#include <sun/util/resources/cldr/ext/LocaleNames_nn.h>

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

$MethodInfo _LocaleNames_nn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_nn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_nn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_nn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nn_MethodInfo_
};

$Object* allocate$LocaleNames_nn($Class* clazz) {
	return $of($alloc(LocaleNames_nn));
}

void LocaleNames_nn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_peo, "gammalpersisk"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"sorteringsrekkjefølgje"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of("symbol"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of("filippinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"små greske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of("lushai"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of("slavej"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of("olulujia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-timesystem (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of("basa"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-timesystem (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of("gammalegyptisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of("burmesiske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("niuisk"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of("lezghian"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of("det uralske fonetiske alfabetet UPA"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of("Dei sameinte arabiske emirata"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of("flamsk"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of("zapotec"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of("tuvalu"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of("verda"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of("japansk stavingsskrifter"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of("Austerrike"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-timesystem (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-timesystem (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of("austarmensk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of("saaho-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of("cebuano"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of("odia-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of("kinesiske desimaltal"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of("kumyk"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("kviterussisk"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of("bakossi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"mellomhøgtysk"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("kinjarwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of("blissymbol"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of("kabuverdianu"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"Saint Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"Salomonøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of("Seychellane"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of("sardinsk"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of("Sentral-Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of("Aust-Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("Saint Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of("streng lineskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of("laotiske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"Sørlege Afrika"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Kviterussland"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of("synleg tale"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of("arabisk-indiske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of("hebraiske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of("tamilske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"Kokosøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("mazanderani"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"valutaformat for rekneskapsføring"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of("Kongo-Kinshasa"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"sørsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of("Den sentralafrikanske republikken"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of("Elfenbeinskysten"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of("tradisjonelle kinesiske finanstal"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of("revidert rettskriving"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"Cookøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of("asu (Tanzania)"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of("Nordlege Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"Turks- og Caicosøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"Dei franske sørterritoria"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of("kyrkjeslavisk"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of("tsjuvansk"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of("Aust-Timor"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of("etiopiske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("tswana"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of("japanske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of("shimaore"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"gammalhøgtysk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of("devanagari-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of("ukjend skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"små armenske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of("Den dominikanske republikken"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of("arumensk"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of("gammalirsk"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of("Aust-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of("Aust-Europa"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of("tuvinisk"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"Søraust-Asia"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of("pinyin-sortering"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of("gammalitalisk"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of("bena (Tanzania)"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"USAs ytre småøyar"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of("SN"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of("greske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of("tivi"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of("normal lineskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of("kalmykisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of("forenkla kinesisk sortering"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of("tsjagataisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of("moldavisk"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of("sentral-tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"tysk ortografi frå 1996"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"lågsaksisk"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of("cherokee"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"gammalprovençalsk"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St. Vincent og Grenadinane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of("tradisjonell kinesisk sortering"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of("hanb"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of("Den europeiske unionen"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of("elamite"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Dei britiske Jomfruøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Dei amerikanske Jomfruøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of("eurosona"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of("gujarati-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"høgsorbisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of("forenkla"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of("vestlege siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"k’iche"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"Falklandsøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of("nogai"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"Færøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of("gammalnorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of("syrisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of("vestarmensk"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of("tokelau"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of("sumero-akkadisk kileskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("gammalgresk"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of("standard marokkansk tamazight"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of("nigeriansk pidgin"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("moderne standardarabisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"felles kanadiske urspråksstavingar"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of("latinsk (frakturvariant)"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"pseudospråk – aksentar"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of("waray"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"pseudospråk – RTL"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"Sør-Georgia og Sør-Sandwichøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"latinsk (gælisk variant)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of("forenkla kinesiske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of("tradisjonelle kinesiske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("manx"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"små romartal"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"språk utan skrift"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of("sorani"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"utan språkleg innhald"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"Heardøya og McDonaldøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"standard sorteringsrekkjefølgje"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of("syriakisk"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of("det internasjonale fonetiske alfabetet (IPA)"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of("syriakisk (vestleg variant)"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"Kanariøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of("teiknskrift"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of("tibetanske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of("syriakisk (estrangelo-variant)"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of("zaza"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of("gammalfransk"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of("austfrisisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of("laus lineskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of("thailandske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of("georgiske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of("gammalpermisk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of("bengalske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of("lineskiftstil"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of("nyare mellomfransk til 1606"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("nordsotho"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of("telugu-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of("tonga (Nyasa)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of("kannada-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of("japanske finanstal"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"grønlandsk (kalaallisut)"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of("Komorane"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of("nedarva"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of("syriakisk (austleg variant)"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"Caymanøyane"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of("kyrillisk (kyrkjeslavisk variant)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of("malayalam-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of("embu"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of("egyptiske hieroglyfar"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of("khutsuri (asomtavruli og nuskhuri)"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"lågtysk"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of("limburgisk"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("friulisk"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of("forenkla kinesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of("gammalungarsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of("forenkla kinesiske finanstal"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of("Luxembourg"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of("utvida arabisk-indiske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of("ladino"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of("siffer med full breidd"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of("thaana"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of("maya-hieroglyfar"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of("madagassisk"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"Marshalløyane"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"standard Unicode-sorteringsrekkjefølgje"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of("nord-lurisk"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of("tradisjonell kinesisk"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of("Nord-Marianane"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"sør-altaj"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of("khmer-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of("Maldivane"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of("valensisk dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of("moksha"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of("samla tyrkisk-latinsk alfabet"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"lågsorbisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of("armisk"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("nepalsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of("gurmukhi-siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of("salmepahlavi"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of("klassisk newarisk"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of("pahawk hmong"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of("udmurt"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noreg"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"fleire språk"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of("gilbertese"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of("kabyle"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("carib"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of("lumbu"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of("romartal"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("gammalengelsk"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of("tamilske siffer"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of("armenske tal"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of("karachay-balkar"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of("scouse-dialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of("dari"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of("seselwa (fransk-kreolsk)"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of("tal"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of("morisyen"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of("sranan tongo"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of("islamsk sivil kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of("resian, lipovazdialekt"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of("Filippinane"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of("Pitcairn"_s)
		})
	}));
	return data;
}

LocaleNames_nn::LocaleNames_nn() {
}

$Class* LocaleNames_nn::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nn, name, initialize, &_LocaleNames_nn_ClassInfo_, allocate$LocaleNames_nn);
	return class$;
}

$Class* LocaleNames_nn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
#include <sun/util/resources/cldr/ext/CurrencyNames_yo.h>

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

$MethodInfo _CurrencyNames_yo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_yo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_yo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_yo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_yo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_yo_MethodInfo_
};

$Object* allocate$CurrencyNames_yo($Class* clazz) {
	return $of($alloc(CurrencyNames_yo));
}

void CurrencyNames_yo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NGN"_s),
			$of(u"₦"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"₽"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Diami ti Awon Orílẹ́ède Arabu"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"Afugánì Afuganísítàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"Lẹ́kẹ̀ Àlìbéníà"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"Dírààmù Àmẹ́níà"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"Gílídà Netherlands Antillean"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kíwánsà Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"Pẹ́sò Agẹntínà"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dọla ti Orílẹ́ède Ástràlìá"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"Fuloríìnì Àrúbà"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"Mánààtì Àsàbáíjáì"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"Àmi Yíyípadà Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"Dọ́là Bábádọ̀ọ̀sì"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"Tákà Báńgíládẹ̀ẹ̀ṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"Owó Lẹ́fì Bọ̀lìgéríà"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dina ti Orílẹ́ède Báránì"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Faransi Bùùrúndì"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"Dọ́là Bẹ̀múdà"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"Dọ́là Bùrùnéì"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"Bọlifiánò Bọ̀lífíà"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"Owó ti Orílẹ̀-èdè Brazil"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"Dọ́là Bàhámà"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"Ìngọ́tírọ̀mù Bútàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Pula Bọ̀tìsúwánà"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Rọ́bù Bẹ̀lárùùsì"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"Dọ́là Bẹ̀lísè"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dọ́là Kánádà"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Firanki Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Faransi ti Orílẹ́ède Siwisi"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"Pẹ́sò Ṣílè"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"Yúànì Sháínà"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Reminibi ti Orílẹ́ède ṣáínà"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"Pẹ́sò Kòlóḿbíà"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"Kólọ́ọ̀nì Kosita Ríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"Pẹ́sò Yíyípadà Kúbà"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"Pẹ́sò Kúbà"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Èsìkúdò Kapú Faadì"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"Koruna Ṣẹ́ẹ̀kì"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Faransi Dibouti"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"Kírónì Dáníṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"Pẹ́sò Dòníníkà"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dina ti Orílẹ́ède Àlùgèríánì"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"pọọn ti Orílẹ́ède Egipiti"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakifasì Eritira"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Báà Etópíà"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"owó Yúrò"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"Dọ́là Fíjì"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"Pọ́n-ùn Erékùsù Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Pọ́n-ùn ti Orilẹ̀-èdè Gẹ̀ẹ́sì"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"Lárì Jọ́jíà"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ṣidi ti Orílẹ́ède Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"sídì Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"Pọ́n-ùn Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gamibia"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"Fírànkì Gínì"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Faransi ti Orílẹ́ède Gini"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"Kúẹ́tísààlì Guatimílà"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"Dọ́là Gùyánà"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"Dọ́là Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"Lẹmipírà Ọ́ńdúrà"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"Kúnà Croatian"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"Gọ́dì Àítì"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"Fọ́ríǹtì Họ̀ngérí"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"Rúpìyá Indonésíà"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"Ṣékélì Tuntun Ísírẹ̀ẹ̀lì"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupi ti Orílẹ́ède Indina"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"Dínárì Ìráákì"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial Iranian"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"Kòrónà Icelandic"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"Dọ́là Jàmáíkà"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"Dínárì Jọ́dàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni ti Orílẹ́ède Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Ṣiili Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"Sómú Kirijísítàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"Ráyò Kàm̀bọ́díà"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faransi Komori"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"Wọ́ọ̀nù Àríwá Kòríà"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"Wọ́ọ̀nù Gúúsù Kòríà"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"Dínárì Kuwaiti"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"Dọ́là Erékùsù Cayman"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"Tẹngé Kasakísítàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"Kíììpù Làótì"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"Pọ́n-ùn Lebanese"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"Rúpìì Siri Láńkà"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dọla Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Loti ti Orílẹ́ède Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dínà Líbíyà"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dírámì Morokò"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"Owó Léhù Moldovan"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Faransi Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"Dẹ́nà Masidóníà"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"Kíyàtì Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"Túgúrììkì Mòǹgólíà"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"Pàtákà Màkáò"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya ti Orílẹ́ède Maritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ouguiya ti Orílẹ́ède Maritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi Maritusi"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"Rúfìyá Mọ̀lìdífà"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kásà Màláwì"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"Pẹ́sò Mẹ́síkò"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"Ríngìtì Màléṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metika ti Orílẹ́ède Mosamibiki"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Mẹ́tíkààlì Mòsáḿbíìkì"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dọla Namibíà"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Náírà Nàìjíríà"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Kọ̀dóbà Naikarágúà"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"Kírónì Nọ́ọ́wè"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"Rúpìì Nẹ̵́pààlì"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Dọ́là New Zealand"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"Ráyò Omani"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"Bálíbóà Pànámà"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"Sólì Pèrúù"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"Kínà Papua Guinea Tuntun"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"Písò Fílípìnì"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"Rúpìì Pakisitánì"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"Sílọ̀tì Pọ́líṣì"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"Gúáránì Párágúwè"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"Ráyò Kàtárì"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"Léhù Ròméníà"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"Dínárì Sàbíà"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"Owó ruble ti ilẹ̀ Rọ́ṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Faransi Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riya ti Orílẹ́ède Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"Dọ́là Erékùsù Sọ́lómọ́nì"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rúpì Sayiselesi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Pọ́n-ùn Sùdáànì"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Pọọun ti Orílẹ́ède Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"Kòrónà Súwídìn"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"Dọ́là Síngápọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Pọ́n-un Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Líónì Sira Líonì"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Ṣílè Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"Dọ́là Súrínámì"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"Pọ́n-un Gúúsù Sùdáànì"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobira ti Orílẹ́ède Sao tome Ati Pirisipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dọbíra Sao tome àti Pirisipi"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"Pọ́n-ùn Sírìà"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Suwasi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"Báàtì Tháì"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"Sómónì Tajikístàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"Mánààtì Tọkimẹnístàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dínà Tuniṣíà"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"Pàángà Tóńgà"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"Lírà Tọ́kì"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"Dọ́là Trinidad & Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"Dọ́là Tàìwánì Tuntun"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Sile Tansania"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"Ọrifiníyà Yukiréníà"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Ṣile Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dọ́là"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"Pẹ́sò Úrúgúwè"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"Sómú Usibẹkísítàànì"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"Bọ̀lífà Fẹnẹsuẹ́là"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"Dáhùn Vietnamese"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"Fátù Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"Tálà Sàmóà"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Firanki àárín Afíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"Dọ́là Ilà Oòrùn Karíbíà"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Faransì ìwọ̀-oorùn Afíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"Fírànkì CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"owóníná àìmọ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"Ráyò Yẹ́mẹ̀nì"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Rándì Gúúsù Afíríkà"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kawaṣa ti Orílẹ́ède Saabia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kàwasà Sámbíà"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dọla ti Orílẹ́ède Siibabuwe"_s)
		})
	}));
	return data;
}

CurrencyNames_yo::CurrencyNames_yo() {
}

$Class* CurrencyNames_yo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_yo, name, initialize, &_CurrencyNames_yo_ClassInfo_, allocate$CurrencyNames_yo);
	return class$;
}

$Class* CurrencyNames_yo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
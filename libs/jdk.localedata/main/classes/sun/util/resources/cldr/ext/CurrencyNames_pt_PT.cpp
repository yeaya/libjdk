#include <sun/util/resources/cldr/ext/CurrencyNames_pt_PT.h>

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

$MethodInfo _CurrencyNames_pt_PT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pt_PT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pt_PT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_pt_PT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_pt_PT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_pt_PT_MethodInfo_
};

$Object* allocate$CurrencyNames_pt_PT($Class* clazz) {
	return $of($alloc(CurrencyNames_pt_PT));
}

void CurrencyNames_pt_PT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pt_PT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LTL"_s),
			$of("LTL"_s)
		}),
		$$new($ObjectArray, {
			$of("LVL"_s),
			$of("LVL"_s)
		}),
		$$new($ObjectArray, {
			$of("PTE"_s),
			$of(u"\u200b"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dirham dos Emirados Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"Afeghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"afegâni afegão"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"lek albanês"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"dram arménio"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("florim das Antilhas Holandesas"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentino"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"dólar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("florim de Aruba"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("manat azeri"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"Dinar da Bósnia-Herzegóvina"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"marco bósnio-herzegóvino conversível"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"dólar barbadense"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("taka bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"Franco belga (convertível)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"lev búlgaro"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinar baremita"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franco burundiano"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"dólar bermudense"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"dólar bruneano"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasileiro"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"dólar das Bahamas"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"ngultrum butanês"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula de Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"Rublo novo bielorusso (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("rublo bielorrusso"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"dólar belizense"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dólar canadiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"franco congolês"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"franco suíço"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chileno"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("yuan offshore"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombiano"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("colon costa-riquenho"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"peso cubano conversível"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cubano"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo cabo-verdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of("Libra de Chipre"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("coroa checa"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franco jibutiano"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("coroa dinamarquesa"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominicano"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("ecv"_s),
			$of("Unidad de Valor Constante (UVC) do Equador"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"libra egípcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritreia"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"birr etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"dólar fijiano"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("libra das Ilhas Falkland"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"libra esterlina britânica"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("lari georgiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"cedi ganês"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("libra de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franco guineense"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal da Guatemala"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"dólar da Guiana"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"dólar de Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira das Honduras"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croata"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde haitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"forint húngaro"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"rupia indonésia"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("sheqel novo israelita"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("dinar iraquiano"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("rial iraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("coroa islandesa"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"dólar jamaicano"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("dinar jordaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"iene japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("xelim queniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of("som quirguiz"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("riel cambojano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franco comoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of("won norte-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won sul-coreano"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("dinar kuwaitiano"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"dólar das Ilhas Caimão"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("tenge cazaque"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of("kip laosiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("libra libanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("rupia do Sri Lanka"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dólar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"Litas da Lituânia"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"Lats da Letónia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"dinar líbio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marroquino"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldavo"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariari malgaxe"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"dinar macedónio"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("kyat de Mianmar"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of("tugrik mongol"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("pataca macaense"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauritana (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya mauritana"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauriciana"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("rupia maldivana"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malauiano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexicano"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"Peso Plata mexicano (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of("Unidad de Inversion (UDI) mexicana"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("ringgit malaio"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"metical moçambicano"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"dólar namibiano"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"Córdoba nicaraguano (1988–1991)"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"córdoba nicaraguano"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("coroa norueguesa"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("rupia nepalesa"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"dólar neozelandês"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("rial omanense"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"balboa do Panamá"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol peruano"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"kina papuásia"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of("peso filipino"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("rupia paquistanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloti polaco"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"escudo português"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani paraguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("rial catarense"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu romeno"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"dinar sérvio"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rublo russo"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"franco ruandês"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("rial saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"dólar das Ilhas Salomão"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia seichelense"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("libra sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("coroa sueca"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"dólar singapuriano"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("libra santa-helenense"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone de Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("xelim somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"dólar do Suriname"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("libra sul-sudanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra de São Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"libra síria"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"lilangeni suázi"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailandês"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("somoni tajique"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("manat turcomeno"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunisino"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"paʻanga tonganesa"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lira turca"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"dólar de Trindade e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"novo dólar taiwanês"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("xelim tanzaniano"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("hryvnia ucraniano"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("xelim ugandense"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dólar dos Estados Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguaio"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("som uzbeque"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolívar (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"bolívar"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("dong vietnamita"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu de Vanuatu"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franco CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"dólar das Caraíbas Orientais"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franco CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("moeda desconhecida"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("rial iemenita"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sul-africano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha zambiano (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambiano"_s)
		})
	}));
	return data;
}

CurrencyNames_pt_PT::CurrencyNames_pt_PT() {
}

$Class* CurrencyNames_pt_PT::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_pt_PT, name, initialize, &_CurrencyNames_pt_PT_ClassInfo_, allocate$CurrencyNames_pt_PT);
	return class$;
}

$Class* CurrencyNames_pt_PT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
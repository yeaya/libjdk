#include <sun/util/resources/cldr/ext/CurrencyNames_ia.h>

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

$MethodInfo _CurrencyNames_ia_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ia, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ia, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ia_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ia",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ia_MethodInfo_
};

$Object* allocate$CurrencyNames_ia($Class* clazz) {
	return $of($alloc(CurrencyNames_ia));
}

void CurrencyNames_ia::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ia::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NLG"_s),
			$of(u"ƒ"_s)
		}),
		$$new($ObjectArray, {
			$of("RUB"_s),
			$of(u"₽"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of("lek albanese"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("florino antillan"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angolan"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("peso argentin"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dollar australian"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of("florino aruban"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("marco convertibile de Bosnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("dollar barbadian"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of("lev bulgare"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("franco burundese"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("dollar bermudan"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of("boliviano bolivian"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("dollar bahamian"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula botswanese"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("rublo bielorusse"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of("dollar belizan"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dollar canadian"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("franco congolese"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franco suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of("peso chilen"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan chinese"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("peso colombian"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of("colon costarican"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of("peso cuban convertibile"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("peso cuban"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("escudo capoverdian"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("corona chec"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("Marco geman"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("franco djibutian"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corona danese"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of("peso dominican"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinar algerin"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of("Corona estonian"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("libra egyptie"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa eritree"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr ethiope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of("Marco finnese"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of("dollar fijian"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of("libra falklandese"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of("Franco francese"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("libra sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("cedi ghanese"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("libra de Gibraltar"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi gambian"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of("franco guinean"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of("quetzal guatemaltec"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of("dollar guyanese"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of("lempira hondurese"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("kuna croate"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("gourde haitian"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("forint hungare"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of("Libra irlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia indian"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of("corona islandese"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of("dollar jamaican"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("yen japonese"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("shilling kenyan"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("franco comorian"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of("dollar del Insulas Caiman"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dollar liberian"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinar libyc"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham marocchin"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("leu moldave"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariary malgache"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("denar macedonie"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ouguiya mauritan (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ouguiya mauritan"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia mauritian"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawian"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso mexican"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of("metical mozambican"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dollar namibian"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira nigerian"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of("cordoba nicaraguan"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of("Florino nederlandese"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corona norvegian"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("dollar neozelandese"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of("balboa panamen"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of("sol peruvian"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of("kina papuan"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloty polonese"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of("guarani paraguayan"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("leu romanian"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("dinar serbe"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rublo russe"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("franco ruandese"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("dollar del insulas Salomon"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia seychellese"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("libra sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corona svedese"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("libra de St. Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leone sierraleonese"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("shilling somali"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of("dollar surinamese"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("libra sud-sudanese"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dobra de São Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni swazilandese"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinar tunisian"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"paʻanga tongan"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("dollar de Trinidad e Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("shilling tanzanian"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("hryvnia ukrainian"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("shilling ugandese"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dollar statounitese"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of("peso uruguayan"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"bolivar venezuelan (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("bolivar venezuelan"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vatu vanuatuan"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of("tala samoan"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("franco CFA de Africa Central"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("dollar del Caribes Oriental"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("franco CFA de Africa Occidental"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of("franco CFP"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("moneta incognite"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sudafrican"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha zambian"_s)
		})
	}));
	return data;
}

CurrencyNames_ia::CurrencyNames_ia() {
}

$Class* CurrencyNames_ia::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ia, name, initialize, &_CurrencyNames_ia_ClassInfo_, allocate$CurrencyNames_ia);
	return class$;
}

$Class* CurrencyNames_ia::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
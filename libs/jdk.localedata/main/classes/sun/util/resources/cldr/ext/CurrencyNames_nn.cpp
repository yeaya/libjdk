#include <sun/util/resources/cldr/ext/CurrencyNames_nn.h>

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

$MethodInfo _CurrencyNames_nn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nn_MethodInfo_
};

$Object* allocate$CurrencyNames_nn($Class* clazz) {
	return $of($alloc(CurrencyNames_nn));
}

void CurrencyNames_nn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GBP"_s),
			$of("GBP"_s)
		}),
		$$new($ObjectArray, {
			$of("MRU"_s),
			$of("MRU"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of("andorranske peseta"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"afghani (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("aok"_s),
			$of(u"angolske kwanza (1977–1990)"_s)
		}),
		$$new($ObjectArray, {
			$of("aon"_s),
			$of(u"angolske nye kwanza (1990–2000)"_s)
		}),
		$$new($ObjectArray, {
			$of("aor"_s),
			$of(u"angolske kwanza reajustado (1995–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of("argentiske austral"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"argentinske peso (1983–1985)"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("austerrikske schilling"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of("aserbaijanske manat"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of("bosnisk-hercegovinske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of("belgiske franc (konvertibel)"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of("belgiske franc (finansiell)"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of("bulgarsk hard lev"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bahrainske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("bop"_s),
			$of("boliviske peso"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of("boliviske mvdol"_s)
		}),
		$$new($ObjectArray, {
			$of("brb"_s),
			$of(u"brasiliansk cruzeiro novo (1967–1986)"_s)
		}),
		$$new($ObjectArray, {
			$of("brc"_s),
			$of("brasilianske cruzado"_s)
		}),
		$$new($ObjectArray, {
			$of("brn"_s),
			$of("brasilianske cruzado novo"_s)
		}),
		$$new($ObjectArray, {
			$of("brr"_s),
			$of("brasilianske cruzeiro"_s)
		}),
		$$new($ObjectArray, {
			$of("buk"_s),
			$of("burmesisk kyat"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"kviterussiske nye rublar (1994–1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("nye kviterussiske rublar"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"kviterussiske rublar (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of("kolombianske pesos"_s)
		}),
		$$new($ObjectArray, {
			$of("cou"_s),
			$of("unidad de valor real"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"kostarikanske colón"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("gamle serbiske dinarer"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("kappverdiske escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("ddm"_s),
			$of("austtyske mark"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("algeriske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ghanesiske cedi (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of("greske drakme"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of("Guinea-Bissau-peso"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("kroatiske dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("ungarske forintar"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("indonesiske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of("nye israelske sheklar"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("indiske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of("irakiske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("iranske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("jordanske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of("kuwaitiske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of("srilankiske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of("litauiske lita"_s)
		}),
		$$new($ObjectArray, {
			$of("ltt"_s),
			$of("litauiske talona"_s)
		}),
		$$new($ObjectArray, {
			$of("luc"_s),
			$of("luxemburgske konvertibel franc"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("latviske lat"_s)
		}),
		$$new($ObjectArray, {
			$of("lvr"_s),
			$of("latviske rublar"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libyske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of("moldovske leuar"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("makedonske denarar"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("mauritiske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("mxp"_s),
			$of(u"meksikanske sølvpeso (1861–1992)"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of("nicaraguanske cordoba"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("nepalske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of("nyzealandske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("omanske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("pakistanske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"paraguayanske guaraní"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("qatarske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of("gamle rumenske leu"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of("rumenske leuar"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("serbiske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("russiske rublar"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"russiske rublar (1991–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("saudiarabiske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("seychelliske rupiar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of("gamle sudanske dinarer"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("gamle sudanske pund"_s)
		}),
		$$new($ObjectArray, {
			$of("sur"_s),
			$of("sovjetiske rublar"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("eswatinisk lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tjr"_s),
			$of("tadsjikiske rublar"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"turkmensk manat (1993–2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunisiske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("gamle tyrkiske lire"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("amerikanske dollar (same dag)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyi"_s),
			$of("uruguayanske peso en unidades indexadas"_s)
		}),
		$$new($ObjectArray, {
			$of("uyp"_s),
			$of(u"uruguayanske peso (1975–1993)"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("usbekiske sum"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of("vanuatuiske vatu"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of("europeiske samansette einingar"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"europeiske monetære einingar"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of("europeiske kontoeiningar (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of("europeiske kontoeiningar (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of("austkaribiske dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of("spesielle trekkrettar"_s)
		}),
		$$new($ObjectArray, {
			$of("xeu"_s),
			$of("europeiske valutaeiningar"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("ukjend valuta"_s)
		}),
		$$new($ObjectArray, {
			$of("ydd"_s),
			$of("jemenittiske dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("jemenittiske rial"_s)
		}),
		$$new($ObjectArray, {
			$of("yud"_s),
			$of("jugoslaviske dinarar (hard)"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of("jugoslaviske noviy-dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("yun"_s),
			$of("jugoslaviske konvertibel dinarar"_s)
		}),
		$$new($ObjectArray, {
			$of("zal"_s),
			$of(u"sørafrikanske rand (finansiell)"_s)
		}),
		$$new($ObjectArray, {
			$of("zrn"_s),
			$of("zairisk ny zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zrz"_s),
			$of("zairisk zaire"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("zimbabwisk dollar"_s)
		})
	}));
	return data;
}

CurrencyNames_nn::CurrencyNames_nn() {
}

$Class* CurrencyNames_nn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nn, name, initialize, &_CurrencyNames_nn_ClassInfo_, allocate$CurrencyNames_nn);
	return class$;
}

$Class* CurrencyNames_nn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
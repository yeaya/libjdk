#include <sun/util/resources/cldr/ext/CurrencyNames_seh.h>

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

$MethodInfo _CurrencyNames_seh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_seh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_seh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_seh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_seh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_seh_MethodInfo_
};

$Object* allocate$CurrencyNames_seh($Class* clazz) {
	return $of($alloc(CurrencyNames_seh));
}

void CurrencyNames_seh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_seh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MZN"_s),
			$of("MTn"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirém dos Emirados Árabes Unidos"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Cuanza angolano"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dólar australiano"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinar bareinita"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Franco do Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula botsuanesa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dólar canadense"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Franco congolês"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Franco suíço"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuan Renminbi chinês"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo cabo-verdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Franco do Djibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar argelino"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Libra egípcia"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakfa da Eritréia"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Birr etíope"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Libra britânica"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Cedi de Gana (1979–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dalasi de Gâmbia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Syli da Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rúpia indiana"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Iene japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Xelim queniano"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Franco de Comores"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dólar liberiano"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti do Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dinar líbio"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dirém marroquino"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Franco de Madagascar"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya da Mauritânia (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ouguiya da Mauritânia"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rupia de Maurício"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Cuacha do Maláui"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metical antigo de Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"Metical de Moçambique"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dólar da Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira nigeriana"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Franco ruandês"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Rial saudita"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia das Seychelles"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Dinar sudanês"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Libra sudanesa antiga"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Libra de Santa Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone de Serra Leoa"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Xelim somali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra de São Tomé e Príncipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra de São Tomé e Príncipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lilangeni da Suazilândia"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar tunisiano"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Xelim da Tanzânia"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Xelim ugandense (1966–1987)"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dólar norte-americano"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Franco CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Franco CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand sul-africano"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Cuacha zambiano (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Cuacha zambiano"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dólar do Zimbábue"_s)
		})
	}));
	return data;
}

CurrencyNames_seh::CurrencyNames_seh() {
}

$Class* CurrencyNames_seh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_seh, name, initialize, &_CurrencyNames_seh_ClassInfo_, allocate$CurrencyNames_seh);
	return class$;
}

$Class* CurrencyNames_seh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
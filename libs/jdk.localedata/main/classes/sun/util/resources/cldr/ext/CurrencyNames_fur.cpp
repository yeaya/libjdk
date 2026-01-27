#include <sun/util/resources/cldr/ext/CurrencyNames_fur.h>

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

$MethodInfo _CurrencyNames_fur_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fur, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fur, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_fur_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_fur",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_fur_MethodInfo_
};

$Object* allocate$CurrencyNames_fur($Class* clazz) {
	return $of($alloc(CurrencyNames_fur));
}

void CurrencyNames_fur::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fur::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("amd"_s),
			$of("Dram armen"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of("Peso argjentin"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of("Selin austriac"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dolar australian"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of("Franc de Belgjiche"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Franc burundês"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of("Dolar dal Brunei"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("real brasilian"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"Rubli bielorùs"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"Rubli bielorùs (2000–2016)"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dolar canadês"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("franc svuizar"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"yuan cinês"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of("Vieri dinar serp"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of("Peso cuban"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Corone de Republiche Ceche"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of("Marc todesc"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("corone danese"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinar algerin"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"Franc francês"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("sterline britaniche"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of("dolar di Hong Kong"_s)
		}),
		$$new($ObjectArray, {
			$of("hrd"_s),
			$of("Dinar cravuat"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna cravuate"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("rupiah indonesiane"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupie indiane"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Rial iranian"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of("Lire taliane"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"yen gjaponês"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of("won de Coree dal Sud"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of("Lats leton"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of("peso messican"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolar namibian"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"Córdoba oro nicaraguan"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("corone norvegjese"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"Dollar neozelandês"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupie pachistane"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("zloty polac"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinar serp"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of("rubli rus"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("riyal de Arabie Saudite"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of("corone svedese"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of("Talar sloven"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of("Corone slovache"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"baht tailandês"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of("Viere Lire turche"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of("lire turche"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"gnûf dolar taiwanês"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dolar american"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of("Dolar american (prossime zornade)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of("Dolar american (stesse zornade)"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("Arint"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of("Aur"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"Unitât composite europeane"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"Unitât monetarie europeane"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"Unitât di acont europeane (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"Unitât di acont europeane (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"Dirits speciâi di incas"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"Franc aur francês"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"Franc UIC francês"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of("Paladi"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of("Platin"_s)
		}),
		$$new($ObjectArray, {
			$of("xre"_s),
			$of("fonts RINET"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"codiç di verifiche de monede"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Monede no valide o no cognossude"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("rand sudafrican"_s)
		})
	}));
	return data;
}

CurrencyNames_fur::CurrencyNames_fur() {
}

$Class* CurrencyNames_fur::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_fur, name, initialize, &_CurrencyNames_fur_ClassInfo_, allocate$CurrencyNames_fur);
	return class$;
}

$Class* CurrencyNames_fur::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
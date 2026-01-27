#include <sun/util/resources/cldr/ext/CurrencyNames_asa.h>

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

$MethodInfo _CurrencyNames_asa_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_asa, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_asa, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_asa_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_asa",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_asa_MethodInfo_
};

$Object* allocate$CurrencyNames_asa($Class* clazz) {
	return $of($alloc(CurrencyNames_asa));
}

void CurrencyNames_asa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_asa::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TSh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dirham ya Falme dha Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwandha ya Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dola ya Authtralia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinari ya Bahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("faranga ya Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula ya Botthwana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dola ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("faranga ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("faranga ya Uthwithi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan renminbi ya China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("ethkudo ya Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("faranga ya Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinari ya Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("pauni ya Mithri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa ya Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("bir ya Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("pauni ya Uingeredha"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("thedi ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalathi ya Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("faranga ya Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupia ya India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("tharafu ya Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("shilingi ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("faranga ya Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dola ya Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti ya Lethoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinari ya Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dirham ya Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("faranga ya Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ugwiya ya Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ugwiya ya Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("rupia ya Morithi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("metikali ya Mthumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dola ya Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naira ya Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("faranga ya Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("riyal ya Thaudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("rupia ya Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("dinari ya Thudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("pauni ya Thudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("pauni ya Thantahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("shilingi ya Thomalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobra ya Thao Tome na Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("dobra ya Thao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinari ya Tunithia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("shilingi ya Tandhania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("shilingi ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dola ya Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("faranga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("faranga CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("randi ya Afrika Kuthini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha ya Dhambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha ya Dhambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("dola ya Dhimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_asa::CurrencyNames_asa() {
}

$Class* CurrencyNames_asa::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_asa, name, initialize, &_CurrencyNames_asa_ClassInfo_, allocate$CurrencyNames_asa);
	return class$;
}

$Class* CurrencyNames_asa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
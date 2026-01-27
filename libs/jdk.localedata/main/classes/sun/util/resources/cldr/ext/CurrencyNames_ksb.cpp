#include <sun/util/resources/cldr/ext/CurrencyNames_ksb.h>

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

$MethodInfo _CurrencyNames_ksb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ksb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ksb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ksb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ksb",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ksb_MethodInfo_
};

$Object* allocate$CurrencyNames_ksb($Class* clazz) {
	return $of($alloc(CurrencyNames_ksb));
}

void CurrencyNames_ksb::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ksb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TSh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("dilham ya Falme za Kialabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza ya Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dola ya Austlalia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinali ya Bahaleni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("falanga ya Bulundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula ya Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dola ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("falanga ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("falanga ya Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yaun lenminbi ya China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("eskudo ya Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("falanga ya Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinali ya Aljelia"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("pauni ya Misli"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nakfa ya Elitlea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("bil ya Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("yulo"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("pauni ya Uingeeza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("sedi ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi ya Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("falanga ya Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("lupia ya India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("salafu ya Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("shilingi ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("falanga ya Komolo"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dola ya Libelia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("loti ya Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinali ya Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("dilham ya Moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("falanga ya Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ugwiya ya Molitania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ugwiya ya Molitania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("lupia ya Molisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("metikali ya Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("dola ya Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("naila ya Naijelia"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("falanga ya Lwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("liyal ya Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("lupia ya Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("dinali ya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("pauni ya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("pauni ya Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("shilingi ya Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dobla ya Sao Tome na Plincipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("dobla ya Sao Tome na Plincipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("dinali ya Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("shilingi ya Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("shilingi ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("dola ya Malekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("falanga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("falanga CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("landi ya Aflika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwacha ya Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("kwacha ya Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("dola ya Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_ksb::CurrencyNames_ksb() {
}

$Class* CurrencyNames_ksb::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ksb, name, initialize, &_CurrencyNames_ksb_ClassInfo_, allocate$CurrencyNames_ksb);
	return class$;
}

$Class* CurrencyNames_ksb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
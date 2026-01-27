#include <sun/util/resources/cldr/ext/CurrencyNames_bas.h>

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

$MethodInfo _CurrencyNames_bas_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bas, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bas, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bas",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bas_MethodInfo_
};

$Object* allocate$CurrencyNames_bas($Class* clazz) {
	return $of($alloc(CurrencyNames_bas));
}

void CurrencyNames_bas::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bas::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirhàm èmìrâ"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwànza àŋgolà"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dɔ̀lâr òstralìà"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dinâr Bàraìn"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Frǎŋ bùrundì"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Pùla Bòtswanà"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dɔ̀lâr kànadà"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Frǎŋ kòŋgo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Frǎŋ sùwîs"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yùan kinà"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Èskudò kabwe᷆r"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Frǎŋ jìbutì"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dìnâr àlgerìà"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Paùnd ègîptò"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nafkà èrìtrěà"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Bîr ètìopìà"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Èrô"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Stɛrlìŋ ŋgìsì"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Sèdi gānà"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dalasì gambìà"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Frǎŋ gìnê"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rùpi īndìà"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yɛ̂n yàpân"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Silîŋ kenìà"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Frǎŋ kòmorà"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dɔ̀lâr lìberìà"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Lotì lèsòtò"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dìnâr libìà"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dìrham màrôk"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Frǎŋ màlàgasì"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ùgwiya mòrìtanìa (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ùgwiya mòrìtanìa"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rupìɛ̀ mòrîs"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwaca màlawì"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mètìkal mòsàmbîk"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dɔ̀lâr nàmibìà"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nayrà nìgerìà"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Frǎŋ Rùandà"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Rìal sàudì"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rùpiɛ̀ sèsɛ̂l"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Dìnâr sùdân"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Paùnd sùdân"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Paùnd hèlenà"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Lèonɛ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Silîŋ sòmàli"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobrà sàotòme (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobrà sàotòme"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lìlàŋgeni swàzì"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dìnâr tùnîs"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Silîŋ tànzànià"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Silîŋ ùgàndà"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dɔla àmerkà"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Frǎŋ CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Frǎŋ CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Rân àfrǐkàsɔ̀"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwàca sàmbià (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwàca sàmbià"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dɔ̀lâr sìmbàbwê"_s)
		})
	}));
	return data;
}

CurrencyNames_bas::CurrencyNames_bas() {
}

$Class* CurrencyNames_bas::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bas, name, initialize, &_CurrencyNames_bas_ClassInfo_, allocate$CurrencyNames_bas);
	return class$;
}

$Class* CurrencyNames_bas::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
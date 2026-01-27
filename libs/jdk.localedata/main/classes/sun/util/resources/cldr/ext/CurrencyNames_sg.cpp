#include <sun/util/resources/cldr/ext/CurrencyNames_sg.h>

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

$MethodInfo _CurrencyNames_sg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sg_MethodInfo_
};

$Object* allocate$CurrencyNames_sg($Class* clazz) {
	return $of($alloc(CurrencyNames_sg));
}

void CurrencyNames_sg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"dirâm tî âEmirâti tî Arâbo Ôko"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"kwânza tî Angoläa"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"dolära tî Ostralïi"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dolùara tî Bahrâina"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"farânga tî Burundïi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"pûla tî Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"dolära tî kanadäa"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"farânga tî Kongöo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"farânga tî Sûîsi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"yuan renminbi tî Shîni"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"eskûêdo tî Kâpo-Vêre"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"farânga tî Dibutïi"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"dinäri tî Alzerïi"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"pôndo tî Kâmitâ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"nakafa tî Eritrëe"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"bir tî Etiopïi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"zoröo"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"pôndo tî Anglëe"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"sêdi tî Ganäa"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"dalasi tî gambïi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"sili tî Ginëe"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"rupïi tî Ênnde"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"yêni tî Zapön"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"shilîngi tî Kenyäa"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"farânga tî Kömôro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"dolära tî Liberïa"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"loti tî Lesôtho"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"dinäar tî Libïi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"dirâm tî Marôko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ariâri tî Madagasikära"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ugîya tî Moritanïi (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ugîya tî Moritanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"rupïi tî Mörîsi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"kwâtia tî Malawïi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"metikala tî Mozambîka"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"dolära tî Namibïi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nâîra tî Nizerïa"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"farânga tî Ruandäa"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"riâli tî Saûdi Arabïi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"rupïi tî Sëyshêle"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"pôndo tî Sudäan"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"pôndo tî Zûâ Sênt-Helêna"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"leône tî Sierâ-Leône"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"shilîngi tî Somalïi"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"dôbra tî Sâô Tomë na Prinsîpe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"dôbra tî Sâô Tomë na Prinsîpe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"lilangùeni tî Swazïlânde"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"dinära tî Tunizïi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"shilîngi tî Tanzanïi"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"shilîngi tî Ugandäa"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"dol$ara ttî äLetäa-Ôko tî Amerîka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"farânga CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"farânga CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"rânde tî Mbongo-Afrîka"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"kwâtia tî Zambïi (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"kwâtia tî Zambïi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"dolära tî Zimbäbwe"_s)
		})
	}));
	return data;
}

CurrencyNames_sg::CurrencyNames_sg() {
}

$Class* CurrencyNames_sg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sg, name, initialize, &_CurrencyNames_sg_ClassInfo_, allocate$CurrencyNames_sg);
	return class$;
}

$Class* CurrencyNames_sg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
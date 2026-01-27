#include <sun/util/resources/cldr/ext/CurrencyNames_nmg.h>

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

$MethodInfo _CurrencyNames_nmg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nmg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nmg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nmg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nmg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nmg_MethodInfo_
};

$Object* allocate$CurrencyNames_nmg($Class* clazz) {
	return $of($alloc(CurrencyNames_nmg));
}

void CurrencyNames_nmg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nmg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Mɔn B ´Arabe"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Mɔn Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dɔ́llɔ Ɔstralia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Mɔn Bahrein"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Fraŋ Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Mɔn Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dɔ́llɔ Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Fraŋ bó Kongolɛ̌"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Fraŋ Suisse"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Mɔn bó Chinois"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Mɔn Kapvɛrt"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Fraŋ Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Mɔn Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Mɔn Ägyptɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Mɔn Erytré"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Mɔn Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Mɔn Ngɛ̄lɛ̄n"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Mɔn Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Mɔn Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Fraŋ Guiné"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Mɔn India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Mɔn Japɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Mɔn Kɛnya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Fraŋ bó Kɔmɔr"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dɔ́llɔ Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Mɔn Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Mɔn Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Mɔn Marɔk"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Mɔn Madagaskar"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mɔn Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Mɔn Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Mɔn Moriss"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Mɔn Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Mɔn Mozambik"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dɔ́llɔ Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Naïra Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Fraŋ Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Mɔn Saudi Arabia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Mɔn Seychɛlle"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Mɔn Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Mɔn Sudan (1957–1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Mɔn má Saint Lina"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Mɔn Leɔne"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Mɔn Somalía"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Mɔn Sao tomé na prinship (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Mɔn Sao tomé na prinship"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Mɔn Ligangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Mɔn Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Mɔn Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Mɔn Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dɔ́llɔ Amɛŕka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Fraŋ CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Fraŋ CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Mɔn Afrik yí sí"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Mɔn Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Mɔn Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dɔ́llɔ Zimbabwǝ (1980–2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_nmg::CurrencyNames_nmg() {
}

$Class* CurrencyNames_nmg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nmg, name, initialize, &_CurrencyNames_nmg_ClassInfo_, allocate$CurrencyNames_nmg);
	return class$;
}

$Class* CurrencyNames_nmg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
#include <sun/util/resources/cldr/ext/CurrencyNames_sw_KE.h>

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

$MethodInfo _CurrencyNames_sw_KE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sw_KE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sw_KE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sw_KE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sw_KE",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sw_KE_MethodInfo_
};

$Object* allocate$CurrencyNames_sw_KE($Class* clazz) {
	return $of($alloc(CurrencyNames_sw_KE));
}

void CurrencyNames_sw_KE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sw_KE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Diramu ya Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of("Afghani ya Afghanistani"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of("Gilda ya Antili ya Uholanzi"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of("Manati ya Azabajani"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of("Maki ya Bosnia na Hezegovina Inayoweza Kubadilishwa"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of("Dola ya Babadosi"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of("Taka ya Bangladeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of("Dola ya Bamuda"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of("Reale ya Brazili"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of("Dola ya Bahama"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of("Ngultrumi ya Bhutani"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of("Ruble ya Belarusi"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dola ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of("Yuan ya China (huru)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan ya China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Eskudo ya Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of("Koruna ya Cheki"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of("Kroni ya Denmaki"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinari ya Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of("Lari ya Jiojia"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of("Sidi ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of("Pauni ya Jibrata"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of("Kuna ya Kroeshia"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of("Godi ya Haiti"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of("Forinti ya Hungaria"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of("Rupia ya Indonesia"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of("Riali ya Irani"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of("Dinari ya Yordani"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yeni ya Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of("Rieli ya Kambodia"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of("Tenge ya Kazakistani"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of("Pauni ya Lebanoni"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Diramu ya Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of("Dinari ya Masedonia"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of("Kiati ya Myama"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of("Pataka ya Macau"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of("Rufiyaa ya Maldivi"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of("Ringgiti ya Malesia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira ya Naijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of("Kroni ya Norwe"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of("Rupia ya Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of("Riali ya Omani"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of("Rupia ya Pakistani"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of("Zloti ya Polandi"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of("Riali ya Katari"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of("Dinari ya Serbia"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyali ya Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of("Dola ya Visiwa vya Solomoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Pauni ya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of("Dola ya Singapoo"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leoni ya Siera Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of("Pauni ya Sudani Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of("Bahti ya Tailandi"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of("Somoni ya Tajikistani"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of("Manati ya Turkmenistani"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of("Dola ya Trinidadi na Tobago"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of("Dola ya Taiwani"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of("Hryvnia ya Ukraini"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of("Som ya Uzbekistani"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of("Boliva ya Venezuela"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of("Dong ya Vietnamu"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Faranga ya CFA ya Afrika ya Kati"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Faranga ya CFA ya Afrika Magharibi"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("Sarafu Isiyojulikana"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of("Riali ya Yemeni"_s)
		})
	}));
	return data;
}

CurrencyNames_sw_KE::CurrencyNames_sw_KE() {
}

$Class* CurrencyNames_sw_KE::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sw_KE, name, initialize, &_CurrencyNames_sw_KE_ClassInfo_, allocate$CurrencyNames_sw_KE);
	return class$;
}

$Class* CurrencyNames_sw_KE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
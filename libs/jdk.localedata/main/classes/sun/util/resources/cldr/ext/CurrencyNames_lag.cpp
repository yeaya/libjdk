#include <sun/util/resources/cldr/ext/CurrencyNames_lag.h>

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

$MethodInfo _CurrencyNames_lag_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lag, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lag, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lag",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lag_MethodInfo_
};

$Object* allocate$CurrencyNames_lag($Class* clazz) {
	return $of($alloc(CurrencyNames_lag));
}

void CurrencyNames_lag::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lag::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TSh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Diriháamu ya Ʉtemi wa Kɨaráabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwáanza ya Angóola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dóola ya Ausitereelía"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dináari ya Baharéeni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Faráanga ya Burúundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Púula ya Botiswáana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dóola ya Kánada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Faráanga ya Kóongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Faráaka ya Uswíisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yúani Renimínibi ya Chíina"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Esikúudo ya Kepuvéede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Faráanga ya Jibóuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dináairi ya Alijéria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Páundi ya Mísiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nákɨfa ya Eriterea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Bíiri ya Ʉhabéeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Yúuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Páundi ya Ʉɨngɨréesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Séedi ya Gáana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Daláasi ya Gámbia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Faráanga ya Gíine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupía ya Índia"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yéeni ya Japáani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Shilíingi ya Kéenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Faráanga ya Komóoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dóola ya Libéria"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Lóoti ya Lesóoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dináari ya Líbia"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Diriháamu ya Moróoko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Mpía ya bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ungwíiya ya Moritánia (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ungwíiya ya Moritánia"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rupía ya Moríisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwáacha ya Maláawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metikáali ya Musumbíiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dóola ya Namíbia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Naíira ya Niijéria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Faráanga ya Rwáanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyáali ya Saudía"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rupía ya Shelishéeli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Páundi ya Sudáani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Páundi ya Mʉtakatíifu Heléena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Leóoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shilíingi ya Somália"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dóbura ya SaoTóome na Pirínsipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dóbura ya SaoTóome na Pirínsipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Lilengéeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dináari ya Tunísia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Shilíingi ya Taansanía"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Shilíingi ya Ugáanda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dóola ya Amerɨ́ka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Faráanga ya CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Faráanga ya CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Ráandi ya Afɨrɨka ya Saame"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwácha ya Sámbia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwácha ya Sámbia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dóola ya Simbáabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_lag::CurrencyNames_lag() {
}

$Class* CurrencyNames_lag::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lag, name, initialize, &_CurrencyNames_lag_ClassInfo_, allocate$CurrencyNames_lag);
	return class$;
}

$Class* CurrencyNames_lag::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
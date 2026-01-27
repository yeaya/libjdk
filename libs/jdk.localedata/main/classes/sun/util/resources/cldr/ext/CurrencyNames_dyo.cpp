#include <sun/util/resources/cldr/ext/CurrencyNames_dyo.h>

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

$MethodInfo _CurrencyNames_dyo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_dyo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_dyo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_dyo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_dyo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_dyo_MethodInfo_
};

$Object* allocate$CurrencyNames_dyo($Class* clazz) {
	return $of($alloc(CurrencyNames_dyo));
}

void CurrencyNames_dyo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_dyo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza yati Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("dolaar yati Ostraalia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("dinaar yati Bahrayn"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"fraaŋ yati Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("pula yati Boswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("dolaar yati Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"fraaŋ yati Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("yuan yati Siin"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("eskuudo yati Kap Ver"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"fraaŋ yati Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("dinaar yati Alseri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"liiverey yati Esípt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("nafka yati Eritree"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("birr yati Ecoopi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("euro"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("cedi yati Gaana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("dalasi yati Gambi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"sili yati Giné"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("rupii yati End"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"yen yati Sapoŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"silliŋ yati Keniya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"fraaŋ yati Komor"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("dolaar yati Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("dinaar yati Libia"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("ariari yati Madagaskaar"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ugiiya yati Mooritanii (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("ugiiya yati Mooritanii"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha yati Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("seefa BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("seefa yati BCEAO"_s)
		})
	}));
	return data;
}

CurrencyNames_dyo::CurrencyNames_dyo() {
}

$Class* CurrencyNames_dyo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_dyo, name, initialize, &_CurrencyNames_dyo_ClassInfo_, allocate$CurrencyNames_dyo);
	return class$;
}

$Class* CurrencyNames_dyo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
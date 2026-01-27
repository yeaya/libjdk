#include <sun/util/resources/cldr/ext/CurrencyNames_dz.h>

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

$MethodInfo _CurrencyNames_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_dz, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_dz, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_dz",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_dz_MethodInfo_
};

$Object* allocate$CurrencyNames_dz($Class* clazz) {
	return $of($alloc(CurrencyNames_dz));
}

void CurrencyNames_dz::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_dz::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AUD"_s),
			$of("AU$"_s)
		}),
		$$new($ObjectArray, {
			$of("BTN"_s),
			$of("Nu."_s)
		}),
		$$new($ObjectArray, {
			$of("ILS"_s),
			$of("ILS"_s)
		}),
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of(u"KR₩"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of(u"TH฿"_s)
		}),
		$$new($ObjectArray, {
			$of("XAF"_s),
			$of("XAF"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"ཡུ་ནཱའི་ཊེཌ་ ཨ་རབ་ ཨེ་མེ་རེཊས་ཀྱི་དངུལ་ ཌིར་ཧཱམ"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"ཨཕ་གཱན་གྱི་དངུལ་ ཨཕ་ག་ནི"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ཨཱོས་ཊྲེ་ལི་ཡ་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"བྷང་ལ་དེཤ་གི་དངུལ་ ཏ་ཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"བར་མུ་ཌ་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"བྲ་ཛིལ་གྱི་དངུལ་ རེ་ཡལ"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"དངུལ་ཀྲམ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ཀེ་ན་ཌ་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"སུ་ཡིས་ཀྱི་དངུལ་ ཕྲངཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"ཅི་ལི་གི་དངུལ་ པེ་སོ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"རྒྱ་ནག་གི་དངུལ་ ཡུ་ཝཱན"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"ཀོ་ལོམ་བྷི་ཡ་གི་དངུལ་ པེ་སོ"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"ཀིའུ་བྷ་གི་དངུལ་ པེ་སོ"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"ཌེན་མཱཀ་གི་དངུལ་ ཀྲོན"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"ཨཱལ་ཇི་རི་ཡ་གི་དངུལ་ ཌའི་ནར"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"ཨི་ཇིབཊ་གི་དངུལ་ པ་འུནཌ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ཡུ་རོ༌དངུལ་"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"བྲི་ཊིཤ་ པ་འུནཌ་ ཨིས་ཊར་ལིང"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"ཧོང་ཀོང་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"ཨིན་ཌོ་ནེ་ཤི་ཡ་གི་དངུལ་ རུ་པི་ཡ"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"ཨིས་རེལ་གྱི་དངུལ་གསརཔ་ ཤེ་ཀེལ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"རྒྱ་གར་གྱི་དངུལ་ རུ་པི"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"ཨི་རཱཀ་གི་དངུལ་ ཌི་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ཨི་རཱན་གྱི་དངུལ་ རི་ཨཱལ"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"ཨཱཡིས་ལེནཌ་གི་དངུལ་ ཀྲོ་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"ཇཱ་མཻ་ཀ་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"ཇོར་ཌན་གྱི་དངུལ་ ཌི་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ཇཱ་པཱན་གྱི་དངུལ་ ཡེན"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"ཀེན་ཡ་གི་དངུལ་ ཤི་ལིང"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"ཀེམ་བྷོ་ཌི་ཡ་གི་དངུལ་ རི་ཨཱལ"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"ནོརཐ་ ཀོ་རི་ཡ་གི་དངུལ་ ཝོན"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"སཱའུཐ་ ཀོ་རི་ཡ་གི་དངུལ་ ཝོན"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"ཀུ་ཝེཊ་གི་དངུལ་ ཌི་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"ཀ་ཛགས་ཏཱན་གྱི་དངུལ་ ཏེང་གེ"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"ལཱ་ཝོས་ཀྱི་དངུལ་ ཀིཔ"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"ལེ་བ་ནོན་གྱི་དངུལ་ པ་འུནཌ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"ཤྲི་ ལང་ཀ་གི་དངུལ་ རུ་པི"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"ལཱའི་བེ་རི་ཡ་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"ལི་བི་ཡ་གི་དངུལ་ ཌི་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"མོ་རོ་ཀོ་གི་དངུལ་ ཌིར་ཧཱམ"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"མི་ཡཱན་མར་གྱི་དངུལ་ ཅཱཏ"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"སོག་པོའི་དངུལ་ ཏུ་གྲིཀ"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"མཱལ་དིབས་ཀྱི་དངུལ་ རུ་ཕི་ཡ"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"མེཀ་སི་ཀོ་གི་དངུལ་ པེ་སོ"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"མ་ལེ་ཤི་ཡ་གི་དངུལ་ རིང་གིཊ"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"ནོར་ཝེ་གི་དངུལ་ ཀྲོ་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"བལ་པོའི་དངུལ་ རུ་པི"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"ནིའུ་ཛི་ལེནཌ་གི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"ཨོ་མཱན་གྱི་དངུལ་ རི་ཨཱལ"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"པ་ན་མ་གི་དངུལ་ བཱལ་བོ་ཝ"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"པ་རུ་གི་དངུལ་ ནུ་བོ་ སཱོལ"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"ཕི་ལི་པིནས་གྱི་དངུལ་ པེ་སོ"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"པ་ཀིས་ཏཱན་གྱི་དངུལ་ རུ་པི"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"པོ་ལེནཌ་ཀྱི་དངུལ ཛ྄ལོ་ཊི"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"ཀ་ཊར་གྱི་དངུལ་ རི་ཨཱལ"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"ཨུ་རུ་སུ་གི་དངུལ་ རུ་བཱལ"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"སཱཝ་དིའི་དངུལ་ རི་ཡཱལ"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"སེ་ཤཱལས་ཀྱི་དངུལ་ རུ་པི"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"སུའི་ཌེན་གྱི་དངུལ་ ཀྲོ་ན"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"སིང་ག་པོར་གྱི་དངུལ་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"སི་རི་ཡ་གི་དངུལ་ པ་འུནཌ"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"ཐཱའི་ལེནཌ་གི་དངུལ་ བཱཏ"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"ཏ་ཇི་ཀིས་ཏཱན་གྱི་དངུལ་ སོ་མོ་ནི"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"ཊཱར་ཀི་གི་དངུལ་ ལི་ར"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"ཊཱའི་ཝཱན་གི་དངུལ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"ཊཱན་ཛཱ་ནི་ཡ་གི་དངུལ་ ཤི་ལིང"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ཡུ་གྷེན་ཌ་གི་དངུལ་ ཤི་ལིང"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ཡུ་ཨེས་ ཌོ་ལར"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"ཡུ་རུ་གུ་ཝའི་གི་དངུལ་ པེ་སོ"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"ཨུས་བེ་ཀིས་ཏཱན་གྱི་དངུལ་ སོམ"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"བེ་ནི་ཛུ་ཝེ་ལ་གི་དངུལ་ བོ་ལི་བར (2008–2018)"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"བེ་ནི་ཛུ་ཝེ་ལ་གི་དངུལ་ བོ་ལི་བར"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"བེཊ་ནཱམ་གྱི་དངུལ་ ཌོང"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"མ་ཤེས་པའི་དངུལ"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"སཱའུཐ་ ཨཕ་རི་ཀ་གི་དངུལ་ རཱནད"_s)
		})
	}));
	return data;
}

CurrencyNames_dz::CurrencyNames_dz() {
}

$Class* CurrencyNames_dz::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_dz, name, initialize, &_CurrencyNames_dz_ClassInfo_, allocate$CurrencyNames_dz);
	return class$;
}

$Class* CurrencyNames_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
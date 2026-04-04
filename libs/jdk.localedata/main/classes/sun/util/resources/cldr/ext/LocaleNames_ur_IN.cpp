#include <sun/util/resources/cldr/ext/LocaleNames_ur_IN.h>
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

void LocaleNames_ur_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ur_IN::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AC"_s,
			u"جزیرہ اسینشن"_s
		}),
		$$new($ObjectArray, {
			"AX"_s,
			u"جزائر آلینڈ"_s
		}),
		$$new($ObjectArray, {
			"BV"_s,
			u"جزیرہ بوویت"_s
		}),
		$$new($ObjectArray, {
			"CC"_s,
			u"جزائر (کیلنگ) کوکوس"_s
		}),
		$$new($ObjectArray, {
			"CK"_s,
			u"جزائر کک"_s
		}),
		$$new($ObjectArray, {
			"CP"_s,
			u"جزیرہ کلپرٹن"_s
		}),
		$$new($ObjectArray, {
			"DG"_s,
			u"ڈیگو گارشیا"_s
		}),
		$$new($ObjectArray, {
			"FK"_s,
			u"جزائر فاکلینڈ"_s
		}),
		$$new($ObjectArray, {
			"FO"_s,
			u"جزائر فیرو"_s
		}),
		$$new($ObjectArray, {
			"GF"_s,
			u"فرانسیسی گیانا"_s
		}),
		$$new($ObjectArray, {
			"HM"_s,
			u"جزائر ہرڈ و مکڈونلڈ"_s
		}),
		$$new($ObjectArray, {
			"IC"_s,
			u"جزائر کناری"_s
		}),
		$$new($ObjectArray, {
			"IO"_s,
			u"برطانوی بحرہند خطہ"_s
		}),
		$$new($ObjectArray, {
			"MH"_s,
			u"جزائر مارشل"_s
		}),
		$$new($ObjectArray, {
			"MP"_s,
			u"جزائر شمالی ماریانا"_s
		}),
		$$new($ObjectArray, {
			"NF"_s,
			u"جزیرہ نارفوک"_s
		}),
		$$new($ObjectArray, {
			"PN"_s,
			u"جزائر پٹکیرن"_s
		}),
		$$new($ObjectArray, {
			"SB"_s,
			u"جزائر سلیمان"_s
		}),
		$$new($ObjectArray, {
			"TA"_s,
			u"ترسٹان دا کونیا"_s
		}),
		$$new($ObjectArray, {
			"TC"_s,
			u"جزائر کیکس و ترکیہ"_s
		}),
		$$new($ObjectArray, {
			"UM"_s,
			u"امریکی بیرونی جزائر"_s
		}),
		$$new($ObjectArray, {
			"VG"_s,
			u"برطانوی جزائر ورجن"_s
		}),
		$$new($ObjectArray, {
			"VI"_s,
			u"امریکی جزائر ورجن"_s
		}),
		$$new($ObjectArray, {
			"hr"_s,
			u"کروشین"_s
		}),
		$$new($ObjectArray, {
			"jv"_s,
			u"جاوانیز"_s
		}),
		$$new($ObjectArray, {
			"ka"_s,
			u"جارجيائى"_s
		}),
		$$new($ObjectArray, {
			"kl"_s,
			u"کلالیسٹ"_s
		}),
		$$new($ObjectArray, {
			"kn"_s,
			u"کنڑ"_s
		}),
		$$new($ObjectArray, {
			"ku"_s,
			u"کرد"_s
		}),
		$$new($ObjectArray, {
			"awa"_s,
			u"اودھی"_s
		}),
		$$new($ObjectArray, {
			"ckb"_s,
			u"سورانی کردی"_s
		}),
		$$new($ObjectArray, {
			"dje"_s,
			u"زرمہ"_s
		}),
		$$new($ObjectArray, {
			"mag"_s,
			u"مگہی"_s
		}),
		$$new($ObjectArray, {
			"zgh"_s,
			u"معیاری مراقشی تمازیقی"_s
		}),
		$$new($ObjectArray, {
			"ar_001"_s,
			u"جدید معیاری عربی"_s
		}),
		$$new($ObjectArray, {
			"zh_Hans"_s,
			u"آسان چینی"_s
		}),
		$$new($ObjectArray, {
			"type.nu.tibt"_s,
			u"تبتی ہندسے"_s
		}),
		$$new($ObjectArray, {
			"type.nu.armnlow"_s,
			u"آرمینیائی لوئر کیس اعداد"_s
		}),
		$$new($ObjectArray, {
			"type.nu.greklow"_s,
			u"یونانی لوئر کیس اعداد"_s
		})
	}));
	return data;
}

LocaleNames_ur_IN::LocaleNames_ur_IN() {
}

$Class* LocaleNames_ur_IN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ur_IN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ur_IN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_ur_IN",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ur_IN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ur_IN);
	});
	return class$;
}

$Class* LocaleNames_ur_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
#include <sun/util/resources/cldr/ext/LocaleNames_ps_PK.h>
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

void LocaleNames_ps_PK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ps_PK::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"019"_s,
			u"امريکے"_s
		}),
		$$new($ObjectArray, {
			"PS"_s,
			u"فلسطين سيمے"_s
		}),
		$$new($ObjectArray, {
			"TC"_s,
			u"د ترکیے او کیکاسو ټاپو"_s
		}),
		$$new($ObjectArray, {
			"TF"_s,
			u"د فرانسے جنوبي سیمے"_s
		}),
		$$new($ObjectArray, {
			"fo"_s,
			u"فاروئے"_s
		}),
		$$new($ObjectArray, {
			"nb"_s,
			u"ناروے بوکمال"_s
		}),
		$$new($ObjectArray, {
			"dsb"_s,
			u"لوړے سربي"_s
		}),
		$$new($ObjectArray, {
			"kha"_s,
			u"خاسے"_s
		}),
		$$new($ObjectArray, {
			"ar_001"_s,
			u"نوے معياري عربي"_s
		}),
		$$new($ObjectArray, {
			"type.nu.arabext"_s,
			u"غځېدلے عربي ۔ اينډيک عدد"_s
		}),
		$$new($ObjectArray, {
			"type.co.standard"_s,
			u"معياري د لټے ترتيب"_s
		})
	}));
	return data;
}

LocaleNames_ps_PK::LocaleNames_ps_PK() {
}

$Class* LocaleNames_ps_PK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ps_PK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ps_PK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_ps_PK",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ps_PK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ps_PK);
	});
	return class$;
}

$Class* LocaleNames_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
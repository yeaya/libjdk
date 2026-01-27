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

$MethodInfo _LocaleNames_ps_PK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ps_PK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ps_PK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ps_PK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ps_PK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ps_PK_MethodInfo_
};

$Object* allocate$LocaleNames_ps_PK($Class* clazz) {
	return $of($alloc(LocaleNames_ps_PK));
}

void LocaleNames_ps_PK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ps_PK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"امريکے"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"فلسطين سيمے"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"د ترکیے او کیکاسو ټاپو"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"د فرانسے جنوبي سیمے"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"فاروئے"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"ناروے بوکمال"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"لوړے سربي"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"خاسے"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"نوے معياري عربي"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"غځېدلے عربي ۔ اينډيک عدد"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"معياري د لټے ترتيب"_s)
		})
	}));
	return data;
}

LocaleNames_ps_PK::LocaleNames_ps_PK() {
}

$Class* LocaleNames_ps_PK::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ps_PK, name, initialize, &_LocaleNames_ps_PK_ClassInfo_, allocate$LocaleNames_ps_PK);
	return class$;
}

$Class* LocaleNames_ps_PK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
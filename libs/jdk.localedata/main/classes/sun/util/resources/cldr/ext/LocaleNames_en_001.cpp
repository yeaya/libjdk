#include <sun/util/resources/cldr/ext/LocaleNames_en_001.h>

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

$MethodInfo _LocaleNames_en_001_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_001, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_001, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_en_001_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_001",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_001_MethodInfo_
};

$Object* allocate$LocaleNames_en_001($Class* clazz) {
	return $of($alloc(LocaleNames_en_001));
}

void LocaleNames_en_001::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_001::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("US Outlying Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of("US Virgin Islands"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Creek"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of("Yakut"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of("West Low German"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12-Hour System (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12-Hour System (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24-Hour System (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24-Hour System (1–24)"_s)
		})
	}));
	return data;
}

LocaleNames_en_001::LocaleNames_en_001() {
}

$Class* LocaleNames_en_001::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_001, name, initialize, &_LocaleNames_en_001_ClassInfo_, allocate$LocaleNames_en_001);
	return class$;
}

$Class* LocaleNames_en_001::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
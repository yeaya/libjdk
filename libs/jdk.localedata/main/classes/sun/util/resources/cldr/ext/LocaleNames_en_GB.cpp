#include <sun/util/resources/cldr/ext/LocaleNames_en_GB.h>

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

$MethodInfo _LocaleNames_en_GB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_GB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_GB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_en_GB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_en_GB",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_en_GB_MethodInfo_
};

$Object* allocate$LocaleNames_en_GB($Class* clazz) {
	return $of($alloc(LocaleNames_en_GB));
}

void LocaleNames_en_GB::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_GB::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"St Barthélemy"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("St Kitts & Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of("St Lucia"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of("St Martin"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("St Pierre & Miquelon"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of("St Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("St Vincent & the Grenadines"_s)
		})
	}));
	return data;
}

LocaleNames_en_GB::LocaleNames_en_GB() {
}

$Class* LocaleNames_en_GB::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_en_GB, name, initialize, &_LocaleNames_en_GB_ClassInfo_, allocate$LocaleNames_en_GB);
	return class$;
}

$Class* LocaleNames_en_GB::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
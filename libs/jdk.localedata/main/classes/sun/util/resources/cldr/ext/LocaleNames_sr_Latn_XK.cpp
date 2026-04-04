#include <sun/util/resources/cldr/ext/LocaleNames_sr_Latn_XK.h>
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

void LocaleNames_sr_Latn_XK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Latn_XK::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CG"_s,
			"Kongo"_s
		}),
		$$new($ObjectArray, {
			"CV"_s,
			"Kabo Verde"_s
		}),
		$$new($ObjectArray, {
			"CZ"_s,
			u"Češka Republika"_s
		}),
		$$new($ObjectArray, {
			"HK"_s,
			"SAR Hongkong"_s
		}),
		$$new($ObjectArray, {
			"KN"_s,
			"Sveti Kits i Nevis"_s
		}),
		$$new($ObjectArray, {
			"MO"_s,
			"SAR Makao"_s
		}),
		$$new($ObjectArray, {
			"PM"_s,
			"Sveti Pjer i Mikelon"_s
		}),
		$$new($ObjectArray, {
			"RE"_s,
			"Reunion"_s
		}),
		$$new($ObjectArray, {
			"UM"_s,
			"Manja udaljena ostrva SAD"_s
		}),
		$$new($ObjectArray, {
			"VC"_s,
			"Sveti Vinsent i Grenadini"_s
		}),
		$$new($ObjectArray, {
			"bm"_s,
			"bamanankan"_s
		}),
		$$new($ObjectArray, {
			"bn"_s,
			"bangla"_s
		}),
		$$new($ObjectArray, {
			"ff"_s,
			"fulah"_s
		}),
		$$new($ObjectArray, {
			"ht"_s,
			u"haićanski kreolski"_s
		}),
		$$new($ObjectArray, {
			"lo"_s,
			u"laoški"_s
		}),
		$$new($ObjectArray, {
			"si"_s,
			"sinhalski"_s
		}),
		$$new($ObjectArray, {
			"xh"_s,
			"isikosa"_s
		}),
		$$new($ObjectArray, {
			"zu"_s,
			"isizulu"_s
		}),
		$$new($ObjectArray, {
			"gsw"_s,
			u"švajcarski nemački"_s
		}),
		$$new($ObjectArray, {
			"moh"_s,
			"mohok"_s
		}),
		$$new($ObjectArray, {
			"nqo"_s,
			u"n’ko"_s
		}),
		$$new($ObjectArray, {
			"shi"_s,
			u"južni šilha"_s
		}),
		$$new($ObjectArray, {
			"tzm"_s,
			u"centralnoatlaski tamašek"_s
		}),
		$$new($ObjectArray, {
			"zgh"_s,
			u"standardni marokanski tamašek"_s
		})
	}));
	return data;
}

LocaleNames_sr_Latn_XK::LocaleNames_sr_Latn_XK() {
}

$Class* LocaleNames_sr_Latn_XK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr_Latn_XK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr_Latn_XK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_sr_Latn_XK",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_sr_Latn_XK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_sr_Latn_XK);
	});
	return class$;
}

$Class* LocaleNames_sr_Latn_XK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
#include <sun/util/resources/cldr/ext/LocaleNames_sr_Latn_ME.h>
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

void LocaleNames_sr_Latn_ME::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Latn_ME::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BY"_s,
			"Bjelorusija"_s
		}),
		$$new($ObjectArray, {
			"CG"_s,
			"Kongo"_s
		}),
		$$new($ObjectArray, {
			"CZ"_s,
			u"Češka Republika"_s
		}),
		$$new($ObjectArray, {
			"DE"_s,
			u"Njemačka"_s
		}),
		$$new($ObjectArray, {
			"KN"_s,
			"Sveti Kits i Nevis"_s
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
			"VG"_s,
			u"Britanska Djevičanska Ostrva"_s
		}),
		$$new($ObjectArray, {
			"VI"_s,
			u"Američka Djevičanska Ostrva"_s
		}),
		$$new($ObjectArray, {
			"be"_s,
			"bjeloruski"_s
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
			"xh"_s,
			"isikosa"_s
		}),
		$$new($ObjectArray, {
			"zu"_s,
			"isizulu"_s
		}),
		$$new($ObjectArray, {
			"arn"_s,
			"mapudungun"_s
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

LocaleNames_sr_Latn_ME::LocaleNames_sr_Latn_ME() {
}

$Class* LocaleNames_sr_Latn_ME::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr_Latn_ME, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr_Latn_ME, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_sr_Latn_ME",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_sr_Latn_ME, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_sr_Latn_ME);
	});
	return class$;
}

$Class* LocaleNames_sr_Latn_ME::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
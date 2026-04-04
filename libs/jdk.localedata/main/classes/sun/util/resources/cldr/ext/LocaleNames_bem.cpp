#include <sun/util/resources/cldr/ext/LocaleNames_bem.h>
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

void LocaleNames_bem::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bem::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ZM"_s,
			"Zambia"_s
		}),
		$$new($ObjectArray, {
			"ak"_s,
			"Ichi Akan"_s
		}),
		$$new($ObjectArray, {
			"am"_s,
			"Ichi Amhari"_s
		}),
		$$new($ObjectArray, {
			"ar"_s,
			"Ichi Arab"_s
		}),
		$$new($ObjectArray, {
			"be"_s,
			"Ichi Belarus"_s
		}),
		$$new($ObjectArray, {
			"bg"_s,
			"Ichi Bulgariani"_s
		}),
		$$new($ObjectArray, {
			"bn"_s,
			"Ichi Bengali"_s
		}),
		$$new($ObjectArray, {
			"cs"_s,
			"Ichi Cheki"_s
		}),
		$$new($ObjectArray, {
			"de"_s,
			"Ichi Jemani"_s
		}),
		$$new($ObjectArray, {
			"el"_s,
			"Ichi Griki"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			"Ichi Sungu"_s
		}),
		$$new($ObjectArray, {
			"es"_s,
			"Ichi Spanishi"_s
		}),
		$$new($ObjectArray, {
			"fa"_s,
			"Ichi Pesia"_s
		}),
		$$new($ObjectArray, {
			"fr"_s,
			"Ichi Frenchi"_s
		}),
		$$new($ObjectArray, {
			"ha"_s,
			"Ichi Hausa"_s
		}),
		$$new($ObjectArray, {
			"hi"_s,
			"Ichi Hindu"_s
		}),
		$$new($ObjectArray, {
			"hu"_s,
			"Ichi Hangarian"_s
		}),
		$$new($ObjectArray, {
			"id"_s,
			"Ichi Indonesiani"_s
		}),
		$$new($ObjectArray, {
			"ig"_s,
			"Ichi Ibo"_s
		}),
		$$new($ObjectArray, {
			"it"_s,
			"Ichi Italiani"_s
		}),
		$$new($ObjectArray, {
			"ja"_s,
			"Ichi Japanisi"_s
		}),
		$$new($ObjectArray, {
			"jv"_s,
			"Ichi Javanisi"_s
		}),
		$$new($ObjectArray, {
			"km"_s,
			"Ichi Khmer"_s
		}),
		$$new($ObjectArray, {
			"ko"_s,
			"Ichi Koriani"_s
		}),
		$$new($ObjectArray, {
			"ms"_s,
			"Ichi Maleshani"_s
		}),
		$$new($ObjectArray, {
			"my"_s,
			"Ichi Burma"_s
		}),
		$$new($ObjectArray, {
			"ne"_s,
			"Ichi Nepali"_s
		}),
		$$new($ObjectArray, {
			"nl"_s,
			"Ichi Dachi"_s
		}),
		$$new($ObjectArray, {
			"pa"_s,
			"Ichi Punjabi"_s
		}),
		$$new($ObjectArray, {
			"pl"_s,
			"Ichi Polishi"_s
		}),
		$$new($ObjectArray, {
			"pt"_s,
			"Ichi Potogisi"_s
		}),
		$$new($ObjectArray, {
			"ro"_s,
			"Ichi Romaniani"_s
		}),
		$$new($ObjectArray, {
			"ru"_s,
			"Ichi Rusiani"_s
		}),
		$$new($ObjectArray, {
			"rw"_s,
			"Ichi Rwanda"_s
		}),
		$$new($ObjectArray, {
			"so"_s,
			"Ichi Somalia"_s
		}),
		$$new($ObjectArray, {
			"sv"_s,
			"Ichi Swideni"_s
		}),
		$$new($ObjectArray, {
			"ta"_s,
			"Ichi Tamil"_s
		}),
		$$new($ObjectArray, {
			"th"_s,
			"Ichi Thai"_s
		}),
		$$new($ObjectArray, {
			"tr"_s,
			"Ichi Takishi"_s
		}),
		$$new($ObjectArray, {
			"uk"_s,
			"Ichi Ukraniani"_s
		}),
		$$new($ObjectArray, {
			"ur"_s,
			"Ichi Urudu"_s
		}),
		$$new($ObjectArray, {
			"vi"_s,
			"Ichi Vietinamu"_s
		}),
		$$new($ObjectArray, {
			"yo"_s,
			"Ichi Yoruba"_s
		}),
		$$new($ObjectArray, {
			"zh"_s,
			"Ichi Chainisi"_s
		}),
		$$new($ObjectArray, {
			"zu"_s,
			"Ichi Zulu"_s
		}),
		$$new($ObjectArray, {
			"bem"_s,
			"Ichibemba"_s
		})
	}));
	return data;
}

LocaleNames_bem::LocaleNames_bem() {
}

$Class* LocaleNames_bem::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bem, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bem, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_bem",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_bem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_bem);
	});
	return class$;
}

$Class* LocaleNames_bem::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
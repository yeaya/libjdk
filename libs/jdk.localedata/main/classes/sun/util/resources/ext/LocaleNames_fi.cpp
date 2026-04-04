#include <sun/util/resources/ext/LocaleNames_fi.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void LocaleNames_fi::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_fi::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BE"_s,
			"Belgia"_s
		}),
		$$new($ObjectArray, {
			"BR"_s,
			"Brasilia"_s
		}),
		$$new($ObjectArray, {
			"CA"_s,
			"Kanada"_s
		}),
		$$new($ObjectArray, {
			"CH"_s,
			"Sveitsi"_s
		}),
		$$new($ObjectArray, {
			"CN"_s,
			"Kiina"_s
		}),
		$$new($ObjectArray, {
			"CZ"_s,
			"Tsekin tasavalta"_s
		}),
		$$new($ObjectArray, {
			"DE"_s,
			"Saksa"_s
		}),
		$$new($ObjectArray, {
			"DK"_s,
			"Tanska"_s
		}),
		$$new($ObjectArray, {
			"ES"_s,
			"Espanja"_s
		}),
		$$new($ObjectArray, {
			"FI"_s,
			"Suomi"_s
		}),
		$$new($ObjectArray, {
			"FR"_s,
			"Ranska"_s
		}),
		$$new($ObjectArray, {
			"GB"_s,
			"Iso-Britannia"_s
		}),
		$$new($ObjectArray, {
			"GR"_s,
			"Kreikka"_s
		}),
		$$new($ObjectArray, {
			"IE"_s,
			"Irlanti"_s
		}),
		$$new($ObjectArray, {
			"IT"_s,
			"Italia"_s
		}),
		$$new($ObjectArray, {
			"JP"_s,
			"Japani"_s
		}),
		$$new($ObjectArray, {
			"KR"_s,
			"Korea"_s
		}),
		$$new($ObjectArray, {
			"NL"_s,
			"Alankomaat"_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"Norja"_s
		}),
		$$new($ObjectArray, {
			"PL"_s,
			"Puola"_s
		}),
		$$new($ObjectArray, {
			"PT"_s,
			"Portugali"_s
		}),
		$$new($ObjectArray, {
			"RU"_s,
			u"Venäjä"_s
		}),
		$$new($ObjectArray, {
			"SE"_s,
			"Ruotsi"_s
		}),
		$$new($ObjectArray, {
			"TR"_s,
			"Turkki"_s
		}),
		$$new($ObjectArray, {
			"US"_s,
			"Yhdysvallat"_s
		}),
		$$new($ObjectArray, {
			"ar"_s,
			"arabia"_s
		}),
		$$new($ObjectArray, {
			"ba"_s,
			"baski"_s
		}),
		$$new($ObjectArray, {
			"bg"_s,
			"bulgaria"_s
		}),
		$$new($ObjectArray, {
			"ca"_s,
			"katalaani"_s
		}),
		$$new($ObjectArray, {
			"cs"_s,
			"tsekki"_s
		}),
		$$new($ObjectArray, {
			"da"_s,
			"tanska"_s
		}),
		$$new($ObjectArray, {
			"de"_s,
			"saksa"_s
		}),
		$$new($ObjectArray, {
			"el"_s,
			"kreikka"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			"englanti"_s
		}),
		$$new($ObjectArray, {
			"es"_s,
			"espanja"_s
		}),
		$$new($ObjectArray, {
			"fi"_s,
			"suomi"_s
		}),
		$$new($ObjectArray, {
			"fr"_s,
			"ranska"_s
		}),
		$$new($ObjectArray, {
			"he"_s,
			"heprea"_s
		}),
		$$new($ObjectArray, {
			"hi"_s,
			"hindi"_s
		}),
		$$new($ObjectArray, {
			"it"_s,
			"italia"_s
		}),
		$$new($ObjectArray, {
			"iw"_s,
			"heprea"_s
		}),
		$$new($ObjectArray, {
			"ja"_s,
			"japani"_s
		}),
		$$new($ObjectArray, {
			"lt"_s,
			"liettua"_s
		}),
		$$new($ObjectArray, {
			"lv"_s,
			"latvia"_s
		}),
		$$new($ObjectArray, {
			"nl"_s,
			"hollanti"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"norja"_s
		}),
		$$new($ObjectArray, {
			"pl"_s,
			"puola"_s
		}),
		$$new($ObjectArray, {
			"pt"_s,
			"portugali"_s
		}),
		$$new($ObjectArray, {
			"ru"_s,
			u"venäjä"_s
		}),
		$$new($ObjectArray, {
			"sv"_s,
			"ruotsi"_s
		}),
		$$new($ObjectArray, {
			"th"_s,
			"thai"_s
		}),
		$$new($ObjectArray, {
			"tr"_s,
			"turkki"_s
		}),
		$$new($ObjectArray, {
			"zh"_s,
			"kiina"_s
		})
	});
}

LocaleNames_fi::LocaleNames_fi() {
}

$Class* LocaleNames_fi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_fi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_fi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_fi",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_fi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_fi);
	});
	return class$;
}

$Class* LocaleNames_fi::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
#include <sun/util/resources/ext/LocaleNames_en_SG.h>
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

void LocaleNames_en_SG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_en_SG::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AX"_s,
			"Aland Islands"_s
		}),
		$$new($ObjectArray, {
			"CC"_s,
			"Cocos (Keeling) Islands"_s
		}),
		$$new($ObjectArray, {
			"CD"_s,
			"Congo (Kinshasa)"_s
		}),
		$$new($ObjectArray, {
			"CG"_s,
			"Congo (Brazzaville)"_s
		}),
		$$new($ObjectArray, {
			"CI"_s,
			"Ivory Coast"_s
		}),
		$$new($ObjectArray, {
			"CS"_s,
			"Serbia And Montenegro"_s
		}),
		$$new($ObjectArray, {
			"GS"_s,
			"South Georgia and the South Sandwich Islands"_s
		}),
		$$new($ObjectArray, {
			"HK"_s,
			"Hong Kong SAR China"_s
		}),
		$$new($ObjectArray, {
			"HM"_s,
			"Heard Island and McDonald Islands"_s
		}),
		$$new($ObjectArray, {
			"KN"_s,
			"Saint Kitts and Nevis"_s
		}),
		$$new($ObjectArray, {
			"MO"_s,
			"Macao SAR China"_s
		}),
		$$new($ObjectArray, {
			"PM"_s,
			"Saint Pierre and Miquelon"_s
		}),
		$$new($ObjectArray, {
			"PS"_s,
			"Palestinian Territory"_s
		}),
		$$new($ObjectArray, {
			"SJ"_s,
			"Svalbard and Jan Mayen"_s
		}),
		$$new($ObjectArray, {
			"ST"_s,
			"Sao Tome and Principe"_s
		}),
		$$new($ObjectArray, {
			"TC"_s,
			"Turks and Caicos Islands"_s
		}),
		$$new($ObjectArray, {
			"TL"_s,
			"East Timor"_s
		}),
		$$new($ObjectArray, {
			"VC"_s,
			"Saint Vincent and the Grenadines"_s
		}),
		$$new($ObjectArray, {
			"WF"_s,
			"Wallis and Futuna"_s
		}),
		$$new($ObjectArray, {
			"fy"_s,
			"Western Frisian"_s
		}),
		$$new($ObjectArray, {
			"gl"_s,
			"Galician"_s
		}),
		$$new($ObjectArray, {
			"kj"_s,
			"Kuanyama"_s
		}),
		$$new($ObjectArray, {
			"kl"_s,
			"Kalaallisut"_s
		}),
		$$new($ObjectArray, {
			"ny"_s,
			"Nyanja; Chichewa; Chewa"_s
		}),
		$$new($ObjectArray, {
			"oc"_s,
			u"Occitan (post 1500); Provençal"_s
		}),
		$$new($ObjectArray, {
			"os"_s,
			"Ossetic"_s
		}),
		$$new($ObjectArray, {
			"pa"_s,
			"Punjabi"_s
		}),
		$$new($ObjectArray, {
			"ps"_s,
			"Pashto"_s
		}),
		$$new($ObjectArray, {
			"rm"_s,
			"Rhaeto-Romance"_s
		}),
		$$new($ObjectArray, {
			"to"_s,
			"Tonga (Tonga Islands)"_s
		})
	});
}

LocaleNames_en_SG::LocaleNames_en_SG() {
}

$Class* LocaleNames_en_SG::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_SG, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_SG, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_en_SG",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_SG, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_SG);
	});
	return class$;
}

$Class* LocaleNames_en_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
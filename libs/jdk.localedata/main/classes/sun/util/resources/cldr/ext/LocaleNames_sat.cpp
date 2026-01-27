#include <sun/util/resources/cldr/ext/LocaleNames_sat.h>

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

$MethodInfo _LocaleNames_sat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sat, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sat, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sat",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sat_MethodInfo_
};

$Object* allocate$LocaleNames_sat($Class* clazz) {
	return $of($alloc(LocaleNames_sat));
}

void LocaleNames_sat::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sat::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"ᱵᱨᱟᱡᱤᱞ"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"ᱪᱤᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"ᱡᱟᱨᱢᱟᱱᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"ᱯᱷᱨᱟᱱᱥ"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"ᱭᱩᱱᱤᱭᱴᱮᱰ ᱠᱤᱝᱰᱚᱢ"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"ᱤᱱᱰᱤᱭᱟ"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ᱤᱴᱞᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ᱡᱟᱯᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ᱨᱩᱥ"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ᱭᱩᱱᱟᱭᱴᱮᱰ ᱮᱥᱴᱮᱴ"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"ᱵᱟᱝᱩᱨᱩᱢ ᱴᱚᱴᱷᱟ"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"ᱡᱟᱨᱢᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ᱟᱝᱜᱽᱨᱮᱡᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"ᱮᱥᱯᱮᱱᱤᱥ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"ᱯᱷᱨᱮᱧᱪ"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"ᱤᱴᱟᱞᱤᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ᱡᱟᱯᱟᱱᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"ᱯᱩᱨᱛᱜᱟᱞᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ᱨᱩᱥᱤᱭᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"ᱪᱟᱭᱱᱤᱡᱽ"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"ᱥᱟᱱᱛᱟᱲᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"ᱵᱟᱝ ᱩᱨᱩᱢ ᱯᱟᱹᱨᱥᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"ᱟᱨᱵᱤᱠ"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"ᱥᱤᱨᱤᱞᱤᱠ"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"ᱫᱮᱣᱟᱱᱟᱜᱟᱨᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"ᱥᱤᱢᱯᱞᱤᱯᱟᱭᱤᱰ"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"ᱴᱨᱮᱰᱤᱥᱚᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"ᱞᱮᱴᱤᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"ᱚᱞ ᱪᱤᱠᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"ᱵᱟᱝ ᱚᱞ ᱟᱠᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"ᱵᱟᱝ ᱩᱨᱩᱢ ᱪᱤᱠᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"ᱚᱥᱴᱨᱤᱭᱟ ᱡᱟᱨᱢᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"ᱥᱩᱣᱤᱥ ᱦᱟᱤ ᱡᱟᱨᱢᱟᱱ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"ᱚᱥᱴᱨᱮᱞᱤᱭᱟᱱ ᱟᱝᱜᱽᱨᱮᱡᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"ᱠᱟᱱᱟᱰᱤᱭᱟᱱ ᱟᱝᱜᱽᱨᱮᱡᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"ᱵᱨᱤᱴᱤᱥ ᱟᱝᱜᱽᱨᱮᱡᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"ᱟᱢᱮᱨᱤᱠᱟᱱ ᱟᱝᱜᱽᱨᱮᱡᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"ᱨᱩᱥᱤᱭᱟᱱ ᱮᱥᱯᱮᱱᱤᱥ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"ᱢᱮᱠᱥᱤᱠᱟᱱ ᱮᱥᱯᱮᱱᱤᱥ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"ᱠᱟᱱᱟᱰᱤᱭᱟᱱ ᱯᱷᱨᱮᱧᱪ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"ᱥᱩᱣᱤᱥ ᱯᱷᱨᱮᱧᱪ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"ᱵᱨᱟᱡᱤᱞᱤᱭᱟᱱ ᱯᱩᱨᱛᱜᱟᱞᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"ᱭᱩᱨᱚᱯᱤᱭᱟᱱ ᱯᱩᱨᱛᱜᱟᱞᱤ"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"ᱞᱮᱴᱤᱱ ᱟᱢᱮᱨᱤᱠᱟᱱ ᱮᱥᱯᱮᱱᱤᱥ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"ᱟᱞᱜᱟᱣᱟᱠᱟᱱ ᱪᱟᱭᱱᱤᱡᱽ"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"ᱴᱨᱮᱰᱤᱥᱱᱟᱞ ᱪᱟᱭᱱᱤᱡᱽ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"ᱣᱮᱥᱴᱟᱨᱱ ᱮᱞ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"ᱮᱥᱴᱮᱱᱰᱟᱨᱰ ᱛᱷᱟᱨ ᱟᱸᱫᱮ"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"ᱜᱨᱮᱜᱚᱨᱤᱭᱟᱱ ᱠᱟᱞᱮᱱᱰᱟᱨ"_s)
		})
	}));
	return data;
}

LocaleNames_sat::LocaleNames_sat() {
}

$Class* LocaleNames_sat::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sat, name, initialize, &_LocaleNames_sat_ClassInfo_, allocate$LocaleNames_sat);
	return class$;
}

$Class* LocaleNames_sat::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
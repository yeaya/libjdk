#include <sun/util/resources/cldr/ext/LocaleNames_bo.h>
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

void LocaleNames_bo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bo::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"001"_s,
			u"འཛམ་གླིང་།"_s
		}),
		$$new($ObjectArray, {
			"CN"_s,
			u"རྒྱ་ནག"_s
		}),
		$$new($ObjectArray, {
			"DE"_s,
			u"འཇར་མན་"_s
		}),
		$$new($ObjectArray, {
			"GB"_s,
			u"དབྱིན་ཇི་"_s
		}),
		$$new($ObjectArray, {
			"IN"_s,
			u"རྒྱ་གར་"_s
		}),
		$$new($ObjectArray, {
			"IT"_s,
			u"ཨི་ཀྲར་ལི་"_s
		}),
		$$new($ObjectArray, {
			"JP"_s,
			u"ཉི་ཧོང་"_s
		}),
		$$new($ObjectArray, {
			"KR"_s,
			u"ལྷོ་ཀོ་རི་ཡ།"_s
		}),
		$$new($ObjectArray, {
			"NP"_s,
			u"བལ་ཡུལ་"_s
		}),
		$$new($ObjectArray, {
			"RU"_s,
			u"ཨུ་རུ་སུ་"_s
		}),
		$$new($ObjectArray, {
			"US"_s,
			u"ཨ་མེ་རི་ཀ།"_s
		}),
		$$new($ObjectArray, {
			"ZZ"_s,
			u"མིའི་ཤེས་རྟོགས་མ་བྱུང་བའི་ཁོར་ཡུག"_s
		}),
		$$new($ObjectArray, {
			"bo"_s,
			u"བོད་སྐད་"_s
		}),
		$$new($ObjectArray, {
			"dz"_s,
			u"རྫོང་ཁ"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			u"དབྱིན་ཇིའི་སྐད།"_s
		}),
		$$new($ObjectArray, {
			"hi"_s,
			u"ཧིན་དི"_s
		}),
		$$new($ObjectArray, {
			"ja"_s,
			u"ཉི་ཧོང་སྐད་"_s
		}),
		$$new($ObjectArray, {
			"ne"_s,
			u"ནེ་པ་ལི"_s
		}),
		$$new($ObjectArray, {
			"ru"_s,
			u"ཨུ་རུ་སུ་སྐད་"_s
		}),
		$$new($ObjectArray, {
			"zh"_s,
			u"རྒྱ་སྐད་"_s
		}),
		$$new($ObjectArray, {
			"zza"_s,
			u"ཟ་ཟའ་སྐད།"_s
		}),
		$$new($ObjectArray, {
			"Hans"_s,
			u"རྒྱ་ཡིག་གསར་པ།"_s
		}),
		$$new($ObjectArray, {
			"Hant"_s,
			u"རྒྱ་ཡིག་རྙིང་པ།"_s
		}),
		$$new($ObjectArray, {
			"Tibt"_s,
			u"བོད་ཡིག་"_s
		}),
		$$new($ObjectArray, {
			"Zxxx"_s,
			u"སྙན་བརྒྱུད། ཡིག་རིགས་སུ་མ་བཀོད་པའི་ཟིན་ཐོ།"_s
		}),
		$$new($ObjectArray, {
			"en_CA"_s,
			u"དབྱིན་ཇིའི་སྐད། (ཁེ་ན་ཌ་)"_s
		}),
		$$new($ObjectArray, {
			"en_GB"_s,
			u"དབྱིན་ཇིའི་སྐད། (དབྱིན་ལན་)"_s
		}),
		$$new($ObjectArray, {
			"en_US"_s,
			u"དབྱིན་ཇིའི་སྐད། (ཨ་རི་)"_s
		})
	}));
	return data;
}

LocaleNames_bo::LocaleNames_bo() {
}

$Class* LocaleNames_bo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_bo",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_bo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_bo);
	});
	return class$;
}

$Class* LocaleNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
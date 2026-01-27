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

$MethodInfo _LocaleNames_bo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bo_MethodInfo_
};

$Object* allocate$LocaleNames_bo($Class* clazz) {
	return $of($alloc(LocaleNames_bo));
}

void LocaleNames_bo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"འཛམ་གླིང་།"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"རྒྱ་ནག"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"འཇར་མན་"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"དབྱིན་ཇི་"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"རྒྱ་གར་"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"ཨི་ཀྲར་ལི་"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"ཉི་ཧོང་"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"ལྷོ་ཀོ་རི་ཡ།"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"བལ་ཡུལ་"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"ཨུ་རུ་སུ་"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"ཨ་མེ་རི་ཀ།"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"མིའི་ཤེས་རྟོགས་མ་བྱུང་བའི་ཁོར་ཡུག"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"བོད་སྐད་"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"རྫོང་ཁ"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"དབྱིན་ཇིའི་སྐད།"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"ཧིན་དི"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"ཉི་ཧོང་སྐད་"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"ནེ་པ་ལི"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"ཨུ་རུ་སུ་སྐད་"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"རྒྱ་སྐད་"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"ཟ་ཟའ་སྐད།"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"རྒྱ་ཡིག་གསར་པ།"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"རྒྱ་ཡིག་རྙིང་པ།"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"བོད་ཡིག་"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"སྙན་བརྒྱུད། ཡིག་རིགས་སུ་མ་བཀོད་པའི་ཟིན་ཐོ།"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"དབྱིན་ཇིའི་སྐད། (ཁེ་ན་ཌ་)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"དབྱིན་ཇིའི་སྐད། (དབྱིན་ལན་)"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"དབྱིན་ཇིའི་སྐད། (ཨ་རི་)"_s)
		})
	}));
	return data;
}

LocaleNames_bo::LocaleNames_bo() {
}

$Class* LocaleNames_bo::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bo, name, initialize, &_LocaleNames_bo_ClassInfo_, allocate$LocaleNames_bo);
	return class$;
}

$Class* LocaleNames_bo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
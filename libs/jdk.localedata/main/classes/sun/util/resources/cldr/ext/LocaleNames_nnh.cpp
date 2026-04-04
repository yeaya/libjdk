#include <sun/util/resources/cldr/ext/LocaleNames_nnh.h>
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

void LocaleNames_nnh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nnh::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CM"_s,
			u"Kàmalûm"_s
		}),
		$$new($ObjectArray, {
			"de"_s,
			u"nzǎmɔ̂ɔn"_s
		}),
		$$new($ObjectArray, {
			"en"_s,
			u"ngilísè"_s
		}),
		$$new($ObjectArray, {
			"ff"_s,
			u"Shwóŋò menkesaŋ"_s
		}),
		$$new($ObjectArray, {
			"fr"_s,
			u"felaŋsée"_s
		}),
		$$new($ObjectArray, {
			"bas"_s,
			u"Shwóŋò pʉa mbasǎ"_s
		}),
		$$new($ObjectArray, {
			"bax"_s,
			u"Shwóŋò pamom"_s
		}),
		$$new($ObjectArray, {
			"bbj"_s,
			u"Shwóŋò pʉa nzsekàʼa"_s
		}),
		$$new($ObjectArray, {
			"bfd"_s,
			u"Shwóŋò pafud"_s
		}),
		$$new($ObjectArray, {
			"bkm"_s,
			u"Shwóŋò pʉ̀a njinikom"_s
		}),
		$$new($ObjectArray, {
			"bss"_s,
			u"Shwóŋò pakɔsi"_s
		}),
		$$new($ObjectArray, {
			"bum"_s,
			u"Shwóŋò mbulu"_s
		}),
		$$new($ObjectArray, {
			"byv"_s,
			u"Shwóŋò ngáŋtÿɔʼ"_s
		}),
		$$new($ObjectArray, {
			"ewo"_s,
			u"Shwóŋò pʉa Yɔɔnmendi"_s
		}),
		$$new($ObjectArray, {
			"kkj"_s,
			u"Shwóŋò pʉa shÿó Bɛgtùa"_s
		}),
		$$new($ObjectArray, {
			"nnh"_s,
			u"Shwóŋò ngiembɔɔn"_s
		}),
		$$new($ObjectArray, {
			"yav"_s,
			u"Shwóŋò pʉa shÿó Mbafìa"_s
		}),
		$$new($ObjectArray, {
			"ybb"_s,
			u"Shwóŋò Tsaŋ"_s
		}),
		$$new($ObjectArray, {
			"key.ca"_s,
			u"fʉ̀ʼ njÿó"_s
		}),
		$$new($ObjectArray, {
			"key.cu"_s,
			u"nkáb"_s
		})
	}));
	return data;
}

LocaleNames_nnh::LocaleNames_nnh() {
}

$Class* LocaleNames_nnh::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_nnh, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_nnh, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_nnh",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_nnh, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_nnh);
	});
	return class$;
}

$Class* LocaleNames_nnh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
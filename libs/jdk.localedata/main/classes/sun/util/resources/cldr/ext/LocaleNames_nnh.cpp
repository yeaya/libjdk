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

$MethodInfo _LocaleNames_nnh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_nnh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_nnh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_nnh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_nnh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_nnh_MethodInfo_
};

$Object* allocate$LocaleNames_nnh($Class* clazz) {
	return $of($alloc(LocaleNames_nnh));
}

void LocaleNames_nnh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_nnh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"Kàmalûm"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"nzǎmɔ̂ɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"ngilísè"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"Shwóŋò menkesaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"felaŋsée"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"Shwóŋò pʉa mbasǎ"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"Shwóŋò pamom"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"Shwóŋò pʉa nzsekàʼa"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"Shwóŋò pafud"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"Shwóŋò pʉ̀a njinikom"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"Shwóŋò pakɔsi"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"Shwóŋò mbulu"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"Shwóŋò ngáŋtÿɔʼ"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"Shwóŋò pʉa Yɔɔnmendi"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"Shwóŋò pʉa shÿó Bɛgtùa"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"Shwóŋò ngiembɔɔn"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"Shwóŋò pʉa shÿó Mbafìa"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"Shwóŋò Tsaŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"fʉ̀ʼ njÿó"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"nkáb"_s)
		})
	}));
	return data;
}

LocaleNames_nnh::LocaleNames_nnh() {
}

$Class* LocaleNames_nnh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_nnh, name, initialize, &_LocaleNames_nnh_ClassInfo_, allocate$LocaleNames_nnh);
	return class$;
}

$Class* LocaleNames_nnh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
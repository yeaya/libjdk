#include <sun/util/resources/cldr/ext/LocaleNames_de_AT.h>

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

$MethodInfo _LocaleNames_de_AT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_de_AT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_de_AT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_de_AT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_de_AT",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_de_AT_MethodInfo_
};

$Object* allocate$LocaleNames_de_AT($Class* clazz) {
	return $of($alloc(LocaleNames_de_AT));
}

void LocaleNames_de_AT::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_de_AT::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of("Svalbard und Jan Mayen"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of("Serbokroatisch"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of("karibische Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of("Chibcha-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of("Delawarisch"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of("Friulanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of("Hawaiianisch"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of("Miao-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of("Muskogee-Sprache"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of("Niueanisch"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of("Pangasinensisch"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Schlesisch"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of("modernes Hocharabisch"_s)
		})
	}));
	return data;
}

LocaleNames_de_AT::LocaleNames_de_AT() {
}

$Class* LocaleNames_de_AT::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_de_AT, name, initialize, &_LocaleNames_de_AT_ClassInfo_, allocate$LocaleNames_de_AT);
	return class$;
}

$Class* LocaleNames_de_AT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
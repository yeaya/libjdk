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

$MethodInfo _LocaleNames_bem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bem, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bem, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_bem",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_bem_MethodInfo_
};

$Object* allocate$LocaleNames_bem($Class* clazz) {
	return $of($alloc(LocaleNames_bem));
}

void LocaleNames_bem::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_bem::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of("Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of("Ichi Akan"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of("Ichi Amhari"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of("Ichi Arab"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("Ichi Belarus"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of("Ichi Bulgariani"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("Ichi Bengali"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of("Ichi Cheki"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of("Ichi Jemani"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of("Ichi Griki"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of("Ichi Sungu"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of("Ichi Spanishi"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of("Ichi Pesia"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of("Ichi Frenchi"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of("Ichi Hausa"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of("Ichi Hindu"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of("Ichi Hangarian"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of("Ichi Indonesiani"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of("Ichi Ibo"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of("Ichi Italiani"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of("Ichi Japanisi"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of("Ichi Javanisi"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of("Ichi Khmer"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of("Ichi Koriani"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of("Ichi Maleshani"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of("Ichi Burma"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of("Ichi Nepali"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of("Ichi Dachi"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of("Ichi Punjabi"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of("Ichi Polishi"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of("Ichi Potogisi"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of("Ichi Romaniani"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of("Ichi Rusiani"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of("Ichi Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of("Ichi Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of("Ichi Swideni"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of("Ichi Tamil"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of("Ichi Thai"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of("Ichi Takishi"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of("Ichi Ukraniani"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of("Ichi Urudu"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of("Ichi Vietinamu"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of("Ichi Yoruba"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of("Ichi Chainisi"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("Ichi Zulu"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of("Ichibemba"_s)
		})
	}));
	return data;
}

LocaleNames_bem::LocaleNames_bem() {
}

$Class* LocaleNames_bem::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bem, name, initialize, &_LocaleNames_bem_ClassInfo_, allocate$LocaleNames_bem);
	return class$;
}

$Class* LocaleNames_bem::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
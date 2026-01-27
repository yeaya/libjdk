#include <sun/util/resources/cldr/ext/LocaleNames_sr_Cyrl_ME.h>

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

$MethodInfo _LocaleNames_sr_Cyrl_ME_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr_Cyrl_ME, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr_Cyrl_ME, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sr_Cyrl_ME_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Cyrl_ME",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Cyrl_ME_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Cyrl_ME($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Cyrl_ME));
}

void LocaleNames_sr_Cyrl_ME::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Cyrl_ME::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Бјелорусија"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"Конго"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Чешка Република"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Њемачка"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"Свети Китс и Невис"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"Свети Пјер и Микелон"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"Реунион"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"Мања удаљена острва САД"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"Свети Винсент и Гренадини"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Британска Дјевичанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Америчка Дјевичанска Острва"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"бјелоруски"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"бамананкан"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"бангла"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"фулах"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"хаићански креолски"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"лаошки"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"исикоса"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"исизулу"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"мапудунгун"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"мохок"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"н’ко"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"јужни шилха"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"централноатласки тамашек"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"стандардни марокански тамашек"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Cyrl_ME::LocaleNames_sr_Cyrl_ME() {
}

$Class* LocaleNames_sr_Cyrl_ME::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Cyrl_ME, name, initialize, &_LocaleNames_sr_Cyrl_ME_ClassInfo_, allocate$LocaleNames_sr_Cyrl_ME);
	return class$;
}

$Class* LocaleNames_sr_Cyrl_ME::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
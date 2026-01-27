#include <sun/util/resources/cldr/ext/LocaleNames_sr_Latn_ME.h>

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

$MethodInfo _LocaleNames_sr_Latn_ME_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sr_Latn_ME, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sr_Latn_ME, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sr_Latn_ME_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sr_Latn_ME",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sr_Latn_ME_MethodInfo_
};

$Object* allocate$LocaleNames_sr_Latn_ME($Class* clazz) {
	return $of($alloc(LocaleNames_sr_Latn_ME));
}

void LocaleNames_sr_Latn_ME::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sr_Latn_ME::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BY"_s),
			$of("Bjelorusija"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of("Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"Češka Republika"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"Njemačka"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of("Sveti Kits i Nevis"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of("Sveti Pjer i Mikelon"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of("Reunion"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Manja udaljena ostrva SAD"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of("Sveti Vinsent i Grenadini"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"Britanska Djevičanska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"Američka Djevičanska Ostrva"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of("bjeloruski"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of("bamanankan"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of("bangla"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of("fulah"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"haićanski kreolski"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"laoški"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of("isikosa"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of("isizulu"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of("mapudungun"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of("mohok"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"n’ko"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"južni šilha"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"centralnoatlaski tamašek"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"standardni marokanski tamašek"_s)
		})
	}));
	return data;
}

LocaleNames_sr_Latn_ME::LocaleNames_sr_Latn_ME() {
}

$Class* LocaleNames_sr_Latn_ME::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sr_Latn_ME, name, initialize, &_LocaleNames_sr_Latn_ME_ClassInfo_, allocate$LocaleNames_sr_Latn_ME);
	return class$;
}

$Class* LocaleNames_sr_Latn_ME::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
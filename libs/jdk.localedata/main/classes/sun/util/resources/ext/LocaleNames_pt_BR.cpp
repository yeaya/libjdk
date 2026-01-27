#include <sun/util/resources/ext/LocaleNames_pt_BR.h>

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

$MethodInfo _LocaleNames_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pt_BR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pt_BR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_pt_BR_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_pt_BR",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_pt_BR_MethodInfo_
};

$Object* allocate$LocaleNames_pt_BR($Class* clazz) {
	return $of($alloc(LocaleNames_pt_BR));
}

void LocaleNames_pt_BR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_pt_BR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AX"_s),
			$of("Ilhas Aland"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"Bósnia-Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of("Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"Coréia do Norte"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"Macedônia"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"Zimbábue"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of("checheno"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of("inupiaque"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"javanês"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of("ndebele do norte"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of("ndebele do sul"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of("soto do sul"_s)
		})
	});
}

LocaleNames_pt_BR::LocaleNames_pt_BR() {
}

$Class* LocaleNames_pt_BR::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_pt_BR, name, initialize, &_LocaleNames_pt_BR_ClassInfo_, allocate$LocaleNames_pt_BR);
	return class$;
}

$Class* LocaleNames_pt_BR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
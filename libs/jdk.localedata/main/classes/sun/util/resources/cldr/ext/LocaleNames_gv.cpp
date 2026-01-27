#include <sun/util/resources/cldr/ext/LocaleNames_gv.h>

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

$MethodInfo _LocaleNames_gv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_gv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_gv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_gv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_gv",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_gv_MethodInfo_
};

$Object* allocate$LocaleNames_gv($Class* clazz) {
	return $of($alloc(LocaleNames_gv));
}

void LocaleNames_gv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gv::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Rywvaneth Unys"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of("Ellan Vannin"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of("Gaelg"_s)
		})
	}));
	return data;
}

LocaleNames_gv::LocaleNames_gv() {
}

$Class* LocaleNames_gv::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_gv, name, initialize, &_LocaleNames_gv_ClassInfo_, allocate$LocaleNames_gv);
	return class$;
}

$Class* LocaleNames_gv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
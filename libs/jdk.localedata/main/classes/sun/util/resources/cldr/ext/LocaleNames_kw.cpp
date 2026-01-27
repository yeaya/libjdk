#include <sun/util/resources/cldr/ext/LocaleNames_kw.h>

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

$MethodInfo _LocaleNames_kw_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_kw, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_kw, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_kw_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_kw",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_kw_MethodInfo_
};

$Object* allocate$LocaleNames_kw($Class* clazz) {
	return $of($alloc(LocaleNames_kw));
}

void LocaleNames_kw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kw::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("GB"_s),
			$of("Rywvaneth Unys"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of("kernewek"_s)
		})
	}));
	return data;
}

LocaleNames_kw::LocaleNames_kw() {
}

$Class* LocaleNames_kw::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_kw, name, initialize, &_LocaleNames_kw_ClassInfo_, allocate$LocaleNames_kw);
	return class$;
}

$Class* LocaleNames_kw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
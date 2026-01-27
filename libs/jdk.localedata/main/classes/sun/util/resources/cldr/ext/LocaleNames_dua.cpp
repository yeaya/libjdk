#include <sun/util/resources/cldr/ext/LocaleNames_dua.h>

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

$MethodInfo _LocaleNames_dua_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_dua, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_dua, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_dua_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_dua",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_dua_MethodInfo_
};

$Object* allocate$LocaleNames_dua($Class* clazz) {
	return $of($alloc(LocaleNames_dua));
}

void LocaleNames_dua::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_dua::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CM"_s),
			$of("Cameroun"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"duálá"_s)
		})
	}));
	return data;
}

LocaleNames_dua::LocaleNames_dua() {
}

$Class* LocaleNames_dua::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_dua, name, initialize, &_LocaleNames_dua_ClassInfo_, allocate$LocaleNames_dua);
	return class$;
}

$Class* LocaleNames_dua::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
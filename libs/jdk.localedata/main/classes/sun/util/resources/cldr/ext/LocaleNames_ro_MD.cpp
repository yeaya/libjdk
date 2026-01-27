#include <sun/util/resources/cldr/ext/LocaleNames_ro_MD.h>

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

$MethodInfo _LocaleNames_ro_MD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ro_MD, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ro_MD, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ro_MD_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ro_MD",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ro_MD_MethodInfo_
};

$Object* allocate$LocaleNames_ro_MD($Class* clazz) {
	return $of($alloc(LocaleNames_ro_MD));
}

void LocaleNames_ro_MD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ro_MD::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MM"_s),
			$of("Myanmar"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of("wolaytta"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("swahili (R. D. Congo)"_s)
		})
	}));
	return data;
}

LocaleNames_ro_MD::LocaleNames_ro_MD() {
}

$Class* LocaleNames_ro_MD::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ro_MD, name, initialize, &_LocaleNames_ro_MD_ClassInfo_, allocate$LocaleNames_ro_MD);
	return class$;
}

$Class* LocaleNames_ro_MD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
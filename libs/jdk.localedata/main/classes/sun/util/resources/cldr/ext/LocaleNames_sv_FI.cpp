#include <sun/util/resources/cldr/ext/LocaleNames_sv_FI.h>

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

$MethodInfo _LocaleNames_sv_FI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sv_FI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sv_FI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sv_FI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_sv_FI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_sv_FI_MethodInfo_
};

$Object* allocate$LocaleNames_sv_FI($Class* clazz) {
	return $of($alloc(LocaleNames_sv_FI));
}

void LocaleNames_sv_FI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_sv_FI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {$$new($ObjectArray, {
		$of("key.tz"_s),
		$of("tidszon"_s)
	})}));
	return data;
}

LocaleNames_sv_FI::LocaleNames_sv_FI() {
}

$Class* LocaleNames_sv_FI::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sv_FI, name, initialize, &_LocaleNames_sv_FI_ClassInfo_, allocate$LocaleNames_sv_FI);
	return class$;
}

$Class* LocaleNames_sv_FI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
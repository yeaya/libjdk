#include <sun/util/resources/ext/LocaleNames_hr.h>

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

$MethodInfo _LocaleNames_hr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_hr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_hr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_hr_MethodInfo_
};

$Object* allocate$LocaleNames_hr($Class* clazz) {
	return $of($alloc(LocaleNames_hr));
}

void LocaleNames_hr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_hr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("HR"_s),
			$of("Hrvatska"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of("hrvatski"_s)
		})
	});
}

LocaleNames_hr::LocaleNames_hr() {
}

$Class* LocaleNames_hr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_hr, name, initialize, &_LocaleNames_hr_ClassInfo_, allocate$LocaleNames_hr);
	return class$;
}

$Class* LocaleNames_hr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
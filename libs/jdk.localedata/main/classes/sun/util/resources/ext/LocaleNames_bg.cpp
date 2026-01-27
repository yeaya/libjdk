#include <sun/util/resources/ext/LocaleNames_bg.h>

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

$MethodInfo _LocaleNames_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_bg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_bg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_bg_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_bg",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_bg_MethodInfo_
};

$Object* allocate$LocaleNames_bg($Class* clazz) {
	return $of($alloc(LocaleNames_bg));
}

void LocaleNames_bg::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_bg::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"България"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"български"_s)
		})
	});
}

LocaleNames_bg::LocaleNames_bg() {
}

$Class* LocaleNames_bg::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_bg, name, initialize, &_LocaleNames_bg_ClassInfo_, allocate$LocaleNames_bg);
	return class$;
}

$Class* LocaleNames_bg::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
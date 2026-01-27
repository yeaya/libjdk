#include <sun/util/resources/ext/LocaleNames_be.h>

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

$MethodInfo _LocaleNames_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_be, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_be, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_be_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_be",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_be_MethodInfo_
};

$Object* allocate$LocaleNames_be($Class* clazz) {
	return $of($alloc(LocaleNames_be));
}

void LocaleNames_be::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_be::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"Беларусь"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"беларускі"_s)
		})
	});
}

LocaleNames_be::LocaleNames_be() {
}

$Class* LocaleNames_be::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_be, name, initialize, &_LocaleNames_be_ClassInfo_, allocate$LocaleNames_be);
	return class$;
}

$Class* LocaleNames_be::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
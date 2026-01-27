#include <sun/util/resources/ext/LocaleNames_is.h>

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

$MethodInfo _LocaleNames_is_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_is, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_is, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_is_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_is",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_is_MethodInfo_
};

$Object* allocate$LocaleNames_is($Class* clazz) {
	return $of($alloc(LocaleNames_is));
}

void LocaleNames_is::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_is::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"Ísland"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"íslenska"_s)
		})
	});
}

LocaleNames_is::LocaleNames_is() {
}

$Class* LocaleNames_is::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_is, name, initialize, &_LocaleNames_is_ClassInfo_, allocate$LocaleNames_is);
	return class$;
}

$Class* LocaleNames_is::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
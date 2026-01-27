#include <sun/util/resources/ext/LocaleNames_no_NO_NY.h>

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

$MethodInfo _LocaleNames_no_NO_NY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_no_NO_NY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_no_NO_NY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_no_NO_NY_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_no_NO_NY",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_no_NO_NY_MethodInfo_
};

$Object* allocate$LocaleNames_no_NO_NY($Class* clazz) {
	return $of($alloc(LocaleNames_no_NO_NY));
}

void LocaleNames_no_NO_NY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_no_NO_NY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("%%B"_s),
			$of(u"bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NY"_s),
			$of("nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of("Noreg"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"bokmål"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of("nynorsk"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of("norsk"_s)
		})
	});
}

LocaleNames_no_NO_NY::LocaleNames_no_NO_NY() {
}

$Class* LocaleNames_no_NO_NY::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_no_NO_NY, name, initialize, &_LocaleNames_no_NO_NY_ClassInfo_, allocate$LocaleNames_no_NO_NY);
	return class$;
}

$Class* LocaleNames_no_NO_NY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
#include <sun/util/resources/ext/LocaleNames_no.h>

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

$MethodInfo _LocaleNames_no_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_no, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_no, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_no_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_no",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_no_MethodInfo_
};

$Object* allocate$LocaleNames_no($Class* clazz) {
	return $of($alloc(LocaleNames_no));
}

void LocaleNames_no::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_no::getContents() {
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
			$of("Norge"_s)
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

LocaleNames_no::LocaleNames_no() {
}

$Class* LocaleNames_no::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_no, name, initialize, &_LocaleNames_no_ClassInfo_, allocate$LocaleNames_no);
	return class$;
}

$Class* LocaleNames_no::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
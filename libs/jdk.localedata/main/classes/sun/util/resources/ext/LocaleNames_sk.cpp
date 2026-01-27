#include <sun/util/resources/ext/LocaleNames_sk.h>

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

$MethodInfo _LocaleNames_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_sk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_sk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_sk_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_sk",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_sk_MethodInfo_
};

$Object* allocate$LocaleNames_sk($Class* clazz) {
	return $of($alloc(LocaleNames_sk));
}

void LocaleNames_sk::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_sk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"Slovenská republika"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"Slovenčina"_s)
		})
	});
}

LocaleNames_sk::LocaleNames_sk() {
}

$Class* LocaleNames_sk::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_sk, name, initialize, &_LocaleNames_sk_ClassInfo_, allocate$LocaleNames_sk);
	return class$;
}

$Class* LocaleNames_sk::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
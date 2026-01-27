#include <sun/util/resources/ext/LocaleNames_tr.h>

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

$MethodInfo _LocaleNames_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_tr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_tr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_tr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_tr",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_tr_MethodInfo_
};

$Object* allocate$LocaleNames_tr($Class* clazz) {
	return $of($alloc(LocaleNames_tr));
}

void LocaleNames_tr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_tr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"Türkiye"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"Türkçe"_s)
		})
	});
}

LocaleNames_tr::LocaleNames_tr() {
}

$Class* LocaleNames_tr::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_tr, name, initialize, &_LocaleNames_tr_ClassInfo_, allocate$LocaleNames_tr);
	return class$;
}

$Class* LocaleNames_tr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun
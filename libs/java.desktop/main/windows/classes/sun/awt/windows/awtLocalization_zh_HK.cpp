#include <sun/awt/windows/awtLocalization_zh_HK.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

void awtLocalization_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_zh_HK::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"allFiles"_s,
			u"所有檔案"_s
		}),
		$$new($ObjectArray, {
			"menuFont"_s,
			"SansSerif-plain-12"_s
		})
	});
}

awtLocalization_zh_HK::awtLocalization_zh_HK() {
}

$Class* awtLocalization_zh_HK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awtLocalization_zh_HK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awtLocalization_zh_HK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.awtLocalization_zh_HK",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awtLocalization_zh_HK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awtLocalization_zh_HK);
	});
	return class$;
}

$Class* awtLocalization_zh_HK::class$ = nullptr;

		} // windows
	} // awt
} // sun
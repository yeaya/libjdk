#include <sun/awt/windows/awtLocalization_zh_CN.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

void awtLocalization_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"allFiles"_s,
			u"所有文件"_s
		}),
		$$new($ObjectArray, {
			"menuFont"_s,
			"SansSerif-plain-11"_s
		})
	});
}

awtLocalization_zh_CN::awtLocalization_zh_CN() {
}

$Class* awtLocalization_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awtLocalization_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awtLocalization_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.awtLocalization_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awtLocalization_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awtLocalization_zh_CN);
	});
	return class$;
}

$Class* awtLocalization_zh_CN::class$ = nullptr;

		} // windows
	} // awt
} // sun
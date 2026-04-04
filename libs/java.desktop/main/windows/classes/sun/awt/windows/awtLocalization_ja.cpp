#include <sun/awt/windows/awtLocalization_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

void awtLocalization_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"allFiles"_s,
			u"すべてのファイル"_s
		}),
		$$new($ObjectArray, {
			"menuFont"_s,
			"SansSerif-plain-11"_s
		})
	});
}

awtLocalization_ja::awtLocalization_ja() {
}

$Class* awtLocalization_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awtLocalization_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awtLocalization_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.awtLocalization_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awtLocalization_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awtLocalization_ja);
	});
	return class$;
}

$Class* awtLocalization_ja::class$ = nullptr;

		} // windows
	} // awt
} // sun
#include <sun/awt/windows/awtLocalization_it.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

void awtLocalization_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"allFiles"_s,
			"Tutti i file"_s
		}),
		$$new($ObjectArray, {
			"menuFont"_s,
			"SansSerif-plain-11"_s
		})
	});
}

awtLocalization_it::awtLocalization_it() {
}

$Class* awtLocalization_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awtLocalization_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awtLocalization_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.awtLocalization_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awtLocalization_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awtLocalization_it);
	});
	return class$;
}

$Class* awtLocalization_it::class$ = nullptr;

		} // windows
	} // awt
} // sun
#include <sun/awt/windows/awtLocalization_de.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

void awtLocalization_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awtLocalization_de::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"allFiles"_s,
			"Alle Dateien"_s
		}),
		$$new($ObjectArray, {
			"menuFont"_s,
			"SansSerif-plain-11"_s
		})
	});
}

awtLocalization_de::awtLocalization_de() {
}

$Class* awtLocalization_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awtLocalization_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awtLocalization_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.awtLocalization_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awtLocalization_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awtLocalization_de);
	});
	return class$;
}

$Class* awtLocalization_de::class$ = nullptr;

		} // windows
	} // awt
} // sun
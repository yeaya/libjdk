#include <com/apple/laf/AquaKeyBindings$BindingsProvider.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaKeyBindings$BindingsProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBindings", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaKeyBindings$BindingsProvider, getBindings, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaKeyBindings$BindingsProvider", "com.apple.laf.AquaKeyBindings", "BindingsProvider", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaKeyBindings$BindingsProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaKeyBindings"
	};
	$loadClass(AquaKeyBindings$BindingsProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaKeyBindings$BindingsProvider);
	});
	return class$;
}

$Class* AquaKeyBindings$BindingsProvider::class$ = nullptr;

		} // laf
	} // apple
} // com
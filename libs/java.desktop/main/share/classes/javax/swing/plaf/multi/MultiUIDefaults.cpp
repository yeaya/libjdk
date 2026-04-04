#include <javax/swing/plaf/multi/MultiUIDefaults.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

void MultiUIDefaults::init$(int32_t initialCapacity, float loadFactor) {
	$UIDefaults::init$(initialCapacity, loadFactor);
}

void MultiUIDefaults::getUIError($String* msg) {
	$nc($System::err)->println($$str({"Multiplexing LAF:  "_s, msg}));
}

MultiUIDefaults::MultiUIDefaults() {
}

$Class* MultiUIDefaults::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IF)V", nullptr, 0, $method(MultiUIDefaults, init$, void, int32_t, float)},
		{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(MultiUIDefaults, getUIError, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.multi.MultiUIDefaults",
		"javax.swing.UIDefaults",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiUIDefaults, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MultiUIDefaults));
	});
	return class$;
}

$Class* MultiUIDefaults::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax
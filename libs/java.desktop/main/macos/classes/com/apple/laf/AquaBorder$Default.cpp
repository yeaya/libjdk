#include <com/apple/laf/AquaBorder$Default.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaBorder$Default::init$() {
	$useLocalObjectStack();
	$AquaBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $$new($AquaUtilControlSize$SizeVariant)));
}

AquaBorder$Default::AquaBorder$Default() {
}

$Class* AquaBorder$Default::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaBorder$Default, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaBorder$Default", "com.apple.laf.AquaBorder", "Default", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaBorder$Default",
		"com.apple.laf.AquaBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaBorder"
	};
	$loadClass(AquaBorder$Default, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaBorder$Default));
	});
	return class$;
}

$Class* AquaBorder$Default::class$ = nullptr;

		} // laf
	} // apple
} // com
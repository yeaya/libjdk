#include <com/apple/laf/AquaFileView$2.h>
#include <com/apple/laf/AquaFileView.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <jcpp.h>

using $AquaFileView = ::com::apple::laf::AquaFileView;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileView$2::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFileView$2::getInstance() {
	return $of($AquaFileView::getNativeMachineName());
}

AquaFileView$2::AquaFileView$2() {
}

$Class* AquaFileView$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaFileView$2, init$, void)},
		{"getInstance", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(AquaFileView$2, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFileView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileView$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileView$2",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileView"
	};
	$loadClass(AquaFileView$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileView$2);
	});
	return class$;
}

$Class* AquaFileView$2::class$ = nullptr;

		} // laf
	} // apple
} // com
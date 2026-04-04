#include <com/apple/laf/AquaLookAndFeel$2.h>
#include <apple/laf/JRSUIControl.h>
#include <com/apple/laf/AquaLookAndFeel.h>
#include <jcpp.h>

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaLookAndFeel$2::init$($AquaLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaLookAndFeel$2::run() {
	$JRSUIControl::initJRSUI();
	return nullptr;
}

AquaLookAndFeel$2::AquaLookAndFeel$2() {
}

$Class* AquaLookAndFeel$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaLookAndFeel$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaLookAndFeel;)V", nullptr, 0, $method(AquaLookAndFeel$2, init$, void, $AquaLookAndFeel*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaLookAndFeel",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaLookAndFeel$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaLookAndFeel$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaLookAndFeel"
	};
	$loadClass(AquaLookAndFeel$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$2);
	});
	return class$;
}

$Class* AquaLookAndFeel$2::class$ = nullptr;

		} // laf
	} // apple
} // com
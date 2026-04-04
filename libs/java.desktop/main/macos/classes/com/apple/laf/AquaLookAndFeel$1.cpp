#include <com/apple/laf/AquaLookAndFeel$1.h>
#include <com/apple/laf/AquaLookAndFeel.h>
#include <jcpp.h>

using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaLookAndFeel$1::init$($AquaLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaLookAndFeel$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return nullptr;
}

AquaLookAndFeel$1::AquaLookAndFeel$1() {
}

$Class* AquaLookAndFeel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaLookAndFeel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaLookAndFeel;)V", nullptr, 0, $method(AquaLookAndFeel$1, init$, void, $AquaLookAndFeel*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaLookAndFeel",
		"initialize",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaLookAndFeel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaLookAndFeel$1",
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
	$loadClass(AquaLookAndFeel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$1);
	});
	return class$;
}

$Class* AquaLookAndFeel$1::class$ = nullptr;

		} // laf
	} // apple
} // com
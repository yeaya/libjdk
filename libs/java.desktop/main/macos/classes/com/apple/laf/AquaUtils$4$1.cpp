#include <com/apple/laf/AquaUtils$4$1.h>
#include <com/apple/laf/AquaUtils$4.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef TYPE

using $AquaUtils$4 = ::com::apple::laf::AquaUtils$4;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtils$4$1::init$($AquaUtils$4* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaUtils$4$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($JComponent);
		$var($Method, method, $JComponent::class$->getDeclaredMethod("getFlag"_s, $$new($ClassArray, {$Integer::TYPE})));
		$nc(method)->setAccessible(true);
		return $of(method);
	} catch ($Throwable& ignored) {
		return nullptr;
	}
	$shouldNotReachHere();
}

AquaUtils$4$1::AquaUtils$4$1() {
}

$Class* AquaUtils$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaUtils$4;", nullptr, $FINAL | $SYNTHETIC, $field(AquaUtils$4$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaUtils$4;)V", nullptr, 0, $method(AquaUtils$4$1, init$, void, $AquaUtils$4*)},
		{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(AquaUtils$4$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaUtils$4",
		"getInstance",
		"()Ljava/lang/reflect/Method;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaUtils$4$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$4$1);
	});
	return class$;
}

$Class* AquaUtils$4$1::class$ = nullptr;

		} // laf
	} // apple
} // com
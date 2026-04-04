#include <javax/swing/RepaintManager$2$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/RepaintManager$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager$2 = ::javax::swing::RepaintManager$2;

namespace javax {
	namespace swing {

void RepaintManager$2$1::init$($RepaintManager$2* this$1) {
	$set(this, this$1, this$1);
}

$Object* RepaintManager$2$1::run() {
	$nc(this->this$1->val$r)->run();
	return nullptr;
}

RepaintManager$2$1::RepaintManager$2$1() {
}

$Class* RepaintManager$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/RepaintManager$2;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/RepaintManager$2;)V", nullptr, 0, $method(RepaintManager$2$1, init$, void, $RepaintManager$2*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RepaintManager$2$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.RepaintManager$2",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$2", nullptr, nullptr, 0},
		{"javax.swing.RepaintManager$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RepaintManager$2$1",
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
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$2$1);
	});
	return class$;
}

$Class* RepaintManager$2$1::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/Timer$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

namespace javax {
	namespace swing {

void Timer$1::init$($Timer* this$0) {
	$set(this, this$0, this$0);
}

$Object* Timer$1::run() {
	$SwingUtilities::invokeLater(this->this$0->doPostEvent);
	return nullptr;
}

Timer$1::Timer$1() {
}

$Class* Timer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/Timer;", nullptr, $FINAL | $SYNTHETIC, $field(Timer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Timer;)V", nullptr, 0, $method(Timer$1, init$, void, $Timer*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Timer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.Timer",
		"post",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Timer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.Timer$1",
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
		"javax.swing.Timer"
	};
	$loadClass(Timer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Timer$1);
	});
	return class$;
}

$Class* Timer$1::class$ = nullptr;

	} // swing
} // javax
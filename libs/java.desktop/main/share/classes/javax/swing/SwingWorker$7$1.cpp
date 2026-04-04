#include <javax/swing/SwingWorker$7$1.h>
#include <java/util/concurrent/ExecutorService.h>
#include <javax/swing/SwingWorker$7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $SwingWorker$7 = ::javax::swing::SwingWorker$7;

namespace javax {
	namespace swing {

void SwingWorker$7$1::init$($SwingWorker$7* this$0, $ExecutorService* val$executorService) {
	$set(this, this$0, this$0);
	$set(this, val$executorService, val$executorService);
}

$Object* SwingWorker$7$1::run() {
	$nc(this->val$executorService)->shutdown();
	return nullptr;
}

SwingWorker$7$1::SwingWorker$7$1() {
}

$Class* SwingWorker$7$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/SwingWorker$7;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$7$1, this$0)},
		{"val$executorService", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$7$1, val$executorService)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SwingWorker$7;Ljava/util/concurrent/ExecutorService;)V", "()V", 0, $method(SwingWorker$7$1, init$, void, $SwingWorker$7*, $ExecutorService*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SwingWorker$7$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SwingWorker$7",
		"propertyChange",
		"(Ljava/beans/PropertyChangeEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$7", nullptr, nullptr, 0},
		{"javax.swing.SwingWorker$7$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$7$1",
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
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$7$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingWorker$7$1);
	});
	return class$;
}

$Class* SwingWorker$7$1::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/SwingWorker$1.h>
#include <javax/swing/SwingWorker$StateValue.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

#undef STARTED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingWorker = ::javax::swing::SwingWorker;
using $SwingWorker$StateValue = ::javax::swing::SwingWorker$StateValue;

namespace javax {
	namespace swing {

void SwingWorker$1::init$($SwingWorker* this$0) {
	$set(this, this$0, this$0);
}

$Object* SwingWorker$1::call() {
	$init($SwingWorker$StateValue);
	this->this$0->setState($SwingWorker$StateValue::STARTED);
	return this->this$0->doInBackground();
}

SwingWorker$1::SwingWorker$1() {
}

$Class* SwingWorker$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SwingWorker;)V", nullptr, 0, $method(SwingWorker$1, init$, void, $SwingWorker*)},
		{"call", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(SwingWorker$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SwingWorker",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingWorker$1);
	});
	return class$;
}

$Class* SwingWorker$1::class$ = nullptr;

	} // swing
} // javax
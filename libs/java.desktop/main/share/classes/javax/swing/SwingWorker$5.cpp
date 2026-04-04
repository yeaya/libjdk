#include <javax/swing/SwingWorker$5.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingWorker = ::javax::swing::SwingWorker;

namespace javax {
	namespace swing {

void SwingWorker$5::init$($SwingWorker* this$0) {
	$set(this, this$0, this$0);
}

void SwingWorker$5::run() {
	this->this$0->done();
}

SwingWorker$5::SwingWorker$5() {
}

$Class* SwingWorker$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$5, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SwingWorker;)V", nullptr, 0, $method(SwingWorker$5, init$, void, $SwingWorker*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SwingWorker$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SwingWorker",
		"doneEDT",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$5",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingWorker$5);
	});
	return class$;
}

$Class* SwingWorker$5::class$ = nullptr;

	} // swing
} // javax
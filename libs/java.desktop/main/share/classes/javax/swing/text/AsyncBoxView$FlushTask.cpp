#include <javax/swing/text/AsyncBoxView$FlushTask.h>
#include <javax/swing/text/AsyncBoxView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsyncBoxView = ::javax::swing::text::AsyncBoxView;

namespace javax {
	namespace swing {
		namespace text {

void AsyncBoxView$FlushTask::init$($AsyncBoxView* this$0) {
	$set(this, this$0, this$0);
}

void AsyncBoxView$FlushTask::run() {
	this->this$0->flushRequirementChanges();
}

AsyncBoxView$FlushTask::AsyncBoxView$FlushTask() {
}

$Class* AsyncBoxView$FlushTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/AsyncBoxView;", nullptr, $FINAL | $SYNTHETIC, $field(AsyncBoxView$FlushTask, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/AsyncBoxView;)V", nullptr, 0, $method(AsyncBoxView$FlushTask, init$, void, $AsyncBoxView*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncBoxView$FlushTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.AsyncBoxView$FlushTask", "javax.swing.text.AsyncBoxView", "FlushTask", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.AsyncBoxView$FlushTask",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.AsyncBoxView"
	};
	$loadClass(AsyncBoxView$FlushTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncBoxView$FlushTask);
	});
	return class$;
}

$Class* AsyncBoxView$FlushTask::class$ = nullptr;

		} // text
	} // swing
} // javax
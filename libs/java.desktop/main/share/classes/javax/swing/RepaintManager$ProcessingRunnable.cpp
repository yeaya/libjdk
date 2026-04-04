#include <javax/swing/RepaintManager$ProcessingRunnable.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

void RepaintManager$ProcessingRunnable::init$($RepaintManager* this$0) {
	$set(this, this$0, this$0);
}

bool RepaintManager$ProcessingRunnable::markPending() {
	$synchronized(this) {
		if (!this->pending) {
			this->pending = true;
			return true;
		}
		return false;
	}
}

void RepaintManager$ProcessingRunnable::run() {
	$synchronized(this) {
		this->pending = false;
	}
	this->this$0->scheduleHeavyWeightPaints();
	this->this$0->validateInvalidComponents();
	this->this$0->prePaintDirtyRegions();
}

RepaintManager$ProcessingRunnable::RepaintManager$ProcessingRunnable() {
}

$Class* RepaintManager$ProcessingRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$ProcessingRunnable, this$0)},
		{"pending", "Z", nullptr, $PRIVATE, $field(RepaintManager$ProcessingRunnable, pending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/RepaintManager;)V", nullptr, $PRIVATE, $method(RepaintManager$ProcessingRunnable, init$, void, $RepaintManager*)},
		{"markPending", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED, $method(RepaintManager$ProcessingRunnable, markPending, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$ProcessingRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$ProcessingRunnable", "javax.swing.RepaintManager", "ProcessingRunnable", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.RepaintManager$ProcessingRunnable",
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
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$ProcessingRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$ProcessingRunnable);
	});
	return class$;
}

$Class* RepaintManager$ProcessingRunnable::class$ = nullptr;

	} // swing
} // javax
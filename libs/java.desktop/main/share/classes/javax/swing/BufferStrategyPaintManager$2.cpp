#include <javax/swing/BufferStrategyPaintManager$2.h>
#include <javax/swing/BufferStrategyPaintManager.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferStrategyPaintManager = ::javax::swing::BufferStrategyPaintManager;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

void BufferStrategyPaintManager$2::init$($BufferStrategyPaintManager* this$0, $JRootPane* val$rootPane) {
	$set(this, this$0, this$0);
	$set(this, val$rootPane, val$rootPane);
}

void BufferStrategyPaintManager$2::run() {
	this->this$0->doubleBufferingChanged0(this->val$rootPane);
}

BufferStrategyPaintManager$2::BufferStrategyPaintManager$2() {
}

$Class* BufferStrategyPaintManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/BufferStrategyPaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$2, this$0)},
		{"val$rootPane", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$2, val$rootPane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/BufferStrategyPaintManager;Ljavax/swing/JRootPane;)V", "()V", 0, $method(BufferStrategyPaintManager$2, init$, void, $BufferStrategyPaintManager*, $JRootPane*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BufferStrategyPaintManager$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.BufferStrategyPaintManager",
		"doubleBufferingChanged",
		"(Ljavax/swing/JRootPane;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.BufferStrategyPaintManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.BufferStrategyPaintManager$2",
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
		"javax.swing.BufferStrategyPaintManager"
	};
	$loadClass(BufferStrategyPaintManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferStrategyPaintManager$2);
	});
	return class$;
}

$Class* BufferStrategyPaintManager$2::class$ = nullptr;

	} // swing
} // javax
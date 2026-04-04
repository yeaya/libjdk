#include <javax/swing/BufferStrategyPaintManager$1.h>
#include <java/lang/InterruptedException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/BufferStrategyPaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $BufferStrategyPaintManager = ::javax::swing::BufferStrategyPaintManager;

namespace javax {
	namespace swing {

void BufferStrategyPaintManager$1::init$($BufferStrategyPaintManager* this$0) {
	$set(this, this$0, this$0);
}

void BufferStrategyPaintManager$1::run() {
	$var($List, bufferInfos, nullptr);
	$synchronized(this->this$0) {
		while (this->this$0->showing) {
			try {
				this->this$0->wait();
			} catch ($InterruptedException& ie) {
			}
		}
		$assign(bufferInfos, this->this$0->bufferInfos);
		$set(this->this$0, bufferInfos, nullptr);
	}
	this->this$0->dispose(bufferInfos);
}

BufferStrategyPaintManager$1::BufferStrategyPaintManager$1() {
}

$Class* BufferStrategyPaintManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/BufferStrategyPaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/BufferStrategyPaintManager;)V", nullptr, 0, $method(BufferStrategyPaintManager$1, init$, void, $BufferStrategyPaintManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BufferStrategyPaintManager$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.BufferStrategyPaintManager",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.BufferStrategyPaintManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.BufferStrategyPaintManager$1",
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
	$loadClass(BufferStrategyPaintManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferStrategyPaintManager$1);
	});
	return class$;
}

$Class* BufferStrategyPaintManager$1::class$ = nullptr;

	} // swing
} // javax
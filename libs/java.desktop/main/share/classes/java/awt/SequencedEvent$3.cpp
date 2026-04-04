#include <java/awt/SequencedEvent$3.h>
#include <java/awt/SequencedEvent.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $SequencedEvent = ::java::awt::SequencedEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void SequencedEvent$3::init$($SequencedEvent* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void SequencedEvent$3::run() {
	while (!this->this$0->isFirstOrDisposed()) {
		try {
			$Thread::sleep(100);
		} catch ($InterruptedException& e) {
			break;
		}
	}
}

SequencedEvent$3::SequencedEvent$3() {
}

$Class* SequencedEvent$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/SequencedEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SequencedEvent$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/SequencedEvent;)V", nullptr, 0, $method(SequencedEvent$3, init$, void, $SequencedEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SequencedEvent$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.SequencedEvent",
		"<init>",
		"(Ljava/awt/AWTEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.SequencedEvent$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.SequencedEvent$3",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.SequencedEvent"
	};
	$loadClass(SequencedEvent$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SequencedEvent$3);
	});
	return class$;
}

$Class* SequencedEvent$3::class$ = nullptr;

	} // awt
} // java
#include <sun/awt/SunToolkit$3.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

void SunToolkit$3::init$($SunToolkit* this$0, Object$* source, $Runnable* runnable, int64_t flags, int64_t val$end, $AtomicBoolean* val$queueEmpty, $AtomicBoolean* val$eventDispatched) {
	$set(this, this$0, this$0);
	this->val$end = val$end;
	$set(this, val$queueEmpty, val$queueEmpty);
	$set(this, val$eventDispatched, val$eventDispatched);
	$PeerEvent::init$(source, runnable, flags);
}

void SunToolkit$3::dispatch() {
	int32_t iters = 0;
	while (iters < 1) {
		this->this$0->syncNativeQueue(this->this$0->timeout(this->val$end));
		++iters;
	}
	while (this->this$0->syncNativeQueue(this->this$0->timeout(this->val$end)) && iters < 100) {
		++iters;
	}
	$SunToolkit::flushPendingEvents();
	$synchronized(this->this$0->waitLock) {
		$nc(this->val$queueEmpty)->set(this->this$0->isEQEmpty());
		$nc(this->val$eventDispatched)->set(true);
		this->this$0->waitLock->notifyAll();
	}
}

SunToolkit$3::SunToolkit$3() {
}

$Class* SunToolkit$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/SunToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, this$0)},
		{"val$eventDispatched", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, val$eventDispatched)},
		{"val$queueEmpty", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, val$queueEmpty)},
		{"val$end", "J", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, val$end)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/SunToolkit;Ljava/lang/Object;Ljava/lang/Runnable;JJLjava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, 0, $method(SunToolkit$3, init$, void, $SunToolkit*, Object$*, $Runnable*, int64_t, int64_t, $AtomicBoolean*, $AtomicBoolean*)},
		{"dispatch", "()V", nullptr, $PUBLIC, $virtualMethod(SunToolkit$3, dispatch, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.SunToolkit",
		"waitForIdle",
		"(J)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunToolkit$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.SunToolkit$3",
		"sun.awt.PeerEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunToolkit"
	};
	$loadClass(SunToolkit$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SunToolkit$3));
	});
	return class$;
}

$Class* SunToolkit$3::class$ = nullptr;

	} // awt
} // sun
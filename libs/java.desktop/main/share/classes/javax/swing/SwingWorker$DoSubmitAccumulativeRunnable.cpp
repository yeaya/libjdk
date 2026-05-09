#include <javax/swing/SwingWorker$DoSubmitAccumulativeRunnable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/SwingWorker.h>
#include <javax/swing/Timer.h>
#include <sun/swing/AccumulativeRunnable.h>
#include <jcpp.h>

#undef DELAY

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Timer = ::javax::swing::Timer;
using $AccumulativeRunnable = ::sun::swing::AccumulativeRunnable;

namespace javax {
	namespace swing {

int32_t SwingWorker$DoSubmitAccumulativeRunnable::hashCode() {
	return this->$AccumulativeRunnable::hashCode();
}

bool SwingWorker$DoSubmitAccumulativeRunnable::equals(Object$* arg0) {
	return this->$AccumulativeRunnable::equals(arg0);
}

$Object* SwingWorker$DoSubmitAccumulativeRunnable::clone() {
	return this->$AccumulativeRunnable::clone();
}

$String* SwingWorker$DoSubmitAccumulativeRunnable::toString() {
	return this->$AccumulativeRunnable::toString();
}

void SwingWorker$DoSubmitAccumulativeRunnable::finalize() {
	this->$AccumulativeRunnable::finalize();
}

void SwingWorker$DoSubmitAccumulativeRunnable::init$() {
	$AccumulativeRunnable::init$();
}

void SwingWorker$DoSubmitAccumulativeRunnable::run($List* args) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(args)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Runnable, runnable, $cast($Runnable, i$->next()));
		{
			$nc(runnable)->run();
		}
	}
}

void SwingWorker$DoSubmitAccumulativeRunnable::submit() {
	$var($Timer, timer, $new($Timer, SwingWorker$DoSubmitAccumulativeRunnable::DELAY, this));
	timer->setRepeats(false);
	timer->start();
}

void SwingWorker$DoSubmitAccumulativeRunnable::actionPerformed($ActionEvent* event) {
	run();
}

SwingWorker$DoSubmitAccumulativeRunnable::SwingWorker$DoSubmitAccumulativeRunnable() {
}

$Class* SwingWorker$DoSubmitAccumulativeRunnable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingWorker$DoSubmitAccumulativeRunnable, DELAY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(SwingWorker$DoSubmitAccumulativeRunnable, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwingWorker$DoSubmitAccumulativeRunnable, actionPerformed, void, $ActionEvent*)},
		{"run", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/Runnable;>;)V", $PROTECTED, $virtualMethod(SwingWorker$DoSubmitAccumulativeRunnable, run, void, $List*)},
		{"submit", "()V", nullptr, $PROTECTED, $virtualMethod(SwingWorker$DoSubmitAccumulativeRunnable, submit, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$DoSubmitAccumulativeRunnable", "javax.swing.SwingWorker", "DoSubmitAccumulativeRunnable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$DoSubmitAccumulativeRunnable",
		"sun.swing.AccumulativeRunnable",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		"Lsun/swing/AccumulativeRunnable<Ljava/lang/Runnable;>;Ljava/awt/event/ActionListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$DoSubmitAccumulativeRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SwingWorker$DoSubmitAccumulativeRunnable));
	});
	return class$;
}

$Class* SwingWorker$DoSubmitAccumulativeRunnable::class$ = nullptr;

	} // swing
} // javax
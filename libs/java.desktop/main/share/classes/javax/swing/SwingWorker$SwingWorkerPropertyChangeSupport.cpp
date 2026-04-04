#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/SwingWorker$SwingWorkerPropertyChangeSupport$1.h>
#include <javax/swing/SwingWorker.h>
#include <sun/swing/AccumulativeRunnable.h>
#include <jcpp.h>

using $RunnableArray = $Array<::java::lang::Runnable>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingWorker = ::javax::swing::SwingWorker;
using $SwingWorker$SwingWorkerPropertyChangeSupport$1 = ::javax::swing::SwingWorker$SwingWorkerPropertyChangeSupport$1;

namespace javax {
	namespace swing {

void SwingWorker$SwingWorkerPropertyChangeSupport::init$($SwingWorker* this$0, Object$* source) {
	$set(this, this$0, this$0);
	$PropertyChangeSupport::init$(source);
}

void SwingWorker$SwingWorkerPropertyChangeSupport::firePropertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	if ($SwingUtilities::isEventDispatchThread()) {
		$PropertyChangeSupport::firePropertyChange(evt);
	} else {
		$nc(this->this$0->doSubmit)->add($$new($RunnableArray, {$$new($SwingWorker$SwingWorkerPropertyChangeSupport$1, this, evt)}));
	}
}

SwingWorker$SwingWorkerPropertyChangeSupport::SwingWorker$SwingWorkerPropertyChangeSupport() {
}

$Class* SwingWorker$SwingWorkerPropertyChangeSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/SwingWorker;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$SwingWorkerPropertyChangeSupport, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/SwingWorker;Ljava/lang/Object;)V", nullptr, 0, $method(SwingWorker$SwingWorkerPropertyChangeSupport, init$, void, $SwingWorker*, Object$*)},
		{"firePropertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwingWorker$SwingWorkerPropertyChangeSupport, firePropertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport", "javax.swing.SwingWorker", "SwingWorkerPropertyChangeSupport", $PRIVATE},
		{"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$SwingWorkerPropertyChangeSupport",
		"java.beans.PropertyChangeSupport",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$SwingWorkerPropertyChangeSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingWorker$SwingWorkerPropertyChangeSupport);
	});
	return class$;
}

$Class* SwingWorker$SwingWorkerPropertyChangeSupport::class$ = nullptr;

	} // swing
} // javax
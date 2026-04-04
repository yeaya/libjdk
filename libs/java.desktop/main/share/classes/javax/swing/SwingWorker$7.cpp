#include <javax/swing/SwingWorker$7.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/util/concurrent/ExecutorService.h>
#include <javax/swing/SwingWorker$7$1.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $SwingWorker$7$1 = ::javax::swing::SwingWorker$7$1;

namespace javax {
	namespace swing {

void SwingWorker$7::init$($ExecutorService* val$es) {
	$set(this, val$es, val$es);
}

void SwingWorker$7::propertyChange($PropertyChangeEvent* pce) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	bool disposed = $$sure($Boolean, $nc(pce)->getNewValue())->booleanValue();
	if (disposed) {
		$var($WeakReference, executorServiceRef, $new($WeakReference, this->val$es));
		$var($ExecutorService, executorService, $cast($ExecutorService, executorServiceRef->get()));
		if (executorService != nullptr) {
			$AccessController::doPrivileged($$new($SwingWorker$7$1, this, executorService));
		}
	}
}

SwingWorker$7::SwingWorker$7() {
}

$Class* SwingWorker$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$es", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL | $SYNTHETIC, $field(SwingWorker$7, val$es)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", "()V", 0, $method(SwingWorker$7, init$, void, $ExecutorService*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwingWorker$7, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.SwingWorker",
		"getWorkersExecutorService",
		"()Ljava/util/concurrent/ExecutorService;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$7", nullptr, nullptr, 0},
		{"javax.swing.SwingWorker$7$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingWorker$7",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
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
	$loadClass(SwingWorker$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingWorker$7);
	});
	return class$;
}

$Class* SwingWorker$7::class$ = nullptr;

	} // swing
} // javax
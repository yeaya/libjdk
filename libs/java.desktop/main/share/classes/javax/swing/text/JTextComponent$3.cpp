#include <javax/swing/text/JTextComponent$3.h>
#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/FutureTask.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent$3$1.h>
#include <javax/swing/text/JTextComponent$3$2.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$3$1 = ::javax::swing::text::JTextComponent$3$1;
using $JTextComponent$3$2 = ::javax::swing::text::JTextComponent$3$2;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$3::init$($JTextComponent* this$0, bool val$isEventDispatchThread, $FutureTask* val$futurePrinting) {
	$set(this, this$0, this$0);
	this->val$isEventDispatchThread = val$isEventDispatchThread;
	$set(this, val$futurePrinting, val$futurePrinting);
}

void JTextComponent$3::run() {
	$useLocalObjectStack();
	bool wasEnabled = false;
	if (this->val$isEventDispatchThread) {
		if (this->this$0->isEnabled()) {
			wasEnabled = true;
			this->this$0->setEnabled(false);
		}
	} else {
		try {
			wasEnabled = $$sure($Boolean, $$nc($SwingUtilities2::submit($$new($JTextComponent$3$1, this)))->get())->booleanValue();
		} catch ($InterruptedException& e) {
			$throwNew($RuntimeException, e);
		} catch ($ExecutionException& e) {
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			}
			if ($instanceOf($RuntimeException, cause)) {
				$throw($cast($RuntimeException, cause));
			}
			$throwNew($AssertionError, cause);
		}
	}
	$$nc(this->this$0->getDocument())->render(this->val$futurePrinting);
	if (wasEnabled) {
		if (this->val$isEventDispatchThread) {
			this->this$0->setEnabled(true);
		} else {
			try {
				$$nc($SwingUtilities2::submit($$new($JTextComponent$3$2, this), nullptr))->get();
			} catch ($InterruptedException& e) {
				$throwNew($RuntimeException, e);
			} catch ($ExecutionException& e) {
				$var($Throwable, cause, e->getCause());
				if ($instanceOf($Error, cause)) {
					$throw($cast($Error, cause));
				}
				if ($instanceOf($RuntimeException, cause)) {
					$throw($cast($RuntimeException, cause));
				}
				$throwNew($AssertionError, cause);
			}
		}
	}
}

JTextComponent$3::JTextComponent$3() {
}

$Class* JTextComponent$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3, this$0)},
		{"val$futurePrinting", "Ljava/util/concurrent/FutureTask;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3, val$futurePrinting)},
		{"val$isEventDispatchThread", "Z", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3, val$isEventDispatchThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent;ZLjava/util/concurrent/FutureTask;)V", "()V", 0, $method(JTextComponent$3, init$, void, $JTextComponent*, bool, $FutureTask*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent",
		"print",
		"(Ljava/text/MessageFormat;Ljava/text/MessageFormat;ZLjavax/print/PrintService;Ljavax/print/attribute/PrintRequestAttributeSet;Z)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$3$2", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$3",
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
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$3);
	});
	return class$;
}

$Class* JTextComponent$3::class$ = nullptr;

		} // text
	} // swing
} // javax
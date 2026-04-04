#include <AbstractDocumentUndoConcurrentTest$3.h>
#include <AbstractDocumentUndoConcurrentTest.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

using $AbstractDocumentUndoConcurrentTest = ::AbstractDocumentUndoConcurrentTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndoManager = ::javax::swing::undo::UndoManager;

void AbstractDocumentUndoConcurrentTest$3::init$($String* arg0, $UndoManager* val$undoManager) {
	$set(this, val$undoManager, val$undoManager);
	$Thread::init$(arg0);
}

void AbstractDocumentUndoConcurrentTest$3::run() {
	try {
		$init($AbstractDocumentUndoConcurrentTest);
		$nc($AbstractDocumentUndoConcurrentTest::barrier)->await();
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	for (int32_t i = 0; i < 1000; ++i) {
		if ($nc(this->val$undoManager)->canUndoOrRedo()) {
			this->val$undoManager->undoOrRedo();
		}
		if (this->val$undoManager->canUndo()) {
			this->val$undoManager->undo();
		}
	}
	$nc($System::out)->println("t3 done"_s);
}

AbstractDocumentUndoConcurrentTest$3::AbstractDocumentUndoConcurrentTest$3() {
}

$Class* AbstractDocumentUndoConcurrentTest$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$undoManager", "Ljavax/swing/undo/UndoManager;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocumentUndoConcurrentTest$3, val$undoManager)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljavax/swing/undo/UndoManager;)V", nullptr, 0, $method(AbstractDocumentUndoConcurrentTest$3, init$, void, $String*, $UndoManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocumentUndoConcurrentTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AbstractDocumentUndoConcurrentTest",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AbstractDocumentUndoConcurrentTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AbstractDocumentUndoConcurrentTest$3",
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
		"AbstractDocumentUndoConcurrentTest"
	};
	$loadClass(AbstractDocumentUndoConcurrentTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocumentUndoConcurrentTest$3);
	});
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest$3::class$ = nullptr;
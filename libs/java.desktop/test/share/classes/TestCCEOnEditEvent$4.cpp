#include <TestCCEOnEditEvent$4.h>
#include <TestCCEOnEditEvent.h>
#include <java/lang/ClassCastException.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/undo/CompoundEdit.h>
#include <javax/swing/undo/UndoManager.h>
#include <javax/swing/undo/UndoableEdit.h>
#include <jcpp.h>

using $TestCCEOnEditEvent = ::TestCCEOnEditEvent;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;
using $UndoManager = ::javax::swing::undo::UndoManager;

void TestCCEOnEditEvent$4::init$($TestCCEOnEditEvent* this$0) {
	$set(this, this$0, this$0);
	$UndoManager::init$();
}

void TestCCEOnEditEvent$4::undoableEditHappened($UndoableEditEvent* event) {
	$useLocalObjectStack();
	$var($CompoundEdit, edit, nullptr);
	try {
		$assign(edit, $cast($CompoundEdit, $nc(event)->getEdit()));
	} catch ($ClassCastException& e) {
		$throwNew($RuntimeException, "Class Cast Exception is thrown on (CompoundEdit) UndoableEditEvent.getEdit()"_s);
	}
	$var($AbstractDocument$DefaultDocumentEvent, documentEvent, $cast($AbstractDocument$DefaultDocumentEvent, edit));
	$var($DocumentEvent$EventType, editType, $nc(documentEvent)->getType());
	int32_t editOffset = documentEvent->getOffset();
	int32_t editLength = documentEvent->getLength();
}

TestCCEOnEditEvent$4::TestCCEOnEditEvent$4() {
}

$Class* TestCCEOnEditEvent$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestCCEOnEditEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestCCEOnEditEvent;)V", nullptr, 0, $method(TestCCEOnEditEvent$4, init$, void, $TestCCEOnEditEvent*)},
		{"undoableEditHappened", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestCCEOnEditEvent$4, undoableEditHappened, void, $UndoableEditEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCCEOnEditEvent",
		"createTextArea",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCCEOnEditEvent$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCCEOnEditEvent$4",
		"javax.swing.undo.UndoManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestCCEOnEditEvent"
	};
	$loadClass(TestCCEOnEditEvent$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestCCEOnEditEvent$4));
	});
	return class$;
}

$Class* TestCCEOnEditEvent$4::class$ = nullptr;
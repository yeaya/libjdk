#include <TestCCEOnEditEvent$3$1.h>
#include <TestCCEOnEditEvent$3.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/UndoableEditEvent.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

using $TestCCEOnEditEvent$3 = ::TestCCEOnEditEvent$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndoableEditEvent = ::javax::swing::event::UndoableEditEvent;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $PlainDocument = ::javax::swing::text::PlainDocument;

void TestCCEOnEditEvent$3$1::init$($TestCCEOnEditEvent$3* this$1) {
	$set(this, this$1, this$1);
	$PlainDocument::init$();
}

void TestCCEOnEditEvent$3$1::fireUndoableEditUpdate($UndoableEditEvent* event) {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t index = $nc(listeners)->length - 2; index >= 0; index -= 2) {
		$var($Object0, listenerType, listeners->get(index));
		$load($UndoableEditListener);
		if ($equals(listenerType, $UndoableEditListener::class$)) {
			$PlainDocument::fireUndoableEditUpdate(event);
		}
	}
}

TestCCEOnEditEvent$3$1::TestCCEOnEditEvent$3$1() {
}

$Class* TestCCEOnEditEvent$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LTestCCEOnEditEvent$3;", nullptr, $FINAL | $SYNTHETIC, $field(TestCCEOnEditEvent$3$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestCCEOnEditEvent$3;)V", nullptr, 0, $method(TestCCEOnEditEvent$3$1, init$, void, $TestCCEOnEditEvent$3*)},
		{"fireUndoableEditUpdate", "(Ljavax/swing/event/UndoableEditEvent;)V", nullptr, $PROTECTED, $virtualMethod(TestCCEOnEditEvent$3$1, fireUndoableEditUpdate, void, $UndoableEditEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestCCEOnEditEvent$3",
		"createDefaultModel",
		"()Ljavax/swing/text/Document;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestCCEOnEditEvent$3", nullptr, nullptr, 0},
		{"TestCCEOnEditEvent$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestCCEOnEditEvent$3$1",
		"javax.swing.text.PlainDocument",
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
	$loadClass(TestCCEOnEditEvent$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestCCEOnEditEvent$3$1));
	});
	return class$;
}

$Class* TestCCEOnEditEvent$3$1::class$ = nullptr;
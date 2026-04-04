#include <TestTextPosInPrint$1.h>
#include <TestTextPosInPrint.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $TestTextPosInPrint = ::TestTextPosInPrint;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

void TestTextPosInPrint$1::init$($JDialog* val$dialog) {
	$set(this, val$dialog, val$dialog);
	$WindowAdapter::init$();
}

void TestTextPosInPrint$1::windowClosing($WindowEvent* e) {
	$nc(this->val$dialog)->dispose();
	$TestTextPosInPrint::fail("Main dialog was closed."_s);
}

TestTextPosInPrint$1::TestTextPosInPrint$1() {
}

$Class* TestTextPosInPrint$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$dialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(TestTextPosInPrint$1, val$dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, 0, $method(TestTextPosInPrint$1, init$, void, $JDialog*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTextPosInPrint$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestTextPosInPrint",
		"createAndShowTestDialog",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTextPosInPrint$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestTextPosInPrint$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestTextPosInPrint"
	};
	$loadClass(TestTextPosInPrint$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestTextPosInPrint$1));
	});
	return class$;
}

$Class* TestTextPosInPrint$1::class$ = nullptr;
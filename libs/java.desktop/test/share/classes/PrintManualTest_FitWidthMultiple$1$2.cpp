#include <PrintManualTest_FitWidthMultiple$1$2.h>
#include <PrintManualTest_FitWidthMultiple$1.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JButton = ::javax::swing::JButton;

void PrintManualTest_FitWidthMultiple$1$2::init$($PrintManualTest_FitWidthMultiple$1* this$1, $JButton* val$printButton) {
	$set(this, this$1, this$1);
	$set(this, val$printButton, val$printButton);
	$AbstractAction::init$();
}

void PrintManualTest_FitWidthMultiple$1$2::actionPerformed($ActionEvent* e) {
	$nc(this->val$printButton)->doClick();
}

PrintManualTest_FitWidthMultiple$1$2::PrintManualTest_FitWidthMultiple$1$2() {
}

$Class* PrintManualTest_FitWidthMultiple$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$2, this$1)},
		{"val$printButton", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$2, val$printButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPrintManualTest_FitWidthMultiple$1;Ljavax/swing/JButton;)V", nullptr, 0, $method(PrintManualTest_FitWidthMultiple$1$2, init$, void, $PrintManualTest_FitWidthMultiple$1*, $JButton*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintManualTest_FitWidthMultiple$1$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PrintManualTest_FitWidthMultiple$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
		{"PrintManualTest_FitWidthMultiple$1$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrintManualTest_FitWidthMultiple$1$2",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PrintManualTest_FitWidthMultiple"
	};
	$loadClass(PrintManualTest_FitWidthMultiple$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrintManualTest_FitWidthMultiple$1$2));
	});
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$2::class$ = nullptr;
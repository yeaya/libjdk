#include <PrintManualTest_FitWidthMultiple$1$4.h>
#include <PrintManualTest_FitWidthMultiple$1.h>
#include <java/awt/event/ActionEvent.h>
#include <java/text/MessageFormat.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/swing/JTable$PrintMode.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef FIT_WIDTH

using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $JTable = ::javax::swing::JTable;
using $JTable$PrintMode = ::javax::swing::JTable$PrintMode;

void PrintManualTest_FitWidthMultiple$1$4::init$($PrintManualTest_FitWidthMultiple$1* this$1, $JTable* val$table, $PrintRequestAttributeSet* val$prattr) {
	$set(this, this$1, this$1);
	$set(this, val$table, val$table);
	$set(this, val$prattr, val$prattr);
}

void PrintManualTest_FitWidthMultiple$1$4::actionPerformed($ActionEvent* ae) {
	try {
		$init($JTable$PrintMode);
		$nc(this->val$table)->print($JTable$PrintMode::FIT_WIDTH, this->this$1->val$header, this->this$1->val$footer, true, this->val$prattr, true);
	} catch ($Exception& e) {
	}
}

PrintManualTest_FitWidthMultiple$1$4::PrintManualTest_FitWidthMultiple$1$4() {
}

$Class* PrintManualTest_FitWidthMultiple$1$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$4, this$1)},
		{"val$prattr", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$4, val$prattr)},
		{"val$table", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$4, val$table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPrintManualTest_FitWidthMultiple$1;Ljavax/swing/JTable;Ljavax/print/attribute/PrintRequestAttributeSet;)V", "()V", 0, $method(PrintManualTest_FitWidthMultiple$1$4, init$, void, $PrintManualTest_FitWidthMultiple$1*, $JTable*, $PrintRequestAttributeSet*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintManualTest_FitWidthMultiple$1$4, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PrintManualTest_FitWidthMultiple$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
		{"PrintManualTest_FitWidthMultiple$1$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrintManualTest_FitWidthMultiple$1$4",
		"java.lang.Object",
		"java.awt.event.ActionListener",
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
	$loadClass(PrintManualTest_FitWidthMultiple$1$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintManualTest_FitWidthMultiple$1$4);
	});
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$4::class$ = nullptr;
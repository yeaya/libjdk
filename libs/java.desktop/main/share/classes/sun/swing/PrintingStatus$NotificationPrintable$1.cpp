#include <sun/swing/PrintingStatus$NotificationPrintable$1.h>
#include <sun/swing/PrintingStatus$NotificationPrintable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintingStatus$NotificationPrintable = ::sun::swing::PrintingStatus$NotificationPrintable;

namespace sun {
	namespace swing {

void PrintingStatus$NotificationPrintable$1::init$($PrintingStatus$NotificationPrintable* this$1, int32_t val$pageIndex) {
	$set(this, this$1, this$1);
	this->val$pageIndex = val$pageIndex;
}

void PrintingStatus$NotificationPrintable$1::run() {
	this->this$1->updateStatusOnEDT(this->val$pageIndex);
}

PrintingStatus$NotificationPrintable$1::PrintingStatus$NotificationPrintable$1() {
}

$Class* PrintingStatus$NotificationPrintable$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/swing/PrintingStatus$NotificationPrintable;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$NotificationPrintable$1, this$1)},
		{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$NotificationPrintable$1, val$pageIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/PrintingStatus$NotificationPrintable;I)V", "()V", 0, $method(PrintingStatus$NotificationPrintable$1, init$, void, $PrintingStatus$NotificationPrintable*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrintingStatus$NotificationPrintable$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.PrintingStatus$NotificationPrintable",
		"print",
		"(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.PrintingStatus$NotificationPrintable", "sun.swing.PrintingStatus", "NotificationPrintable", $PRIVATE},
		{"sun.swing.PrintingStatus$NotificationPrintable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.PrintingStatus$NotificationPrintable$1",
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
		"sun.swing.PrintingStatus"
	};
	$loadClass(PrintingStatus$NotificationPrintable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingStatus$NotificationPrintable$1);
	});
	return class$;
}

$Class* PrintingStatus$NotificationPrintable$1::class$ = nullptr;

	} // swing
} // sun
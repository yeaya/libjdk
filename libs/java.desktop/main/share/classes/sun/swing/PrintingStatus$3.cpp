#include <sun/swing/PrintingStatus$3.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

void PrintingStatus$3::init$($PrintingStatus* this$0, bool val$isModal) {
	$set(this, this$0, this$0);
	this->val$isModal = val$isModal;
}

void PrintingStatus$3::run() {
	this->this$0->showModalOnEDT(this->val$isModal);
}

PrintingStatus$3::PrintingStatus$3() {
}

$Class* PrintingStatus$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$3, this$0)},
		{"val$isModal", "Z", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$3, val$isModal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/PrintingStatus;Z)V", "()V", 0, $method(PrintingStatus$3, init$, void, $PrintingStatus*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrintingStatus$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.PrintingStatus",
		"showModal",
		"(Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.PrintingStatus$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.PrintingStatus$3",
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
	$loadClass(PrintingStatus$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingStatus$3);
	});
	return class$;
}

$Class* PrintingStatus$3::class$ = nullptr;

	} // swing
} // sun
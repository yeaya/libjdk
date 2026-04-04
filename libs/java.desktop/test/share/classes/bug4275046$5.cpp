#include <bug4275046$5.h>
#include <bug4275046.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4275046$5::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$5::run() {
	$useLocalObjectStack();
	$set(this->this$0, editedValue, $$nc($nc(this->this$0->table)->getModel())->getValueAt(0, 1));
	$nc($System::out)->println($$str({"The edited value is = "_s, this->this$0->editedValue}));
	this->this$0->testResult = $nc(this->this$0->editedValue)->equals("rededited"_s);
	if (this->this$0->testResult) {
		$System::out->println("Test passed"_s);
	} else {
		$System::out->println("Test failed"_s);
	}
}

bug4275046$5::bug4275046$5() {
}

$Class* bug4275046$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$5, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(bug4275046$5, init$, void, $bug4275046*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4275046$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4275046",
		"checkResult",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4275046$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4275046$5",
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
		"bug4275046"
	};
	$loadClass(bug4275046$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4275046$5);
	});
	return class$;
}

$Class* bug4275046$5::class$ = nullptr;
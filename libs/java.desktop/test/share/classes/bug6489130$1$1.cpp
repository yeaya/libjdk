#include <bug6489130$1$1.h>
#include <bug6489130$1.h>
#include <bug6489130.h>
#include <java/awt/Component.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug6489130$1 = ::bug6489130$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6489130$1$1::init$($bug6489130$1* this$1) {
	$set(this, this$1, this$1);
}

void bug6489130$1$1::run() {
	$nc($nc(this->this$1->this$0)->chooser)->showOpenDialog(nullptr);
}

bug6489130$1$1::bug6489130$1$1() {
}

$Class* bug6489130$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lbug6489130$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6489130$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6489130$1;)V", nullptr, 0, $method(bug6489130$1$1, init$, void, $bug6489130$1*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6489130$1$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6489130$1",
		"actionPerformed",
		"(Ljava/awt/event/ActionEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6489130$1", nullptr, nullptr, 0},
		{"bug6489130$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6489130$1$1",
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
		"bug6489130"
	};
	$loadClass(bug6489130$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6489130$1$1);
	});
	return class$;
}

$Class* bug6489130$1$1::class$ = nullptr;
#include <javax/swing/text/JTextComponent$3$2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/text/JTextComponent$3.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent$3 = ::javax::swing::text::JTextComponent$3;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$3$2::init$($JTextComponent$3* this$1) {
	$set(this, this$1, this$1);
}

void JTextComponent$3$2::run() {
	$nc(this->this$1->this$0)->setEnabled(true);
}

JTextComponent$3$2::JTextComponent$3$2() {
}

$Class* JTextComponent$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/JTextComponent$3;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3$2, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent$3;)V", nullptr, 0, $method(JTextComponent$3$2, init$, void, $JTextComponent$3*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTextComponent$3$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent$3",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$3$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$3$2",
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
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$3$2);
	});
	return class$;
}

$Class* JTextComponent$3$2::class$ = nullptr;

		} // text
	} // swing
} // javax
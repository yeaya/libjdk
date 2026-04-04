#include <javax/swing/text/JTextComponent$3$1.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/text/JTextComponent$3.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent$3 = ::javax::swing::text::JTextComponent$3;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$3$1::init$($JTextComponent$3* this$1) {
	$set(this, this$1, this$1);
}

$Object* JTextComponent$3$1::call() {
	bool rv = $nc(this->this$1->this$0)->isEnabled();
	if (rv) {
		this->this$1->this$0->setEnabled(false);
	}
	return $of($Boolean::valueOf(rv));
}

JTextComponent$3$1::JTextComponent$3$1() {
}

$Class* JTextComponent$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/text/JTextComponent$3;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$3$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent$3;)V", nullptr, 0, $method(JTextComponent$3$1, init$, void, $JTextComponent$3*)},
		{"call", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$3$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent$3",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$3", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$3$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$3$1);
	});
	return class$;
}

$Class* JTextComponent$3$1::class$ = nullptr;

		} // text
	} // swing
} // javax
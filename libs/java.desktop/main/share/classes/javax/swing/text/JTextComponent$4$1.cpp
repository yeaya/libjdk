#include <javax/swing/text/JTextComponent$4$1.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/JTextComponent$4.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $JTextComponent$4 = ::javax::swing::text::JTextComponent$4;

namespace javax {
	namespace swing {
		namespace text {

void JTextComponent$4$1::init$($JTextComponent$4* this$0, $Class* val$type) {
	$set(this, this$0, this$0);
	$set(this, val$type, val$type);
}

$Object* JTextComponent$4$1::run() {
	$beforeCallerSensitive();
	try {
		$load($InputMethodEvent);
		$nc(this->val$type)->getDeclaredMethod("processInputMethodEvent"_s, $$new($ClassArray, {$InputMethodEvent::class$}));
		return $of($Boolean::TRUE);
	} catch ($NoSuchMethodException& exception) {
		return $of($Boolean::FALSE);
	}
	$shouldNotReachHere();
}

JTextComponent$4$1::JTextComponent$4$1() {
}

$Class* JTextComponent$4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/JTextComponent$4;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$4$1, this$0)},
		{"val$type", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$4$1, val$type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/JTextComponent$4;Ljava/lang/Class;)V", "()V", 0, $method(JTextComponent$4$1, init$, void, $JTextComponent$4*, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(JTextComponent$4$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.JTextComponent$4",
		"create",
		"(Ljava/lang/Class;)Ljava/lang/Boolean;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.JTextComponent$4", nullptr, nullptr, 0},
		{"javax.swing.text.JTextComponent$4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.JTextComponent$4$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.JTextComponent"
	};
	$loadClass(JTextComponent$4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTextComponent$4$1);
	});
	return class$;
}

$Class* JTextComponent$4$1::class$ = nullptr;

		} // text
	} // swing
} // javax
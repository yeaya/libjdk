#include <Test8013370$1.h>
#include <Test8013370.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $Test8013370 = ::Test8013370;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuBar = ::javax::swing::JMenuBar;
using $KeyStroke = ::javax::swing::KeyStroke;

void Test8013370$1::init$($Test8013370* this$0) {
	$set(this, this$0, this$0);
	$JMenuBar::init$();
}

bool Test8013370$1::processKeyBinding($KeyStroke* stroke, $KeyEvent* event, int32_t condition, bool pressed) {
	if (stroke == nullptr) {
		this->this$0->error = true;
		return false;
	}
	return $JMenuBar::processKeyBinding(stroke, event, condition, pressed);
}

Test8013370$1::Test8013370$1() {
}

$Class* Test8013370$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest8013370;", nullptr, $FINAL | $SYNTHETIC, $field(Test8013370$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest8013370;)V", nullptr, 0, $method(Test8013370$1, init$, void, $Test8013370*)},
		{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED, $virtualMethod(Test8013370$1, processKeyBinding, bool, $KeyStroke*, $KeyEvent*, int32_t, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8013370",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8013370$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8013370$1",
		"javax.swing.JMenuBar",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test8013370"
	};
	$loadClass(Test8013370$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test8013370$1));
	});
	return class$;
}

$Class* Test8013370$1::class$ = nullptr;
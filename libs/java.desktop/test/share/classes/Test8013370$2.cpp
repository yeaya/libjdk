#include <Test8013370$2.h>
#include <Test8013370.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef NAME

using $Test8013370 = ::Test8013370;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JOptionPane = ::javax::swing::JOptionPane;

void Test8013370$2::init$($Test8013370* this$0, $String* arg0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$(arg0);
}

void Test8013370$2::actionPerformed($ActionEvent* event) {
	$init($Action);
	$JOptionPane::showMessageDialog(nullptr, $(getValue($Action::NAME)));
}

Test8013370$2::Test8013370$2() {
}

$Class* Test8013370$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest8013370;", nullptr, $FINAL | $SYNTHETIC, $field(Test8013370$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest8013370;Ljava/lang/String;)V", nullptr, 0, $method(Test8013370$2, init$, void, $Test8013370*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test8013370$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8013370",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8013370$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8013370$2",
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
		"Test8013370"
	};
	$loadClass(Test8013370$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test8013370$2));
	});
	return class$;
}

$Class* Test8013370$2::class$ = nullptr;
#include <Test4319113$1$1.h>
#include <Test4319113$1.h>
#include <Test4319113.h>
#include <java/awt/Frame.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Test4319113 = ::Test4319113;
using $Test4319113$1 = ::Test4319113$1;
using $FrameArray = $Array<::java::awt::Frame>;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void Test4319113$1$1::init$($Test4319113$1* this$1) {
	$set(this, this$1, this$1);
}

void Test4319113$1$1::run() {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, $cast($UIManager$LookAndFeelInfo, $nc($nc(this->this$1->this$0)->cbPlaf)->getSelectedItem()));
	try {
		$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
		$var($FrameArray, arrframe, $Frame::getFrames());
		int32_t n = $nc(arrframe)->length;
		while (--n >= 0) {
			$Test4319113::updateWindowTreeUI(arrframe->get(n));
		}
	} catch ($Exception& var2_3) {
		$nc($System::err)->println("Exception while changing L&F!"_s);
	}
}

Test4319113$1$1::Test4319113$1$1() {
}

$Class* Test4319113$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LTest4319113$1;", nullptr, $FINAL | $SYNTHETIC, $field(Test4319113$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest4319113$1;)V", nullptr, 0, $method(Test4319113$1$1, init$, void, $Test4319113$1*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test4319113$1$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test4319113$1",
		"itemStateChanged",
		"(Ljava/awt/event/ItemEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test4319113$1", nullptr, nullptr, 0},
		{"Test4319113$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test4319113$1$1",
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
		"Test4319113"
	};
	$loadClass(Test4319113$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4319113$1$1);
	});
	return class$;
}

$Class* Test4319113$1$1::class$ = nullptr;
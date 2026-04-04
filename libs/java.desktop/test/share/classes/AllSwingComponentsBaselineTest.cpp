#include <AllSwingComponentsBaselineTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $FlowLayout = ::java::awt::FlowLayout;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

class AllSwingComponentsBaselineTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AllSwingComponentsBaselineTest::lambda$main$0();
	}
};
$Class* AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"AllSwingComponentsBaselineTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::class$ = nullptr;

void AllSwingComponentsBaselineTest::init$() {
}

void AllSwingComponentsBaselineTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
			$UIManager::setLookAndFeel($(laf->getClassName()));
			$SwingUtilities::invokeAndWait($$new(AllSwingComponentsBaselineTest$$Lambda$lambda$main$0));
			$System::out->println($$str({"Test passed for LookAndFeel "_s, $(laf->getClassName())}));
		}
	}
}

void AllSwingComponentsBaselineTest::test() {
	$useLocalObjectStack();
	$var($JFrame, frame, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$assign(frame, $new($JFrame));
		$var($JButton, b, $new($JButton, "test"_s));
		$var($FlowLayout, layout, $new($FlowLayout));
		layout->setAlignOnBaseline(true);
		$$nc(frame->getContentPane())->setLayout(layout);
		$$nc(frame->getContentPane())->add(b);
		$var($BasicButtonUI, bbUI, $cast($BasicButtonUI, $UIManager::getUI(b)));
		int32_t var$1 = b->getHeight();
		$nc(bbUI)->getBaseline(b, var$1, b->getWidth());
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		if (frame != nullptr) {
			frame->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void AllSwingComponentsBaselineTest::lambda$main$0() {
	test();
}

AllSwingComponentsBaselineTest::AllSwingComponentsBaselineTest() {
}

$Class* AllSwingComponentsBaselineTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("AllSwingComponentsBaselineTest$$Lambda$lambda$main$0")) {
			return AllSwingComponentsBaselineTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AllSwingComponentsBaselineTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AllSwingComponentsBaselineTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AllSwingComponentsBaselineTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(AllSwingComponentsBaselineTest, test, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AllSwingComponentsBaselineTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AllSwingComponentsBaselineTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllSwingComponentsBaselineTest);
	});
	return class$;
}

$Class* AllSwingComponentsBaselineTest::class$ = nullptr;
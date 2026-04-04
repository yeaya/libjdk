#include <DesktopPaneBackgroundTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class DesktopPaneBackgroundTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(DesktopPaneBackgroundTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DesktopPaneBackgroundTest::lambda$main$0();
	}
};
$Class* DesktopPaneBackgroundTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DesktopPaneBackgroundTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DesktopPaneBackgroundTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DesktopPaneBackgroundTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DesktopPaneBackgroundTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DesktopPaneBackgroundTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* DesktopPaneBackgroundTest$$Lambda$lambda$main$0::class$ = nullptr;

$Color* DesktopPaneBackgroundTest::defaultBackgroudColor = nullptr;

void DesktopPaneBackgroundTest::init$() {
}

void DesktopPaneBackgroundTest::main($StringArray* args) {
	$useLocalObjectStack();
	$init(DesktopPaneBackgroundTest);
	$assignStatic(DesktopPaneBackgroundTest::defaultBackgroudColor, $cast($Color, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("win.mdi.backgroundColor"_s)));
	$var($StringArray, lookAndFeel, $new($StringArray, {
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s,
		"com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel"_s
	}));
	{
		$var($StringArray, arr$, lookAndFeel);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, laf, arr$->get(i$));
			{
				$UIManager::setLookAndFeel(laf);
				$SwingUtilities::invokeAndWait($$new(DesktopPaneBackgroundTest$$Lambda$lambda$main$0));
			}
		}
	}
}

void DesktopPaneBackgroundTest::lambda$main$0() {
	$useLocalObjectStack();
	$var($JDesktopPane, desktopPane, $new($JDesktopPane));
	$var($Color, background, desktopPane->getBackground());
	$init(DesktopPaneBackgroundTest);
	if (!$nc(background)->equals(DesktopPaneBackgroundTest::defaultBackgroudColor)) {
		$throwNew($RuntimeException, "Invalid JDesktopPane Background Color for WLAF"_s);
	}
}

DesktopPaneBackgroundTest::DesktopPaneBackgroundTest() {
}

$Class* DesktopPaneBackgroundTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DesktopPaneBackgroundTest$$Lambda$lambda$main$0")) {
			return DesktopPaneBackgroundTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"defaultBackgroudColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(DesktopPaneBackgroundTest, defaultBackgroudColor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DesktopPaneBackgroundTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DesktopPaneBackgroundTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DesktopPaneBackgroundTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DesktopPaneBackgroundTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DesktopPaneBackgroundTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DesktopPaneBackgroundTest);
	});
	return class$;
}

$Class* DesktopPaneBackgroundTest::class$ = nullptr;
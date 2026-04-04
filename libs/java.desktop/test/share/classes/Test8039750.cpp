#include <Test8039750.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class Test8039750$$Lambda$lambda$main$0 : public $Runnable {
	$class(Test8039750$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test8039750::lambda$main$0();
	}
};
$Class* Test8039750$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8039750$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8039750$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test8039750$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8039750$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8039750$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* Test8039750$$Lambda$lambda$main$0::class$ = nullptr;

void Test8039750::init$() {
}

void Test8039750::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new(Test8039750$$Lambda$lambda$main$0));
}

void Test8039750::test(Object$* value, $String* name) {
	if (!$$nc($nc($of(value))->getClass()->getName())->equals(name)) {
		$throwNew($RuntimeException, name);
	}
}

void Test8039750::test(Object$* value, $String* one, $String* two) {
	$useLocalObjectStack();
	if ($instanceOf($CompoundBorder, value)) {
		$var($CompoundBorder, border, $cast($CompoundBorder, value));
		test($(border->getOutsideBorder()), one);
		test($(border->getInsideBorder()), two);
	} else {
		$throwNew($RuntimeException, "CompoundBorder"_s);
	}
}

void Test8039750::lambda$main$0() {
	$useLocalObjectStack();
	$var($UIDefaults, table, $$new($MetalLookAndFeel)->getDefaults());
	test($($nc(table)->get("ToolBar.rolloverBorder"_s)), "javax.swing.plaf.metal.MetalBorders$ButtonBorder"_s, "javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder"_s);
	test($(table->get("ToolBar.nonrolloverBorder"_s)), "javax.swing.plaf.metal.MetalBorders$ButtonBorder"_s, "javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder"_s);
	test($(table->get("RootPane.frameBorder"_s)), "javax.swing.plaf.metal.MetalBorders$FrameBorder"_s);
	test($(table->get("RootPane.plainDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$DialogBorder"_s);
	test($(table->get("RootPane.informationDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$DialogBorder"_s);
	test($(table->get("RootPane.errorDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder"_s);
	test($(table->get("RootPane.colorChooserDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder"_s);
	test($(table->get("RootPane.fileChooserDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder"_s);
	test($(table->get("RootPane.questionDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder"_s);
	test($(table->get("RootPane.warningDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$WarningDialogBorder"_s);
}

Test8039750::Test8039750() {
}

$Class* Test8039750::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Test8039750$$Lambda$lambda$main$0")) {
			return Test8039750$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8039750, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Test8039750, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8039750, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test8039750, test, void, Object$*, $String*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test8039750, test, void, Object$*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8039750",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8039750, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8039750);
	});
	return class$;
}

$Class* Test8039750::class$ = nullptr;
#include <Bug8134116.h>
#include <Bug8134116$BadPane.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

#undef SELECTED
#undef VK_Z

using $Bug8134116$BadPane = ::Bug8134116$BadPane;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

class Bug8134116$$Lambda$lambda$main$0 : public $Runnable {
	$class(Bug8134116$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Bug8134116::lambda$main$0();
	}
};
$Class* Bug8134116$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8134116$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Bug8134116$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Bug8134116$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8134116$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8134116$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* Bug8134116$$Lambda$lambda$main$0::class$ = nullptr;

class Bug8134116$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(Bug8134116$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Bug8134116::lambda$main$1();
	}
};
$Class* Bug8134116$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8134116$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Bug8134116$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Bug8134116$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Bug8134116$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8134116$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* Bug8134116$$Lambda$lambda$main$1$1::class$ = nullptr;

$volatile($Exception*) Bug8134116::exception = nullptr;
$JFrame* Bug8134116::frame = nullptr;

void Bug8134116::init$() {
}

void Bug8134116::main($StringArray* args) {
	$init(Bug8134116);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(Bug8134116$$Lambda$lambda$main$0));
		if (Bug8134116::exception != nullptr) {
			$nc($System::out)->println($$str({"Test failed: "_s, $($nc(Bug8134116::exception)->getMessage())}));
			$throw(Bug8134116::exception);
		} else {
			$nc($System::out)->println("Test passed."_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (Bug8134116::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(Bug8134116$$Lambda$lambda$main$1$1));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Bug8134116::lambda$main$1() {
	$init(Bug8134116);
	$nc(Bug8134116::frame)->dispose();
}

void Bug8134116::lambda$main$0() {
	$init(Bug8134116);
	$useLocalObjectStack();
	$var($JPanel, panel0, $new($JPanel));
	$var($JPanel, panel2, $new($JPanel));
	$var($Bug8134116$BadPane, badPane, $new($Bug8134116$BadPane));
	badPane->add("zero"_s, panel0);
	badPane->add("one"_s, nullptr);
	badPane->add(""_s, panel2);
	badPane->add(""_s, nullptr);
	$var($JPanel, tabComponent, $new($JPanel));
	$var($JLabel, tabComponentLabel, $new($JLabel, "three"_s));
	tabComponent->add(tabComponentLabel);
	badPane->setTabComponentAt(3, tabComponent);
	$assignStatic(Bug8134116::frame, $new($JFrame));
	Bug8134116::frame->add(badPane);
	$nc(Bug8134116::frame)->setSize(300, 300);
	$nc(Bug8134116::frame)->setVisible(true);
	try {
		$var($AccessibleContext, ac, badPane->getAccessibleContext());
		$var($Accessible, page0, $nc(ac)->getAccessibleChild(0));
		if (page0 == nullptr) {
			$throwNew($RuntimeException, "getAccessibleChild(0) is null"_s);
		}
		$var($Accessible, page1, ac->getAccessibleChild(1));
		if (page1 == nullptr) {
			$throwNew($RuntimeException, "getAccessibleChild(1) is null"_s);
		}
		$var($Accessible, page2, ac->getAccessibleChild(2));
		$var($Accessible, page3, ac->getAccessibleChild(3));
		$var($AccessibleContext, pac0, $nc(page0)->getAccessibleContext());
		$var($AccessibleContext, pac1, $nc(page1)->getAccessibleContext());
		$var($AccessibleContext, pac2, $nc(page2)->getAccessibleContext());
		$var($AccessibleContext, pac3, $nc(page3)->getAccessibleContext());
		$var($Rectangle, r0, $$nc($nc(pac0)->getAccessibleComponent())->getBounds());
		$var($Rectangle, r1, $$nc($nc(pac1)->getAccessibleComponent())->getBounds());
		if ($nc(r1)->equals(r0)) {
			$var($String, msg, "Second tab should not have same bounds as first tab"_s);
			$throwNew($RuntimeException, msg);
		}
		$var($AccessibleStateSet, accSS0, pac0->getAccessibleStateSet());
		$init($AccessibleState);
		if (!$nc(accSS0)->contains($AccessibleState::SELECTED)) {
			$var($String, msg, "Empty title -> AccessibleState.SELECTED not set"_s);
			$throwNew($RuntimeException, msg);
		}
		badPane->setSelectedIndex(1);
		$var($AccessibleStateSet, accSS1, pac1->getAccessibleStateSet());
		if (!$nc(accSS1)->contains($AccessibleState::SELECTED)) {
			$var($String, msg, "Second tab selected but AccessibleState.SELECTED not set"_s);
			$throwNew($RuntimeException, msg);
		}
		badPane->setSelectedIndex(2);
		$var($AccessibleStateSet, accSS2, $nc(pac2)->getAccessibleStateSet());
		if (!accSS1->contains($AccessibleState::SELECTED)) {
			$var($String, msg, "Third tab selected but AccessibleState.SELECTED not set"_s);
			$throwNew($RuntimeException, msg);
		}
		badPane->setSelectedIndex(3);
		$var($AccessibleStateSet, accSS3, $nc(pac3)->getAccessibleStateSet());
		if (!accSS1->contains($AccessibleState::SELECTED)) {
			$var($String, msg, "Fourth tab selected but AccessibleState.SELECTED not set"_s);
			$throwNew($RuntimeException, msg);
		}
		if (pac0->getAccessibleIndexInParent() == -1) {
			$var($String, msg, "Empty title -> negative AccessibleIndexInParent"_s);
			$throwNew($RuntimeException, msg);
		}
		if (pac0->getAccessibleIndexInParent() != 0) {
			$var($String, msg, "first tab is not at index 0 in parent"_s);
			$throwNew($RuntimeException, msg);
		}
		if (pac1->getAccessibleIndexInParent() != 1) {
			$var($String, msg, "second tab (null component) is not at index 1 in parent"_s);
			$throwNew($RuntimeException, msg);
		}
		if (pac2->getAccessibleIndexInParent() != 2) {
			$var($String, msg, "third tab (empty title) string is not at index 2 in parent"_s);
			$throwNew($RuntimeException, msg);
		}
		if (pac3->getAccessibleIndexInParent() != 3) {
			$var($String, msg, "fourth tab (empty title, null component, has tabComponent) string is not at index 3 in parent"_s);
			$throwNew($RuntimeException, msg);
		}
		$var($String, accName, pac0->getAccessibleName());
		if (!$nc(accName)->equals("zero"_s)) {
			$var($String, msg, "Empty title -> empty AccessibleName"_s);
			$throwNew($RuntimeException, msg);
		}
		$assign(accName, pac1->getAccessibleName());
		if (!$nc(accName)->equals("one"_s)) {
			$var($String, msg, "AccessibleName of null panel not \'one\'"_s);
			$throwNew($RuntimeException, msg);
		}
		badPane->setDisplayedMnemonicIndexAt(0, 1);
		badPane->setMnemonicAt(0, $KeyEvent::VK_Z);
		if (badPane->getDisplayedMnemonicIndexAt(0) == -1) {
			$var($String, msg, "Empty title -> getDisplayedMnemonicIndexAt failure"_s);
			$throwNew($RuntimeException, msg);
		}
	} catch ($Exception& e) {
		$assignStatic(Bug8134116::exception, e);
	}
}

void Bug8134116::clinit$($Class* clazz) {
	$assignStatic(Bug8134116::exception, nullptr);
}

Bug8134116::Bug8134116() {
}

$Class* Bug8134116::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Bug8134116$$Lambda$lambda$main$0")) {
			return Bug8134116$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("Bug8134116$$Lambda$lambda$main$1$1")) {
			return Bug8134116$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Bug8134116, exception)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Bug8134116, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug8134116, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Bug8134116, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Bug8134116, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug8134116, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bug8134116$BadPane", "Bug8134116", "BadPane", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug8134116",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Bug8134116$BadPane"
	};
	$loadClass(Bug8134116, name, initialize, &classInfo$$, Bug8134116::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug8134116);
	});
	return class$;
}

$Class* Bug8134116::class$ = nullptr;
#include <bug8008657.h>
#include <bug8008657$1.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LEFT
#undef LEFT_TO_RIGHT
#undef RIGHT
#undef RIGHT_TO_LEFT
#undef YEAR

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug8008657$1 = ::bug8008657$1;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug8008657$$Lambda$lambda$executeCase$0 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$executeCase$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8008657::lambda$executeCase$0();
	}
};
$Class* bug8008657$$Lambda$lambda$executeCase$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8008657$$Lambda$lambda$executeCase$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8008657$$Lambda$lambda$executeCase$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8008657$$Lambda$lambda$executeCase$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8008657$$Lambda$lambda$executeCase$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657$$Lambda$lambda$executeCase$0);
	});
	return class$;
}
$Class* bug8008657$$Lambda$lambda$executeCase$0::class$ = nullptr;

class bug8008657$$Lambda$lambda$executeCase$1$1 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$executeCase$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8008657::lambda$executeCase$1();
	}
};
$Class* bug8008657$$Lambda$lambda$executeCase$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8008657$$Lambda$lambda$executeCase$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8008657$$Lambda$lambda$executeCase$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8008657$$Lambda$lambda$executeCase$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8008657$$Lambda$lambda$executeCase$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657$$Lambda$lambda$executeCase$1$1);
	});
	return class$;
}
$Class* bug8008657$$Lambda$lambda$executeCase$1$1::class$ = nullptr;

class bug8008657$$Lambda$lambda$testSpinner$2$2 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$testSpinner$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8008657::lambda$testSpinner$2();
	}
};
$Class* bug8008657$$Lambda$lambda$testSpinner$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8008657$$Lambda$lambda$testSpinner$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8008657$$Lambda$lambda$testSpinner$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8008657$$Lambda$lambda$testSpinner$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8008657$$Lambda$lambda$testSpinner$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657$$Lambda$lambda$testSpinner$2$2);
	});
	return class$;
}
$Class* bug8008657$$Lambda$lambda$testSpinner$2$2::class$ = nullptr;

class bug8008657$$Lambda$lambda$testSpinner$3$3 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$testSpinner$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool checkHorizontalAligment) {
		this->checkHorizontalAligment = checkHorizontalAligment;
	}
	virtual void run() override {
		bug8008657::lambda$testSpinner$3(checkHorizontalAligment);
	}
	bool checkHorizontalAligment = false;
};
$Class* bug8008657$$Lambda$lambda$testSpinner$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"checkHorizontalAligment", "Z", nullptr, $PUBLIC, $field(bug8008657$$Lambda$lambda$testSpinner$3$3, checkHorizontalAligment)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(bug8008657$$Lambda$lambda$testSpinner$3$3, init$, void, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8008657$$Lambda$lambda$testSpinner$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8008657$$Lambda$lambda$testSpinner$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug8008657$$Lambda$lambda$testSpinner$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657$$Lambda$lambda$testSpinner$3$3);
	});
	return class$;
}
$Class* bug8008657$$Lambda$lambda$testSpinner$3$3::class$ = nullptr;

class bug8008657$$Lambda$lambda$testSpinner$4$4 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$testSpinner$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool checkHorizontalAligment) {
		this->checkHorizontalAligment = checkHorizontalAligment;
	}
	virtual void run() override {
		bug8008657::lambda$testSpinner$4(checkHorizontalAligment);
	}
	bool checkHorizontalAligment = false;
};
$Class* bug8008657$$Lambda$lambda$testSpinner$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"checkHorizontalAligment", "Z", nullptr, $PUBLIC, $field(bug8008657$$Lambda$lambda$testSpinner$4$4, checkHorizontalAligment)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(bug8008657$$Lambda$lambda$testSpinner$4$4, init$, void, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8008657$$Lambda$lambda$testSpinner$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8008657$$Lambda$lambda$testSpinner$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug8008657$$Lambda$lambda$testSpinner$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657$$Lambda$lambda$testSpinner$4$4);
	});
	return class$;
}
$Class* bug8008657$$Lambda$lambda$testSpinner$4$4::class$ = nullptr;

$Robot* bug8008657::robot = nullptr;
$JSpinner* bug8008657::spinner = nullptr;
$JFrame* bug8008657::frame = nullptr;

void bug8008657::init$() {
}

void bug8008657::main($StringArray* args) {
	$useLocalObjectStack();
	$init(bug8008657);
	$assignStatic(bug8008657::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				executeCase($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
}

void bug8008657::executeCase($String* lookAndFeelString) {
	$useLocalObjectStack();
	if (tryLookAndFeel(lookAndFeelString)) {
		$SwingUtilities::invokeAndWait($$new(bug8008657$$Lambda$lambda$executeCase$0));
		$init(bug8008657);
		$nc(bug8008657::robot)->waitForIdle();
		testSpinner(false);
		cleanUp();
		$SwingUtilities::invokeAndWait($$new(bug8008657$$Lambda$lambda$executeCase$1$1));
		$nc(bug8008657::robot)->waitForIdle();
		testSpinner(true);
		cleanUp();
	}
}

void bug8008657::testSpinner(bool checkHorizontalAligment) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(bug8008657$$Lambda$lambda$testSpinner$2$2));
	$init(bug8008657);
	$nc(bug8008657::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(bug8008657$$Lambda$lambda$testSpinner$3$3, checkHorizontalAligment));
	$nc(bug8008657::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(bug8008657$$Lambda$lambda$testSpinner$4$4, checkHorizontalAligment));
}

$JTextField* bug8008657::getTextField() {
	$init(bug8008657);
	return $$sure($JSpinner$DefaultEditor, $nc(bug8008657::spinner)->getEditor())->getTextField();
}

$String* bug8008657::getOrientation($ComponentOrientation* orientation) {
	$init($ComponentOrientation);
	return orientation == $ComponentOrientation::LEFT_TO_RIGHT ? "LEFT_TO_RIGHT"_s : "RIGHT_TO_LEFT"_s;
}

void bug8008657::createDateSpinner() {
	$useLocalObjectStack();
	$var($Calendar, calendar, $Calendar::getInstance());
	$var($Date, initDate, $nc(calendar)->getTime());
	calendar->add($Calendar::YEAR, -1);
	$var($Date, earliestDate, calendar->getTime());
	calendar->add($Calendar::YEAR, 1);
	$var($Date, latestDate, calendar->getTime());
	$var($SpinnerModel, dateModel, $new($SpinnerDateModel, initDate, earliestDate, latestDate, $Calendar::YEAR));
	$init(bug8008657);
	$assignStatic(bug8008657::spinner, $new($JSpinner));
	bug8008657::spinner->setModel(dateModel);
}

void bug8008657::createNumberSpinner() {
	$useLocalObjectStack();
	$var($Calendar, calendar, $Calendar::getInstance());
	$nc(calendar)->add($Calendar::YEAR, -1);
	calendar->add($Calendar::YEAR, 1);
	int32_t currentYear = calendar->get($Calendar::YEAR);
	$var($SpinnerModel, yearModel, $new($SpinnerNumberModel, currentYear, currentYear - 1, currentYear + 2, 1));
	$init(bug8008657);
	$assignStatic(bug8008657::spinner, $new($JSpinner));
	bug8008657::spinner->setModel(yearModel);
}

void bug8008657::createAndShowUI() {
	$init(bug8008657);
	$assignStatic(bug8008657::frame, $new($JFrame, "Test"_s));
	bug8008657::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug8008657::frame)->setSize(300, 100);
	$$nc($nc(bug8008657::frame)->getContentPane())->add(bug8008657::spinner);
	$nc(bug8008657::frame)->setVisible(true);
}

void bug8008657::cleanUp() {
	$SwingUtilities::invokeAndWait($$new($bug8008657$1));
}

bool bug8008657::tryLookAndFeel($String* lookAndFeelString) {
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException& e) {
		return false;
	} catch ($ClassNotFoundException& e) {
		return false;
	} catch ($InstantiationException& e) {
		return false;
	} catch ($IllegalAccessException& e) {
		return false;
	}
	return true;
}

void bug8008657::lambda$testSpinner$4(bool checkHorizontalAligment) {
	$useLocalObjectStack();
	$var($JTextField, textField, getTextField());
	$init($ComponentOrientation);
	if (!$nc($ComponentOrientation::LEFT_TO_RIGHT)->equals($($nc(textField)->getComponentOrientation()))) {
		$throwNew($RuntimeException, "Wrong orientation!"_s);
	}
	if (checkHorizontalAligment && textField->getHorizontalAlignment() != $JTextField::RIGHT) {
		$throwNew($RuntimeException, "Wrong horizontal aligment!"_s);
	}
	$init(bug8008657);
	$nc(bug8008657::spinner)->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
}

void bug8008657::lambda$testSpinner$3(bool checkHorizontalAligment) {
	$useLocalObjectStack();
	$var($JTextField, textField, getTextField());
	$init($ComponentOrientation);
	if (!$nc($ComponentOrientation::RIGHT_TO_LEFT)->equals($($nc(textField)->getComponentOrientation()))) {
		$throwNew($RuntimeException, "Wrong orientation!"_s);
	}
	if (checkHorizontalAligment && textField->getHorizontalAlignment() != $JTextField::LEFT) {
		$throwNew($RuntimeException, "Wrong horizontal aligment!"_s);
	}
	$init(bug8008657);
	$nc(bug8008657::spinner)->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
}

void bug8008657::lambda$testSpinner$2() {
	$init(bug8008657);
	$init($ComponentOrientation);
	$nc(bug8008657::spinner)->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
}

void bug8008657::lambda$executeCase$1() {
	createNumberSpinner();
	createAndShowUI();
}

void bug8008657::lambda$executeCase$0() {
	createDateSpinner();
	createAndShowUI();
}

bug8008657::bug8008657() {
}

$Class* bug8008657::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8008657$$Lambda$lambda$executeCase$0")) {
			return bug8008657$$Lambda$lambda$executeCase$0::load$(name, initialize);
		}
		if (name->equals("bug8008657$$Lambda$lambda$executeCase$1$1")) {
			return bug8008657$$Lambda$lambda$executeCase$1$1::load$(name, initialize);
		}
		if (name->equals("bug8008657$$Lambda$lambda$testSpinner$2$2")) {
			return bug8008657$$Lambda$lambda$testSpinner$2$2::load$(name, initialize);
		}
		if (name->equals("bug8008657$$Lambda$lambda$testSpinner$3$3")) {
			return bug8008657$$Lambda$lambda$testSpinner$3$3::load$(name, initialize);
		}
		if (name->equals("bug8008657$$Lambda$lambda$testSpinner$4$4")) {
			return bug8008657$$Lambda$lambda$testSpinner$4$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug8008657, robot)},
		{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(bug8008657, spinner)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8008657, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8008657, init$, void)},
		{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8008657, cleanUp, void), "java.lang.Exception"},
		{"createAndShowUI", "()V", nullptr, $STATIC, $staticMethod(bug8008657, createAndShowUI, void)},
		{"createDateSpinner", "()V", nullptr, $STATIC, $staticMethod(bug8008657, createDateSpinner, void)},
		{"createNumberSpinner", "()V", nullptr, $STATIC, $staticMethod(bug8008657, createNumberSpinner, void)},
		{"executeCase", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(bug8008657, executeCase, void, $String*), "java.lang.Exception"},
		{"getOrientation", "(Ljava/awt/ComponentOrientation;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(bug8008657, getOrientation, $String*, $ComponentOrientation*)},
		{"getTextField", "()Ljavax/swing/JTextField;", nullptr, $STATIC, $staticMethod(bug8008657, getTextField, $JTextField*)},
		{"lambda$executeCase$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8008657, lambda$executeCase$0, void)},
		{"lambda$executeCase$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8008657, lambda$executeCase$1, void)},
		{"lambda$testSpinner$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8008657, lambda$testSpinner$2, void)},
		{"lambda$testSpinner$3", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8008657, lambda$testSpinner$3, void, bool)},
		{"lambda$testSpinner$4", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug8008657, lambda$testSpinner$4, void, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8008657, main, void, $StringArray*), "java.lang.Exception"},
		{"testSpinner", "(Z)V", nullptr, $STATIC, $staticMethod(bug8008657, testSpinner, void, bool), "java.lang.Exception"},
		{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8008657, tryLookAndFeel, bool, $String*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8008657$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8008657",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8008657$1"
	};
	$loadClass(bug8008657, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8008657);
	});
	return class$;
}

$Class* bug8008657::class$ = nullptr;
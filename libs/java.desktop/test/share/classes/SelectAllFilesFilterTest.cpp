#include <SelectAllFilesFilterTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileNameExtensionFilter.h>
#include <jcpp.h>

#undef LABEL_TEXT
#undef OPEN_DIALOG

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileNameExtensionFilter = ::javax::swing::filechooser::FileNameExtensionFilter;

class SelectAllFilesFilterTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(SelectAllFilesFilterTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SelectAllFilesFilterTest::createAndShowGUI();
	}
};
$Class* SelectAllFilesFilterTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SelectAllFilesFilterTest$$Lambda$createAndShowGUI, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SelectAllFilesFilterTest$$Lambda$createAndShowGUI, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SelectAllFilesFilterTest$$Lambda$createAndShowGUI",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SelectAllFilesFilterTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SelectAllFilesFilterTest$$Lambda$createAndShowGUI);
	});
	return class$;
}
$Class* SelectAllFilesFilterTest$$Lambda$createAndShowGUI::class$ = nullptr;

class SelectAllFilesFilterTest$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SelectAllFilesFilterTest::lambda$main$0();
	}
};
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SelectAllFilesFilterTest$$Lambda$lambda$main$0$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1);
	});
	return class$;
}
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::class$ = nullptr;

class SelectAllFilesFilterTest$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SelectAllFilesFilterTest::lambda$main$1();
	}
};
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"SelectAllFilesFilterTest$$Lambda$lambda$main$1$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2);
	});
	return class$;
}
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::class$ = nullptr;

$String* SelectAllFilesFilterTest::LABEL_TEXT = nullptr;
$volatile($JFileChooser*) SelectAllFilesFilterTest::fileChooser = nullptr;
$JComboBox* SelectAllFilesFilterTest::comboBox = nullptr;

void SelectAllFilesFilterTest::init$() {
}

void SelectAllFilesFilterTest::main($StringArray* args) {
	$init(SelectAllFilesFilterTest);
	$useLocalObjectStack();
	$SwingUtilities::invokeLater($$new(SelectAllFilesFilterTest$$Lambda$createAndShowGUI));
	while (SelectAllFilesFilterTest::fileChooser == nullptr) {
		$Thread::sleep(100);
	}
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2));
}

void SelectAllFilesFilterTest::createAndShowGUI() {
	$init(SelectAllFilesFilterTest);
	$useLocalObjectStack();
	$assignStatic(SelectAllFilesFilterTest::fileChooser, $new($JFileChooser));
	$nc(SelectAllFilesFilterTest::fileChooser)->setAcceptAllFileFilterUsed(true);
	$nc(SelectAllFilesFilterTest::fileChooser)->setDialogType($JFileChooser::OPEN_DIALOG);
	$var($FileFilter, txtFilter, $new($FileNameExtensionFilter, "Text files"_s, $$new($StringArray, {"txt"_s})));
	$nc(SelectAllFilesFilterTest::fileChooser)->addChoosableFileFilter(txtFilter);
	$nc(SelectAllFilesFilterTest::fileChooser)->setFileFilter(txtFilter);
	$nc(SelectAllFilesFilterTest::fileChooser)->showOpenDialog(nullptr);
}

$JComboBox* SelectAllFilesFilterTest::findComboBox($Component* comp) {
	$init(SelectAllFilesFilterTest);
	$useLocalObjectStack();
	if ($instanceOf($JLabel, comp)) {
		$var($JLabel, label, $cast($JLabel, comp));
		if (SelectAllFilesFilterTest::LABEL_TEXT->equals($(label->getText()))) {
			return $cast($JComboBox, label->getLabelFor());
		}
	}
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		for (int32_t i = 0; i < cont->getComponentCount(); ++i) {
			$var($JComboBox, result, findComboBox($(cont->getComponent(i))));
			if (result != nullptr) {
				return result;
			}
		}
	}
	return nullptr;
}

void SelectAllFilesFilterTest::lambda$main$1() {
	$init(SelectAllFilesFilterTest);
	int32_t selectedIndex = $nc(SelectAllFilesFilterTest::comboBox)->getSelectedIndex();
	$nc(SelectAllFilesFilterTest::fileChooser)->setVisible(false);
	if (selectedIndex != 0) {
		$throwNew($RuntimeException, "Select All file filter is not selected!"_s);
	}
}

void SelectAllFilesFilterTest::lambda$main$0() {
	$init(SelectAllFilesFilterTest);
	$assignStatic(SelectAllFilesFilterTest::comboBox, findComboBox(SelectAllFilesFilterTest::fileChooser));
	$nc(SelectAllFilesFilterTest::comboBox)->setSelectedIndex(0);
}

SelectAllFilesFilterTest::SelectAllFilesFilterTest() {
}

void SelectAllFilesFilterTest::clinit$($Class* clazz) {
	$assignStatic(SelectAllFilesFilterTest::LABEL_TEXT, "File Format:"_s);
}

$Class* SelectAllFilesFilterTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("SelectAllFilesFilterTest$$Lambda$createAndShowGUI")) {
			return SelectAllFilesFilterTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals("SelectAllFilesFilterTest$$Lambda$lambda$main$0$1")) {
			return SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals("SelectAllFilesFilterTest$$Lambda$lambda$main$1$2")) {
			return SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"LABEL_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SelectAllFilesFilterTest, LABEL_TEXT)},
		{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SelectAllFilesFilterTest, fileChooser)},
		{"comboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(SelectAllFilesFilterTest, comboBox)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SelectAllFilesFilterTest, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SelectAllFilesFilterTest, createAndShowGUI, void)},
		{"findComboBox", "(Ljava/awt/Component;)Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticMethod(SelectAllFilesFilterTest, findComboBox, $JComboBox*, $Component*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SelectAllFilesFilterTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SelectAllFilesFilterTest, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SelectAllFilesFilterTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SelectAllFilesFilterTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SelectAllFilesFilterTest, name, initialize, &classInfo$$, SelectAllFilesFilterTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SelectAllFilesFilterTest);
	});
	return class$;
}

$Class* SelectAllFilesFilterTest::class$ = nullptr;
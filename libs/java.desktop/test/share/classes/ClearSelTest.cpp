#include <ClearSelTest.h>
#include <ClearSelTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef CENTER
#undef SOUTH

using $ClearSelTest$1 = ::ClearSelTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JButton = ::javax::swing::JButton;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

class ClearSelTest$$Lambda$lambda$run$0 : public $Runnable {
	$class(ClearSelTest$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ClearSelTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$run$0();
	}
	ClearSelTest* inst$ = nullptr;
};
$Class* ClearSelTest$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClearSelTest$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LClearSelTest;)V", nullptr, $PUBLIC, $method(ClearSelTest$$Lambda$lambda$run$0, init$, void, ClearSelTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest$$Lambda$lambda$run$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ClearSelTest$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClearSelTest$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClearSelTest$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* ClearSelTest$$Lambda$lambda$run$0::class$ = nullptr;

class ClearSelTest$$Lambda$lambda$createUI$1$1 : public $ActionListener {
	$class(ClearSelTest$$Lambda$lambda$createUI$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(ClearSelTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$1(e);
	}
	ClearSelTest* inst$ = nullptr;
};
$Class* ClearSelTest$$Lambda$lambda$createUI$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClearSelTest$$Lambda$lambda$createUI$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LClearSelTest;)V", nullptr, $PUBLIC, $method(ClearSelTest$$Lambda$lambda$createUI$1$1, init$, void, ClearSelTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest$$Lambda$lambda$createUI$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ClearSelTest$$Lambda$lambda$createUI$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClearSelTest$$Lambda$lambda$createUI$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClearSelTest$$Lambda$lambda$createUI$1$1);
	});
	return class$;
}
$Class* ClearSelTest$$Lambda$lambda$createUI$1$1::class$ = nullptr;

class ClearSelTest$$Lambda$lambda$createUI$2$2 : public $ActionListener {
	$class(ClearSelTest$$Lambda$lambda$createUI$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(ClearSelTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createUI$2(e);
	}
	ClearSelTest* inst$ = nullptr;
};
$Class* ClearSelTest$$Lambda$lambda$createUI$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClearSelTest$$Lambda$lambda$createUI$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LClearSelTest;)V", nullptr, $PUBLIC, $method(ClearSelTest$$Lambda$lambda$createUI$2$2, init$, void, ClearSelTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest$$Lambda$lambda$createUI$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ClearSelTest$$Lambda$lambda$createUI$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClearSelTest$$Lambda$lambda$createUI$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClearSelTest$$Lambda$lambda$createUI$2$2);
	});
	return class$;
}
$Class* ClearSelTest$$Lambda$lambda$createUI$2$2::class$ = nullptr;

$JFrame* ClearSelTest::f = nullptr;
$JDialog* ClearSelTest::dialog = nullptr;
$DefaultTableModel* ClearSelTest::model = nullptr;
$StringArray* ClearSelTest::rows = nullptr;

void ClearSelTest::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void ClearSelTest::run() {
	$useLocalObjectStack();
	try {
		$SwingUtilities::invokeAndWait($$new(ClearSelTest$$Lambda$lambda$run$0, this));
	} catch ($Exception& ex) {
		if (ClearSelTest::f != nullptr) {
			ClearSelTest::f->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void ClearSelTest::dispose() {
	$nc(ClearSelTest::dialog)->dispose();
	$nc(ClearSelTest::f)->dispose();
}

void ClearSelTest::clearSelTest() {
	$init(ClearSelTest);
	$useLocalObjectStack();
	$var($DefaultTableModel, model, $new($DefaultTableModel));
	model->addColumn("Test"_s, ClearSelTest::rows);
	$var($JTable, table, $new($JTable, model));
	table->setRowHeight(25);
	$var($MouseAdapter, adapt, $new($ClearSelTest$1, table));
	table->addMouseListener(adapt);
	table->addMouseMotionListener(adapt);
	$assignStatic(ClearSelTest::f, $new($JFrame));
	ClearSelTest::f->setSize(300, 300);
	$nc(ClearSelTest::f)->setLocationRelativeTo(nullptr);
	$nc(ClearSelTest::f)->add(table);
	$nc(ClearSelTest::f)->setVisible(true);
}

void ClearSelTest::createUI() {
	$useLocalObjectStack();
	$var($String, description, " INSTRUCTIONS:\n A JTable will be shown.\n Move mouse over different row to select the row.\n  Please verify if row text disappear  if mouse is moved out of table.\n If any moment any part of the rows will not be\n  painted properly and if some text are missing in JTable,\n  then press fail else press pass"_s);
	$assignStatic(ClearSelTest::dialog, $new($JDialog));
	ClearSelTest::dialog->setTitle("textselectionTest"_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->addActionListener($$new(ClearSelTest$$Lambda$lambda$createUI$1$1, this));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->addActionListener($$new(ClearSelTest$$Lambda$lambda$createUI$2$2, this));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	mainPanel->add(textArea, $BorderLayout::CENTER);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(passButton);
	buttonPanel->add(failButton);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	$nc(ClearSelTest::dialog)->add(mainPanel);
	$nc(ClearSelTest::dialog)->pack();
	$nc(ClearSelTest::dialog)->setVisible(true);
}

void ClearSelTest::lambda$createUI$2($ActionEvent* e) {
	this->testResult = false;
	dispose();
	$nc(this->latch)->countDown();
}

void ClearSelTest::lambda$createUI$1($ActionEvent* e) {
	this->testResult = true;
	dispose();
	$nc(this->latch)->countDown();
}

void ClearSelTest::lambda$run$0() {
	createUI();
	clearSelTest();
}

void ClearSelTest::clinit$($Class* clazz) {
	$assignStatic(ClearSelTest::rows, $new($StringArray, {
		"Row1"_s,
		"Row2"_s,
		"Row3"_s,
		"Row4"_s,
		"Row5"_s,
		"Row6"_s,
		"Row7"_s,
		"Row8"_s,
		"Row9"_s,
		"Row10"_s
	}));
}

ClearSelTest::ClearSelTest() {
}

$Class* ClearSelTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ClearSelTest$$Lambda$lambda$run$0")) {
			return ClearSelTest$$Lambda$lambda$run$0::load$(name, initialize);
		}
		if (name->equals("ClearSelTest$$Lambda$lambda$createUI$1$1")) {
			return ClearSelTest$$Lambda$lambda$createUI$1$1::load$(name, initialize);
		}
		if (name->equals("ClearSelTest$$Lambda$lambda$createUI$2$2")) {
			return ClearSelTest$$Lambda$lambda$createUI$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(ClearSelTest, f)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $STATIC, $staticField(ClearSelTest, dialog)},
		{"model", "Ljavax/swing/table/DefaultTableModel;", nullptr, $STATIC, $staticField(ClearSelTest, model)},
		{"testResult", "Z", nullptr, $PUBLIC, $field(ClearSelTest, testResult)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(ClearSelTest, latch)},
		{"rows", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ClearSelTest, rows)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(ClearSelTest, init$, void, $CountDownLatch*), "java.lang.Exception"},
		{"clearSelTest", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ClearSelTest, clearSelTest, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $FINAL, $method(ClearSelTest, createUI, void)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest, dispose, void)},
		{"lambda$createUI$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ClearSelTest, lambda$createUI$1, void, $ActionEvent*)},
		{"lambda$createUI$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ClearSelTest, lambda$createUI$2, void, $ActionEvent*)},
		{"lambda$run$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(ClearSelTest, lambda$run$0, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClearSelTest, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClearSelTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ClearSelTest",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ClearSelTest$1"
	};
	$loadClass(ClearSelTest, name, initialize, &classInfo$$, ClearSelTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClearSelTest);
	});
	return class$;
}

$Class* ClearSelTest::class$ = nullptr;
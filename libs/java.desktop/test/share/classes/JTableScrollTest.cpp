#include <JTableScrollTest.h>
#include <JTableScrollTest$1.h>
#include <JTableScrollTest$2.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef BLACK
#undef CENTER
#undef SOUTH
#undef WHITE

using $JTableScrollTest$1 = ::JTableScrollTest$1;
using $JTableScrollTest$2 = ::JTableScrollTest$2;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $FlowLayout = ::java::awt::FlowLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TableModel = ::javax::swing::table::TableModel;

class JTableScrollTest$$Lambda$lambda$doTest$0 : public $ActionListener {
	$class(JTableScrollTest$$Lambda$lambda$doTest$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JTableScrollTest::lambda$doTest$0(dialog, e);
	}
	$JDialog* dialog = nullptr;
};
$Class* JTableScrollTest$$Lambda$lambda$doTest$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$0, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(JTableScrollTest$$Lambda$lambda$doTest$0, init$, void, $JDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$$Lambda$lambda$doTest$0, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTableScrollTest$$Lambda$lambda$doTest$0",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTableScrollTest$$Lambda$lambda$doTest$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableScrollTest$$Lambda$lambda$doTest$0);
	});
	return class$;
}
$Class* JTableScrollTest$$Lambda$lambda$doTest$0::class$ = nullptr;

class JTableScrollTest$$Lambda$lambda$doTest$1$1 : public $ActionListener {
	$class(JTableScrollTest$$Lambda$lambda$doTest$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JDialog* dialog) {
		$set(this, dialog, dialog);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JTableScrollTest::lambda$doTest$1(dialog, e);
	}
	$JDialog* dialog = nullptr;
};
$Class* JTableScrollTest$$Lambda$lambda$doTest$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$1$1, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", nullptr, $PUBLIC, $method(JTableScrollTest$$Lambda$lambda$doTest$1$1, init$, void, $JDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$$Lambda$lambda$doTest$1$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTableScrollTest$$Lambda$lambda$doTest$1$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTableScrollTest$$Lambda$lambda$doTest$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableScrollTest$$Lambda$lambda$doTest$1$1);
	});
	return class$;
}
$Class* JTableScrollTest$$Lambda$lambda$doTest$1$1::class$ = nullptr;

class JTableScrollTest$$Lambda$lambda$doTest$2$2 : public $ActionListener {
	$class(JTableScrollTest$$Lambda$lambda$doTest$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* testButton, $Runnable* action, $JButton* passButton, $JButton* failButton) {
		$set(this, testButton, testButton);
		$set(this, action, action);
		$set(this, passButton, passButton);
		$set(this, failButton, failButton);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JTableScrollTest::lambda$doTest$2(testButton, action, passButton, failButton, e);
	}
	$JButton* testButton = nullptr;
	$Runnable* action = nullptr;
	$JButton* passButton = nullptr;
	$JButton* failButton = nullptr;
};
$Class* JTableScrollTest$$Lambda$lambda$doTest$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, testButton)},
		{"action", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, action)},
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(JTableScrollTest$$Lambda$lambda$doTest$2$2, failButton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;Ljava/lang/Runnable;Ljavax/swing/JButton;Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(JTableScrollTest$$Lambda$lambda$doTest$2$2, init$, void, $JButton*, $Runnable*, $JButton*, $JButton*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$$Lambda$lambda$doTest$2$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTableScrollTest$$Lambda$lambda$doTest$2$2",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTableScrollTest$$Lambda$lambda$doTest$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableScrollTest$$Lambda$lambda$doTest$2$2);
	});
	return class$;
}
$Class* JTableScrollTest$$Lambda$lambda$doTest$2$2::class$ = nullptr;

$JFrame* JTableScrollTest::frame = nullptr;

void JTableScrollTest::init$() {
}

void JTableScrollTest::main($StringArray* args) {
	$init(JTableScrollTest);
	$SwingUtilities::invokeAndWait($$new($JTableScrollTest$1));
}

void JTableScrollTest::createTable() {
	$init(JTableScrollTest);
	$useLocalObjectStack();
	$var($StringArray, names, $new($StringArray, {
		$$new($String, "first_name"_s),
		$$new($String, "last_name"_s),
		$$new($String, "favorite_color"_s),
		$$new($String, "favorite_food"_s)
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Mike"_s,
			"Albers"_s,
			"green"_s,
			"strawberry"_s
		}),
		$$new($ObjectArray, {
			"Mark"_s,
			"Andrews"_s,
			"blue"_s,
			"grapes"_s
		}),
		$$new($ObjectArray, {
			"Brian"_s,
			"Beck"_s,
			"black"_s,
			"raspberry"_s
		}),
		$$new($ObjectArray, {
			"Lara"_s,
			"Bunni"_s,
			"red"_s,
			"strawberry"_s
		}),
		$$new($ObjectArray, {
			"Roger"_s,
			"Brinkley"_s,
			"blue"_s,
			"peach"_s
		}),
		$$new($ObjectArray, {
			"Brent"_s,
			"Christian"_s,
			"black"_s,
			"broccoli"_s
		}),
		$$new($ObjectArray, {
			"Mark"_s,
			"Davidson"_s,
			"darkgreen"_s,
			"asparagus"_s
		}),
		$$new($ObjectArray, {
			"Jeff"_s,
			"Dinkins"_s,
			"blue"_s,
			"kiwi"_s
		}),
		$$new($ObjectArray, {
			"Ewan"_s,
			"Dinkins"_s,
			"yellow"_s,
			"strawberry"_s
		}),
		$$new($ObjectArray, {
			"Amy"_s,
			"Fowler"_s,
			"violet"_s,
			"raspberry"_s
		}),
		$$new($ObjectArray, {
			"Hania"_s,
			"Gajewska"_s,
			"purple"_s,
			"raspberry"_s
		}),
		$$new($ObjectArray, {
			"David"_s,
			"Geary"_s,
			"blue"_s,
			"watermelon"_s
		}),
		$$new($ObjectArray, {
			"Ryan"_s,
			"Gosling"_s,
			"pink"_s,
			"donut"_s
		}),
		$$new($ObjectArray, {
			"Eric"_s,
			"Hawkes"_s,
			"blue"_s,
			"pickle"_s
		}),
		$$new($ObjectArray, {
			"Shannon"_s,
			"Hickey"_s,
			"green"_s,
			"grapes"_s
		}),
		$$new($ObjectArray, {
			"Earl"_s,
			"Johnson"_s,
			"green"_s,
			"carrot"_s
		}),
		$$new($ObjectArray, {
			"Robi"_s,
			"Khan"_s,
			"green"_s,
			"apple"_s
		}),
		$$new($ObjectArray, {
			"Robert"_s,
			"Kim"_s,
			"blue"_s,
			"strawberry"_s
		}),
		$$new($ObjectArray, {
			"Janet"_s,
			"Koenig"_s,
			"turquoise"_s,
			"peach"_s
		}),
		$$new($ObjectArray, {
			"Jeff"_s,
			"Kesselman"_s,
			"blue"_s,
			"pineapple"_s
		}),
		$$new($ObjectArray, {
			"Onno"_s,
			"Kluyt"_s,
			"orange"_s,
			"broccoli"_s
		}),
		$$new($ObjectArray, {
			"Peter"_s,
			"Korn"_s,
			"sunpurple"_s,
			"sparegrass"_s
		}),
		$$new($ObjectArray, {
			"Rick"_s,
			"Levenson"_s,
			"black"_s,
			"raspberry"_s
		}),
		$$new($ObjectArray, {
			"Brian"_s,
			"Lichtenwalter"_s,
			"blue"_s,
			"pear"_s
		}),
		$$new($ObjectArray, {
			"Malini"_s,
			"Minasandram"_s,
			"beige"_s,
			"corn"_s
		}),
		$$new($ObjectArray, {
			"Michael"_s,
			"Martak"_s,
			"green"_s,
			"strawberry"_s
		}),
		$$new($ObjectArray, {
			"David"_s,
			"Mendenhall"_s,
			"forestgreen"_s,
			"peach"_s
		}),
		$$new($ObjectArray, {
			"Phil"_s,
			"Milne"_s,
			"pink"_s,
			"banana"_s
		}),
		$$new($ObjectArray, {
			"Lynn"_s,
			"Monsanto"_s,
			"cybergreen"_s,
			"peach"_s
		}),
		$$new($ObjectArray, {
			"Hans"_s,
			"Muller"_s,
			"rustred"_s,
			"pineapple"_s
		}),
		$$new($ObjectArray, {
			"Joshua"_s,
			"Outwater"_s,
			"blue"_s,
			"pineapple"_s
		}),
		$$new($ObjectArray, {
			"Tim"_s,
			"Prinzing"_s,
			"blue"_s,
			"pepper"_s
		}),
		$$new($ObjectArray, {
			"Raj"_s,
			"Premkumar"_s,
			"blue"_s,
			"broccoli"_s
		}),
		$$new($ObjectArray, {
			"Howard"_s,
			"Rosen"_s,
			"green"_s,
			"strawberry"_s
		}),
		$$new($ObjectArray, {
			"Ray"_s,
			"Ryan"_s,
			"black"_s,
			"banana"_s
		}),
		$$new($ObjectArray, {
			"Georges"_s,
			"Saab"_s,
			"aqua"_s,
			"cantaloupe"_s
		}),
		$$new($ObjectArray, {
			"Tom"_s,
			"Santos"_s,
			"blue"_s,
			"pepper"_s
		}),
		$$new($ObjectArray, {
			"Rich"_s,
			"Schiavi"_s,
			"blue"_s,
			"pepper"_s
		}),
		$$new($ObjectArray, {
			"Nancy"_s,
			"Schorr"_s,
			"green"_s,
			"watermelon"_s
		}),
		$$new($ObjectArray, {
			"Keith"_s,
			"Sprochi"_s,
			"darkgreen"_s,
			"watermelon"_s
		}),
		$$new($ObjectArray, {
			"Matt"_s,
			"Tucker"_s,
			"eblue"_s,
			"broccoli"_s
		}),
		$$new($ObjectArray, {
			"Dmitri"_s,
			"Trembovetski"_s,
			"red"_s,
			"tomato"_s
		}),
		$$new($ObjectArray, {
			"Scott"_s,
			"Violet"_s,
			"violet"_s,
			"banana"_s
		}),
		$$new($ObjectArray, {
			"Kathy"_s,
			"Walrath"_s,
			"darkgreen"_s,
			"pear"_s
		})
	}));
	$var($TableModel, dataModel, $new($JTableScrollTest$2, names, data));
	$var($JTable, tableView, $new($JTable, dataModel));
	$init($Color);
	tableView->setBackground($Color::WHITE);
	tableView->setForeground($Color::BLACK);
	tableView->setSize(600, 800);
	$var($JScrollPane, scrollpane, $new($JScrollPane, tableView));
	$nc(JTableScrollTest::frame)->add(scrollpane);
	$nc(JTableScrollTest::frame)->pack();
	$nc(JTableScrollTest::frame)->setVisible(true);
}

void JTableScrollTest::doTest($Runnable* action) {
	$init(JTableScrollTest);
	$useLocalObjectStack();
	$var($String, description, "JTable with rows will be displayed along with scrollbar.\nScroll the table. Verify no arifacts are shown and rows.\n are correctly displayed."_s);
	$var($JDialog, dialog, $new($JDialog));
	dialog->setTitle("ScrollArtifactTest "_s);
	$var($JTextArea, textArea, $new($JTextArea, description));
	textArea->setEditable(false);
	$var($JButton, testButton, $new($JButton, "Create Table"_s));
	$var($JButton, passButton, $new($JButton, "PASS"_s));
	passButton->setEnabled(false);
	passButton->addActionListener($$new(JTableScrollTest$$Lambda$lambda$doTest$0, dialog));
	$var($JButton, failButton, $new($JButton, "FAIL"_s));
	failButton->setEnabled(false);
	failButton->addActionListener($$new(JTableScrollTest$$Lambda$lambda$doTest$1$1, dialog));
	testButton->addActionListener($$new(JTableScrollTest$$Lambda$lambda$doTest$2$2, testButton, action, passButton, failButton));
	$var($JPanel, mainPanel, $new($JPanel, $$new($BorderLayout)));
	mainPanel->add(textArea, $BorderLayout::CENTER);
	$var($JPanel, buttonPanel, $new($JPanel, $$new($FlowLayout)));
	buttonPanel->add(testButton);
	buttonPanel->add(passButton);
	buttonPanel->add(failButton);
	mainPanel->add(buttonPanel, $BorderLayout::SOUTH);
	dialog->add(mainPanel);
	dialog->pack();
	dialog->setVisible(true);
}

void JTableScrollTest::lambda$doTest$2($JButton* testButton, $Runnable* action, $JButton* passButton, $JButton* failButton, $ActionEvent* e) {
	$init(JTableScrollTest);
	$nc(testButton)->setEnabled(false);
	$nc(action)->run();
	$nc(passButton)->setEnabled(true);
	$nc(failButton)->setEnabled(true);
}

void JTableScrollTest::lambda$doTest$1($JDialog* dialog, $ActionEvent* e) {
	$init(JTableScrollTest);
	$nc(dialog)->dispose();
	if (JTableScrollTest::frame != nullptr) {
		JTableScrollTest::frame->setVisible(false);
		$nc(JTableScrollTest::frame)->dispose();
	}
	$throwNew($RuntimeException, "Scrollbar artifact shown"_s);
}

void JTableScrollTest::lambda$doTest$0($JDialog* dialog, $ActionEvent* e) {
	$init(JTableScrollTest);
	$nc(dialog)->dispose();
	if (JTableScrollTest::frame != nullptr) {
		JTableScrollTest::frame->setVisible(false);
		$nc(JTableScrollTest::frame)->dispose();
	}
}

void JTableScrollTest::clinit$($Class* clazz) {
	$assignStatic(JTableScrollTest::frame, $new($JFrame));
}

JTableScrollTest::JTableScrollTest() {
}

$Class* JTableScrollTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JTableScrollTest$$Lambda$lambda$doTest$0")) {
			return JTableScrollTest$$Lambda$lambda$doTest$0::load$(name, initialize);
		}
		if (name->equals("JTableScrollTest$$Lambda$lambda$doTest$1$1")) {
			return JTableScrollTest$$Lambda$lambda$doTest$1$1::load$(name, initialize);
		}
		if (name->equals("JTableScrollTest$$Lambda$lambda$doTest$2$2")) {
			return JTableScrollTest$$Lambda$lambda$doTest$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JTableScrollTest, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTableScrollTest, init$, void)},
		{"createTable", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTableScrollTest, createTable, void)},
		{"doTest", "(Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JTableScrollTest, doTest, void, $Runnable*)},
		{"lambda$doTest$0", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTableScrollTest, lambda$doTest$0, void, $JDialog*, $ActionEvent*)},
		{"lambda$doTest$1", "(Ljavax/swing/JDialog;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTableScrollTest, lambda$doTest$1, void, $JDialog*, $ActionEvent*)},
		{"lambda$doTest$2", "(Ljavax/swing/JButton;Ljava/lang/Runnable;Ljavax/swing/JButton;Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTableScrollTest, lambda$doTest$2, void, $JButton*, $Runnable*, $JButton*, $JButton*, $ActionEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTableScrollTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTableScrollTest$2", nullptr, nullptr, 0},
		{"JTableScrollTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTableScrollTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JTableScrollTest$2,JTableScrollTest$1"
	};
	$loadClass(JTableScrollTest, name, initialize, &classInfo$$, JTableScrollTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JTableScrollTest);
	});
	return class$;
}

$Class* JTableScrollTest::class$ = nullptr;
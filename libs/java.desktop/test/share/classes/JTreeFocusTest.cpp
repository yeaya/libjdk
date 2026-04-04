#include <JTreeFocusTest.h>
#include <JTreeFocusTest$1.h>
#include <JTreeFocusTest$2.h>
#include <JTreeFocusTest$3.h>
#include <JTreeFocusTest$FormEditor.h>
#include <JTreeFocusTest$FormRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <jcpp.h>

#undef RAISED
#undef VK_DOWN
#undef VK_F2
#undef VK_RIGHT

using $JTreeFocusTest$1 = ::JTreeFocusTest$1;
using $JTreeFocusTest$2 = ::JTreeFocusTest$2;
using $JTreeFocusTest$3 = ::JTreeFocusTest$3;
using $JTreeFocusTest$FormEditor = ::JTreeFocusTest$FormEditor;
using $JTreeFocusTest$FormRenderer = ::JTreeFocusTest$FormRenderer;
using $GridLayout = ::java::awt::GridLayout;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;

class JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JTreeFocusTest* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	JTreeFocusTest* inst$ = nullptr;
	$JComponent* comp = nullptr;
};
$Class* JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, inst$)},
		{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, comp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJTreeFocusTest;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, init$, void, JTreeFocusTest*, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0);
	});
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class JTreeFocusTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JTreeFocusTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	JTreeFocusTest* inst$ = nullptr;
};
$Class* JTreeFocusTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JTreeFocusTest$$Lambda$lambda$new$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJTreeFocusTest;)V", nullptr, $PUBLIC, $method(JTreeFocusTest$$Lambda$lambda$new$1$1, init$, void, JTreeFocusTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$$Lambda$lambda$new$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTreeFocusTest$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JTreeFocusTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$new$1$1::class$ = nullptr;

class JTreeFocusTest$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTreeFocusTest::lambda$new$2();
	}
};
$Class* JTreeFocusTest$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTreeFocusTest$$Lambda$lambda$new$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$$Lambda$lambda$new$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTreeFocusTest$$Lambda$lambda$new$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTreeFocusTest$$Lambda$lambda$new$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest$$Lambda$lambda$new$2$2);
	});
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$new$2$2::class$ = nullptr;

class JTreeFocusTest$$Lambda$lambda$destroy$3$3 : public $Runnable {
	$class(JTreeFocusTest$$Lambda$lambda$destroy$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTreeFocusTest::lambda$destroy$3();
	}
};
$Class* JTreeFocusTest$$Lambda$lambda$destroy$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTreeFocusTest$$Lambda$lambda$destroy$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$$Lambda$lambda$destroy$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTreeFocusTest$$Lambda$lambda$destroy$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTreeFocusTest$$Lambda$lambda$destroy$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest$$Lambda$lambda$destroy$3$3);
	});
	return class$;
}
$Class* JTreeFocusTest$$Lambda$lambda$destroy$3$3::class$ = nullptr;

$DefaultMutableTreeNode* JTreeFocusTest::root = nullptr;
bool JTreeFocusTest::passed = false;
$JFrame* JTreeFocusTest::fr = nullptr;
$volatile($JTree*) JTreeFocusTest::tree = nullptr;

void JTreeFocusTest::main($StringArray* args) {
	$init(JTreeFocusTest);
	$new(JTreeFocusTest);
}

void JTreeFocusTest::blockTillDisplayed($JComponent* comp) {
	$useLocalObjectStack();
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait($$new(JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0, this, comp));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void JTreeFocusTest::init$() {
	$useLocalObjectStack();
	this->rootSelected = false;
	this->keysTyped = false;
	$set(this, p, nullptr);
	$SwingUtilities::invokeAndWait($$new(JTreeFocusTest$$Lambda$lambda$new$1$1, this));
	blockTillDisplayed(JTreeFocusTest::tree);
	$SwingUtilities::invokeAndWait($$new(JTreeFocusTest$$Lambda$lambda$new$2$2));
	try {
		$synchronized(this) {
			while (!this->rootSelected) {
				this->wait();
			}
		}
		$set(this, robot, $new($Robot));
		this->robot->setAutoDelay(50);
		$nc(this->robot)->delay(150);
		$nc(this->robot)->keyPress($KeyEvent::VK_DOWN);
		$nc(this->robot)->keyRelease($KeyEvent::VK_DOWN);
		$nc(this->robot)->keyPress($KeyEvent::VK_RIGHT);
		$nc(this->robot)->keyRelease($KeyEvent::VK_RIGHT);
		$nc(this->robot)->keyPress($KeyEvent::VK_F2);
		$nc(this->robot)->keyRelease($KeyEvent::VK_F2);
		$synchronized(this) {
			while (!this->keysTyped) {
				this->wait();
			}
		}
		$Thread::sleep(3000);
	} catch ($Throwable& t) {
		t->printStackTrace();
	}
	destroy();
}

void JTreeFocusTest::destroy() {
	$SwingUtilities::invokeAndWait($$new(JTreeFocusTest$$Lambda$lambda$destroy$3$3));
	if (!isPassed()) {
		$throwNew($RuntimeException, "Focus wasn\'t transferred to the proper component"_s);
	}
}

void JTreeFocusTest::setPassed(bool passed) {
	$synchronized(this) {
		JTreeFocusTest::passed = passed;
	}
}

bool JTreeFocusTest::isPassed() {
	$synchronized(this) {
		return JTreeFocusTest::passed;
	}
}

$JTree* JTreeFocusTest::createTree() {
	$init(JTreeFocusTest);
	return JTreeFocusTest::tree;
}

void JTreeFocusTest::lambda$destroy$3() {
	$init(JTreeFocusTest);
	$nc(JTreeFocusTest::fr)->dispose();
}

void JTreeFocusTest::lambda$new$2() {
	$init(JTreeFocusTest);
	$nc(JTreeFocusTest::tree)->requestFocus();
	$nc(JTreeFocusTest::tree)->setSelectionRow(0);
}

void JTreeFocusTest::lambda$new$1() {
	$useLocalObjectStack();
	$assignStatic(JTreeFocusTest::fr, $new($JFrame, "Test"_s));
	$assignStatic(JTreeFocusTest::root, $new($DefaultMutableTreeNode, "root"_s));
	$var($JPanel, p, $new($JPanel));
	$var($Border, var$0, $new($BevelBorder, $BevelBorder::RAISED));
	p->setBorder($$new($CompoundBorder, var$0, $$new($LineBorder, $($UIManager::getColor("control"_s)), 7)));
	p->setLayout($$new($GridLayout, 2, 2));
	p->add($$new($JLabel, "one"_s));
	$var($JTextField, tf1, $new($JTextField, 10));
	p->add(tf1);
	p->add($$new($JLabel, "two"_s));
	p->add($$new($JTextField, 10));
	$nc(JTreeFocusTest::root)->add($$new($DefaultMutableTreeNode, p));
	tf1->addFocusListener($$new($JTreeFocusTest$1, this));
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, JTreeFocusTest::root));
	$assignStatic(JTreeFocusTest::tree, $new($JTreeFocusTest$2, this, model));
	$nc(JTreeFocusTest::tree)->addTreeSelectionListener($$new($JTreeFocusTest$3, this));
	$nc(JTreeFocusTest::tree)->setEditable(true);
	$var($DefaultTreeCellRenderer, renderer, $new($JTreeFocusTest$FormRenderer, this));
	$nc(JTreeFocusTest::tree)->setCellRenderer(renderer);
	$var($DefaultTreeCellEditor, editor, $new($JTreeFocusTest$FormEditor, this, JTreeFocusTest::tree, renderer));
	$nc(JTreeFocusTest::tree)->setCellEditor(editor);
	$$nc($nc(JTreeFocusTest::fr)->getContentPane())->add(JTreeFocusTest::tree);
	$nc(JTreeFocusTest::fr)->setSize(300, 400);
	$nc(JTreeFocusTest::fr)->setVisible(true);
}

void JTreeFocusTest::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
}

void JTreeFocusTest::clinit$($Class* clazz) {
	JTreeFocusTest::passed = false;
	$assignStatic(JTreeFocusTest::tree, nullptr);
}

JTreeFocusTest::JTreeFocusTest() {
}

$Class* JTreeFocusTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0")) {
			return JTreeFocusTest$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals("JTreeFocusTest$$Lambda$lambda$new$1$1")) {
			return JTreeFocusTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals("JTreeFocusTest$$Lambda$lambda$new$2$2")) {
			return JTreeFocusTest$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals("JTreeFocusTest$$Lambda$lambda$destroy$3$3")) {
			return JTreeFocusTest$$Lambda$lambda$destroy$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"root", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(JTreeFocusTest, root)},
		{"robot", "Ljava/awt/Robot;", nullptr, 0, $field(JTreeFocusTest, robot)},
		{"passed", "Z", nullptr, $STATIC, $staticField(JTreeFocusTest, passed)},
		{"rootSelected", "Z", nullptr, 0, $field(JTreeFocusTest, rootSelected)},
		{"keysTyped", "Z", nullptr, 0, $field(JTreeFocusTest, keysTyped)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(JTreeFocusTest, p)},
		{"fr", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JTreeFocusTest, fr)},
		{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JTreeFocusTest, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTreeFocusTest, init$, void), "java.lang.Exception"},
		{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, $virtualMethod(JTreeFocusTest, blockTillDisplayed, void, $JComponent*), "java.lang.Exception"},
		{"createTree", "()Ljavax/swing/JTree;", nullptr, $STATIC, $staticMethod(JTreeFocusTest, createTree, $JTree*)},
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest, destroy, void), "java.lang.Exception"},
		{"isPassed", "()Z", nullptr, $SYNCHRONIZED, $virtualMethod(JTreeFocusTest, isPassed, bool)},
		{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(JTreeFocusTest, lambda$blockTillDisplayed$0, void, $JComponent*)},
		{"lambda$destroy$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTreeFocusTest, lambda$destroy$3, void)},
		{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(JTreeFocusTest, lambda$new$1, void)},
		{"lambda$new$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTreeFocusTest, lambda$new$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JTreeFocusTest, main, void, $StringArray*), "java.lang.Exception"},
		{"setPassed", "(Z)V", nullptr, $SYNCHRONIZED, $virtualMethod(JTreeFocusTest, setPassed, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTreeFocusTest$FormEditor", "JTreeFocusTest", "FormEditor", 0},
		{"JTreeFocusTest$FormRenderer", "JTreeFocusTest", "FormRenderer", 0},
		{"JTreeFocusTest$3", nullptr, nullptr, 0},
		{"JTreeFocusTest$2", nullptr, nullptr, 0},
		{"JTreeFocusTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JTreeFocusTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JTreeFocusTest$FormEditor,JTreeFocusTest$FormRenderer,JTreeFocusTest$3,JTreeFocusTest$2,JTreeFocusTest$1"
	};
	$loadClass(JTreeFocusTest, name, initialize, &classInfo$$, JTreeFocusTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest);
	});
	return class$;
}

$Class* JTreeFocusTest::class$ = nullptr;
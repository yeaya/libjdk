#include <TitledBorder.h>
#include <TitledBorder$1.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $TitledBorder$1 = ::TitledBorder$1;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$GridBagLayout* TitledBorder::layout = nullptr;
$JPanel* TitledBorder::mainControlPanel = nullptr;
$JPanel* TitledBorder::resultButtonPanel = nullptr;
$JTextArea* TitledBorder::instructionTextArea = nullptr;
$JButton* TitledBorder::passButton = nullptr;
$JButton* TitledBorder::failButton = nullptr;
$JFrame* TitledBorder::mainFrame = nullptr;

void TitledBorder::init$($CountDownLatch* latch) {
	this->testResult = false;
	$set(this, latch, latch);
}

void TitledBorder::run() {
	$useLocalObjectStack();
	try {
		createUI();
	} catch ($Exception& ex) {
		if (TitledBorder::mainFrame != nullptr) {
			TitledBorder::mainFrame->dispose();
		}
		$nc(this->latch)->countDown();
		$throwNew($RuntimeException, $$str({"createUI Failed: "_s, $(ex->getMessage())}));
	}
}

void TitledBorder::createUI() {
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new($TitledBorder$1, this));
}

TitledBorder::TitledBorder() {
}

$Class* TitledBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, layout)},
		{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, mainControlPanel)},
		{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, resultButtonPanel)},
		{"instructionTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, instructionTextArea)},
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, failButton)},
		{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorder, mainFrame)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(TitledBorder, latch)},
		{"testResult", "Z", nullptr, $PUBLIC, $field(TitledBorder, testResult)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(TitledBorder, init$, void, $CountDownLatch*), "java.lang.Exception"},
		{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(TitledBorder, createUI, void), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TitledBorder, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TitledBorder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TitledBorder",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TitledBorder$1,TitledBorder$1$1"
	};
	$loadClass(TitledBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TitledBorder);
	});
	return class$;
}

$Class* TitledBorder::class$ = nullptr;
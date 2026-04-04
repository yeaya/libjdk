#include <JFileChooserOrientation.h>
#include <JFileChooserOrientation$1.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $JFileChooserOrientation$1 = ::JFileChooserOrientation$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$JFrame* JFileChooserOrientation::frame = nullptr;
$GridBagLayout* JFileChooserOrientation::layout = nullptr;
$JPanel* JFileChooserOrientation::panel = nullptr;
$JPanel* JFileChooserOrientation::lookAndFeelPanel = nullptr;
$JPanel* JFileChooserOrientation::orientationPanel = nullptr;
$JPanel* JFileChooserOrientation::passFailPanel = nullptr;
$JTextArea* JFileChooserOrientation::instructionsTextArea = nullptr;
$JLabel* JFileChooserOrientation::lookAndFeelLabel = nullptr;
$JLabel* JFileChooserOrientation::orientationLabel = nullptr;
$JComboBox* JFileChooserOrientation::lookAndFeelComboBox = nullptr;
$JComboBox* JFileChooserOrientation::orientationComboBox = nullptr;
$JButton* JFileChooserOrientation::fileChooserButton = nullptr;
$JButton* JFileChooserOrientation::passButton = nullptr;
$JButton* JFileChooserOrientation::failButton = nullptr;
$JFileChooser* JFileChooserOrientation::openChooser = nullptr;
$UIManager$LookAndFeelInfoArray* JFileChooserOrientation::lookAndFeelArray = nullptr;
$String* JFileChooserOrientation::orientationLTR = nullptr;
$String* JFileChooserOrientation::orientationRTL = nullptr;
$String* JFileChooserOrientation::fileChooserString = nullptr;

void JFileChooserOrientation::init$() {
}

void JFileChooserOrientation::main($StringArray* args) {
	$init(JFileChooserOrientation);
	createManualTestUI();
}

void JFileChooserOrientation::createManualTestUI() {
	$init(JFileChooserOrientation);
	$SwingUtilities::invokeAndWait($$new($JFileChooserOrientation$1));
}

void JFileChooserOrientation::pass() {
	$init(JFileChooserOrientation);
	$nc(JFileChooserOrientation::frame)->dispose();
}

void JFileChooserOrientation::fail() {
	$init(JFileChooserOrientation);
	$useLocalObjectStack();
	$nc(JFileChooserOrientation::frame)->dispose();
	$nc($System::err)->println($$str({$($$nc($nc(JFileChooserOrientation::lookAndFeelComboBox)->getSelectedItem())->toString()), " : Incorrect Orientation"_s}));
}

void JFileChooserOrientation::showFileChooser() {
	$init(JFileChooserOrientation);
	$useLocalObjectStack();
	if (tryLookAndFeel($($$nc($nc(JFileChooserOrientation::lookAndFeelComboBox)->getSelectedItem())->toString()))) {
		$assignStatic(JFileChooserOrientation::openChooser, $new($JFileChooser));
		$init($ComponentOrientation);
		$var($ComponentOrientation, orientation, $ComponentOrientation::UNKNOWN);
		{
			$var($String, s9052$, $$nc($nc(JFileChooserOrientation::orientationComboBox)->getSelectedItem())->toString());
			int32_t tmp9052$ = -1;
			switch ($nc(s9052$)->hashCode()) {
			case (int32_t)0xddd5a7d0:
				if (s9052$->equals(" Left to Right"_s)) {
					tmp9052$ = 0;
				}
				break;
			case (int32_t)0xd233b068:
				if (s9052$->equals(" Right to Left"_s)) {
					tmp9052$ = 1;
				}
				break;
			}
			switch (tmp9052$) {
			case 0:
				$assign(orientation, $ComponentOrientation::LEFT_TO_RIGHT);
				break;
			case 1:
				$assign(orientation, $ComponentOrientation::RIGHT_TO_LEFT);
				break;
			}
		}
		$nc(JFileChooserOrientation::openChooser)->setComponentOrientation(orientation);
		$nc(JFileChooserOrientation::openChooser)->showOpenDialog(JFileChooserOrientation::frame);
	}
}

bool JFileChooserOrientation::tryLookAndFeel($String* lookAndFeelString) {
	$init(JFileChooserOrientation);
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

JFileChooserOrientation::JFileChooserOrientation() {
}

void JFileChooserOrientation::clinit$($Class* clazz) {
	$assignStatic(JFileChooserOrientation::orientationLTR, " Left to Right"_s);
	$assignStatic(JFileChooserOrientation::orientationRTL, " Right to Left"_s);
	$assignStatic(JFileChooserOrientation::fileChooserString, "Show File Chooser"_s);
}

$Class* JFileChooserOrientation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, frame)},
		{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, layout)},
		{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, panel)},
		{"lookAndFeelPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelPanel)},
		{"orientationPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, orientationPanel)},
		{"passFailPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, passFailPanel)},
		{"instructionsTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, instructionsTextArea)},
		{"lookAndFeelLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelLabel)},
		{"orientationLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, orientationLabel)},
		{"lookAndFeelComboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelComboBox)},
		{"orientationComboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, orientationComboBox)},
		{"fileChooserButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, fileChooserButton)},
		{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, passButton)},
		{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, failButton)},
		{"openChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, openChooser)},
		{"lookAndFeelArray", "[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelArray)},
		{"orientationLTR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooserOrientation, orientationLTR)},
		{"orientationRTL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooserOrientation, orientationRTL)},
		{"fileChooserString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooserOrientation, fileChooserString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFileChooserOrientation, init$, void)},
		{"createManualTestUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooserOrientation, createManualTestUI, void), "java.lang.Exception"},
		{"fail", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooserOrientation, fail, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JFileChooserOrientation, main, void, $StringArray*), "java.lang.Exception"},
		{"pass", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooserOrientation, pass, void), "java.lang.Exception"},
		{"showFileChooser", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooserOrientation, showFileChooser, void), "java.lang.Exception"},
		{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooserOrientation, tryLookAndFeel, bool, $String*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JFileChooserOrientation$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JFileChooserOrientation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JFileChooserOrientation$1,JFileChooserOrientation$1$3,JFileChooserOrientation$1$2,JFileChooserOrientation$1$1"
	};
	$loadClass(JFileChooserOrientation, name, initialize, &classInfo$$, JFileChooserOrientation::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JFileChooserOrientation);
	});
	return class$;
}

$Class* JFileChooserOrientation::class$ = nullptr;
#include <JFileChooserOrientation$1.h>
#include <JFileChooserOrientation$1$1.h>
#include <JFileChooserOrientation$1$2.h>
#include <JFileChooserOrientation$1$3.h>
#include <JFileChooserOrientation.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL

using $JFileChooserOrientation = ::JFileChooserOrientation;
using $JFileChooserOrientation$1$1 = ::JFileChooserOrientation$1$1;
using $JFileChooserOrientation$1$2 = ::JFileChooserOrientation$1$2;
using $JFileChooserOrientation$1$3 = ::JFileChooserOrientation$1$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void JFileChooserOrientation$1::init$() {
}

void JFileChooserOrientation$1::run() {
	$useLocalObjectStack();
	$init($JFileChooserOrientation);
	$assignStatic($JFileChooserOrientation::layout, $new($GridBagLayout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$assignStatic($JFileChooserOrientation::panel, $new($JPanel, $JFileChooserOrientation::layout));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	gbc->gridx = 0;
	gbc->gridy = 0;
	$assignStatic($JFileChooserOrientation::instructionsTextArea, $new($JTextArea));
	$var($String, instructions, "1) Select Look and feel from combobox\n2) Select component orientation\n3) Click on \"Show File Chooser\"\n4) Check if orientation is as selected\n5) Press \"Cancel\" on the File Chooser Dialog\n\n Perform steps 1- 4 for all LAFs & orientations\n If all are correct press Pass or else press Fail"_s);
	$JFileChooserOrientation::instructionsTextArea->setText(instructions);
	$init($Color);
	$nc($JFileChooserOrientation::instructionsTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$nc($JFileChooserOrientation::panel)->add($JFileChooserOrientation::instructionsTextArea, gbc);
	$assignStatic($JFileChooserOrientation::lookAndFeelPanel, $new($JPanel));
	$JFileChooserOrientation::lookAndFeelPanel->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$assignStatic($JFileChooserOrientation::lookAndFeelLabel, $new($JLabel, "Look And Feel: "_s));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::lookAndFeelPanel)->add($JFileChooserOrientation::lookAndFeelLabel, gbc);
	$assignStatic($JFileChooserOrientation::lookAndFeelComboBox, $new($JComboBox));
	$assignStatic($JFileChooserOrientation::lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $JFileChooserOrientation::lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$nc($JFileChooserOrientation::lookAndFeelComboBox)->addItem($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::lookAndFeelPanel)->add($JFileChooserOrientation::lookAndFeelComboBox, gbc);
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($JFileChooserOrientation::panel)->add($JFileChooserOrientation::lookAndFeelPanel, gbc);
	$assignStatic($JFileChooserOrientation::orientationPanel, $new($JPanel));
	$JFileChooserOrientation::orientationPanel->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$assignStatic($JFileChooserOrientation::orientationLabel, $new($JLabel, "Orientation: "_s));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::orientationPanel)->add($JFileChooserOrientation::orientationLabel, gbc);
	$assignStatic($JFileChooserOrientation::orientationComboBox, $new($JComboBox));
	$JFileChooserOrientation::orientationComboBox->addItem(" Left to Right"_s);
	$nc($JFileChooserOrientation::orientationComboBox)->addItem(" Right to Left"_s);
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::orientationPanel)->add($JFileChooserOrientation::orientationComboBox, gbc);
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc($JFileChooserOrientation::panel)->add($JFileChooserOrientation::orientationPanel, gbc);
	$assignStatic($JFileChooserOrientation::fileChooserButton, $new($JButton, "Show File Chooser"_s));
	$JFileChooserOrientation::fileChooserButton->setActionCommand("Show File Chooser"_s);
	$nc($JFileChooserOrientation::fileChooserButton)->addActionListener($$new($JFileChooserOrientation$1$1, this));
	gbc->gridx = 0;
	gbc->gridy = 3;
	$nc($JFileChooserOrientation::panel)->add($JFileChooserOrientation::fileChooserButton, gbc);
	$assignStatic($JFileChooserOrientation::passFailPanel, $new($JPanel));
	$JFileChooserOrientation::passFailPanel->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$assignStatic($JFileChooserOrientation::passButton, $new($JButton, " Pass "_s));
	$JFileChooserOrientation::passButton->addActionListener($$new($JFileChooserOrientation$1$2, this));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::passFailPanel)->add($JFileChooserOrientation::passButton, gbc);
	$assignStatic($JFileChooserOrientation::failButton, $new($JButton, " Fail "_s));
	$JFileChooserOrientation::failButton->addActionListener($$new($JFileChooserOrientation$1$3, this));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::passFailPanel)->add($JFileChooserOrientation::failButton, gbc);
	gbc->gridx = 0;
	gbc->gridy = 4;
	$nc($JFileChooserOrientation::panel)->add($JFileChooserOrientation::passFailPanel, gbc);
	$assignStatic($JFileChooserOrientation::frame, $new($JFrame));
	$JFileChooserOrientation::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($JFileChooserOrientation::frame)->setContentPane($JFileChooserOrientation::panel);
	$nc($JFileChooserOrientation::frame)->pack();
	$nc($JFileChooserOrientation::frame)->setVisible(true);
}

JFileChooserOrientation$1::JFileChooserOrientation$1() {
}

$Class* JFileChooserOrientation$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JFileChooserOrientation$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooserOrientation$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JFileChooserOrientation",
		"createManualTestUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JFileChooserOrientation$1", nullptr, nullptr, 0},
		{"JFileChooserOrientation$1$3", nullptr, nullptr, 0},
		{"JFileChooserOrientation$1$2", nullptr, nullptr, 0},
		{"JFileChooserOrientation$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JFileChooserOrientation$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JFileChooserOrientation"
	};
	$loadClass(JFileChooserOrientation$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JFileChooserOrientation$1);
	});
	return class$;
}

$Class* JFileChooserOrientation$1::class$ = nullptr;
#include <ComponentSetNameTest$1.h>
#include <ComponentSetNameTest.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $ComponentSetNameTest = ::ComponentSetNameTest;
using $JComponentArray = $Array<::javax::swing::JComponent>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSlider = ::javax::swing::JSlider;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

void ComponentSetNameTest$1::init$() {
}

void ComponentSetNameTest$1::run() {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, looks, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, looks);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, look, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(look)->getClassName()));
				} catch ($ClassNotFoundException& e) {
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				} catch ($InstantiationException& e) {
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				} catch ($UnsupportedLookAndFeelException& e) {
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				} catch ($IllegalAccessException& e) {
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				}
				$var($JComponentArray, components, $new($JComponentArray, {
					$$new($JTextArea),
					$$new($JTextField),
					$$new($JComboBox),
					$$new($JCheckBox),
					$$new($JRadioButton),
					$$new($JButton),
					$$new($JPanel),
					$$new($JTable),
					$$new($JTabbedPane),
					$$new($JScrollPane),
					$$new($JSlider),
					$$new($JMenu),
					$$new($JToolBar)
				}));
				{
					$var($JComponentArray, arr$, components);
					for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
						$var($JComponent, component, arr$->get(i$));
						{
							$ComponentSetNameTest::testSetName(component, $($nc(look)->getClassName()));
						}
					}
				}
			}
		}
	}
}

ComponentSetNameTest$1::ComponentSetNameTest$1() {
}

$Class* ComponentSetNameTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ComponentSetNameTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ComponentSetNameTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ComponentSetNameTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ComponentSetNameTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ComponentSetNameTest$1",
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
		"ComponentSetNameTest"
	};
	$loadClass(ComponentSetNameTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentSetNameTest$1);
	});
	return class$;
}

$Class* ComponentSetNameTest$1::class$ = nullptr;
#include <bug4987336.h>
#include <bug4987336$LafRadioButton.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/net/URL.h>
#include <java/util/Hashtable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef ANIM_IMAGE_RES
#undef IMAGE_RES
#undef LEFT
#undef Y_AXIS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4987336$LafRadioButton = ::bug4987336$LafRadioButton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JApplet = ::javax::swing::JApplet;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSlider = ::javax::swing::JSlider;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$String* bug4987336::IMAGE_RES = nullptr;
$String* bug4987336::ANIM_IMAGE_RES = nullptr;

void bug4987336::init$() {
	$JApplet::init$();
}

void bug4987336::init() {
	$useLocalObjectStack();
	$var($JPanel, pnLafs, $new($JPanel));
	pnLafs->setLayout($$new($BoxLayout, pnLafs, $BoxLayout::Y_AXIS));
	$var($ButtonGroup, group, $new($ButtonGroup));
	pnLafs->setBorder($$new($TitledBorder, "Available Lafs"_s));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lafInfo, arr$->get(i$));
			{
				$var($bug4987336$LafRadioButton, comp, $new($bug4987336$LafRadioButton, this, lafInfo));
				pnLafs->add(comp);
				group->add(comp);
			}
		}
	}
	$var($JPanel, pnContent, $new($JPanel));
	pnContent->setLayout($$new($BoxLayout, pnContent, $BoxLayout::Y_AXIS));
	pnContent->add(pnLafs);
	pnContent->add($(createSlider(true, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES, bug4987336::ANIM_IMAGE_RES, bug4987336::ANIM_IMAGE_RES)));
	pnContent->add($(createSlider(false, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES, bug4987336::ANIM_IMAGE_RES, bug4987336::ANIM_IMAGE_RES)));
	pnContent->add($(createSlider(true, bug4987336::ANIM_IMAGE_RES, nullptr, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES)));
	pnContent->add($(createSlider(false, bug4987336::ANIM_IMAGE_RES, nullptr, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES)));
	$$nc(getContentPane())->add($$new($JScrollPane, pnContent));
}

$JSlider* bug4987336::createSlider(bool enabled, $String* firstEnabledImage, $String* firstDisabledImage, $String* secondEnabledImage, $String* secondDisabledImage) {
	$init(bug4987336);
	$useLocalObjectStack();
	$var($Hashtable, dictionary, $new($Hashtable));
	$var($Object, var$0, $Integer::valueOf(0));
	dictionary->put(var$0, $(createLabel(firstEnabledImage, firstDisabledImage)));
	$var($Object, var$1, $Integer::valueOf(1));
	dictionary->put(var$1, $(createLabel(secondEnabledImage, secondDisabledImage)));
	$var($JSlider, result, $new($JSlider, 0, 1));
	result->setLabelTable(dictionary);
	result->setPaintLabels(true);
	result->setEnabled(enabled);
	return result;
}

$JLabel* bug4987336::createLabel($String* enabledImage, $String* disabledImage) {
	$init(bug4987336);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ImageIcon, enabledIcon, enabledImage == nullptr ? ($ImageIcon*)nullptr : $new($ImageIcon, $(bug4987336::class$->getResource(enabledImage))));
	$var($ImageIcon, disabledIcon, disabledImage == nullptr ? ($ImageIcon*)nullptr : $new($ImageIcon, $(bug4987336::class$->getResource(disabledImage))));
	$var($JLabel, result, $new($JLabel, enabledImage == nullptr && disabledImage == nullptr ? "No image"_s : "Image"_s, enabledIcon, $SwingConstants::LEFT));
	result->setDisabledIcon(disabledIcon);
	return result;
}

bug4987336::bug4987336() {
}

void bug4987336::clinit$($Class* clazz) {
	$assignStatic(bug4987336::IMAGE_RES, "box.gif"_s);
	$assignStatic(bug4987336::ANIM_IMAGE_RES, "duke.gif"_s);
}

$Class* bug4987336::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IMAGE_RES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4987336, IMAGE_RES)},
		{"ANIM_IMAGE_RES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4987336, ANIM_IMAGE_RES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4987336, init$, void)},
		{"createLabel", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4987336, createLabel, $JLabel*, $String*, $String*)},
		{"createSlider", "(ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4987336, createSlider, $JSlider*, bool, $String*, $String*, $String*, $String*)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4987336, init, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4987336$LafRadioButton", "bug4987336", "LafRadioButton", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4987336",
		"javax.swing.JApplet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4987336$LafRadioButton,bug4987336$LafRadioButton$1"
	};
	$loadClass(bug4987336, name, initialize, &classInfo$$, bug4987336::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4987336));
	});
	return class$;
}

$Class* bug4987336::class$ = nullptr;
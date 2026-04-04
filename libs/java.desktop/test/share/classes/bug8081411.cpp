#include <bug8081411.h>
#include <bug8081411$CenteredSynthIcon.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef ENABLED
#undef RED
#undef TEST_COLOR
#undef TYPE_INT_RGB

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug8081411$CenteredSynthIcon = ::bug8081411$CenteredSynthIcon;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

class bug8081411$$Lambda$testSynthIcon : public $Runnable {
	$class(bug8081411$$Lambda$testSynthIcon, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8081411::testSynthIcon();
	}
};
$Class* bug8081411$$Lambda$testSynthIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8081411$$Lambda$testSynthIcon, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8081411$$Lambda$testSynthIcon, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug8081411$$Lambda$testSynthIcon",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8081411$$Lambda$testSynthIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8081411$$Lambda$testSynthIcon);
	});
	return class$;
}
$Class* bug8081411$$Lambda$testSynthIcon::class$ = nullptr;

$Color* bug8081411::TEST_COLOR = nullptr;

void bug8081411::init$() {
}

void bug8081411::main($StringArray* args) {
	$init(bug8081411);
	$SwingUtilities::invokeAndWait($$new(bug8081411$$Lambda$testSynthIcon));
}

void bug8081411::testSynthIcon() {
	$init(bug8081411);
	$useLocalObjectStack();
	if (!checkAndSetNimbusLookAndFeel()) {
		return;
	}
	$var($JMenuItem, menu, $new($JMenuItem));
	$var($Icon, subMenuIcon, $UIManager::getIcon("Menu.arrowIcon"_s));
	if (!($instanceOf($SynthIcon, subMenuIcon))) {
		$throwNew($RuntimeException, "Icon is not a SynthIcon!"_s);
	}
	$var($Region, region, $SynthLookAndFeel::getRegion(menu));
	$var($SynthStyle, style, $SynthLookAndFeel::getStyle(menu, region));
	$var($SynthContext, synthContext, $new($SynthContext, menu, region, style, $SynthConstants::ENABLED));
	int32_t width = $SynthGraphicsUtils::getIconWidth(subMenuIcon, synthContext);
	int32_t height = $SynthGraphicsUtils::getIconHeight(subMenuIcon, synthContext);
	paintAndCheckIcon(subMenuIcon, synthContext, width, height);
	int32_t newWidth = width * 17;
	int32_t newHeight = height * 37;
	$var($Icon, centeredIcon, $new($bug8081411$CenteredSynthIcon, $cast($SynthIcon, subMenuIcon), newWidth, newHeight));
	paintAndCheckIcon(centeredIcon, synthContext, newWidth, newHeight);
}

void bug8081411::paintAndCheckIcon($Icon* icon, $SynthContext* synthContext, int32_t width, int32_t height) {
	$init(bug8081411);
	$useLocalObjectStack();
	$var($BufferedImage, buffImage, $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics, g, buffImage->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::RED);
	g->fillRect(0, 0, width, height);
	$SynthGraphicsUtils::paintIcon(icon, synthContext, g, 0, 0, width, height);
	g->dispose();
	$var($Color, iconCenterColor, $new($Color, buffImage->getRGB(width / 2, height / 2)));
	if (!bug8081411::TEST_COLOR->equals(iconCenterColor)) {
		$throwNew($RuntimeException, "Icon is painted incorrectly!"_s);
	}
}

bool bug8081411::checkAndSetNimbusLookAndFeel() {
	$init(bug8081411);
	$useLocalObjectStack();
	try {
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			if ("Nimbus"_s->equals($($nc(info)->getName()))) {
				$UIManager::setLookAndFeel($(info->getClassName()));
				return true;
			}
		}
		return false;
	} catch ($Exception& ignore) {
		return false;
	}
	$shouldNotReachHere();
}

void bug8081411::clinit$($Class* clazz) {
	$assignStatic(bug8081411::TEST_COLOR, $new($Color, 71, 71, 72));
}

bug8081411::bug8081411() {
}

$Class* bug8081411::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug8081411$$Lambda$testSynthIcon")) {
			return bug8081411$$Lambda$testSynthIcon::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8081411, TEST_COLOR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8081411, init$, void)},
		{"checkAndSetNimbusLookAndFeel", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8081411, checkAndSetNimbusLookAndFeel, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8081411, main, void, $StringArray*), "java.lang.Exception"},
		{"paintAndCheckIcon", "(Ljavax/swing/Icon;Ljavax/swing/plaf/synth/SynthContext;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8081411, paintAndCheckIcon, void, $Icon*, $SynthContext*, int32_t, int32_t)},
		{"testSynthIcon", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8081411, testSynthIcon, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8081411$CenteredSynthIcon", "bug8081411", "CenteredSynthIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8081411",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8081411$CenteredSynthIcon"
	};
	$loadClass(bug8081411, name, initialize, &classInfo$$, bug8081411::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8081411);
	});
	return class$;
}

$Class* bug8081411::class$ = nullptr;
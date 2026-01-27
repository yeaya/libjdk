#include <javax/swing/LookAndFeel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/GrayFilter.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InputMapUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <sun/swing/ImageIconUIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $GrayFilter = ::javax::swing::GrayFilter;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField = ::javax::swing::JPasswordField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InputMapUIResource = ::javax::swing::plaf::InputMapUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $JTextComponent$KeyBinding = ::javax::swing::text::JTextComponent$KeyBinding;
using $SunToolkit = ::sun::awt::SunToolkit;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$MethodInfo _LookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(LookAndFeel, init$, void)},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, getDefaults, $UIDefaults*)},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LookAndFeel, getDescription, $String*)},
	{"getDesktopPropertyValue", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, getDesktopPropertyValue, $Object*, $String*, Object$*)},
	{"getDisabledIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, getDisabledIcon, $Icon*, $JComponent*, $Icon*)},
	{"getDisabledSelectedIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, getDisabledSelectedIcon, $Icon*, $JComponent*, $Icon*)},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LookAndFeel, getID, $String*)},
	{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, getLayoutStyle, $LayoutStyle*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LookAndFeel, getName, $String*)},
	{"getSupportsWindowDecorations", "()Z", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, getSupportsWindowDecorations, bool)},
	{"initialize", "()V", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, initialize, void)},
	{"installBorder", "(Ljavax/swing/JComponent;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, installBorder, void, $JComponent*, $String*)},
	{"installColors", "(Ljavax/swing/JComponent;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, installColors, void, $JComponent*, $String*, $String*)},
	{"installColorsAndFont", "(Ljavax/swing/JComponent;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, installColorsAndFont, void, $JComponent*, $String*, $String*, $String*)},
	{"installProperty", "(Ljavax/swing/JComponent;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, installProperty, void, $JComponent*, $String*, Object$*)},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LookAndFeel, isNativeLookAndFeel, bool)},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LookAndFeel, isSupportedLookAndFeel, bool)},
	{"loadKeyBindings", "(Ljavax/swing/InputMap;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, loadKeyBindings, void, $InputMap*, $ObjectArray*)},
	{"makeComponentInputMap", "(Ljavax/swing/JComponent;[Ljava/lang/Object;)Ljavax/swing/ComponentInputMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, makeComponentInputMap, $ComponentInputMap*, $JComponent*, $ObjectArray*)},
	{"makeIcon", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(LookAndFeel, makeIcon, $Object*, $Class*, $String*)},
	{"makeInputMap", "([Ljava/lang/Object;)Ljavax/swing/InputMap;", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, makeInputMap, $InputMap*, $ObjectArray*)},
	{"makeKeyBindings", "([Ljava/lang/Object;)[Ljavax/swing/text/JTextComponent$KeyBinding;", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, makeKeyBindings, $JTextComponent$KeyBindingArray*, $ObjectArray*)},
	{"provideErrorFeedback", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, provideErrorFeedback, void, $Component*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, toString, $String*)},
	{"uninitialize", "()V", nullptr, $PUBLIC, $virtualMethod(LookAndFeel, uninitialize, void)},
	{"uninstallBorder", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LookAndFeel, uninstallBorder, void, $JComponent*)},
	{}
};

$ClassInfo _LookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.LookAndFeel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LookAndFeel_MethodInfo_
};

$Object* allocate$LookAndFeel($Class* clazz) {
	return $of($alloc(LookAndFeel));
}

void LookAndFeel::init$() {
}

void LookAndFeel::installColors($JComponent* c, $String* defaultBgName, $String* defaultFgName) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bg, $nc(c)->getBackground());
	if (bg == nullptr || $instanceOf($UIResource, bg)) {
		c->setBackground($($UIManager::getColor(defaultBgName)));
	}
	$var($Color, fg, c->getForeground());
	if (fg == nullptr || $instanceOf($UIResource, fg)) {
		c->setForeground($($UIManager::getColor(defaultFgName)));
	}
}

void LookAndFeel::installColorsAndFont($JComponent* c, $String* defaultBgName, $String* defaultFgName, $String* defaultFontName) {
	$useLocalCurrentObjectStackCache();
	$var($Font, f, $nc(c)->getFont());
	if (f == nullptr || $instanceOf($UIResource, f)) {
		c->setFont($($UIManager::getFont(defaultFontName)));
	}
	installColors(c, defaultBgName, defaultFgName);
}

void LookAndFeel::installBorder($JComponent* c, $String* defaultBorderName) {
	$useLocalCurrentObjectStackCache();
	$var($Border, b, $nc(c)->getBorder());
	if (b == nullptr || $instanceOf($UIResource, b)) {
		c->setBorder($($UIManager::getBorder(defaultBorderName)));
	}
}

void LookAndFeel::uninstallBorder($JComponent* c) {
	if ($instanceOf($UIResource, $($nc(c)->getBorder()))) {
		c->setBorder(nullptr);
	}
}

void LookAndFeel::installProperty($JComponent* c, $String* propertyName, Object$* propertyValue) {
	if ($SunToolkit::isInstanceOf($of(c), "javax.swing.JPasswordField"_s)) {
		if (!$nc(($cast($JPasswordField, c)))->customSetUIProperty(propertyName, propertyValue)) {
			$nc(c)->setUIProperty(propertyName, propertyValue);
		}
	} else {
		$nc(c)->setUIProperty(propertyName, propertyValue);
	}
}

$JTextComponent$KeyBindingArray* LookAndFeel::makeKeyBindings($ObjectArray* keyBindingList) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent$KeyBindingArray, rv, $new($JTextComponent$KeyBindingArray, $nc(keyBindingList)->length / 2));
	for (int32_t i = 0; i < rv->length; ++i) {
		$var($Object0, o, keyBindingList->get(2 * i));
		$var($KeyStroke, keystroke, ($instanceOf($KeyStroke, o)) ? $cast($KeyStroke, o) : $KeyStroke::getKeyStroke($cast($String, o)));
		$var($String, action, $cast($String, keyBindingList->get(2 * i + 1)));
		rv->set(i, $$new($JTextComponent$KeyBinding, keystroke, action));
	}
	return rv;
}

$InputMap* LookAndFeel::makeInputMap($ObjectArray* keys) {
	$var($InputMap, retMap, $new($InputMapUIResource));
	loadKeyBindings(retMap, keys);
	return retMap;
}

$ComponentInputMap* LookAndFeel::makeComponentInputMap($JComponent* c, $ObjectArray* keys) {
	$var($ComponentInputMap, retMap, $new($ComponentInputMapUIResource, c));
	loadKeyBindings(retMap, keys);
	return retMap;
}

void LookAndFeel::loadKeyBindings($InputMap* retMap, $ObjectArray* keys) {
	$useLocalCurrentObjectStackCache();
	if (keys != nullptr) {
		{
			int32_t counter = 0;
			int32_t maxCounter = keys->length;
			for (; counter < maxCounter; ++counter) {
				$var($Object0, keyStrokeO, keys->get(counter++));
				$var($KeyStroke, ks, ($instanceOf($KeyStroke, keyStrokeO)) ? $cast($KeyStroke, keyStrokeO) : $KeyStroke::getKeyStroke($cast($String, keyStrokeO)));
				$nc(retMap)->put(ks, keys->get(counter));
			}
		}
	}
}

$Object* LookAndFeel::makeIcon($Class* baseClass, $String* gifFile) {
	return $of($SwingUtilities2::makeIcon_Unprivileged(baseClass, baseClass, gifFile));
}

$LayoutStyle* LookAndFeel::getLayoutStyle() {
	return $DefaultLayoutStyle::getInstance();
}

void LookAndFeel::provideErrorFeedback($Component* component) {
	$var($Toolkit, toolkit, nullptr);
	if (component != nullptr) {
		$assign(toolkit, component->getToolkit());
	} else {
		$assign(toolkit, $Toolkit::getDefaultToolkit());
	}
	$nc(toolkit)->beep();
}

$Object* LookAndFeel::getDesktopPropertyValue($String* systemPropertyName, Object$* fallbackValue) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty(systemPropertyName));
	if (value == nullptr) {
		return $of(fallbackValue);
	} else if ($instanceOf($Color, value)) {
		return $of($new($ColorUIResource, $cast($Color, value)));
	} else if ($instanceOf($Font, value)) {
		return $of($new($FontUIResource, $cast($Font, value)));
	}
	return $of(value);
}

$Icon* LookAndFeel::getDisabledIcon($JComponent* component, $Icon* icon) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ImageIcon, icon)) {
		return $new($ImageIconUIResource, $($GrayFilter::createDisabledImage($($nc(($cast($ImageIcon, icon)))->getImage()))));
	}
	return nullptr;
}

$Icon* LookAndFeel::getDisabledSelectedIcon($JComponent* component, $Icon* icon) {
	return getDisabledIcon(component, icon);
}

bool LookAndFeel::getSupportsWindowDecorations() {
	return false;
}

void LookAndFeel::initialize() {
}

void LookAndFeel::uninitialize() {
}

$UIDefaults* LookAndFeel::getDefaults() {
	return nullptr;
}

$String* LookAndFeel::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"["_s, $(getDescription()), " - "_s}));
	$var($String, var$0, $$concat(var$1, $($of(this)->getClass()->getName())));
	return $concat(var$0, "]"_s);
}

LookAndFeel::LookAndFeel() {
}

$Class* LookAndFeel::load$($String* name, bool initialize) {
	$loadClass(LookAndFeel, name, initialize, &_LookAndFeel_ClassInfo_, allocate$LookAndFeel);
	return class$;
}

$Class* LookAndFeel::class$ = nullptr;

	} // swing
} // javax
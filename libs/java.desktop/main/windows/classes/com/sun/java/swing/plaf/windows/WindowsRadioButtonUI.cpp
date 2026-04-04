#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef TRUE
#undef WINDOWS_RADIO_BUTTON_UI_KEY

using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$Object* WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY = nullptr;

void WindowsRadioButtonUI::init$() {
	$BasicRadioButtonUI::init$();
	this->initialized = false;
}

$ComponentUI* WindowsRadioButtonUI::createUI($JComponent* c) {
	$init(WindowsRadioButtonUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(WindowsRadioButtonUI, windowsRadioButtonUI, $cast(WindowsRadioButtonUI, $nc(appContext)->get(WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY)));
	if (windowsRadioButtonUI == nullptr) {
		$assign(windowsRadioButtonUI, $new(WindowsRadioButtonUI));
		appContext->put(WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY, windowsRadioButtonUI);
	}
	return windowsRadioButtonUI;
}

void WindowsRadioButtonUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$BasicRadioButtonUI::installDefaults(b);
	if (!this->initialized) {
		this->dashedRectGapX = $$sure($Integer, $UIManager::get("Button.dashedRectGapX"_s))->intValue();
		this->dashedRectGapY = $$sure($Integer, $UIManager::get("Button.dashedRectGapY"_s))->intValue();
		this->dashedRectGapWidth = $$sure($Integer, $UIManager::get("Button.dashedRectGapWidth"_s))->intValue();
		this->dashedRectGapHeight = $$sure($Integer, $UIManager::get("Button.dashedRectGapHeight"_s))->intValue();
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		this->initialized = true;
	}
	if ($XPStyle::getXP() != nullptr) {
		$LookAndFeel::installProperty(b, "rolloverEnabled"_s, $Boolean::TRUE);
	}
}

void WindowsRadioButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::uninstallDefaults(b);
	this->initialized = false;
}

$Color* WindowsRadioButtonUI::getFocusColor() {
	return this->focusColor;
}

void WindowsRadioButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	$WindowsGraphicsUtils::paintText(g, b, textRect, text, getTextShiftOffset());
}

void WindowsRadioButtonUI::paintFocus($Graphics* g, $Rectangle* textRect, $Dimension* d) {
	$nc(g)->setColor($(getFocusColor()));
	$BasicGraphicsUtils::drawDashedRect(g, $nc(textRect)->x, $nc(textRect)->y, $nc(textRect)->width, $nc(textRect)->height);
}

$Dimension* WindowsRadioButtonUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($Dimension, d, $BasicRadioButtonUI::getPreferredSize(c));
	$var($AbstractButton, b, $cast($AbstractButton, c));
	if (d != nullptr && $nc(b)->isFocusPainted()) {
		if (d->width % 2 == 0) {
			d->width += 1;
		}
		if (d->height % 2 == 0) {
			d->height += 1;
		}
	}
	return d;
}

void WindowsRadioButtonUI::clinit$($Class* clazz) {
	$assignStatic(WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY, $new($Object));
}

WindowsRadioButtonUI::WindowsRadioButtonUI() {
}

$Class* WindowsRadioButtonUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WINDOWS_RADIO_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsRadioButtonUI, WINDOWS_RADIO_BUTTON_UI_KEY)},
		{"dashedRectGapX", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapX)},
		{"dashedRectGapY", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapY)},
		{"dashedRectGapWidth", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapWidth)},
		{"dashedRectGapHeight", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapHeight)},
		{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, focusColor)},
		{"initialized", "Z", nullptr, $PRIVATE, $field(WindowsRadioButtonUI, initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsRadioButtonUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsRadioButtonUI, createUI, $ComponentUI*, $JComponent*)},
		{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(WindowsRadioButtonUI, getFocusColor, $Color*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsRadioButtonUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $virtualMethod(WindowsRadioButtonUI, installDefaults, void, $AbstractButton*)},
		{"paintFocus", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PROTECTED, $virtualMethod(WindowsRadioButtonUI, paintFocus, void, $Graphics*, $Rectangle*, $Dimension*)},
		{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(WindowsRadioButtonUI, paintText, void, $Graphics*, $AbstractButton*, $Rectangle*, $String*)},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(WindowsRadioButtonUI, uninstallDefaults, void, $AbstractButton*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsRadioButtonUI",
		"javax.swing.plaf.basic.BasicRadioButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsRadioButtonUI, name, initialize, &classInfo$$, WindowsRadioButtonUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsRadioButtonUI);
	});
	return class$;
}

$Class* WindowsRadioButtonUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com
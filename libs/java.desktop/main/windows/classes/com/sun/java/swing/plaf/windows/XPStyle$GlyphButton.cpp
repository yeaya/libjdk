#include <com/sun/java/swing/plaf/windows/XPStyle$GlyphButton.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef DISABLED
#undef HOT
#undef MAX_VALUE
#undef NORMAL
#undef PRESSED

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void XPStyle$GlyphButton::init$($Component* parent, $TMSchema$Part* part) {
	$useLocalObjectStack();
	$JButton::init$();
	$var($XPStyle, xp, $XPStyle::getXP());
	$set(this, skin, xp != nullptr ? xp->getSkin(parent, part) : ($XPStyle$Skin*)nullptr);
	setBorder(nullptr);
	setContentAreaFilled(false);
	setMinimumSize($$new($Dimension, 5, 5));
	setPreferredSize($$new($Dimension, 16, 16));
	setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE));
}

bool XPStyle$GlyphButton::isFocusTraversable() {
	return false;
}

$TMSchema$State* XPStyle$GlyphButton::getState() {
	$useLocalObjectStack();
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	if (!isEnabled()) {
		state = $TMSchema$State::DISABLED;
	} else if ($$nc(getModel())->isPressed()) {
		state = $TMSchema$State::PRESSED;
	} else if ($$nc(getModel())->isRollover()) {
		state = $TMSchema$State::HOT;
	}
	return state;
}

void XPStyle$GlyphButton::paintComponent($Graphics* g) {
	$useLocalObjectStack();
	if ($XPStyle::getXP() == nullptr || this->skin == nullptr) {
		return;
	}
	$var($Dimension, d, getSize());
	$nc(this->skin)->paintSkin(g, 0, 0, $nc(d)->width, $nc(d)->height, $(getState()));
}

void XPStyle$GlyphButton::setPart($Component* parent, $TMSchema$Part* part) {
	$var($XPStyle, xp, $XPStyle::getXP());
	$set(this, skin, xp != nullptr ? xp->getSkin(parent, part) : ($XPStyle$Skin*)nullptr);
	revalidate();
	repaint();
}

void XPStyle$GlyphButton::paintBorder($Graphics* g) {
}

XPStyle$GlyphButton::XPStyle$GlyphButton() {
}

$Class* XPStyle$GlyphButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"skin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PROTECTED, $field(XPStyle$GlyphButton, skin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, $PUBLIC, $method(XPStyle$GlyphButton, init$, void, $Component*, $TMSchema$Part*)},
		{"getState", "()Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PROTECTED, $virtualMethod(XPStyle$GlyphButton, getState, $TMSchema$State*)},
		{"isFocusTraversable", "()Z", nullptr, $PUBLIC, $virtualMethod(XPStyle$GlyphButton, isFocusTraversable, bool)},
		{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(XPStyle$GlyphButton, paintBorder, void, $Graphics*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(XPStyle$GlyphButton, paintComponent, void, $Graphics*)},
		{"setPart", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, $PUBLIC, $virtualMethod(XPStyle$GlyphButton, setPart, void, $Component*, $TMSchema$Part*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton", "com.sun.java.swing.plaf.windows.XPStyle", "GlyphButton", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.XPStyle"
	};
	$loadClass(XPStyle$GlyphButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XPStyle$GlyphButton));
	});
	return class$;
}

$Class* XPStyle$GlyphButton::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com
#include <javax/accessibility/AccessibleComponent.h>

#include <java/awt/Color.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleComponent_MethodInfo_[] = {
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, addFocusListener, void, $FocusListener*)},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, contains, bool, $Point*)},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getAccessibleAt, $Accessible*, $Point*)},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getBackground, $Color*)},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getBounds, $Rectangle*)},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getCursor, $Cursor*)},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getFont, $Font*)},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getFontMetrics, $FontMetrics*, $Font*)},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getForeground, $Color*)},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getLocation, $Point*)},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getLocationOnScreen, $Point*)},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, getSize, $Dimension*)},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, isEnabled, bool)},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, isFocusTraversable, bool)},
	{"isShowing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, isShowing, bool)},
	{"isVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, isVisible, bool)},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, removeFocusListener, void, $FocusListener*)},
	{"requestFocus", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, requestFocus, void)},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setBackground, void, $Color*)},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setBounds, void, $Rectangle*)},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setCursor, void, $Cursor*)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setFont, void, $Font*)},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setForeground, void, $Color*)},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setLocation, void, $Point*)},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setSize, void, $Dimension*)},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleComponent, setVisible, void, bool)},
	{}
};

$ClassInfo _AccessibleComponent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleComponent",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleComponent_MethodInfo_
};

$Object* allocate$AccessibleComponent($Class* clazz) {
	return $of($alloc(AccessibleComponent));
}

$Class* AccessibleComponent::load$($String* name, bool initialize) {
	$loadClass(AccessibleComponent, name, initialize, &_AccessibleComponent_ClassInfo_, allocate$AccessibleComponent);
	return class$;
}

$Class* AccessibleComponent::class$ = nullptr;

	} // accessibility
} // javax
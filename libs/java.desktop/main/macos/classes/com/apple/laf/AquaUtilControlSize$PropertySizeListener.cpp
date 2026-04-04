#include <com/apple/laf/AquaUtilControlSize$PropertySizeListener.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <jcpp.h>

#undef REGULAR

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$Sizeable = ::com::apple::laf::AquaUtilControlSize$Sizeable;
using $Font = ::java::awt::Font;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;

namespace com {
	namespace apple {
		namespace laf {

void AquaUtilControlSize$PropertySizeListener::init$() {
}

void AquaUtilControlSize$PropertySizeListener::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($String, key, $nc(evt)->getPropertyName());
	if (!"JComponent.sizeVariant"_s->equalsIgnoreCase(key)) {
		return;
	}
	$var($Object, source, evt->getSource());
	if (!($instanceOf($JComponent, source))) {
		return;
	}
	$var($JComponent, c, $cast($JComponent, source));
	applyComponentSize(c, $(evt->getNewValue()));
}

void AquaUtilControlSize$PropertySizeListener::applyComponentSize($JComponent* c, Object$* value) {
	$init(AquaUtilControlSize$PropertySizeListener);
	$useLocalObjectStack();
	$var($JRSUIConstants$Size, size, $AquaUtilControlSize::getSizeFromString(value == nullptr ? ($String*)nullptr : $($of(value)->toString())));
	if (size == nullptr) {
		$assign(size, $AquaUtilControlSize::getUserSizeFrom(c));
		$init($JRSUIConstants$Size);
		if (size == $JRSUIConstants$Size::REGULAR) {
			return;
		}
	}
	$AquaUtilControlSize::applyBorderForSize(c, size);
	$var($Object, ui, $nc(c)->getUI());
	if ($instanceOf($AquaUtilControlSize$Sizeable, ui)) {
		$cast($AquaUtilControlSize$Sizeable, ui)->applySizeFor(c, size);
	}
	$var($Font, priorFont, c->getFont());
	if (!($instanceOf($FontUIResource, priorFont))) {
		return;
	}
	c->setFont($($AquaUtilControlSize::getFontForSize(c, size)));
}

AquaUtilControlSize$PropertySizeListener::AquaUtilControlSize$PropertySizeListener() {
}

$Class* AquaUtilControlSize$PropertySizeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AquaUtilControlSize$PropertySizeListener, init$, void)},
		{"applyComponentSize", "(Ljavax/swing/JComponent;Ljava/lang/Object;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize$PropertySizeListener, applyComponentSize, void, $JComponent*, Object$*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaUtilControlSize$PropertySizeListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtilControlSize$PropertySizeListener", "com.apple.laf.AquaUtilControlSize", "PropertySizeListener", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaUtilControlSize$PropertySizeListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtilControlSize"
	};
	$loadClass(AquaUtilControlSize$PropertySizeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtilControlSize$PropertySizeListener);
	});
	return class$;
}

$Class* AquaUtilControlSize$PropertySizeListener::class$ = nullptr;

		} // laf
	} // apple
} // com
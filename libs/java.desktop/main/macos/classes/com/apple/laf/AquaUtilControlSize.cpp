#include <com/apple/laf/AquaUtilControlSize.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFonts.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$PropertySizeListener.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/security/AccessController.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY_KEY
#undef LARGE
#undef MINI
#undef REGULAR
#undef SMALL
#undef SYSTEM_PROPERTY_KEY

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFonts = ::com::apple::laf::AquaFonts;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$PropertySizeListener = ::com::apple::laf::AquaUtilControlSize$PropertySizeListener;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace apple {
		namespace laf {

$String* AquaUtilControlSize::CLIENT_PROPERTY_KEY = nullptr;
$String* AquaUtilControlSize::SYSTEM_PROPERTY_KEY = nullptr;
$AquaUtils$RecyclableSingleton* AquaUtilControlSize::sizeListener = nullptr;
$JRSUIConstants$Size* AquaUtilControlSize::defaultSize = nullptr;

void AquaUtilControlSize::init$() {
}

$AquaUtilControlSize$PropertySizeListener* AquaUtilControlSize::getSizeListener() {
	$init(AquaUtilControlSize);
	return $cast($AquaUtilControlSize$PropertySizeListener, AquaUtilControlSize::sizeListener->get());
}

void AquaUtilControlSize::addSizePropertyListener($JComponent* c) {
	$init(AquaUtilControlSize);
	$useLocalObjectStack();
	$nc(c)->addPropertyChangeListener(AquaUtilControlSize::CLIENT_PROPERTY_KEY, $(getSizeListener()));
	$AquaUtilControlSize$PropertySizeListener::applyComponentSize(c, $(c->getClientProperty(AquaUtilControlSize::CLIENT_PROPERTY_KEY)));
}

void AquaUtilControlSize::removeSizePropertyListener($JComponent* c) {
	$init(AquaUtilControlSize);
	$nc(c)->removePropertyChangeListener(AquaUtilControlSize::CLIENT_PROPERTY_KEY, $(getSizeListener()));
}

$JRSUIConstants$Size* AquaUtilControlSize::getSizeFromString($String* name) {
	$init(AquaUtilControlSize);
	if ("regular"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::REGULAR;
	}
	if ("small"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::SMALL;
	}
	if ("mini"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::MINI;
	}
	if ("large"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::LARGE;
	}
	return nullptr;
}

$JRSUIConstants$Size* AquaUtilControlSize::getDefaultSize() {
	$init(AquaUtilControlSize);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, sizeProperty, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, AquaUtilControlSize::SYSTEM_PROPERTY_KEY))));
	$var($JRSUIConstants$Size, size, getSizeFromString(sizeProperty));
	if (size != nullptr) {
		return size;
	}
	$init($JRSUIConstants$Size);
	return $JRSUIConstants$Size::REGULAR;
}

$JRSUIConstants$Size* AquaUtilControlSize::getUserSizeFrom($JComponent* c) {
	$init(AquaUtilControlSize);
	$useLocalObjectStack();
	$var($Object, sizeProp, $nc(c)->getClientProperty(AquaUtilControlSize::CLIENT_PROPERTY_KEY));
	if (sizeProp == nullptr) {
		return AquaUtilControlSize::defaultSize;
	}
	$var($JRSUIConstants$Size, size, getSizeFromString($($nc(sizeProp)->toString())));
	if (size == nullptr) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::REGULAR;
	}
	return size;
}

$JRSUIConstants$Size* AquaUtilControlSize::applySizeForControl($JComponent* c, $AquaPainter* painter) {
	$init(AquaUtilControlSize);
	$useLocalObjectStack();
	$var($JRSUIConstants$Size, sizeFromUser, getUserSizeFrom(c));
	$init($JRSUIConstants$Size);
	$var($JRSUIConstants$Size, size, sizeFromUser == nullptr ? $JRSUIConstants$Size::REGULAR : sizeFromUser);
	$nc($nc(painter)->state)->set(size);
	return size;
}

$Font* AquaUtilControlSize::getFontForSize($Component* c, $JRSUIConstants$Size* size) {
	$init(AquaUtilControlSize);
	$useLocalObjectStack();
	$var($Font, initialFont, $nc(c)->getFont());
	if (size == nullptr || !($instanceOf($UIResource, initialFont))) {
		return initialFont;
	}
	$init($JRSUIConstants$Size);
	if (size == $JRSUIConstants$Size::MINI) {
		return $nc(initialFont)->deriveFont($$nc($AquaFonts::getMiniControlTextFont())->getSize2D());
	}
	if (size == $JRSUIConstants$Size::SMALL) {
		return $nc(initialFont)->deriveFont($$nc($AquaFonts::getSmallControlTextFont())->getSize2D());
	}
	return $nc(initialFont)->deriveFont($$nc($AquaFonts::getControlTextFont())->getSize2D());
}

void AquaUtilControlSize::applyBorderForSize($JComponent* c, $JRSUIConstants$Size* size) {
	$init(AquaUtilControlSize);
	$useLocalObjectStack();
	$var($Border, border, $nc(c)->getBorder());
	if (!($instanceOf($AquaBorder, border))) {
		return;
	}
	$var($AquaBorder, aquaBorder, $cast($AquaBorder, border));
	if ($nc($nc(aquaBorder)->sizeVariant)->size == size) {
		return;
	}
	$var($AquaBorder, derivedBorder, aquaBorder->deriveBorderForSize(size));
	if (derivedBorder == nullptr) {
		return;
	}
	c->setBorder(derivedBorder);
}

void AquaUtilControlSize::clinit$($Class* clazz) {
	$assignStatic(AquaUtilControlSize::CLIENT_PROPERTY_KEY, "JComponent.sizeVariant"_s);
	$assignStatic(AquaUtilControlSize::SYSTEM_PROPERTY_KEY, "swing.component.sizevariant"_s);
	$load($AquaUtilControlSize$PropertySizeListener);
	$assignStatic(AquaUtilControlSize::sizeListener, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaUtilControlSize$PropertySizeListener::class$));
	$assignStatic(AquaUtilControlSize::defaultSize, AquaUtilControlSize::getDefaultSize());
}

AquaUtilControlSize::AquaUtilControlSize() {
}

$Class* AquaUtilControlSize::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLIENT_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaUtilControlSize, CLIENT_PROPERTY_KEY)},
		{"SYSTEM_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaUtilControlSize, SYSTEM_PROPERTY_KEY)},
		{"sizeListener", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$PropertySizeListener;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaUtilControlSize, sizeListener)},
		{"defaultSize", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaUtilControlSize, defaultSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaUtilControlSize, init$, void)},
		{"addSizePropertyListener", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize, addSizePropertyListener, void, $JComponent*)},
		{"applyBorderForSize", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AquaUtilControlSize, applyBorderForSize, void, $JComponent*, $JRSUIConstants$Size*)},
		{"applySizeForControl", "(Ljavax/swing/JComponent;Lcom/apple/laf/AquaPainter;)Lapple/laf/JRSUIConstants$Size;", "(Ljavax/swing/JComponent;Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;)Lapple/laf/JRSUIConstants$Size;", $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize, applySizeForControl, $JRSUIConstants$Size*, $JComponent*, $AquaPainter*)},
		{"getDefaultSize", "()Lapple/laf/JRSUIConstants$Size;", nullptr, $PRIVATE | $STATIC, $staticMethod(AquaUtilControlSize, getDefaultSize, $JRSUIConstants$Size*)},
		{"getFontForSize", "(Ljava/awt/Component;Lapple/laf/JRSUIConstants$Size;)Ljava/awt/Font;", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize, getFontForSize, $Font*, $Component*, $JRSUIConstants$Size*)},
		{"getSizeFromString", "(Ljava/lang/String;)Lapple/laf/JRSUIConstants$Size;", nullptr, $PRIVATE | $STATIC, $staticMethod(AquaUtilControlSize, getSizeFromString, $JRSUIConstants$Size*, $String*)},
		{"getSizeListener", "()Lcom/apple/laf/AquaUtilControlSize$PropertySizeListener;", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize, getSizeListener, $AquaUtilControlSize$PropertySizeListener*)},
		{"getUserSizeFrom", "(Ljavax/swing/JComponent;)Lapple/laf/JRSUIConstants$Size;", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize, getUserSizeFrom, $JRSUIConstants$Size*, $JComponent*)},
		{"removeSizePropertyListener", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(AquaUtilControlSize, removeSizePropertyListener, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtilControlSize$SizeVariant", "com.apple.laf.AquaUtilControlSize", "SizeVariant", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaUtilControlSize$PropertySizeListener", "com.apple.laf.AquaUtilControlSize", "PropertySizeListener", $PROTECTED | $STATIC},
		{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaUtilControlSize",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaUtilControlSize$SizeVariant,com.apple.laf.AquaUtilControlSize$SizeDescriptor,com.apple.laf.AquaUtilControlSize$PropertySizeListener,com.apple.laf.AquaUtilControlSize$Sizeable"
	};
	$loadClass(AquaUtilControlSize, name, initialize, &classInfo$$, AquaUtilControlSize::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtilControlSize);
	});
	return class$;
}

$Class* AquaUtilControlSize::class$ = nullptr;

		} // laf
	} // apple
} // com
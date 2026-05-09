#include <com/apple/laf/AquaImageFactory.h>
#include <apple/laf/JRSUIUtils$Images.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaImageFactory$1.h>
#include <com/apple/laf/AquaImageFactory$2.h>
#include <com/apple/laf/AquaImageFactory$3.h>
#include <com/apple/laf/AquaImageFactory$4.h>
#include <com/apple/laf/AquaImageFactory$5.h>
#include <com/apple/laf/AquaImageFactory$6.h>
#include <com/apple/laf/AquaImageFactory$7.h>
#include <com/apple/laf/AquaImageFactory$IconUIResourceSingleton.h>
#include <com/apple/laf/AquaImageFactory$InvertableImageIcon.h>
#include <com/apple/laf/AquaImageFactory$NamedImageSingleton.h>
#include <com/apple/laf/AquaImageFactory$SystemColorProxy.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/util/function/Function.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

#undef EAST
#undef INACTIVE_SELECTION_BACKGROUND_COLOR
#undef INACTIVE_SELECTION_FOREGROUND_COLOR
#undef KEYBOARD_FOCUS_COLOR
#undef KEY_RENDERING
#undef NORTH
#undef SELECTED_CONTROL_TEXT_COLOR
#undef SOUTH
#undef TYPE_INT_ARGB_PRE
#undef VALUE_RENDER_QUALITY
#undef WEST

using $JRSUIUtils$Images = ::apple::laf::JRSUIUtils$Images;
using $AquaIcon = ::com::apple::laf::AquaIcon;
using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaImageFactory$1 = ::com::apple::laf::AquaImageFactory$1;
using $AquaImageFactory$2 = ::com::apple::laf::AquaImageFactory$2;
using $AquaImageFactory$3 = ::com::apple::laf::AquaImageFactory$3;
using $AquaImageFactory$4 = ::com::apple::laf::AquaImageFactory$4;
using $AquaImageFactory$5 = ::com::apple::laf::AquaImageFactory$5;
using $AquaImageFactory$6 = ::com::apple::laf::AquaImageFactory$6;
using $AquaImageFactory$7 = ::com::apple::laf::AquaImageFactory$7;
using $AquaImageFactory$IconUIResourceSingleton = ::com::apple::laf::AquaImageFactory$IconUIResourceSingleton;
using $AquaImageFactory$InvertableImageIcon = ::com::apple::laf::AquaImageFactory$InvertableImageIcon;
using $AquaImageFactory$NamedImageSingleton = ::com::apple::laf::AquaImageFactory$NamedImageSingleton;
using $AquaImageFactory$SystemColorProxy = ::com::apple::laf::AquaImageFactory$SystemColorProxy;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $RenderingHints = ::java::awt::RenderingHints;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Function = ::java::util::function::Function;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $SwingConstants = ::javax::swing::SwingConstants;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;
using $CImage = ::sun::lwawt::macosx::CImage;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0 : public $Function {
	$class(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0, $NO_CLASS_INIT, $Function)
public:
	void init$(int32_t width) {
		this->width = width;
	}
	virtual $Object* apply(Object$* rv) override {
		return AquaImageFactory::lambda$getAppIconCompositedOn$0(width, $cast($Image, rv));
	}
	int32_t width = 0;
};
$Class* AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"width", "I", nullptr, $PUBLIC, $field(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0, width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0, init$, void, int32_t)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0);
	});
	return class$;
}
$Class* AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0::class$ = nullptr;

$AquaImageFactory$NamedImageSingleton* AquaImageFactory::northArrow = nullptr;
$AquaImageFactory$IconUIResourceSingleton* AquaImageFactory::northArrowIcon = nullptr;
$AquaImageFactory$NamedImageSingleton* AquaImageFactory::southArrow = nullptr;
$AquaImageFactory$IconUIResourceSingleton* AquaImageFactory::southArrowIcon = nullptr;
$AquaImageFactory$NamedImageSingleton* AquaImageFactory::westArrow = nullptr;
$AquaImageFactory$IconUIResourceSingleton* AquaImageFactory::westArrowIcon = nullptr;
$AquaImageFactory$NamedImageSingleton* AquaImageFactory::eastArrow = nullptr;
$AquaImageFactory$IconUIResourceSingleton* AquaImageFactory::eastArrowIcon = nullptr;

void AquaImageFactory::init$() {
}

$IconUIResource* AquaImageFactory::getConfirmImageIcon() {
	$init(AquaImageFactory);
	return $new($IconUIResource, $$new($AquaImageFactory$1, AquaImageFactory::kAlertIconSize, AquaImageFactory::kAlertIconSize));
}

$IconUIResource* AquaImageFactory::getCautionImageIcon() {
	$init(AquaImageFactory);
	return getAppIconCompositedOn($($AquaIcon$SystemIcon::getCautionIcon()));
}

$IconUIResource* AquaImageFactory::getStopImageIcon() {
	$init(AquaImageFactory);
	return getAppIconCompositedOn($($AquaIcon$SystemIcon::getStopIcon()));
}

$IconUIResource* AquaImageFactory::getLockImageIcon() {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	if ($JRSUIUtils$Images::shouldUseLegacySecurityUIPath()) {
		$var($Image, lockIcon, $CImage::createImageFromFile("/System/Library/CoreServices/SecurityAgent.app/Contents/Resources/Security.icns"_s, (double)AquaImageFactory::kAlertIconSize, (double)AquaImageFactory::kAlertIconSize));
		return getAppIconCompositedOn(lockIcon);
	}
	$var($Image, lockIcon, $$nc($Toolkit::getDefaultToolkit())->getImage("NSImage://NSSecurity"_s));
	return getAppIconCompositedOn(lockIcon);
}

$Image* AquaImageFactory::getGenericJavaIcon() {
	$init(AquaImageFactory);
	$beforeCallerSensitive();
	return $cast($Image, $AccessController::doPrivileged($$new($AquaImageFactory$2)));
}

$String* AquaImageFactory::getPathToThisApplication() {
	$init(AquaImageFactory);
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged($$new($AquaImageFactory$3)));
}

$IconUIResource* AquaImageFactory::getAppIconCompositedOn($AquaIcon$SystemIcon* systemIcon) {
	$init(AquaImageFactory);
	$nc(systemIcon)->setSize(AquaImageFactory::kAlertIconSize, AquaImageFactory::kAlertIconSize);
	return getAppIconCompositedOn($(systemIcon->createImage()));
}

$IconUIResource* AquaImageFactory::getAppIconCompositedOn($Image* background) {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	if ($instanceOf($MultiResolutionCachedImage, background)) {
		int32_t width = background->getWidth(nullptr);
		$var($Image, mrIconImage, $cast($MultiResolutionCachedImage, background)->map($$new(AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0, width)));
		return $new($IconUIResource, $$new($ImageIcon, mrIconImage));
	}
	$var($BufferedImage, iconImage, getAppIconImageCompositedOn(background, 1));
	return $new($IconUIResource, $$new($ImageIcon, iconImage));
}

$BufferedImage* AquaImageFactory::getAppIconImageCompositedOn($Image* background, int32_t scaleFactor) {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	int32_t scaledAlertIconSize = AquaImageFactory::kAlertIconSize * scaleFactor;
	int32_t kAlertSubIconSize = $cast(int32_t, (scaledAlertIconSize * 0.5));
	int32_t kAlertSubIconInset = scaledAlertIconSize - kAlertSubIconSize;
	$var($Icon, smallAppIconScaled, $new($AquaImageFactory$4, kAlertSubIconSize, kAlertSubIconSize));
	$var($BufferedImage, image, $new($BufferedImage, scaledAlertIconSize, scaledAlertIconSize, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($Graphics, g, image->getGraphics());
	$nc(g)->drawImage(background, 0, 0, scaledAlertIconSize, scaledAlertIconSize, nullptr);
	if ($instanceOf($Graphics2D, g)) {
		$init($RenderingHints);
		$cast($Graphics2D, g)->setRenderingHint($RenderingHints::KEY_RENDERING, $RenderingHints::VALUE_RENDER_QUALITY);
	}
	smallAppIconScaled->paintIcon(nullptr, g, kAlertSubIconInset, kAlertSubIconInset);
	g->dispose();
	return image;
}

$IconUIResource* AquaImageFactory::getTreeFolderIcon() {
	$init(AquaImageFactory);
	return $AquaIcon$SystemIcon::getFolderIconUIResource();
}

$IconUIResource* AquaImageFactory::getTreeOpenFolderIcon() {
	$init(AquaImageFactory);
	return $AquaIcon$SystemIcon::getOpenFolderIconUIResource();
}

$IconUIResource* AquaImageFactory::getTreeDocumentIcon() {
	$init(AquaImageFactory);
	return $AquaIcon$SystemIcon::getDocumentIconUIResource();
}

$UIResource* AquaImageFactory::getTreeExpandedIcon() {
	$init(AquaImageFactory);
	return $AquaIcon::getIconFor($$new($AquaImageFactory$5), 20, 20);
}

$UIResource* AquaImageFactory::getTreeCollapsedIcon() {
	$init(AquaImageFactory);
	return $AquaIcon::getIconFor($$new($AquaImageFactory$6), 20, 20);
}

$UIResource* AquaImageFactory::getTreeRightToLeftCollapsedIcon() {
	$init(AquaImageFactory);
	return $AquaIcon::getIconFor($$new($AquaImageFactory$7), 20, 20);
}

$Image* AquaImageFactory::getArrowImageForDirection(int32_t direction) {
	$init(AquaImageFactory);
	switch (direction) {
	case $SwingConstants::NORTH:
		return $cast($Image, AquaImageFactory::northArrow->get());
	case $SwingConstants::SOUTH:
		return $cast($Image, AquaImageFactory::southArrow->get());
	case $SwingConstants::EAST:
		return $cast($Image, AquaImageFactory::eastArrow->get());
	case $SwingConstants::WEST:
		return $cast($Image, AquaImageFactory::westArrow->get());
	}
	return nullptr;
}

$Icon* AquaImageFactory::getArrowIconForDirection(int32_t direction) {
	$init(AquaImageFactory);
	switch (direction) {
	case $SwingConstants::NORTH:
		return $cast($Icon, AquaImageFactory::northArrowIcon->get());
	case $SwingConstants::SOUTH:
		return $cast($Icon, AquaImageFactory::southArrowIcon->get());
	case $SwingConstants::EAST:
		return $cast($Icon, AquaImageFactory::eastArrowIcon->get());
	case $SwingConstants::WEST:
		return $cast($Icon, AquaImageFactory::westArrowIcon->get());
	}
	return nullptr;
}

$Icon* AquaImageFactory::getMenuArrowIcon() {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	return $cast($ImageIcon, $new($AquaImageFactory$InvertableImageIcon, $($AquaUtils::generateLightenedImage($$cast($Image, AquaImageFactory::eastArrow->get()), 25))));
}

$Icon* AquaImageFactory::getMenuItemCheckIcon() {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	return $cast($ImageIcon, $new($AquaImageFactory$InvertableImageIcon, $($AquaUtils::generateLightenedImage($(getNSIcon("NSMenuItemSelection"_s)), 25))));
}

$Icon* AquaImageFactory::getMenuItemDashIcon() {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	return $cast($ImageIcon, $new($AquaImageFactory$InvertableImageIcon, $($AquaUtils::generateLightenedImage($(getNSIcon("NSMenuMixedState"_s)), 25))));
}

$Image* AquaImageFactory::getNSIcon($String* imageName) {
	$init(AquaImageFactory);
	$useLocalObjectStack();
	$var($Image, icon, $$nc($Toolkit::getDefaultToolkit())->getImage($$str({"NSImage://"_s, imageName})));
	return icon;
}

$Color* AquaImageFactory::getWindowBackgroundColorUIResource() {
	$init(AquaImageFactory);
	$init($SystemColor);
	return $new($AquaImageFactory$SystemColorProxy, $SystemColor::window);
}

$Color* AquaImageFactory::getTextSelectionBackgroundColorUIResource() {
	$init(AquaImageFactory);
	$init($SystemColor);
	return $new($AquaImageFactory$SystemColorProxy, $SystemColor::textHighlight);
}

$Color* AquaImageFactory::getTextSelectionForegroundColorUIResource() {
	$init(AquaImageFactory);
	$init($SystemColor);
	return $new($AquaImageFactory$SystemColorProxy, $SystemColor::textHighlightText);
}

$Color* AquaImageFactory::getSelectionBackgroundColorUIResource() {
	$init(AquaImageFactory);
	$init($SystemColor);
	return $new($AquaImageFactory$SystemColorProxy, $SystemColor::controlHighlight);
}

$Color* AquaImageFactory::getSelectionForegroundColorUIResource() {
	$init(AquaImageFactory);
	$init($SystemColor);
	return $new($AquaImageFactory$SystemColorProxy, $SystemColor::controlLtHighlight);
}

$Color* AquaImageFactory::getFocusRingColorUIResource() {
	$init(AquaImageFactory);
	return $new($AquaImageFactory$SystemColorProxy, $($LWCToolkit::getAppleColor($LWCToolkit::KEYBOARD_FOCUS_COLOR)));
}

$Color* AquaImageFactory::getSelectionInactiveBackgroundColorUIResource() {
	$init(AquaImageFactory);
	return $new($AquaImageFactory$SystemColorProxy, $($LWCToolkit::getAppleColor($LWCToolkit::INACTIVE_SELECTION_BACKGROUND_COLOR)));
}

$Color* AquaImageFactory::getSelectionInactiveForegroundColorUIResource() {
	$init(AquaImageFactory);
	return $new($AquaImageFactory$SystemColorProxy, $($LWCToolkit::getAppleColor($LWCToolkit::INACTIVE_SELECTION_FOREGROUND_COLOR)));
}

$Color* AquaImageFactory::getSelectedControlColorUIResource() {
	$init(AquaImageFactory);
	return $new($AquaImageFactory$SystemColorProxy, $($LWCToolkit::getAppleColor($LWCToolkit::SELECTED_CONTROL_TEXT_COLOR)));
}

$Image* AquaImageFactory::lambda$getAppIconCompositedOn$0(int32_t width, $Image* rv) {
	$init(AquaImageFactory);
	return getAppIconImageCompositedOn(rv, $div($nc(rv)->getWidth(nullptr), width));
}

void AquaImageFactory::clinit$($Class* clazz) {
	$assignStatic(AquaImageFactory::northArrow, $new($AquaImageFactory$NamedImageSingleton, "NSMenuScrollUp"_s));
	$assignStatic(AquaImageFactory::northArrowIcon, $new($AquaImageFactory$IconUIResourceSingleton, AquaImageFactory::northArrow));
	$assignStatic(AquaImageFactory::southArrow, $new($AquaImageFactory$NamedImageSingleton, "NSMenuScrollDown"_s));
	$assignStatic(AquaImageFactory::southArrowIcon, $new($AquaImageFactory$IconUIResourceSingleton, AquaImageFactory::southArrow));
	$assignStatic(AquaImageFactory::westArrow, $new($AquaImageFactory$NamedImageSingleton, "NSMenuSubmenuLeft"_s));
	$assignStatic(AquaImageFactory::westArrowIcon, $new($AquaImageFactory$IconUIResourceSingleton, AquaImageFactory::westArrow));
	$assignStatic(AquaImageFactory::eastArrow, $new($AquaImageFactory$NamedImageSingleton, "NSMenuSubmenu"_s));
	$assignStatic(AquaImageFactory::eastArrowIcon, $new($AquaImageFactory$IconUIResourceSingleton, AquaImageFactory::eastArrow));
}

AquaImageFactory::AquaImageFactory() {
}

$Class* AquaImageFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.apple.laf.AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0")) {
			return AquaImageFactory$$Lambda$lambda$getAppIconCompositedOn$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"kAlertIconSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaImageFactory, kAlertIconSize)},
		{"northArrow", "Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, northArrow)},
		{"northArrowIcon", "Lcom/apple/laf/AquaImageFactory$IconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, northArrowIcon)},
		{"southArrow", "Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, southArrow)},
		{"southArrowIcon", "Lcom/apple/laf/AquaImageFactory$IconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, southArrowIcon)},
		{"westArrow", "Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, westArrow)},
		{"westArrowIcon", "Lcom/apple/laf/AquaImageFactory$IconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, westArrowIcon)},
		{"eastArrow", "Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, eastArrow)},
		{"eastArrowIcon", "Lcom/apple/laf/AquaImageFactory$IconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaImageFactory, eastArrowIcon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaImageFactory, init$, void)},
		{"getAppIconCompositedOn", "(Lcom/apple/laf/AquaIcon$SystemIcon;)Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getAppIconCompositedOn, $IconUIResource*, $AquaIcon$SystemIcon*)},
		{"getAppIconCompositedOn", "(Ljava/awt/Image;)Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getAppIconCompositedOn, $IconUIResource*, $Image*)},
		{"getAppIconImageCompositedOn", "(Ljava/awt/Image;I)Ljava/awt/image/BufferedImage;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getAppIconImageCompositedOn, $BufferedImage*, $Image*, int32_t)},
		{"getArrowIconForDirection", "(I)Ljavax/swing/Icon;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getArrowIconForDirection, $Icon*, int32_t)},
		{"getArrowImageForDirection", "(I)Ljava/awt/Image;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getArrowImageForDirection, $Image*, int32_t)},
		{"getCautionImageIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getCautionImageIcon, $IconUIResource*)},
		{"getConfirmImageIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getConfirmImageIcon, $IconUIResource*)},
		{"getFocusRingColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getFocusRingColorUIResource, $Color*)},
		{"getGenericJavaIcon", "()Ljava/awt/Image;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getGenericJavaIcon, $Image*)},
		{"getLockImageIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getLockImageIcon, $IconUIResource*)},
		{"getMenuArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getMenuArrowIcon, $Icon*)},
		{"getMenuItemCheckIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getMenuItemCheckIcon, $Icon*)},
		{"getMenuItemDashIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getMenuItemDashIcon, $Icon*)},
		{"getNSIcon", "(Ljava/lang/String;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $staticMethod(AquaImageFactory, getNSIcon, $Image*, $String*)},
		{"getPathToThisApplication", "()Ljava/lang/String;", nullptr, $STATIC, $staticMethod(AquaImageFactory, getPathToThisApplication, $String*)},
		{"getSelectedControlColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getSelectedControlColorUIResource, $Color*)},
		{"getSelectionBackgroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getSelectionBackgroundColorUIResource, $Color*)},
		{"getSelectionForegroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getSelectionForegroundColorUIResource, $Color*)},
		{"getSelectionInactiveBackgroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getSelectionInactiveBackgroundColorUIResource, $Color*)},
		{"getSelectionInactiveForegroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getSelectionInactiveForegroundColorUIResource, $Color*)},
		{"getStopImageIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getStopImageIcon, $IconUIResource*)},
		{"getTextSelectionBackgroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTextSelectionBackgroundColorUIResource, $Color*)},
		{"getTextSelectionForegroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTextSelectionForegroundColorUIResource, $Color*)},
		{"getTreeCollapsedIcon", "()Ljavax/swing/plaf/UIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTreeCollapsedIcon, $UIResource*)},
		{"getTreeDocumentIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTreeDocumentIcon, $IconUIResource*)},
		{"getTreeExpandedIcon", "()Ljavax/swing/plaf/UIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTreeExpandedIcon, $UIResource*)},
		{"getTreeFolderIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTreeFolderIcon, $IconUIResource*)},
		{"getTreeOpenFolderIcon", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTreeOpenFolderIcon, $IconUIResource*)},
		{"getTreeRightToLeftCollapsedIcon", "()Ljavax/swing/plaf/UIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getTreeRightToLeftCollapsedIcon, $UIResource*)},
		{"getWindowBackgroundColorUIResource", "()Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaImageFactory, getWindowBackgroundColorUIResource, $Color*)},
		{"lambda$getAppIconCompositedOn$0", "(ILjava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaImageFactory, lambda$getAppIconCompositedOn$0, $Image*, int32_t, $Image*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$SystemColorProxy", "com.apple.laf.AquaImageFactory", "SystemColorProxy", $PRIVATE | $STATIC},
		{"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl", "com.apple.laf.AquaImageFactory", "RecyclableSlicedImageControl", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaImageFactory$SlicedImageControl", "com.apple.laf.AquaImageFactory", "SlicedImageControl", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaImageFactory$NineSliceMetrics", "com.apple.laf.AquaImageFactory", "NineSliceMetrics", $PUBLIC | $STATIC},
		{"com.apple.laf.AquaImageFactory$InvertableImageIcon", "com.apple.laf.AquaImageFactory", "InvertableImageIcon", $STATIC},
		{"com.apple.laf.AquaImageFactory$IconUIResourceSingleton", "com.apple.laf.AquaImageFactory", "IconUIResourceSingleton", $STATIC},
		{"com.apple.laf.AquaImageFactory$NamedImageSingleton", "com.apple.laf.AquaImageFactory", "NamedImageSingleton", $STATIC},
		{"com.apple.laf.AquaImageFactory$7", nullptr, nullptr, 0},
		{"com.apple.laf.AquaImageFactory$6", nullptr, nullptr, 0},
		{"com.apple.laf.AquaImageFactory$5", nullptr, nullptr, 0},
		{"com.apple.laf.AquaImageFactory$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaImageFactory$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaImageFactory$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaImageFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaImageFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory$SystemColorProxy,com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl,com.apple.laf.AquaImageFactory$SlicedImageControl,com.apple.laf.AquaImageFactory$NineSliceMetrics,com.apple.laf.AquaImageFactory$InvertableImageIcon,com.apple.laf.AquaImageFactory$IconUIResourceSingleton,com.apple.laf.AquaImageFactory$NamedImageSingleton,com.apple.laf.AquaImageFactory$7,com.apple.laf.AquaImageFactory$6,com.apple.laf.AquaImageFactory$5,com.apple.laf.AquaImageFactory$4,com.apple.laf.AquaImageFactory$3,com.apple.laf.AquaImageFactory$2,com.apple.laf.AquaImageFactory$1"
	};
	$loadClass(AquaImageFactory, name, initialize, &classInfo$$, AquaImageFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory);
	});
	return class$;
}

$Class* AquaImageFactory::class$ = nullptr;

		} // laf
	} // apple
} // com
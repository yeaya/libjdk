#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

#undef KEY_RENDERING
#undef VALUE_RENDER_QUALITY

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $RenderingHints = ::java::awt::RenderingHints;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaIcon$CachingScalingIcon::hashCode() {
	return this->$Icon::hashCode();
}

bool AquaIcon$CachingScalingIcon::equals(Object$* arg0) {
	return this->$Icon::equals(arg0);
}

$Object* AquaIcon$CachingScalingIcon::clone() {
	return this->$Icon::clone();
}

$String* AquaIcon$CachingScalingIcon::toString() {
	return this->$Icon::toString();
}

void AquaIcon$CachingScalingIcon::finalize() {
	this->$Icon::finalize();
}

void AquaIcon$CachingScalingIcon::init$(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

void AquaIcon$CachingScalingIcon::setSize(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
	$set(this, image, nullptr);
}

$Image* AquaIcon$CachingScalingIcon::getImage() {
	if (this->image != nullptr) {
		return this->image;
	}
	if (!$GraphicsEnvironment::isHeadless()) {
		$set(this, image, createImage());
	}
	return this->image;
}

bool AquaIcon$CachingScalingIcon::hasIconRef() {
	return getImage() != nullptr;
}

void AquaIcon$CachingScalingIcon::paintIcon($Component* c, $Graphics* g$renamed, int32_t x, int32_t y) {
	$useLocalObjectStack();
	$var($Graphics, g, g$renamed);
	$assign(g, $nc(g)->create());
	if ($instanceOf($Graphics2D, g)) {
		$init($RenderingHints);
		$cast($Graphics2D, g)->setRenderingHint($RenderingHints::KEY_RENDERING, $RenderingHints::VALUE_RENDER_QUALITY);
	}
	$var($Image, myImage, getImage());
	if (myImage != nullptr) {
		int32_t var$0 = getIconWidth();
		$nc(g)->drawImage(myImage, x, y, var$0, getIconHeight(), nullptr);
	}
	$nc(g)->dispose();
}

int32_t AquaIcon$CachingScalingIcon::getIconWidth() {
	return this->width;
}

int32_t AquaIcon$CachingScalingIcon::getIconHeight() {
	return this->height;
}

AquaIcon$CachingScalingIcon::AquaIcon$CachingScalingIcon() {
}

$Class* AquaIcon$CachingScalingIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"width", "I", nullptr, 0, $field(AquaIcon$CachingScalingIcon, width)},
		{"height", "I", nullptr, 0, $field(AquaIcon$CachingScalingIcon, height)},
		{"image", "Ljava/awt/Image;", nullptr, 0, $field(AquaIcon$CachingScalingIcon, image)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(AquaIcon$CachingScalingIcon, init$, void, int32_t, int32_t)},
		{"createImage", "()Ljava/awt/Image;", nullptr, $ABSTRACT, $virtualMethod(AquaIcon$CachingScalingIcon, createImage, $Image*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(AquaIcon$CachingScalingIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(AquaIcon$CachingScalingIcon, getIconWidth, int32_t)},
		{"getImage", "()Ljava/awt/Image;", nullptr, 0, $virtualMethod(AquaIcon$CachingScalingIcon, getImage, $Image*)},
		{"hasIconRef", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaIcon$CachingScalingIcon, hasIconRef, bool)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(AquaIcon$CachingScalingIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{"setSize", "(II)V", nullptr, 0, $virtualMethod(AquaIcon$CachingScalingIcon, setSize, void, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaIcon$CachingScalingIcon",
		"java.lang.Object",
		"javax.swing.Icon,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$CachingScalingIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaIcon$CachingScalingIcon));
	});
	return class$;
}

$Class* AquaIcon$CachingScalingIcon::class$ = nullptr;

		} // laf
	} // apple
} // com
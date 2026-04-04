#include <javax/swing/plaf/metal/OceanTheme$COIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void OceanTheme$COIcon::init$($Icon* ltr, $Icon* rtl) {
	$IconUIResource::init$(ltr);
	$set(this, rtl, rtl);
}

void OceanTheme$COIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if ($MetalUtils::isLeftToRight(c)) {
		$IconUIResource::paintIcon(c, g, x, y);
	} else {
		$nc(this->rtl)->paintIcon(c, g, x, y);
	}
}

OceanTheme$COIcon::OceanTheme$COIcon() {
}

$Class* OceanTheme$COIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rtl", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(OceanTheme$COIcon, rtl)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Icon;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(OceanTheme$COIcon, init$, void, $Icon*, $Icon*)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(OceanTheme$COIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.OceanTheme$COIcon", "javax.swing.plaf.metal.OceanTheme", "COIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.OceanTheme$COIcon",
		"javax.swing.plaf.IconUIResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.OceanTheme"
	};
	$loadClass(OceanTheme$COIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OceanTheme$COIcon));
	});
	return class$;
}

$Class* OceanTheme$COIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
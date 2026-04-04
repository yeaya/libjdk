#include <javax/swing/plaf/metal/MetalTitlePane$SystemMenuBar.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JMenuBar = ::javax::swing::JMenuBar;
using $UIManager = ::javax::swing::UIManager;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTitlePane$SystemMenuBar::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
	$JMenuBar::init$();
}

void MetalTitlePane$SystemMenuBar::paint($Graphics* g) {
	$useLocalObjectStack();
	if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
	if (this->this$0->systemIcon != nullptr) {
		$nc(g)->drawImage(this->this$0->systemIcon, 0, 0, 16, 16, nullptr);
	} else {
		$var($Icon, icon, $UIManager::getIcon("InternalFrame.icon"_s));
		if (icon != nullptr) {
			icon->paintIcon(this, g, 0, 0);
		}
	}
}

$Dimension* MetalTitlePane$SystemMenuBar::getMinimumSize() {
	return getPreferredSize();
}

$Dimension* MetalTitlePane$SystemMenuBar::getPreferredSize() {
	$var($Dimension, size, $JMenuBar::getPreferredSize());
	int32_t var$0 = $Math::max(16, $nc(size)->width);
	return $new($Dimension, var$0, $Math::max(size->height, 16));
}

MetalTitlePane$SystemMenuBar::MetalTitlePane$SystemMenuBar() {
}

$Class* MetalTitlePane$SystemMenuBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$SystemMenuBar, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PRIVATE, $method(MetalTitlePane$SystemMenuBar, init$, void, $MetalTitlePane*)},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$SystemMenuBar, getMinimumSize, $Dimension*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$SystemMenuBar, getPreferredSize, $Dimension*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$SystemMenuBar, paint, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar", "javax.swing.plaf.metal.MetalTitlePane", "SystemMenuBar", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar",
		"javax.swing.JMenuBar",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalTitlePane"
	};
	$loadClass(MetalTitlePane$SystemMenuBar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalTitlePane$SystemMenuBar));
	});
	return class$;
}

$Class* MetalTitlePane$SystemMenuBar::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
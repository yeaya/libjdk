#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKStockIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKStyle$GTKStockIcon::init$($String* key, int32_t size) {
	$set(this, key, key);
	this->size = size;
}

void GTKStyle$GTKStockIcon::paintIcon($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Icon, icon, getIcon(context));
	if (icon != nullptr) {
		if (context == nullptr) {
			icon->paintIcon(nullptr, g, x, y);
		} else {
			icon->paintIcon($(context->getComponent()), g, x, y);
		}
	}
}

int32_t GTKStyle$GTKStockIcon::getIconWidth($SynthContext* context) {
	$var($Icon, icon, getIcon(context));
	if (icon != nullptr) {
		return icon->getIconWidth();
	}
	return 0;
}

int32_t GTKStyle$GTKStockIcon::getIconHeight($SynthContext* context) {
	$var($Icon, icon, getIcon(context));
	if (icon != nullptr) {
		return icon->getIconHeight();
	}
	return 0;
}

$Icon* GTKStyle$GTKStockIcon::getIcon($SynthContext* context) {
	$useLocalObjectStack();
	if (context != nullptr) {
		$var($ComponentOrientation, co, $$nc(context->getComponent())->getComponentOrientation());
		$var($SynthStyle, style, context->getStyle());
		if (style != this->style) {
			$set(this, style, style);
			this->loadedLTR = (this->loadedRTL = false);
		}
		if (co == nullptr || co->isLeftToRight()) {
			if (!this->loadedLTR) {
				this->loadedLTR = true;
				$set(this, ltrIcon, $$sure($GTKStyle, context->getStyle())->getStockIcon(context, this->key, this->size));
			}
			return this->ltrIcon;
		} else if (!this->loadedRTL) {
			this->loadedRTL = true;
			$set(this, rtlIcon, $$sure($GTKStyle, context->getStyle())->getStockIcon(context, this->key, this->size));
		}
		return this->rtlIcon;
	}
	return this->ltrIcon;
}

GTKStyle$GTKStockIcon::GTKStyle$GTKStockIcon() {
}

$Class* GTKStyle$GTKStockIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, key)},
		{"size", "I", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, size)},
		{"loadedLTR", "Z", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, loadedLTR)},
		{"loadedRTL", "Z", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, loadedRTL)},
		{"ltrIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, ltrIcon)},
		{"rtlIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, rtlIcon)},
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(GTKStyle$GTKStockIcon, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(GTKStyle$GTKStockIcon, init$, void, $String*, int32_t)},
		{"getIcon", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(GTKStyle$GTKStockIcon, getIcon, $Icon*, $SynthContext*)},
		{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC, $virtualMethod(GTKStyle$GTKStockIcon, getIconHeight, int32_t, $SynthContext*)},
		{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC, $virtualMethod(GTKStyle$GTKStockIcon, getIconWidth, int32_t, $SynthContext*)},
		{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(GTKStyle$GTKStockIcon, paintIcon, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIcon", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKStockIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIcon",
		"java.lang.Object",
		"javax.swing.plaf.synth.SynthIcon",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKStyle"
	};
	$loadClass(GTKStyle$GTKStockIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKStyle$GTKStockIcon);
	});
	return class$;
}

$Class* GTKStyle$GTKStockIcon::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
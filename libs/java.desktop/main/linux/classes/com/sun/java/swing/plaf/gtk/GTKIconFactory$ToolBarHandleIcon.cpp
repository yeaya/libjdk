#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$ToolBarHandleIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$Orientation.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <com/sun/java/swing/plaf/gtk/GTKRegion.h>
#include <java/awt/Graphics.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

#undef ENABLED
#undef HANDLE_BOX
#undef HORIZONTAL
#undef INSTANCE
#undef PARAM_TYPES
#undef TYPE
#undef VERTICAL

using $GTKConstants$Orientation = ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation;
using $GTKIconFactory$DelegatingIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $GTKRegion = ::com::sun::java::swing::plaf::gtk::GTKRegion;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$ClassArray* GTKIconFactory$ToolBarHandleIcon::PARAM_TYPES = nullptr;

void GTKIconFactory$ToolBarHandleIcon::init$() {
	$GTKIconFactory$DelegatingIcon::init$("paintToolBarHandleIcon"_s);
}

$ClassArray* GTKIconFactory$ToolBarHandleIcon::getMethodParamTypes() {
	return GTKIconFactory$ToolBarHandleIcon::PARAM_TYPES;
}

void GTKIconFactory$ToolBarHandleIcon::paintIcon($SynthContext* context$renamed, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($SynthContext, context, context$renamed);
	if (context != nullptr) {
		$var($JToolBar, toolbar, $cast($JToolBar, context->getComponent()));
		$init($GTKConstants$Orientation);
		$GTKConstants$Orientation* orientation = ($nc(toolbar)->getOrientation() == $JToolBar::HORIZONTAL ? $GTKConstants$Orientation::HORIZONTAL : $GTKConstants$Orientation::VERTICAL);
		if (this->style == nullptr) {
			$init($GTKRegion);
			$set(this, style, $$nc($SynthLookAndFeel::getStyleFactory())->getStyle($(context->getComponent()), $GTKRegion::HANDLE_BOX));
		}
		$init($GTKRegion);
		$assign(context, $new($SynthContext, toolbar, $GTKRegion::HANDLE_BOX, this->style, $SynthConstants::ENABLED));
		$init($GTKPainter);
		$nc($GTKPainter::INSTANCE)->paintIcon(context, g, $(getMethod()), x, y, w, h, orientation);
	}
}

int32_t GTKIconFactory$ToolBarHandleIcon::getIconWidth($SynthContext* context) {
	$useLocalObjectStack();
	if (context == nullptr) {
		return 10;
	}
	if ($$sure($JToolBar, $nc(context)->getComponent())->getOrientation() == $JToolBar::HORIZONTAL) {
		return 10;
	} else {
		return $$nc(context->getComponent())->getWidth();
	}
}

int32_t GTKIconFactory$ToolBarHandleIcon::getIconHeight($SynthContext* context) {
	$useLocalObjectStack();
	if (context == nullptr) {
		return 10;
	}
	if ($$sure($JToolBar, $nc(context)->getComponent())->getOrientation() == $JToolBar::HORIZONTAL) {
		return $$nc(context->getComponent())->getHeight();
	} else {
		return 10;
	}
}

void GTKIconFactory$ToolBarHandleIcon::clinit$($Class* clazz) {
	$load($SynthContext);
	$load($Graphics);
	$load($GTKConstants$Orientation);
	$assignStatic(GTKIconFactory$ToolBarHandleIcon::PARAM_TYPES, $new($ClassArray, {
		$SynthContext::class$,
		$Graphics::class$,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$GTKConstants$Orientation::class$
	}));
}

GTKIconFactory$ToolBarHandleIcon::GTKIconFactory$ToolBarHandleIcon() {
}

$Class* GTKIconFactory$ToolBarHandleIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PARAM_TYPES", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory$ToolBarHandleIcon, PARAM_TYPES)},
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(GTKIconFactory$ToolBarHandleIcon, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GTKIconFactory$ToolBarHandleIcon, init$, void)},
		{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC, $virtualMethod(GTKIconFactory$ToolBarHandleIcon, getIconHeight, int32_t, $SynthContext*)},
		{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC, $virtualMethod(GTKIconFactory$ToolBarHandleIcon, getIconWidth, int32_t, $SynthContext*)},
		{"getMethodParamTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(GTKIconFactory$ToolBarHandleIcon, getMethodParamTypes, $ClassArray*)},
		{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(GTKIconFactory$ToolBarHandleIcon, paintIcon, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKIconFactory$ToolBarHandleIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "ToolBarHandleIcon", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "DelegatingIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKIconFactory$ToolBarHandleIcon",
		"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKIconFactory"
	};
	$loadClass(GTKIconFactory$ToolBarHandleIcon, name, initialize, &classInfo$$, GTKIconFactory$ToolBarHandleIcon::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKIconFactory$ToolBarHandleIcon));
	});
	return class$;
}

$Class* GTKIconFactory$ToolBarHandleIcon::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
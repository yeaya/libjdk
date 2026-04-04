#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$MenuArrowIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ArrowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

#undef INSTANCE
#undef LEFT
#undef PARAM_TYPES
#undef RIGHT
#undef TYPE

using $GTKConstants$ArrowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType;
using $GTKIconFactory$DelegatingIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$ClassArray* GTKIconFactory$MenuArrowIcon::PARAM_TYPES = nullptr;

void GTKIconFactory$MenuArrowIcon::init$() {
	$GTKIconFactory$DelegatingIcon::init$("paintMenuArrowIcon"_s);
}

$ClassArray* GTKIconFactory$MenuArrowIcon::getMethodParamTypes() {
	return GTKIconFactory$MenuArrowIcon::PARAM_TYPES;
}

void GTKIconFactory$MenuArrowIcon::paintIcon($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	if (context != nullptr) {
		$init($GTKConstants$ArrowType);
		$GTKConstants$ArrowType* arrowDir = $GTKConstants$ArrowType::RIGHT;
		if (!$$nc($$nc(context->getComponent())->getComponentOrientation())->isLeftToRight()) {
			arrowDir = $GTKConstants$ArrowType::LEFT;
		}
		$init($GTKPainter);
		$nc($GTKPainter::INSTANCE)->paintIcon(context, g, $(getMethod()), x, y, w, h, arrowDir);
	}
}

void GTKIconFactory$MenuArrowIcon::clinit$($Class* clazz) {
	$load($SynthContext);
	$load($Graphics);
	$load($GTKConstants$ArrowType);
	$assignStatic(GTKIconFactory$MenuArrowIcon::PARAM_TYPES, $new($ClassArray, {
		$SynthContext::class$,
		$Graphics::class$,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$GTKConstants$ArrowType::class$
	}));
}

GTKIconFactory$MenuArrowIcon::GTKIconFactory$MenuArrowIcon() {
}

$Class* GTKIconFactory$MenuArrowIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PARAM_TYPES", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory$MenuArrowIcon, PARAM_TYPES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GTKIconFactory$MenuArrowIcon, init$, void)},
		{"getMethodParamTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(GTKIconFactory$MenuArrowIcon, getMethodParamTypes, $ClassArray*)},
		{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(GTKIconFactory$MenuArrowIcon, paintIcon, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "DelegatingIcon", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon",
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
	$loadClass(GTKIconFactory$MenuArrowIcon, name, initialize, &classInfo$$, GTKIconFactory$MenuArrowIcon::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKIconFactory$MenuArrowIcon));
	});
	return class$;
}

$Class* GTKIconFactory$MenuArrowIcon::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
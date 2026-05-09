#include <javax/swing/plaf/synth/SynthSeparatorUI.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef ENABLED
#undef MAX_VALUE
#undef VERTICAL

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JComponent = ::javax::swing::JComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthSeparatorUI::hashCode() {
	return this->$SeparatorUI::hashCode();
}

bool SynthSeparatorUI::equals(Object$* arg0) {
	return this->$SeparatorUI::equals(arg0);
}

$Object* SynthSeparatorUI::clone() {
	return this->$SeparatorUI::clone();
}

$String* SynthSeparatorUI::toString() {
	return this->$SeparatorUI::toString();
}

void SynthSeparatorUI::finalize() {
	this->$SeparatorUI::finalize();
}

void SynthSeparatorUI::init$() {
	$SeparatorUI::init$();
}

$ComponentUI* SynthSeparatorUI::createUI($JComponent* c) {
	$init(SynthSeparatorUI);
	return $new(SynthSeparatorUI);
}

void SynthSeparatorUI::installUI($JComponent* c) {
	installDefaults($cast($JSeparator, c));
	installListeners($cast($JSeparator, c));
}

void SynthSeparatorUI::uninstallUI($JComponent* c) {
	uninstallListeners($cast($JSeparator, c));
	uninstallDefaults($cast($JSeparator, c));
}

void SynthSeparatorUI::installDefaults($JSeparator* c) {
	updateStyle(c);
}

void SynthSeparatorUI::updateStyle($JSeparator* sep) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(sep, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		if ($instanceOf($JToolBar$Separator, sep)) {
			$var($Dimension, size, $cast($JToolBar$Separator, sep)->getSeparatorSize());
			if (size == nullptr || $instanceOf($UIResource, size)) {
				$assign(size, $cast($DimensionUIResource, $nc(this->style)->get(context, "ToolBar.separatorSize"_s)));
				if (size == nullptr) {
					$assign(size, $new($DimensionUIResource, 10, 10));
				}
				$cast($JToolBar$Separator, sep)->setSeparatorSize(size);
			}
		}
	}
}

void SynthSeparatorUI::uninstallDefaults($JSeparator* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthSeparatorUI::installListeners($JSeparator* c) {
	$nc(c)->addPropertyChangeListener(this);
}

void SynthSeparatorUI::uninstallListeners($JSeparator* c) {
	$nc(c)->removePropertyChangeListener(this);
}

void SynthSeparatorUI::update($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	$var($JSeparator, separator, $cast($JSeparator, $nc(context)->getComponent()));
	$SynthLookAndFeel::update(context, g);
	int32_t var$0 = $nc(c)->getWidth();
	int32_t var$1 = c->getHeight();
	$$nc(context->getPainter())->paintSeparatorBackground(context, g, 0, 0, var$0, var$1, $nc(separator)->getOrientation());
	paint(context, g);
}

void SynthSeparatorUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthSeparatorUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalObjectStack();
	$var($JSeparator, separator, $cast($JSeparator, $nc(context)->getComponent()));
	int32_t var$0 = $nc(separator)->getWidth();
	int32_t var$1 = separator->getHeight();
	$$nc(context->getPainter())->paintSeparatorForeground(context, g, 0, 0, var$0, var$1, separator->getOrientation());
}

void SynthSeparatorUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($JSeparator, separator, $cast($JSeparator, $nc(context)->getComponent()));
	$$nc(context->getPainter())->paintSeparatorBorder(context, g, x, y, w, h, $nc(separator)->getOrientation());
}

$Dimension* SynthSeparatorUI::getPreferredSize($JComponent* c) {
	$useLocalObjectStack();
	$var($SynthContext, context, getContext(c));
	int32_t thickness = $nc(this->style)->getInt(context, "Separator.thickness"_s, 2);
	$var($Insets, insets, $nc(c)->getInsets());
	$var($Dimension, size, nullptr);
	if ($cast($JSeparator, c)->getOrientation() == $JSeparator::VERTICAL) {
		$assign(size, $new($Dimension, $nc(insets)->left + $nc(insets)->right + thickness, $nc(insets)->top + $nc(insets)->bottom));
	} else {
		$assign(size, $new($Dimension, $nc(insets)->left + $nc(insets)->right, $nc(insets)->top + $nc(insets)->bottom + thickness));
	}
	return size;
}

$Dimension* SynthSeparatorUI::getMinimumSize($JComponent* c) {
	return getPreferredSize(c);
}

$Dimension* SynthSeparatorUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE);
}

$SynthContext* SynthSeparatorUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthSeparatorUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthSeparatorUI::propertyChange($PropertyChangeEvent* evt) {
	if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
		updateStyle($$cast($JSeparator, $nc(evt)->getSource()));
	}
}

SynthSeparatorUI::SynthSeparatorUI() {
}

$Class* SynthSeparatorUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSeparatorUI, style)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SynthSeparatorUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(SynthSeparatorUI, createUI, $ComponentUI*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, getContext, $SynthContext*, $JComponent*)},
		{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(SynthSeparatorUI, getContext, $SynthContext*, $JComponent*, int32_t)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, installDefaults, void, $JSeparator*)},
		{"installListeners", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, installListeners, void, $JSeparator*)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, installUI, void, $JComponent*)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, paint, void, $Graphics*, $JComponent*)},
		{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(SynthSeparatorUI, paint, void, $SynthContext*, $Graphics*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninstallDefaults", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, uninstallDefaults, void, $JSeparator*)},
		{"uninstallListeners", "(Ljavax/swing/JSeparator;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, uninstallListeners, void, $JSeparator*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, uninstallUI, void, $JComponent*)},
		{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSeparatorUI, update, void, $Graphics*, $JComponent*)},
		{"updateStyle", "(Ljavax/swing/JSeparator;)V", nullptr, $PRIVATE, $method(SynthSeparatorUI, updateStyle, void, $JSeparator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthSeparatorUI",
		"javax.swing.plaf.SeparatorUI",
		"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SynthSeparatorUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthSeparatorUI));
	});
	return class$;
}

$Class* SynthSeparatorUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
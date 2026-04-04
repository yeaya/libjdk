#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Locale.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel$1.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <jcpp.h>

#undef TRANSPARENCY_ENABLED_PROPERTY

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Icon = ::javax::swing::Icon;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractColorChooserPanel$1 = ::javax::swing::colorchooser::AbstractColorChooserPanel$1;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$String* AbstractColorChooserPanel::TRANSPARENCY_ENABLED_PROPERTY = nullptr;

void AbstractColorChooserPanel::init$() {
	$JPanel::init$();
	$set(this, enabledListener, $new($AbstractColorChooserPanel$1, this));
}

int32_t AbstractColorChooserPanel::getMnemonic() {
	return 0;
}

int32_t AbstractColorChooserPanel::getDisplayedMnemonicIndex() {
	return -1;
}

void AbstractColorChooserPanel::installChooserPanel($JColorChooser* enclosingChooser) {
	if (this->chooser != nullptr) {
		$throwNew($RuntimeException, "This chooser panel is already installed"_s);
	}
	$set(this, chooser, enclosingChooser);
	$nc(this->chooser)->addPropertyChangeListener("enabled"_s, this->enabledListener);
	setEnabled($nc(this->chooser)->isEnabled());
	buildChooser();
	updateChooser();
}

void AbstractColorChooserPanel::uninstallChooserPanel($JColorChooser* enclosingChooser) {
	$nc(this->chooser)->removePropertyChangeListener("enabled"_s, this->enabledListener);
	$set(this, chooser, nullptr);
}

$ColorSelectionModel* AbstractColorChooserPanel::getColorSelectionModel() {
	return (this->chooser != nullptr) ? this->chooser->getSelectionModel() : ($ColorSelectionModel*)nullptr;
}

$Color* AbstractColorChooserPanel::getColorFromModel() {
	$var($ColorSelectionModel, model, getColorSelectionModel());
	return (model != nullptr) ? model->getSelectedColor() : ($Color*)nullptr;
}

void AbstractColorChooserPanel::setSelectedColor($Color* color) {
	$var($ColorSelectionModel, model, getColorSelectionModel());
	if (model != nullptr) {
		model->setSelectedColor(color);
	}
}

void AbstractColorChooserPanel::setColorTransparencySelectionEnabled(bool b) {
}

bool AbstractColorChooserPanel::isColorTransparencySelectionEnabled() {
	return true;
}

void AbstractColorChooserPanel::paint($Graphics* g) {
	$JPanel::paint(g);
}

int32_t AbstractColorChooserPanel::getInt(Object$* key, int32_t defaultValue) {
	$useLocalObjectStack();
	$var($Object, value, $UIManager::get(key, $(getLocale())));
	if ($instanceOf($Integer, value)) {
		return $cast($Integer, value)->intValue();
	}
	if ($instanceOf($String, value)) {
		try {
			return $Integer::parseInt($cast($String, value));
		} catch ($NumberFormatException& nfe) {
		}
	}
	return defaultValue;
}

AbstractColorChooserPanel::AbstractColorChooserPanel() {
}

void AbstractColorChooserPanel::clinit$($Class* clazz) {
	$assignStatic(AbstractColorChooserPanel::TRANSPARENCY_ENABLED_PROPERTY, "TransparencyEnabled"_s);
}

$Class* AbstractColorChooserPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TRANSPARENCY_ENABLED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AbstractColorChooserPanel, TRANSPARENCY_ENABLED_PROPERTY)},
		{"enabledListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $FINAL, $field(AbstractColorChooserPanel, enabledListener)},
		{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $field(AbstractColorChooserPanel, chooser)},
		{}
	};
	$NamedAttribute setColorTransparencySelectionEnabledmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Sets the transparency of a color selection on or off."},
		{}
	};
	$CompoundAttribute setColorTransparencySelectionEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColorTransparencySelectionEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractColorChooserPanel, init$, void)},
		{"buildChooser", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractColorChooserPanel, buildChooser, void)},
		{"getColorFromModel", "()Ljava/awt/Color;", nullptr, $PROTECTED, $virtualMethod(AbstractColorChooserPanel, getColorFromModel, $Color*)},
		{"getColorSelectionModel", "()Ljavax/swing/colorchooser/ColorSelectionModel;", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, getColorSelectionModel, $ColorSelectionModel*)},
		{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractColorChooserPanel, getDisplayName, $String*)},
		{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, getDisplayedMnemonicIndex, int32_t)},
		{"getInt", "(Ljava/lang/Object;I)I", nullptr, 0, $virtualMethod(AbstractColorChooserPanel, getInt, int32_t, Object$*, int32_t)},
		{"getLargeDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractColorChooserPanel, getLargeDisplayIcon, $Icon*)},
		{"getMnemonic", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, getMnemonic, int32_t)},
		{"getSmallDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractColorChooserPanel, getSmallDisplayIcon, $Icon*)},
		{"installChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, installChooserPanel, void, $JColorChooser*)},
		{"isColorTransparencySelectionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, isColorTransparencySelectionEnabled, bool)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, paint, void, $Graphics*)},
		{"setColorTransparencySelectionEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, setColorTransparencySelectionEnabled, void, bool), nullptr, nullptr, setColorTransparencySelectionEnabledmethodAnnotations$$},
		{"setSelectedColor", "(Ljava/awt/Color;)V", nullptr, 0, $virtualMethod(AbstractColorChooserPanel, setSelectedColor, void, $Color*)},
		{"uninstallChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC, $virtualMethod(AbstractColorChooserPanel, uninstallChooserPanel, void, $JColorChooser*)},
		{"updateChooser", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractColorChooserPanel, updateChooser, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.AbstractColorChooserPanel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.colorchooser.AbstractColorChooserPanel",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.colorchooser.AbstractColorChooserPanel$1"
	};
	$loadClass(AbstractColorChooserPanel, name, initialize, &classInfo$$, AbstractColorChooserPanel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AbstractColorChooserPanel));
	});
	return class$;
}

$Class* AbstractColorChooserPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
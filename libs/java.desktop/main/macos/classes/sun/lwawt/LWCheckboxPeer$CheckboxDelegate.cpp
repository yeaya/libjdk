#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate$1.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate$2.h>
#include <sun/lwawt/LWCheckboxPeer.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LWCheckboxPeer = ::sun::lwawt::LWCheckboxPeer;
using $LWCheckboxPeer$CheckboxDelegate$1 = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate$1;
using $LWCheckboxPeer$CheckboxDelegate$2 = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate$2;

namespace sun {
	namespace lwawt {

void LWCheckboxPeer$CheckboxDelegate::init$($LWCheckboxPeer* this$0) {
	$set(this, this$0, this$0);
	$JComponent::init$();
	$set(this, cb, $new($LWCheckboxPeer$CheckboxDelegate$1, this, this$0));
	$set(this, rb, $new($LWCheckboxPeer$CheckboxDelegate$2, this, this$0));
	setLayout(nullptr);
	setRadioButton(false);
	add(this->rb);
	add(this->cb);
}

void LWCheckboxPeer$CheckboxDelegate::setEnabled(bool enabled) {
	$JComponent::setEnabled(enabled);
	this->rb->setEnabled(enabled);
	this->cb->setEnabled(enabled);
}

void LWCheckboxPeer$CheckboxDelegate::setOpaque(bool isOpaque) {
	$JComponent::setOpaque(isOpaque);
	this->rb->setOpaque(isOpaque);
	this->cb->setOpaque(isOpaque);
}

void LWCheckboxPeer$CheckboxDelegate::reshape(int32_t x, int32_t y, int32_t w, int32_t h) {
	$JComponent::reshape(x, y, w, h);
	this->cb->setBounds(0, 0, w, h);
	this->rb->setBounds(0, 0, w, h);
}

$Dimension* LWCheckboxPeer$CheckboxDelegate::getPreferredSize() {
	return $$nc(getCurrentButton())->getPreferredSize();
}

$Dimension* LWCheckboxPeer$CheckboxDelegate::getMinimumSize() {
	return $$nc(getCurrentButton())->getMinimumSize();
}

void LWCheckboxPeer$CheckboxDelegate::setRadioButton(bool showRadioButton) {
	this->rb->setVisible(showRadioButton);
	this->cb->setVisible(!showRadioButton);
}

$JToggleButton* LWCheckboxPeer$CheckboxDelegate::getCurrentButton() {
	return this->cb->isVisible() ? $cast($JToggleButton, this->cb) : $cast($JToggleButton, this->rb);
}

void LWCheckboxPeer$CheckboxDelegate::setText($String* label) {
	this->cb->setText(label);
	this->rb->setText(label);
}

void LWCheckboxPeer$CheckboxDelegate::setSelected(bool state) {
	this->cb->setSelected(state);
	this->rb->setSelected(state);
}

LWCheckboxPeer$CheckboxDelegate::LWCheckboxPeer$CheckboxDelegate() {
}

$Class* LWCheckboxPeer$CheckboxDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWCheckboxPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWCheckboxPeer$CheckboxDelegate, this$0)},
		{"cb", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $FINAL, $field(LWCheckboxPeer$CheckboxDelegate, cb)},
		{"rb", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $FINAL, $field(LWCheckboxPeer$CheckboxDelegate, rb)},
		{}
	};
	$CompoundAttribute getCurrentButtonmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute getMinimumSizemethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute reshapemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWCheckboxPeer;)V", nullptr, 0, $method(LWCheckboxPeer$CheckboxDelegate, init$, void, $LWCheckboxPeer*)},
		{"getCurrentButton", "()Ljavax/swing/JToggleButton;", nullptr, 0, $method(LWCheckboxPeer$CheckboxDelegate, getCurrentButton, $JToggleButton*), nullptr, nullptr, getCurrentButtonmethodAnnotations$$},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(LWCheckboxPeer$CheckboxDelegate, getMinimumSize, $Dimension*), nullptr, nullptr, getMinimumSizemethodAnnotations$$},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(LWCheckboxPeer$CheckboxDelegate, getPreferredSize, $Dimension*)},
		{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(LWCheckboxPeer$CheckboxDelegate, reshape, void, int32_t, int32_t, int32_t, int32_t), nullptr, nullptr, reshapemethodAnnotations$$},
		{"setEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(LWCheckboxPeer$CheckboxDelegate, setEnabled, void, bool)},
		{"setOpaque", "(Z)V", nullptr, $PUBLIC, $virtualMethod(LWCheckboxPeer$CheckboxDelegate, setOpaque, void, bool)},
		{"setRadioButton", "(Z)V", nullptr, 0, $method(LWCheckboxPeer$CheckboxDelegate, setRadioButton, void, bool)},
		{"setSelected", "(Z)V", nullptr, 0, $method(LWCheckboxPeer$CheckboxDelegate, setSelected, void, bool)},
		{"setText", "(Ljava/lang/String;)V", nullptr, 0, $method(LWCheckboxPeer$CheckboxDelegate, setText, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate", "sun.lwawt.LWCheckboxPeer", "CheckboxDelegate", $FINAL},
		{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$2", nullptr, nullptr, 0},
		{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWCheckboxPeer$CheckboxDelegate",
		"javax.swing.JComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWCheckboxPeer"
	};
	$loadClass(LWCheckboxPeer$CheckboxDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWCheckboxPeer$CheckboxDelegate));
	});
	return class$;
}

$Class* LWCheckboxPeer$CheckboxDelegate::class$ = nullptr;

	} // lwawt
} // sun
#include <javax/swing/JLabel.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel$AccessibleJLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef BOTTOM
#undef CENTER
#undef LABELED_BY_PROPERTY
#undef LEADING
#undef LEFT
#undef LEFT_ALIGNMENT
#undef RIGHT
#undef TOP
#undef TRAILING
#undef VK_UNDEFINED

using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel$AccessibleJLabel = ::javax::swing::JLabel$AccessibleJLabel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;

namespace javax {
	namespace swing {

$String* JLabel::toString() {
	 return this->$JComponent::toString();
}

int32_t JLabel::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JLabel::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JLabel::clone() {
	 return this->$JComponent::clone();
}

void JLabel::finalize() {
	this->$JComponent::finalize();
}

$String* JLabel::uiClassID = nullptr;
$String* JLabel::LABELED_BY_PROPERTY = nullptr;

$AccessibleContext* JLabel::access$000(JLabel* x0) {
	$init(JLabel);
	return $nc(x0)->accessibleContext;
}

void JLabel::init$($String* text, $Icon* icon, int32_t horizontalAlignment) {
	$JComponent::init$();
	this->mnemonic = u'\0';
	this->mnemonicIndex = -1;
	$set(this, text, ""_s);
	$set(this, defaultIcon, nullptr);
	$set(this, disabledIcon, nullptr);
	this->disabledIconSet = false;
	this->verticalAlignment = $SwingConstants::CENTER;
	this->horizontalAlignment = $SwingConstants::LEADING;
	this->verticalTextPosition = $SwingConstants::CENTER;
	this->horizontalTextPosition = $SwingConstants::TRAILING;
	this->iconTextGap = 4;
	$set(this, labelFor, nullptr);
	setText(text);
	setIcon(icon);
	setHorizontalAlignment(horizontalAlignment);
	updateUI();
	$init($Component);
	setAlignmentX($Component::LEFT_ALIGNMENT);
}

void JLabel::init$($String* text, int32_t horizontalAlignment) {
	JLabel::init$(text, nullptr, horizontalAlignment);
}

void JLabel::init$($String* text) {
	JLabel::init$(text, nullptr, $SwingConstants::LEADING);
}

void JLabel::init$($Icon* image, int32_t horizontalAlignment) {
	JLabel::init$(nullptr, image, horizontalAlignment);
}

void JLabel::init$($Icon* image) {
	JLabel::init$(nullptr, image, $SwingConstants::CENTER);
}

void JLabel::init$() {
	JLabel::init$(""_s, nullptr, $SwingConstants::LEADING);
}

$ComponentUI* JLabel::getUI() {
	return $cast($LabelUI, this->ui);
}

void JLabel::setUI($LabelUI* ui) {
	$JComponent::setUI(ui);
	if (!this->disabledIconSet && this->disabledIcon != nullptr) {
		setDisabledIcon(nullptr);
	}
}

void JLabel::updateUI() {
	setUI($$cast($LabelUI, $UIManager::getUI(this)));
}

$String* JLabel::getUIClassID() {
	return JLabel::uiClassID;
}

$String* JLabel::getText() {
	return this->text;
}

void JLabel::setText($String* text) {
	$useLocalObjectStack();
	$var($String, oldAccessibleName, nullptr);
	if (this->accessibleContext != nullptr) {
		$assign(oldAccessibleName, this->accessibleContext->getAccessibleName());
	}
	$var($String, oldValue, this->text);
	$set(this, text, text);
	firePropertyChange("text"_s, oldValue, text);
	setDisplayedMnemonicIndex($SwingUtilities::findDisplayedMnemonicIndex(text, getDisplayedMnemonic()));
	if ((this->accessibleContext != nullptr) && (this->accessibleContext->getAccessibleName() != oldAccessibleName)) {
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldAccessibleName, $(this->accessibleContext->getAccessibleName()));
	}
	if (text == nullptr || oldValue == nullptr || !text->equals(oldValue)) {
		revalidate();
		repaint();
	}
}

$Icon* JLabel::getIcon() {
	return this->defaultIcon;
}

void JLabel::setIcon($Icon* icon) {
	$var($Icon, oldValue, this->defaultIcon);
	$set(this, defaultIcon, icon);
	if ((this->defaultIcon != oldValue) && !this->disabledIconSet) {
		$set(this, disabledIcon, nullptr);
	}
	firePropertyChange("icon"_s, oldValue, this->defaultIcon);
	if ((this->accessibleContext != nullptr) && (oldValue != this->defaultIcon)) {
		$init($AccessibleContext);
		this->accessibleContext->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, this->defaultIcon);
	}
	if (this->defaultIcon != oldValue) {
		bool var$1 = (this->defaultIcon == nullptr) || (oldValue == nullptr);
		if (!var$1) {
			int32_t var$2 = this->defaultIcon->getIconWidth();
			var$1 = var$2 != oldValue->getIconWidth();
		}
		bool var$0 = var$1;
		if (!var$0) {
			int32_t var$3 = $nc(this->defaultIcon)->getIconHeight();
			var$0 = var$3 != $nc(oldValue)->getIconHeight();
		}
		if (var$0) {
			revalidate();
		}
		repaint();
	}
}

$Icon* JLabel::getDisabledIcon() {
	if (!this->disabledIconSet && this->disabledIcon == nullptr && this->defaultIcon != nullptr) {
		$set(this, disabledIcon, $$nc($UIManager::getLookAndFeel())->getDisabledIcon(this, this->defaultIcon));
		if (this->disabledIcon != nullptr) {
			firePropertyChange("disabledIcon"_s, nullptr, this->disabledIcon);
		}
	}
	return this->disabledIcon;
}

void JLabel::setDisabledIcon($Icon* disabledIcon) {
	$var($Icon, oldValue, this->disabledIcon);
	$set(this, disabledIcon, disabledIcon);
	this->disabledIconSet = (disabledIcon != nullptr);
	firePropertyChange("disabledIcon"_s, oldValue, disabledIcon);
	if (disabledIcon != oldValue) {
		bool var$1 = disabledIcon == nullptr || oldValue == nullptr;
		if (!var$1) {
			int32_t var$2 = disabledIcon->getIconWidth();
			var$1 = var$2 != oldValue->getIconWidth();
		}
		bool var$0 = var$1;
		if (!var$0) {
			int32_t var$3 = $nc(disabledIcon)->getIconHeight();
			var$0 = var$3 != $nc(oldValue)->getIconHeight();
		}
		if (var$0) {
			revalidate();
		}
		if (!isEnabled()) {
			repaint();
		}
	}
}

void JLabel::setDisplayedMnemonic(int32_t key) {
	int32_t oldKey = this->mnemonic;
	this->mnemonic = key;
	firePropertyChange("displayedMnemonic"_s, oldKey, this->mnemonic);
	setDisplayedMnemonicIndex($SwingUtilities::findDisplayedMnemonicIndex($(getText()), this->mnemonic));
	if (key != oldKey) {
		revalidate();
		repaint();
	}
}

void JLabel::setDisplayedMnemonic(char16_t aChar) {
	int32_t vk = $KeyEvent::getExtendedKeyCodeForChar(aChar);
	if (vk != $KeyEvent::VK_UNDEFINED) {
		setDisplayedMnemonic(vk);
	}
}

int32_t JLabel::getDisplayedMnemonic() {
	return this->mnemonic;
}

void JLabel::setDisplayedMnemonicIndex(int32_t index) {
	$useLocalObjectStack();
	int32_t oldValue = this->mnemonicIndex;
	if (index == -1) {
		this->mnemonicIndex = -1;
	} else {
		$var($String, text, getText());
		int32_t textLength = (text == nullptr) ? 0 : text->length();
		if (index < -1 || index >= textLength) {
			$throwNew($IllegalArgumentException, $$str({"index == "_s, $$str(index)}));
		}
	}
	this->mnemonicIndex = index;
	firePropertyChange("displayedMnemonicIndex"_s, oldValue, index);
	if (index != oldValue) {
		revalidate();
		repaint();
	}
}

int32_t JLabel::getDisplayedMnemonicIndex() {
	return this->mnemonicIndex;
}

int32_t JLabel::checkHorizontalKey(int32_t key, $String* message) {
	if ((key == $SwingConstants::LEFT) || (key == $SwingConstants::CENTER) || (key == $SwingConstants::RIGHT) || (key == $SwingConstants::LEADING) || (key == $SwingConstants::TRAILING)) {
		return key;
	} else {
		$throwNew($IllegalArgumentException, message);
	}
}

int32_t JLabel::checkVerticalKey(int32_t key, $String* message) {
	if ((key == $SwingConstants::TOP) || (key == $SwingConstants::CENTER) || (key == $SwingConstants::BOTTOM)) {
		return key;
	} else {
		$throwNew($IllegalArgumentException, message);
	}
}

int32_t JLabel::getIconTextGap() {
	return this->iconTextGap;
}

void JLabel::setIconTextGap(int32_t iconTextGap) {
	int32_t oldValue = this->iconTextGap;
	this->iconTextGap = iconTextGap;
	firePropertyChange("iconTextGap"_s, oldValue, iconTextGap);
	if (iconTextGap != oldValue) {
		revalidate();
		repaint();
	}
}

int32_t JLabel::getVerticalAlignment() {
	return this->verticalAlignment;
}

void JLabel::setVerticalAlignment(int32_t alignment) {
	if (alignment == this->verticalAlignment) {
		return;
	}
	int32_t oldValue = this->verticalAlignment;
	this->verticalAlignment = checkVerticalKey(alignment, "verticalAlignment"_s);
	firePropertyChange("verticalAlignment"_s, oldValue, this->verticalAlignment);
	repaint();
}

int32_t JLabel::getHorizontalAlignment() {
	return this->horizontalAlignment;
}

void JLabel::setHorizontalAlignment(int32_t alignment) {
	if (alignment == this->horizontalAlignment) {
		return;
	}
	int32_t oldValue = this->horizontalAlignment;
	this->horizontalAlignment = checkHorizontalKey(alignment, "horizontalAlignment"_s);
	firePropertyChange("horizontalAlignment"_s, oldValue, this->horizontalAlignment);
	repaint();
}

int32_t JLabel::getVerticalTextPosition() {
	return this->verticalTextPosition;
}

void JLabel::setVerticalTextPosition(int32_t textPosition) {
	if (textPosition == this->verticalTextPosition) {
		return;
	}
	int32_t old = this->verticalTextPosition;
	this->verticalTextPosition = checkVerticalKey(textPosition, "verticalTextPosition"_s);
	firePropertyChange("verticalTextPosition"_s, old, this->verticalTextPosition);
	revalidate();
	repaint();
}

int32_t JLabel::getHorizontalTextPosition() {
	return this->horizontalTextPosition;
}

void JLabel::setHorizontalTextPosition(int32_t textPosition) {
	int32_t old = this->horizontalTextPosition;
	this->horizontalTextPosition = checkHorizontalKey(textPosition, "horizontalTextPosition"_s);
	firePropertyChange("horizontalTextPosition"_s, old, this->horizontalTextPosition);
	revalidate();
	repaint();
}

bool JLabel::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h) {
	bool var$0 = !isShowing();
	if (!var$0) {
		bool var$1 = !$SwingUtilities::doesIconReferenceImage($(getIcon()), img);
		var$0 = var$1 && !$SwingUtilities::doesIconReferenceImage(this->disabledIcon, img);
	}
	if (var$0) {
		return false;
	}
	return $JComponent::imageUpdate(img, infoflags, x, y, w, h);
}

void JLabel::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JLabel::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JLabel::paramString() {
	$useLocalObjectStack();
	$var($String, textString, this->text != nullptr ? this->text : ""_s);
	$var($String, defaultIconString, (this->defaultIcon != nullptr) && (!$equals(this->defaultIcon, this)) ? this->defaultIcon->toString() : ""_s);
	$var($String, disabledIconString, (this->disabledIcon != nullptr) && (!$equals(this->disabledIcon, this)) ? this->disabledIcon->toString() : ""_s);
	$var($String, labelForString, this->labelFor != nullptr ? this->labelFor->toString() : ""_s);
	$var($String, verticalAlignmentString, nullptr);
	if (this->verticalAlignment == $SwingConstants::TOP) {
		$assign(verticalAlignmentString, "TOP"_s);
	} else if (this->verticalAlignment == $SwingConstants::CENTER) {
		$assign(verticalAlignmentString, "CENTER"_s);
	} else if (this->verticalAlignment == $SwingConstants::BOTTOM) {
		$assign(verticalAlignmentString, "BOTTOM"_s);
	} else {
		$assign(verticalAlignmentString, ""_s);
	}
	$var($String, horizontalAlignmentString, nullptr);
	if (this->horizontalAlignment == $SwingConstants::LEFT) {
		$assign(horizontalAlignmentString, "LEFT"_s);
	} else if (this->horizontalAlignment == $SwingConstants::CENTER) {
		$assign(horizontalAlignmentString, "CENTER"_s);
	} else if (this->horizontalAlignment == $SwingConstants::RIGHT) {
		$assign(horizontalAlignmentString, "RIGHT"_s);
	} else if (this->horizontalAlignment == $SwingConstants::LEADING) {
		$assign(horizontalAlignmentString, "LEADING"_s);
	} else if (this->horizontalAlignment == $SwingConstants::TRAILING) {
		$assign(horizontalAlignmentString, "TRAILING"_s);
	} else {
		$assign(horizontalAlignmentString, ""_s);
	}
	$var($String, verticalTextPositionString, nullptr);
	if (this->verticalTextPosition == $SwingConstants::TOP) {
		$assign(verticalTextPositionString, "TOP"_s);
	} else if (this->verticalTextPosition == $SwingConstants::CENTER) {
		$assign(verticalTextPositionString, "CENTER"_s);
	} else if (this->verticalTextPosition == $SwingConstants::BOTTOM) {
		$assign(verticalTextPositionString, "BOTTOM"_s);
	} else {
		$assign(verticalTextPositionString, ""_s);
	}
	$var($String, horizontalTextPositionString, nullptr);
	if (this->horizontalTextPosition == $SwingConstants::LEFT) {
		$assign(horizontalTextPositionString, "LEFT"_s);
	} else if (this->horizontalTextPosition == $SwingConstants::CENTER) {
		$assign(horizontalTextPositionString, "CENTER"_s);
	} else if (this->horizontalTextPosition == $SwingConstants::RIGHT) {
		$assign(horizontalTextPositionString, "RIGHT"_s);
	} else if (this->horizontalTextPosition == $SwingConstants::LEADING) {
		$assign(horizontalTextPositionString, "LEADING"_s);
	} else if (this->horizontalTextPosition == $SwingConstants::TRAILING) {
		$assign(horizontalTextPositionString, "TRAILING"_s);
	} else {
		$assign(horizontalTextPositionString, ""_s);
	}
	return $str({$($JComponent::paramString()), ",defaultIcon="_s, defaultIconString, ",disabledIcon="_s, disabledIconString, ",horizontalAlignment="_s, horizontalAlignmentString, ",horizontalTextPosition="_s, horizontalTextPositionString, ",iconTextGap="_s, $$str(this->iconTextGap), ",labelFor="_s, labelForString, ",text="_s, textString, ",verticalAlignment="_s, 
	verticalAlignmentString, ",verticalTextPosition="_s, verticalTextPositionString});
}

$Component* JLabel::getLabelFor() {
	return this->labelFor;
}

void JLabel::setLabelFor($Component* c) {
	$var($Component, oldC, this->labelFor);
	$set(this, labelFor, c);
	firePropertyChange("labelFor"_s, oldC, c);
	if ($instanceOf($JComponent, oldC)) {
		$cast($JComponent, oldC)->putClientProperty(JLabel::LABELED_BY_PROPERTY, nullptr);
	}
	if ($instanceOf($JComponent, c)) {
		$cast($JComponent, c)->putClientProperty(JLabel::LABELED_BY_PROPERTY, this);
	}
}

$AccessibleContext* JLabel::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JLabel$AccessibleJLabel, this));
	}
	return this->accessibleContext;
}

JLabel::JLabel() {
}

void JLabel::clinit$($Class* clazz) {
	$assignStatic(JLabel::uiClassID, "LabelUI"_s);
	$assignStatic(JLabel::LABELED_BY_PROPERTY, "labeledBy"_s);
}

$Class* JLabel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JLabel, uiClassID)},
		{"mnemonic", "I", nullptr, $PRIVATE, $field(JLabel, mnemonic)},
		{"mnemonicIndex", "I", nullptr, $PRIVATE, $field(JLabel, mnemonicIndex)},
		{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JLabel, text)},
		{"defaultIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(JLabel, defaultIcon)},
		{"disabledIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(JLabel, disabledIcon)},
		{"disabledIconSet", "Z", nullptr, $PRIVATE, $field(JLabel, disabledIconSet)},
		{"verticalAlignment", "I", nullptr, $PRIVATE, $field(JLabel, verticalAlignment)},
		{"horizontalAlignment", "I", nullptr, $PRIVATE, $field(JLabel, horizontalAlignment)},
		{"verticalTextPosition", "I", nullptr, $PRIVATE, $field(JLabel, verticalTextPosition)},
		{"horizontalTextPosition", "I", nullptr, $PRIVATE, $field(JLabel, horizontalTextPosition)},
		{"iconTextGap", "I", nullptr, $PRIVATE, $field(JLabel, iconTextGap)},
		{"labelFor", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JLabel, labelFor)},
		{"LABELED_BY_PROPERTY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JLabel, LABELED_BY_PROPERTY)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "The AccessibleContext associated with this Label."},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getDisabledIconmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDisabledIconmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The icon to display if the label is disabled."},
		{}
	};
	$CompoundAttribute setDisabledIconmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDisabledIconmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDisplayedMnemonicmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The mnemonic keycode."},
		{}
	};
	$CompoundAttribute setDisplayedMnemonicmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDisplayedMnemonicmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDisplayedMnemonicIndexmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "the index into the String to draw the keyboard character mnemonic at"},
		{}
	};
	$CompoundAttribute setDisplayedMnemonicIndexmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDisplayedMnemonicIndexmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "SwingConstants.LEFT"},
		{'s', "SwingConstants.CENTER"},
		{'s', "SwingConstants.RIGHT"},
		{'s', "SwingConstants.LEADING"},
		{'s', "SwingConstants.TRAILING"},
		{'-'}
	};
	$NamedAttribute setHorizontalAlignmentmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "The alignment of the label\'s content along the X axis."},
		{}
	};
	$CompoundAttribute setHorizontalAlignmentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHorizontalAlignmentmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$1[] = {
		{'s', "SwingConstants.LEFT"},
		{'s', "SwingConstants.CENTER"},
		{'s', "SwingConstants.RIGHT"},
		{'s', "SwingConstants.LEADING"},
		{'s', "SwingConstants.TRAILING"},
		{'-'}
	};
	$NamedAttribute setHorizontalTextPositionmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute$1},
		{"description", 's', "The horizontal position of the label\'s text, relative to its image."},
		{}
	};
	$CompoundAttribute setHorizontalTextPositionmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHorizontalTextPositionmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIconmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The icon this component will display."},
		{}
	};
	$CompoundAttribute setIconmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIconmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setIconTextGapmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "If both the icon and text properties are set, this property defines the space between them."},
		{}
	};
	$CompoundAttribute setIconTextGapmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setIconTextGapmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setLabelFormethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The component this is labelling."},
		{}
	};
	$CompoundAttribute setLabelFormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setLabelFormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setTextmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "Defines the single line of text this component will display."},
		{}
	};
	$CompoundAttribute setTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$2[] = {
		{'s', "SwingConstants.TOP"},
		{'s', "SwingConstants.CENTER"},
		{'s', "SwingConstants.BOTTOM"},
		{'-'}
	};
	$NamedAttribute setVerticalAlignmentmethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute$2},
		{"description", 's', "The alignment of the label\'s contents along the Y axis."},
		{}
	};
	$CompoundAttribute setVerticalAlignmentmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVerticalAlignmentmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$3[] = {
		{'s', "SwingConstants.TOP"},
		{'s', "SwingConstants.CENTER"},
		{'s', "SwingConstants.BOTTOM"},
		{'-'}
	};
	$NamedAttribute setVerticalTextPositionmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"enumerationValues", '[', $attribute$3},
		{"description", 's', "The vertical position of the text relative to it\'s image."},
		{}
	};
	$CompoundAttribute setVerticalTextPositionmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVerticalTextPositionmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;I)V", nullptr, $PUBLIC, $method(JLabel, init$, void, $String*, $Icon*, int32_t)},
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JLabel, init$, void, $String*, int32_t)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JLabel, init$, void, $String*)},
		{"<init>", "(Ljavax/swing/Icon;I)V", nullptr, $PUBLIC, $method(JLabel, init$, void, $Icon*, int32_t)},
		{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(JLabel, init$, void, $Icon*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JLabel, init$, void)},
		{"access$000", "(Ljavax/swing/JLabel;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $staticMethod(JLabel, access$000, $AccessibleContext*, JLabel*)},
		{"checkHorizontalKey", "(ILjava/lang/String;)I", nullptr, $PROTECTED, $virtualMethod(JLabel, checkHorizontalKey, int32_t, int32_t, $String*)},
		{"checkVerticalKey", "(ILjava/lang/String;)I", nullptr, $PROTECTED, $virtualMethod(JLabel, checkVerticalKey, int32_t, int32_t, $String*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JLabel, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getDisabledIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(JLabel, getDisabledIcon, $Icon*), nullptr, nullptr, getDisabledIconmethodAnnotations$$},
		{"getDisplayedMnemonic", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getDisplayedMnemonic, int32_t)},
		{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getDisplayedMnemonicIndex, int32_t)},
		{"getHorizontalAlignment", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getHorizontalAlignment, int32_t)},
		{"getHorizontalTextPosition", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getHorizontalTextPosition, int32_t)},
		{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(JLabel, getIcon, $Icon*)},
		{"getIconTextGap", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getIconTextGap, int32_t)},
		{"getLabelFor", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JLabel, getLabelFor, $Component*)},
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JLabel, getText, $String*)},
		{"getUI", "()Ljavax/swing/plaf/LabelUI;", nullptr, $PUBLIC, $virtualMethod(JLabel, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JLabel, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getVerticalAlignment", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getVerticalAlignment, int32_t)},
		{"getVerticalTextPosition", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel, getVerticalTextPosition, int32_t)},
		{"imageUpdate", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC, $virtualMethod(JLabel, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JLabel, paramString, $String*)},
		{"setDisabledIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setDisabledIcon, void, $Icon*), nullptr, nullptr, setDisabledIconmethodAnnotations$$},
		{"setDisplayedMnemonic", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setDisplayedMnemonic, void, int32_t), nullptr, nullptr, setDisplayedMnemonicmethodAnnotations$$},
		{"setDisplayedMnemonic", "(C)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setDisplayedMnemonic, void, char16_t)},
		{"setDisplayedMnemonicIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setDisplayedMnemonicIndex, void, int32_t), "java.lang.IllegalArgumentException", nullptr, setDisplayedMnemonicIndexmethodAnnotations$$},
		{"setHorizontalAlignment", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setHorizontalAlignment, void, int32_t), nullptr, nullptr, setHorizontalAlignmentmethodAnnotations$$},
		{"setHorizontalTextPosition", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setHorizontalTextPosition, void, int32_t), nullptr, nullptr, setHorizontalTextPositionmethodAnnotations$$},
		{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setIcon, void, $Icon*), nullptr, nullptr, setIconmethodAnnotations$$},
		{"setIconTextGap", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setIconTextGap, void, int32_t), nullptr, nullptr, setIconTextGapmethodAnnotations$$},
		{"setLabelFor", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setLabelFor, void, $Component*), nullptr, nullptr, setLabelFormethodAnnotations$$},
		{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setText, void, $String*), nullptr, nullptr, setTextmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/LabelUI;)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setUI, void, $LabelUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"setVerticalAlignment", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setVerticalAlignment, void, int32_t), nullptr, nullptr, setVerticalAlignmentmethodAnnotations$$},
		{"setVerticalTextPosition", "(I)V", nullptr, $PUBLIC, $virtualMethod(JLabel, setVerticalTextPosition, void, int32_t), nullptr, nullptr, setVerticalTextPositionmethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JLabel, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JLabel, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLabel$AccessibleJLabel", "javax.swing.JLabel", "AccessibleJLabel", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component that displays a short string and an icon."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JLabel",
		"javax.swing.JComponent",
		"javax.swing.SwingConstants,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JLabel$AccessibleJLabel,javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding"
	};
	$loadClass(JLabel, name, initialize, &classInfo$$, JLabel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JLabel));
	});
	return class$;
}

$Class* JLabel::class$ = nullptr;

	} // swing
} // javax
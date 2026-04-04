#include <javax/swing/text/html/HiddenTagView.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Math.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/EditableView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$UnknownTag.h>
#include <javax/swing/text/html/HiddenTagView$1.h>
#include <javax/swing/text/html/HiddenTagView$2.h>
#include <javax/swing/text/html/HiddenTagView$EndTagBorder.h>
#include <javax/swing/text/html/HiddenTagView$StartTagBorder.h>
#include <jcpp.h>

#undef ENDTAG
#undef X_AXIS
#undef Y_AXIS

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $EditableView = ::javax::swing::text::html::EditableView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$UnknownTag = ::javax::swing::text::html::HTML$UnknownTag;
using $HiddenTagView$1 = ::javax::swing::text::html::HiddenTagView$1;
using $HiddenTagView$2 = ::javax::swing::text::html::HiddenTagView$2;
using $HiddenTagView$EndTagBorder = ::javax::swing::text::html::HiddenTagView$EndTagBorder;
using $HiddenTagView$StartTagBorder = ::javax::swing::text::html::HiddenTagView$StartTagBorder;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

int32_t HiddenTagView::hashCode() {
	 return this->$EditableView::hashCode();
}

bool HiddenTagView::equals(Object$* arg0) {
	 return this->$EditableView::equals(arg0);
}

$Object* HiddenTagView::clone() {
	 return this->$EditableView::clone();
}

$String* HiddenTagView::toString() {
	 return this->$EditableView::toString();
}

void HiddenTagView::finalize() {
	this->$EditableView::finalize();
}

$Color* HiddenTagView::UnknownTagBorderColor = nullptr;
$Border* HiddenTagView::StartBorder = nullptr;
$Border* HiddenTagView::EndBorder = nullptr;

void HiddenTagView::init$($Element* e) {
	$EditableView::init$(e);
	this->yAlign = 1;
}

$Component* HiddenTagView::createComponent() {
	$useLocalObjectStack();
	$var($JTextField, tf, $new($JTextField, $($$nc(getElement())->getName())));
	$var($Document, doc, getDocument());
	$var($Font, font, nullptr);
	if ($instanceOf($StyledDocument, doc)) {
		$assign(font, $cast($StyledDocument, doc)->getFont($(getAttributes())));
		tf->setFont(font);
	} else {
		$assign(font, tf->getFont());
	}
	$$nc(tf->getDocument())->addDocumentListener(this);
	updateYAlign(font);
	$var($JPanel, panel, $new($JPanel, $$new($BorderLayout)));
	panel->setBackground(nullptr);
	if (isEndTag()) {
		panel->setBorder(HiddenTagView::EndBorder);
	} else {
		panel->setBorder(HiddenTagView::StartBorder);
	}
	panel->add(tf);
	return panel;
}

float HiddenTagView::getAlignment(int32_t axis) {
	if (axis == $View::Y_AXIS) {
		return this->yAlign;
	}
	return 0.5f;
}

float HiddenTagView::getMinimumSpan(int32_t axis) {
	if (axis == $View::X_AXIS && isVisible()) {
		return $Math::max((float)30, $EditableView::getPreferredSpan(axis));
	}
	return $EditableView::getMinimumSpan(axis);
}

float HiddenTagView::getPreferredSpan(int32_t axis) {
	if (axis == $View::X_AXIS && isVisible()) {
		return $Math::max((float)30, $EditableView::getPreferredSpan(axis));
	}
	return $EditableView::getPreferredSpan(axis);
}

float HiddenTagView::getMaximumSpan(int32_t axis) {
	if (axis == $View::X_AXIS && isVisible()) {
		return $Math::max((float)30, $EditableView::getMaximumSpan(axis));
	}
	return $EditableView::getMaximumSpan(axis);
}

void HiddenTagView::insertUpdate($DocumentEvent* e) {
	updateModelFromText();
}

void HiddenTagView::removeUpdate($DocumentEvent* e) {
	updateModelFromText();
}

void HiddenTagView::changedUpdate($DocumentEvent* e) {
	updateModelFromText();
}

void HiddenTagView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (!this->isSettingAttributes) {
		setTextFromModel();
	}
}

void HiddenTagView::updateYAlign($Font* font) {
	$useLocalObjectStack();
	$var($Container, c, getContainer());
	$var($FontMetrics, fm, (c != nullptr) ? c->getFontMetrics(font) : $$nc($Toolkit::getDefaultToolkit())->getFontMetrics(font));
	float h = (float)$nc(fm)->getHeight();
	float d = (float)fm->getDescent();
	this->yAlign = (h > 0) ? (h - d) / h : 0;
}

void HiddenTagView::resetBorder() {
	$var($Component, comp, getComponent());
	if (comp != nullptr) {
		if (isEndTag()) {
			$cast($JPanel, comp)->setBorder(HiddenTagView::EndBorder);
		} else {
			$cast($JPanel, comp)->setBorder(HiddenTagView::StartBorder);
		}
	}
}

void HiddenTagView::setTextFromModel() {
	if ($SwingUtilities::isEventDispatchThread()) {
		_setTextFromModel();
	} else {
		$SwingUtilities::invokeLater($$new($HiddenTagView$1, this));
	}
}

void HiddenTagView::_setTextFromModel() {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	$var($Throwable, var$0, nullptr);
	try {
		this->isSettingAttributes = true;
		if ($instanceOf($AbstractDocument, doc)) {
			$cast($AbstractDocument, doc)->readLock();
		}
		$var($JTextComponent, text, getTextComponent());
		if (text != nullptr) {
			text->setText($(getRepresentedText()));
			resetBorder();
			$var($Container, host, getContainer());
			if (host != nullptr) {
				preferenceChanged(this, true, true);
				host->repaint();
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->isSettingAttributes = false;
		if ($instanceOf($AbstractDocument, doc)) {
			$cast($AbstractDocument, doc)->readUnlock();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void HiddenTagView::updateModelFromText() {
	if (!this->isSettingAttributes) {
		if ($SwingUtilities::isEventDispatchThread()) {
			_updateModelFromText();
		} else {
			$SwingUtilities::invokeLater($$new($HiddenTagView$2, this));
		}
	}
}

void HiddenTagView::_updateModelFromText() {
	$useLocalObjectStack();
	$var($Document, doc, getDocument());
	$init($StyleConstants);
	$var($Object, name, $$nc($$nc(getElement())->getAttributes())->getAttribute($StyleConstants::NameAttribute));
	if (($instanceOf($HTML$UnknownTag, name)) && ($instanceOf($StyledDocument, doc))) {
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		$var($JTextComponent, textComponent, getTextComponent());
		if (textComponent != nullptr) {
			$var($String, text, textComponent->getText());
			this->isSettingAttributes = true;
			$var($Throwable, var$0, nullptr);
			try {
				sas->addAttribute($StyleConstants::NameAttribute, $$new($HTML$UnknownTag, text));
				int32_t var$1 = getStartOffset();
				int32_t var$2 = getEndOffset();
				$cast($StyledDocument, doc)->setCharacterAttributes(var$1, var$2 - getStartOffset(), sas, false);
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} /*finally*/ {
				this->isSettingAttributes = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$JTextComponent* HiddenTagView::getTextComponent() {
	$var($Component, comp, getComponent());
	return (comp == nullptr) ? ($JTextComponent*)nullptr : $cast($JTextComponent, $cast($Container, comp)->getComponent(0));
}

$String* HiddenTagView::getRepresentedText() {
	$useLocalObjectStack();
	$var($String, retValue, $$nc(getElement())->getName());
	return (retValue == nullptr) ? ""_s : retValue;
}

bool HiddenTagView::isEndTag() {
	$useLocalObjectStack();
	$var($AttributeSet, as, $$nc(getElement())->getAttributes());
	if (as != nullptr) {
		$init($HTML$Attribute);
		$var($Object, end, as->getAttribute($HTML$Attribute::ENDTAG));
		if (end != nullptr && ($instanceOf($String, end)) && $cast($String, end)->equals("true"_s)) {
			return true;
		}
	}
	return false;
}

void HiddenTagView::clinit$($Class* clazz) {
	$init($Color);
	$assignStatic(HiddenTagView::UnknownTagBorderColor, $Color::black);
	$assignStatic(HiddenTagView::StartBorder, $new($HiddenTagView$StartTagBorder));
	$assignStatic(HiddenTagView::EndBorder, $new($HiddenTagView$EndTagBorder));
}

HiddenTagView::HiddenTagView() {
}

$Class* HiddenTagView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"yAlign", "F", nullptr, 0, $field(HiddenTagView, yAlign)},
		{"isSettingAttributes", "Z", nullptr, 0, $field(HiddenTagView, isSettingAttributes)},
		{"circleR", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, circleR)},
		{"circleD", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, circleD)},
		{"tagSize", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, tagSize)},
		{"padding", "I", nullptr, $STATIC | $FINAL, $constField(HiddenTagView, padding)},
		{"UnknownTagBorderColor", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(HiddenTagView, UnknownTagBorderColor)},
		{"StartBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(HiddenTagView, StartBorder)},
		{"EndBorder", "Ljavax/swing/border/Border;", nullptr, $STATIC | $FINAL, $staticField(HiddenTagView, EndBorder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(HiddenTagView, init$, void, $Element*)},
		{"_setTextFromModel", "()V", nullptr, 0, $virtualMethod(HiddenTagView, _setTextFromModel, void)},
		{"_updateModelFromText", "()V", nullptr, 0, $virtualMethod(HiddenTagView, _updateModelFromText, void)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, changedUpdate, void, $DocumentEvent*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, changedUpdate, void, $DocumentEvent*, $Shape*, $ViewFactory*)},
		{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED, $virtualMethod(HiddenTagView, createComponent, $Component*)},
		{"getAlignment", "(I)F", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, getAlignment, float, int32_t)},
		{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, getMaximumSpan, float, int32_t)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, getMinimumSpan, float, int32_t)},
		{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, getPreferredSpan, float, int32_t)},
		{"getRepresentedText", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(HiddenTagView, getRepresentedText, $String*)},
		{"getTextComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, 0, $virtualMethod(HiddenTagView, getTextComponent, $JTextComponent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, insertUpdate, void, $DocumentEvent*)},
		{"isEndTag", "()Z", nullptr, 0, $virtualMethod(HiddenTagView, isEndTag, bool)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(HiddenTagView, removeUpdate, void, $DocumentEvent*)},
		{"resetBorder", "()V", nullptr, 0, $virtualMethod(HiddenTagView, resetBorder, void)},
		{"setTextFromModel", "()V", nullptr, 0, $virtualMethod(HiddenTagView, setTextFromModel, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateModelFromText", "()V", nullptr, 0, $virtualMethod(HiddenTagView, updateModelFromText, void)},
		{"updateYAlign", "(Ljava/awt/Font;)V", nullptr, 0, $virtualMethod(HiddenTagView, updateYAlign, void, $Font*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HiddenTagView$EndTagBorder", "javax.swing.text.html.HiddenTagView", "EndTagBorder", $STATIC},
		{"javax.swing.text.html.HiddenTagView$StartTagBorder", "javax.swing.text.html.HiddenTagView", "StartTagBorder", $STATIC},
		{"javax.swing.text.html.HiddenTagView$2", nullptr, nullptr, 0},
		{"javax.swing.text.html.HiddenTagView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HiddenTagView",
		"javax.swing.text.html.EditableView",
		"javax.swing.event.DocumentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.html.HiddenTagView$EndTagBorder,javax.swing.text.html.HiddenTagView$StartTagBorder,javax.swing.text.html.HiddenTagView$2,javax.swing.text.html.HiddenTagView$1"
	};
	$loadClass(HiddenTagView, name, initialize, &classInfo$$, HiddenTagView::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(HiddenTagView));
	});
	return class$;
}

$Class* HiddenTagView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
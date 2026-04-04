#include <javax/swing/JScrollPane.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/ClassCastException.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane$AccessibleJScrollPane.h>
#include <javax/swing/JScrollPane$ScrollBar.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/ScrollPaneLayout$UIResource.h>
#include <javax/swing/ScrollPaneLayout.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <jcpp.h>

#undef COLUMN_HEADER
#undef HORIZONTAL
#undef HORIZONTAL_SCROLLBAR
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef LOWER_LEADING_CORNER
#undef LOWER_LEFT_CORNER
#undef LOWER_RIGHT_CORNER
#undef LOWER_TRAILING_CORNER
#undef MAX_VALUE
#undef ROW_HEADER
#undef UPPER_LEADING_CORNER
#undef UPPER_LEFT_CORNER
#undef UPPER_RIGHT_CORNER
#undef UPPER_TRAILING_CORNER
#undef VERTICAL
#undef VERTICAL_SCROLLBAR
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#undef VERTICAL_SCROLLBAR_NEVER
#undef VIEWPORT

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane$AccessibleJScrollPane = ::javax::swing::JScrollPane$AccessibleJScrollPane;
using $JScrollPane$ScrollBar = ::javax::swing::JScrollPane$ScrollBar;
using $JViewport = ::javax::swing::JViewport;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $ScrollPaneLayout = ::javax::swing::ScrollPaneLayout;
using $ScrollPaneLayout$UIResource = ::javax::swing::ScrollPaneLayout$UIResource;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;

namespace javax {
	namespace swing {

$String* JScrollPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JScrollPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JScrollPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JScrollPane::clone() {
	 return this->$JComponent::clone();
}

void JScrollPane::finalize() {
	this->$JComponent::finalize();
}

$String* JScrollPane::uiClassID = nullptr;

void JScrollPane::init$($Component* view, int32_t vsbPolicy, int32_t hsbPolicy) {
	$useLocalObjectStack();
	$JComponent::init$();
	this->verticalScrollBarPolicy = $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED;
	this->horizontalScrollBarPolicy = $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED;
	this->wheelScrollState = true;
	setLayout($$new($ScrollPaneLayout$UIResource));
	setVerticalScrollBarPolicy(vsbPolicy);
	setHorizontalScrollBarPolicy(hsbPolicy);
	setViewport($(createViewport()));
	setVerticalScrollBar($(createVerticalScrollBar()));
	setHorizontalScrollBar($(createHorizontalScrollBar()));
	if (view != nullptr) {
		setViewportView(view);
	}
	setUIProperty("opaque"_s, $($Boolean::valueOf(true)));
	updateUI();
	if (!$$nc(this->getComponentOrientation())->isLeftToRight()) {
		$nc(this->viewport)->setViewPosition($$new($Point, $Integer::MAX_VALUE, 0));
	}
}

void JScrollPane::init$($Component* view) {
	JScrollPane::init$(view, $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED);
}

void JScrollPane::init$(int32_t vsbPolicy, int32_t hsbPolicy) {
	JScrollPane::init$(nullptr, vsbPolicy, hsbPolicy);
}

void JScrollPane::init$() {
	JScrollPane::init$(nullptr, $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED);
}

$ComponentUI* JScrollPane::getUI() {
	return $cast($ScrollPaneUI, this->ui);
}

void JScrollPane::setUI($ScrollPaneUI* ui) {
	$JComponent::setUI(ui);
}

void JScrollPane::updateUI() {
	setUI($$cast($ScrollPaneUI, $UIManager::getUI(this)));
}

$String* JScrollPane::getUIClassID() {
	return JScrollPane::uiClassID;
}

void JScrollPane::setLayout($LayoutManager* layout) {
	if ($instanceOf($ScrollPaneLayout, layout)) {
		$JComponent::setLayout(layout);
		$cast($ScrollPaneLayout, layout)->syncWithScrollPane(this);
	} else if (layout == nullptr) {
		$JComponent::setLayout(layout);
	} else {
		$var($String, s, "layout of JScrollPane must be a ScrollPaneLayout"_s);
		$throwNew($ClassCastException, s);
	}
}

bool JScrollPane::isValidateRoot() {
	return true;
}

int32_t JScrollPane::getVerticalScrollBarPolicy() {
	return this->verticalScrollBarPolicy;
}

void JScrollPane::setVerticalScrollBarPolicy(int32_t policy) {
	switch (policy) {
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED:
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER:
	case $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS:
		break;
	default:
		$throwNew($IllegalArgumentException, "invalid verticalScrollBarPolicy"_s);
	}
	int32_t old = this->verticalScrollBarPolicy;
	this->verticalScrollBarPolicy = policy;
	firePropertyChange("verticalScrollBarPolicy"_s, old, policy);
	revalidate();
	repaint();
}

int32_t JScrollPane::getHorizontalScrollBarPolicy() {
	return this->horizontalScrollBarPolicy;
}

void JScrollPane::setHorizontalScrollBarPolicy(int32_t policy) {
	switch (policy) {
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED:
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER:
	case $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS:
		break;
	default:
		$throwNew($IllegalArgumentException, "invalid horizontalScrollBarPolicy"_s);
	}
	int32_t old = this->horizontalScrollBarPolicy;
	this->horizontalScrollBarPolicy = policy;
	firePropertyChange("horizontalScrollBarPolicy"_s, old, policy);
	revalidate();
	repaint();
}

$Border* JScrollPane::getViewportBorder() {
	return this->viewportBorder;
}

void JScrollPane::setViewportBorder($Border* viewportBorder) {
	$var($Border, oldValue, this->viewportBorder);
	$set(this, viewportBorder, viewportBorder);
	firePropertyChange("viewportBorder"_s, oldValue, viewportBorder);
}

$Rectangle* JScrollPane::getViewportBorderBounds() {
	$useLocalObjectStack();
	$var($Rectangle, borderR, $new($Rectangle, $(getSize())));
	$var($Insets, insets, getInsets());
	borderR->x = $nc(insets)->left;
	borderR->y = insets->top;
	borderR->width -= insets->left + insets->right;
	borderR->height -= insets->top + insets->bottom;
	bool leftToRight = $SwingUtilities::isLeftToRight(this);
	$var($JViewport, colHead, getColumnHeader());
	if ((colHead != nullptr) && (colHead->isVisible())) {
		int32_t colHeadHeight = colHead->getHeight();
		borderR->y += colHeadHeight;
		borderR->height -= colHeadHeight;
	}
	$var($JViewport, rowHead, getRowHeader());
	if ((rowHead != nullptr) && (rowHead->isVisible())) {
		int32_t rowHeadWidth = rowHead->getWidth();
		if (leftToRight) {
			borderR->x += rowHeadWidth;
		}
		borderR->width -= rowHeadWidth;
	}
	$var($JScrollBar, vsb, getVerticalScrollBar());
	if ((vsb != nullptr) && (vsb->isVisible())) {
		int32_t vsbWidth = vsb->getWidth();
		if (!leftToRight) {
			borderR->x += vsbWidth;
		}
		borderR->width -= vsbWidth;
	}
	$var($JScrollBar, hsb, getHorizontalScrollBar());
	if ((hsb != nullptr) && (hsb->isVisible())) {
		borderR->height -= hsb->getHeight();
	}
	return borderR;
}

$JScrollBar* JScrollPane::createHorizontalScrollBar() {
	return $new($JScrollPane$ScrollBar, this, $JScrollBar::HORIZONTAL);
}

$JScrollBar* JScrollPane::getHorizontalScrollBar() {
	return this->horizontalScrollBar;
}

void JScrollPane::setHorizontalScrollBar($JScrollBar* horizontalScrollBar) {
	$var($JScrollBar, old, getHorizontalScrollBar());
	$set(this, horizontalScrollBar, horizontalScrollBar);
	if (horizontalScrollBar != nullptr) {
		$init($ScrollPaneConstants);
		add(horizontalScrollBar, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR);
	} else if (old != nullptr) {
		remove(old);
	}
	firePropertyChange("horizontalScrollBar"_s, old, horizontalScrollBar);
	revalidate();
	repaint();
}

$JScrollBar* JScrollPane::createVerticalScrollBar() {
	return $new($JScrollPane$ScrollBar, this, $JScrollBar::VERTICAL);
}

$JScrollBar* JScrollPane::getVerticalScrollBar() {
	return this->verticalScrollBar;
}

void JScrollPane::setVerticalScrollBar($JScrollBar* verticalScrollBar) {
	$var($JScrollBar, old, getVerticalScrollBar());
	$set(this, verticalScrollBar, verticalScrollBar);
	$init($ScrollPaneConstants);
	add(verticalScrollBar, $ScrollPaneConstants::VERTICAL_SCROLLBAR);
	firePropertyChange("verticalScrollBar"_s, old, verticalScrollBar);
	revalidate();
	repaint();
}

$JViewport* JScrollPane::createViewport() {
	return $new($JViewport);
}

$JViewport* JScrollPane::getViewport() {
	return this->viewport;
}

void JScrollPane::setViewport($JViewport* viewport) {
	$var($JViewport, old, getViewport());
	$set(this, viewport, viewport);
	if (viewport != nullptr) {
		$init($ScrollPaneConstants);
		add(viewport, $ScrollPaneConstants::VIEWPORT);
	} else if (old != nullptr) {
		remove(old);
	}
	firePropertyChange("viewport"_s, old, viewport);
	if (this->accessibleContext != nullptr) {
		$cast($JScrollPane$AccessibleJScrollPane, this->accessibleContext)->resetViewPort();
	}
	revalidate();
	repaint();
}

void JScrollPane::setViewportView($Component* view) {
	$useLocalObjectStack();
	if (getViewport() == nullptr) {
		setViewport($(createViewport()));
	}
	$$nc(getViewport())->setView(view);
}

$JViewport* JScrollPane::getRowHeader() {
	return this->rowHeader;
}

void JScrollPane::setRowHeader($JViewport* rowHeader) {
	$var($JViewport, old, getRowHeader());
	$set(this, rowHeader, rowHeader);
	if (rowHeader != nullptr) {
		$init($ScrollPaneConstants);
		add(rowHeader, $ScrollPaneConstants::ROW_HEADER);
	} else if (old != nullptr) {
		remove(old);
	}
	firePropertyChange("rowHeader"_s, old, rowHeader);
	revalidate();
	repaint();
}

void JScrollPane::setRowHeaderView($Component* view) {
	$useLocalObjectStack();
	if (getRowHeader() == nullptr) {
		setRowHeader($(createViewport()));
	}
	$$nc(getRowHeader())->setView(view);
}

$JViewport* JScrollPane::getColumnHeader() {
	return this->columnHeader;
}

void JScrollPane::setColumnHeader($JViewport* columnHeader) {
	$var($JViewport, old, getColumnHeader());
	$set(this, columnHeader, columnHeader);
	if (columnHeader != nullptr) {
		$init($ScrollPaneConstants);
		add(columnHeader, $ScrollPaneConstants::COLUMN_HEADER);
	} else if (old != nullptr) {
		remove(old);
	}
	firePropertyChange("columnHeader"_s, old, columnHeader);
	revalidate();
	repaint();
}

void JScrollPane::setColumnHeaderView($Component* view) {
	$useLocalObjectStack();
	if (getColumnHeader() == nullptr) {
		setColumnHeader($(createViewport()));
	}
	$$nc(getColumnHeader())->setView(view);
}

$Component* JScrollPane::getCorner($String* key$renamed) {
	$useLocalObjectStack();
	$var($String, key, key$renamed);
	bool isLeftToRight = $$nc(getComponentOrientation())->isLeftToRight();
	$init($ScrollPaneConstants);
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEADING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_LEFT_CORNER : $ScrollPaneConstants::LOWER_RIGHT_CORNER);
	} else if (key->equals($ScrollPaneConstants::LOWER_TRAILING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_RIGHT_CORNER : $ScrollPaneConstants::LOWER_LEFT_CORNER);
	} else if (key->equals($ScrollPaneConstants::UPPER_LEADING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_LEFT_CORNER : $ScrollPaneConstants::UPPER_RIGHT_CORNER);
	} else if (key->equals($ScrollPaneConstants::UPPER_TRAILING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_RIGHT_CORNER : $ScrollPaneConstants::UPPER_LEFT_CORNER);
	}
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEFT_CORNER)) {
		return this->lowerLeft;
	} else if (key->equals($ScrollPaneConstants::LOWER_RIGHT_CORNER)) {
		return this->lowerRight;
	} else if (key->equals($ScrollPaneConstants::UPPER_LEFT_CORNER)) {
		return this->upperLeft;
	} else if (key->equals($ScrollPaneConstants::UPPER_RIGHT_CORNER)) {
		return this->upperRight;
	} else {
		return nullptr;
	}
}

void JScrollPane::setCorner($String* key$renamed, $Component* corner) {
	$useLocalObjectStack();
	$var($String, key, key$renamed);
	$var($Component, old, nullptr);
	bool isLeftToRight = $$nc(getComponentOrientation())->isLeftToRight();
	$init($ScrollPaneConstants);
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEADING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_LEFT_CORNER : $ScrollPaneConstants::LOWER_RIGHT_CORNER);
	} else if (key->equals($ScrollPaneConstants::LOWER_TRAILING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::LOWER_RIGHT_CORNER : $ScrollPaneConstants::LOWER_LEFT_CORNER);
	} else if (key->equals($ScrollPaneConstants::UPPER_LEADING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_LEFT_CORNER : $ScrollPaneConstants::UPPER_RIGHT_CORNER);
	} else if (key->equals($ScrollPaneConstants::UPPER_TRAILING_CORNER)) {
		$assign(key, isLeftToRight ? $ScrollPaneConstants::UPPER_RIGHT_CORNER : $ScrollPaneConstants::UPPER_LEFT_CORNER);
	}
	if ($nc(key)->equals($ScrollPaneConstants::LOWER_LEFT_CORNER)) {
		$assign(old, this->lowerLeft);
		$set(this, lowerLeft, corner);
	} else if (key->equals($ScrollPaneConstants::LOWER_RIGHT_CORNER)) {
		$assign(old, this->lowerRight);
		$set(this, lowerRight, corner);
	} else if (key->equals($ScrollPaneConstants::UPPER_LEFT_CORNER)) {
		$assign(old, this->upperLeft);
		$set(this, upperLeft, corner);
	} else if (key->equals($ScrollPaneConstants::UPPER_RIGHT_CORNER)) {
		$assign(old, this->upperRight);
		$set(this, upperRight, corner);
	} else {
		$throwNew($IllegalArgumentException, "invalid corner key"_s);
	}
	if (old != nullptr) {
		remove(old);
	}
	if (corner != nullptr) {
		add(corner, key);
	}
	firePropertyChange(key, old, corner);
	revalidate();
	repaint();
}

void JScrollPane::setComponentOrientation($ComponentOrientation* co) {
	$JComponent::setComponentOrientation(co);
	if (this->verticalScrollBar != nullptr) {
		this->verticalScrollBar->setComponentOrientation(co);
	}
	if (this->horizontalScrollBar != nullptr) {
		this->horizontalScrollBar->setComponentOrientation(co);
	}
}

bool JScrollPane::isWheelScrollingEnabled() {
	return this->wheelScrollState;
}

void JScrollPane::setWheelScrollingEnabled(bool handleWheel) {
	bool old = this->wheelScrollState;
	this->wheelScrollState = handleWheel;
	firePropertyChange("wheelScrollingEnabled"_s, old, handleWheel);
}

void JScrollPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JScrollPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JScrollPane::paramString() {
	$useLocalObjectStack();
	$var($String, viewportBorderString, this->viewportBorder != nullptr ? this->viewportBorder->toString() : ""_s);
	$var($String, viewportString, this->viewport != nullptr ? this->viewport->toString() : ""_s);
	$var($String, verticalScrollBarPolicyString, nullptr);
	if (this->verticalScrollBarPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_AS_NEEDED) {
		$assign(verticalScrollBarPolicyString, "VERTICAL_SCROLLBAR_AS_NEEDED"_s);
	} else if (this->verticalScrollBarPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_NEVER) {
		$assign(verticalScrollBarPolicyString, "VERTICAL_SCROLLBAR_NEVER"_s);
	} else if (this->verticalScrollBarPolicy == $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS) {
		$assign(verticalScrollBarPolicyString, "VERTICAL_SCROLLBAR_ALWAYS"_s);
	} else {
		$assign(verticalScrollBarPolicyString, ""_s);
	}
	$var($String, horizontalScrollBarPolicyString, nullptr);
	if (this->horizontalScrollBarPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED) {
		$assign(horizontalScrollBarPolicyString, "HORIZONTAL_SCROLLBAR_AS_NEEDED"_s);
	} else if (this->horizontalScrollBarPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_NEVER) {
		$assign(horizontalScrollBarPolicyString, "HORIZONTAL_SCROLLBAR_NEVER"_s);
	} else if (this->horizontalScrollBarPolicy == $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_ALWAYS) {
		$assign(horizontalScrollBarPolicyString, "HORIZONTAL_SCROLLBAR_ALWAYS"_s);
	} else {
		$assign(horizontalScrollBarPolicyString, ""_s);
	}
	$var($String, horizontalScrollBarString, this->horizontalScrollBar != nullptr ? this->horizontalScrollBar->toString() : ""_s);
	$var($String, verticalScrollBarString, this->verticalScrollBar != nullptr ? this->verticalScrollBar->toString() : ""_s);
	$var($String, columnHeaderString, this->columnHeader != nullptr ? this->columnHeader->toString() : ""_s);
	$var($String, rowHeaderString, this->rowHeader != nullptr ? this->rowHeader->toString() : ""_s);
	$var($String, lowerLeftString, this->lowerLeft != nullptr ? this->lowerLeft->toString() : ""_s);
	$var($String, lowerRightString, this->lowerRight != nullptr ? this->lowerRight->toString() : ""_s);
	$var($String, upperLeftString, this->upperLeft != nullptr ? this->upperLeft->toString() : ""_s);
	$var($String, upperRightString, this->upperRight != nullptr ? this->upperRight->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",columnHeader="_s, columnHeaderString, ",horizontalScrollBar="_s, horizontalScrollBarString, ",horizontalScrollBarPolicy="_s, horizontalScrollBarPolicyString, ",lowerLeft="_s, lowerLeftString, ",lowerRight="_s, lowerRightString, ",rowHeader="_s, rowHeaderString, ",upperLeft="_s, upperLeftString, ",upperRight="_s, 
	upperRightString, ",verticalScrollBar="_s, verticalScrollBarString, ",verticalScrollBarPolicy="_s, verticalScrollBarPolicyString, ",viewport="_s, viewportString, ",viewportBorder="_s, viewportBorderString});
}

$AccessibleContext* JScrollPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JScrollPane$AccessibleJScrollPane, this));
	}
	return this->accessibleContext;
}

JScrollPane::JScrollPane() {
}

void JScrollPane::clinit$($Class* clazz) {
	$assignStatic(JScrollPane::uiClassID, "ScrollPaneUI"_s);
}

$Class* JScrollPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"viewportBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(JScrollPane, viewportBorder)},
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JScrollPane, uiClassID)},
		{"verticalScrollBarPolicy", "I", nullptr, $PROTECTED, $field(JScrollPane, verticalScrollBarPolicy)},
		{"horizontalScrollBarPolicy", "I", nullptr, $PROTECTED, $field(JScrollPane, horizontalScrollBarPolicy)},
		{"viewport", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane, viewport)},
		{"verticalScrollBar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(JScrollPane, verticalScrollBar)},
		{"horizontalScrollBar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(JScrollPane, horizontalScrollBar)},
		{"rowHeader", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane, rowHeader)},
		{"columnHeader", "Ljavax/swing/JViewport;", nullptr, $PROTECTED, $field(JScrollPane, columnHeader)},
		{"lowerLeft", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, lowerLeft)},
		{"lowerRight", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, lowerRight)},
		{"upperLeft", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, upperLeft)},
		{"upperRight", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(JScrollPane, upperRight)},
		{"wheelScrollState", "Z", nullptr, $PRIVATE, $field(JScrollPane, wheelScrollState)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getColumnHeadermethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute getHorizontalScrollBarmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$CompoundAttribute getRowHeadermethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute getUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"hidden", 'Z', "true"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute getVerticalScrollBarmethodAnnotations$$[] = {
		{"Ljava/beans/Transient;", nullptr},
		{}
	};
	$NamedAttribute getViewportBorderBoundsmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getViewportBorderBoundsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getViewportBorderBoundsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isValidateRootmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{}
	};
	$CompoundAttribute isValidateRootmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isValidateRootmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isWheelScrollingEnabledmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Flag for enabling/disabling mouse wheel scrolling"},
		{}
	};
	$CompoundAttribute isWheelScrollingEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isWheelScrollingEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setColumnHeadermethodAnnotations$$$namedAttribute[] = {
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The column header child for this scrollpane"},
		{}
	};
	$CompoundAttribute setColumnHeadermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColumnHeadermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setHorizontalScrollBarmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The horizontal scrollbar."},
		{}
	};
	$CompoundAttribute setHorizontalScrollBarmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHorizontalScrollBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "ScrollPaneConstants.HORIZONTAL_SCROLLBAR_AS_NEEDED"},
		{'s', "ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER"},
		{'s', "ScrollPaneConstants.HORIZONTAL_SCROLLBAR_ALWAYS"},
		{'-'}
	};
	$NamedAttribute setHorizontalScrollBarPolicymethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "The scrollpane scrollbar policy"},
		{}
	};
	$CompoundAttribute setHorizontalScrollBarPolicymethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setHorizontalScrollBarPolicymethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setRowHeadermethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The row header child for this scrollpane"},
		{}
	};
	$CompoundAttribute setRowHeadermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setRowHeadermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setVerticalScrollBarmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "The vertical scrollbar."},
		{}
	};
	$CompoundAttribute setVerticalScrollBarmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVerticalScrollBarmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$1[] = {
		{'s', "ScrollPaneConstants.VERTICAL_SCROLLBAR_AS_NEEDED"},
		{'s', "ScrollPaneConstants.VERTICAL_SCROLLBAR_NEVER"},
		{'s', "ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS"},
		{'-'}
	};
	$NamedAttribute setVerticalScrollBarPolicymethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute$1},
		{"description", 's', "The scrollpane vertical scrollbar policy"},
		{}
	};
	$CompoundAttribute setVerticalScrollBarPolicymethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setVerticalScrollBarPolicymethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setViewportmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"visualUpdate", 'Z', "true"},
		{"description", 's', "The viewport child for this scrollpane"},
		{}
	};
	$CompoundAttribute setViewportmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setViewportmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setViewportBordermethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The border around the viewport."},
		{}
	};
	$CompoundAttribute setViewportBordermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setViewportBordermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setWheelScrollingEnabledmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Flag for enabling/disabling mouse wheel scrolling"},
		{}
	};
	$CompoundAttribute setWheelScrollingEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setWheelScrollingEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC, $method(JScrollPane, init$, void, $Component*, int32_t, int32_t)},
		{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(JScrollPane, init$, void, $Component*)},
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(JScrollPane, init$, void, int32_t, int32_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JScrollPane, init$, void)},
		{"createHorizontalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, createHorizontalScrollBar, $JScrollBar*)},
		{"createVerticalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, createVerticalScrollBar, $JScrollBar*)},
		{"createViewport", "()Ljavax/swing/JViewport;", nullptr, $PROTECTED, $virtualMethod(JScrollPane, createViewport, $JViewport*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getColumnHeader", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getColumnHeader, $JViewport*), nullptr, nullptr, getColumnHeadermethodAnnotations$$},
		{"getCorner", "(Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getCorner, $Component*, $String*)},
		{"getHorizontalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getHorizontalScrollBar, $JScrollBar*), nullptr, nullptr, getHorizontalScrollBarmethodAnnotations$$},
		{"getHorizontalScrollBarPolicy", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getHorizontalScrollBarPolicy, int32_t)},
		{"getRowHeader", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getRowHeader, $JViewport*), nullptr, nullptr, getRowHeadermethodAnnotations$$},
		{"getUI", "()Ljavax/swing/plaf/ScrollPaneUI;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getUI, $ComponentUI*), nullptr, nullptr, getUImethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"getVerticalScrollBar", "()Ljavax/swing/JScrollBar;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getVerticalScrollBar, $JScrollBar*), nullptr, nullptr, getVerticalScrollBarmethodAnnotations$$},
		{"getVerticalScrollBarPolicy", "()I", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getVerticalScrollBarPolicy, int32_t)},
		{"getViewport", "()Ljavax/swing/JViewport;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getViewport, $JViewport*)},
		{"getViewportBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getViewportBorder, $Border*)},
		{"getViewportBorderBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(JScrollPane, getViewportBorderBounds, $Rectangle*), nullptr, nullptr, getViewportBorderBoundsmethodAnnotations$$},
		{"isValidateRoot", "()Z", nullptr, $PUBLIC, $virtualMethod(JScrollPane, isValidateRoot, bool), nullptr, nullptr, isValidateRootmethodAnnotations$$},
		{"isWheelScrollingEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JScrollPane, isWheelScrollingEnabled, bool), nullptr, nullptr, isWheelScrollingEnabledmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JScrollPane, paramString, $String*)},
		{"setColumnHeader", "(Ljavax/swing/JViewport;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setColumnHeader, void, $JViewport*), nullptr, nullptr, setColumnHeadermethodAnnotations$$},
		{"setColumnHeaderView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setColumnHeaderView, void, $Component*)},
		{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setComponentOrientation, void, $ComponentOrientation*)},
		{"setCorner", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setCorner, void, $String*, $Component*)},
		{"setHorizontalScrollBar", "(Ljavax/swing/JScrollBar;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setHorizontalScrollBar, void, $JScrollBar*), nullptr, nullptr, setHorizontalScrollBarmethodAnnotations$$},
		{"setHorizontalScrollBarPolicy", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setHorizontalScrollBarPolicy, void, int32_t), nullptr, nullptr, setHorizontalScrollBarPolicymethodAnnotations$$},
		{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setLayout, void, $LayoutManager*)},
		{"setRowHeader", "(Ljavax/swing/JViewport;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setRowHeader, void, $JViewport*), nullptr, nullptr, setRowHeadermethodAnnotations$$},
		{"setRowHeaderView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setRowHeaderView, void, $Component*)},
		{"setUI", "(Ljavax/swing/plaf/ScrollPaneUI;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setUI, void, $ScrollPaneUI*)},
		{"setVerticalScrollBar", "(Ljavax/swing/JScrollBar;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setVerticalScrollBar, void, $JScrollBar*), nullptr, nullptr, setVerticalScrollBarmethodAnnotations$$},
		{"setVerticalScrollBarPolicy", "(I)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setVerticalScrollBarPolicy, void, int32_t), nullptr, nullptr, setVerticalScrollBarPolicymethodAnnotations$$},
		{"setViewport", "(Ljavax/swing/JViewport;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setViewport, void, $JViewport*), nullptr, nullptr, setViewportmethodAnnotations$$},
		{"setViewportBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setViewportBorder, void, $Border*), nullptr, nullptr, setViewportBordermethodAnnotations$$},
		{"setViewportView", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setViewportView, void, $Component*)},
		{"setWheelScrollingEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, setWheelScrollingEnabled, void, bool), nullptr, nullptr, setWheelScrollingEnabledmethodAnnotations$$},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JScrollPane, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JScrollPane, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JScrollPane$AccessibleJScrollPane", "javax.swing.JScrollPane", "AccessibleJScrollPane", $PROTECTED},
		{"javax.swing.JScrollPane$ScrollBar", "javax.swing.JScrollPane", "ScrollBar", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A specialized container that manages a viewport, optional scrollbars and headers"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"delegate", 's', "getViewport"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JScrollPane",
		"javax.swing.JComponent",
		"javax.swing.ScrollPaneConstants,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JScrollPane$AccessibleJScrollPane,javax.swing.JScrollPane$ScrollBar"
	};
	$loadClass(JScrollPane, name, initialize, &classInfo$$, JScrollPane::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JScrollPane));
	});
	return class$;
}

$Class* JScrollPane::class$ = nullptr;

	} // swing
} // javax
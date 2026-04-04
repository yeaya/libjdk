#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <jcpp.h>

#undef SAFE_NO_FOCUS_BORDER

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicComboBoxRenderer::toString() {
	 return this->$JLabel::toString();
}

int32_t BasicComboBoxRenderer::hashCode() {
	 return this->$JLabel::hashCode();
}

bool BasicComboBoxRenderer::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* BasicComboBoxRenderer::clone() {
	 return this->$JLabel::clone();
}

void BasicComboBoxRenderer::finalize() {
	this->$JLabel::finalize();
}

$Border* BasicComboBoxRenderer::noFocusBorder = nullptr;
$Border* BasicComboBoxRenderer::SAFE_NO_FOCUS_BORDER = nullptr;

void BasicComboBoxRenderer::init$() {
	$JLabel::init$();
	setOpaque(true);
	setBorder($(getNoFocusBorder()));
}

$Border* BasicComboBoxRenderer::getNoFocusBorder() {
	$init(BasicComboBoxRenderer);
	if ($System::getSecurityManager() != nullptr) {
		return BasicComboBoxRenderer::SAFE_NO_FOCUS_BORDER;
	} else {
		return BasicComboBoxRenderer::noFocusBorder;
	}
}

$Dimension* BasicComboBoxRenderer::getPreferredSize() {
	$useLocalObjectStack();
	$var($Dimension, size, nullptr);
	bool var$0 = this->getText() == nullptr;
	if (var$0 || $$nc(this->getText())->isEmpty()) {
		setText(" "_s);
		$assign(size, $JLabel::getPreferredSize());
		setText(""_s);
	} else {
		$assign(size, $JLabel::getPreferredSize());
	}
	return size;
}

$Component* BasicComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	if (isSelected) {
		setBackground($($nc(list)->getSelectionBackground()));
		setForeground($(list->getSelectionForeground()));
	} else {
		setBackground($($nc(list)->getBackground()));
		setForeground($(list->getForeground()));
	}
	setFont($($nc(list)->getFont()));
	if ($instanceOf($Icon, value)) {
		setIcon($cast($Icon, value));
	} else {
		setText((value == nullptr) ? ""_s : $($of(value)->toString()));
	}
	return this;
}

void BasicComboBoxRenderer::clinit$($Class* clazz) {
	$assignStatic(BasicComboBoxRenderer::noFocusBorder, $new($EmptyBorder, 1, 1, 1, 1));
	$assignStatic(BasicComboBoxRenderer::SAFE_NO_FOCUS_BORDER, $new($EmptyBorder, 1, 1, 1, 1));
}

BasicComboBoxRenderer::BasicComboBoxRenderer() {
}

$Class* BasicComboBoxRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"noFocusBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED | $STATIC, $staticField(BasicComboBoxRenderer, noFocusBorder)},
		{"SAFE_NO_FOCUS_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicComboBoxRenderer, SAFE_NO_FOCUS_BORDER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicComboBoxRenderer, init$, void)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(BasicComboBoxRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{"getNoFocusBorder", "()Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticMethod(BasicComboBoxRenderer, getNoFocusBorder, $Border*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxRenderer, getPreferredSize, $Dimension*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource", "javax.swing.plaf.basic.BasicComboBoxRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboBoxRenderer",
		"javax.swing.JLabel",
		"javax.swing.ListCellRenderer",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/JLabel;Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource"
	};
	$loadClass(BasicComboBoxRenderer, name, initialize, &classInfo$$, BasicComboBoxRenderer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicComboBoxRenderer));
	});
	return class$;
}

$Class* BasicComboBoxRenderer::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
#include <javax/swing/JTable$BooleanRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <jcpp.h>

#undef CENTER

using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;

namespace javax {
	namespace swing {

$String* JTable$BooleanRenderer::toString() {
	 return this->$JCheckBox::toString();
}

int32_t JTable$BooleanRenderer::hashCode() {
	 return this->$JCheckBox::hashCode();
}

bool JTable$BooleanRenderer::equals(Object$* arg0) {
	 return this->$JCheckBox::equals(arg0);
}

$Object* JTable$BooleanRenderer::clone() {
	 return this->$JCheckBox::clone();
}

void JTable$BooleanRenderer::finalize() {
	this->$JCheckBox::finalize();
}

$Border* JTable$BooleanRenderer::noFocusBorder = nullptr;

void JTable$BooleanRenderer::init$() {
	$JCheckBox::init$();
	setHorizontalAlignment($JLabel::CENTER);
	setBorderPainted(true);
}

$Component* JTable$BooleanRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalObjectStack();
	if (isSelected) {
		setForeground($($nc(table)->getSelectionForeground()));
		$JCheckBox::setBackground($(table->getSelectionBackground()));
	} else {
		setForeground($($nc(table)->getForeground()));
		setBackground($(table->getBackground()));
	}
	setSelected((value != nullptr && $cast($Boolean, value)->booleanValue()));
	if (hasFocus) {
		setBorder($($UIManager::getBorder("Table.focusCellHighlightBorder"_s)));
	} else {
		setBorder(JTable$BooleanRenderer::noFocusBorder);
	}
	return this;
}

void JTable$BooleanRenderer::clinit$($Class* clazz) {
	$assignStatic(JTable$BooleanRenderer::noFocusBorder, $new($EmptyBorder, 1, 1, 1, 1));
}

JTable$BooleanRenderer::JTable$BooleanRenderer() {
}

$Class* JTable$BooleanRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"noFocusBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTable$BooleanRenderer, noFocusBorder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$BooleanRenderer, init$, void)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JTable$BooleanRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$BooleanRenderer", "javax.swing.JTable", "BooleanRenderer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$BooleanRenderer",
		"javax.swing.JCheckBox",
		"javax.swing.table.TableCellRenderer,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$BooleanRenderer, name, initialize, &classInfo$$, JTable$BooleanRenderer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$BooleanRenderer));
	});
	return class$;
}

$Class* JTable$BooleanRenderer::class$ = nullptr;

	} // swing
} // javax
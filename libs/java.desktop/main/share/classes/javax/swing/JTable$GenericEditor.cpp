#include <javax/swing/JTable$GenericEditor.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/LineBorder.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $LineBorder = ::javax::swing::border::LineBorder;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

void JTable$GenericEditor::init$() {
	$useLocalObjectStack();
	$DefaultCellEditor::init$($$new($JTextField));
	$set(this, argTypes, $new($ClassArray, {$String::class$}));
	$$nc(getComponent())->setName("Table.editor"_s);
}

bool JTable$GenericEditor::stopCellEditing() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, s, $cast($String, $DefaultCellEditor::getCellEditorValue()));
	try {
		if (""_s->equals(s)) {
			if ($nc(this->constructor)->getDeclaringClass() == $String::class$) {
				$set(this, value, s);
			}
			return $DefaultCellEditor::stopCellEditing();
		}
		$SwingUtilities2::checkAccess($nc(this->constructor)->getModifiers());
		$set(this, value, $nc(this->constructor)->newInstance($$new($ObjectArray, {s})));
	} catch ($Exception& e) {
		$init($Color);
		$$sure($JComponent, getComponent())->setBorder($$new($LineBorder, $Color::red));
		return false;
	}
	return $DefaultCellEditor::stopCellEditing();
}

$Component* JTable$GenericEditor::getTableCellEditorComponent($JTable* table, Object$* value, bool isSelected, int32_t row, int32_t column) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$set(this, value, nullptr);
	$init($Color);
	$$sure($JComponent, getComponent())->setBorder($$new($LineBorder, $Color::black));
	try {
		$Class* type = $nc(table)->getColumnClass(column);
		if (type == $Object::class$) {
			type = $String::class$;
		}
		$ReflectUtil::checkPackageAccess(type);
		$SwingUtilities2::checkAccess($nc(type)->getModifiers());
		$set(this, constructor, type->getConstructor(this->argTypes));
	} catch ($Exception& e) {
		return nullptr;
	}
	return $DefaultCellEditor::getTableCellEditorComponent(table, value, isSelected, row, column);
}

$Object* JTable$GenericEditor::getCellEditorValue() {
	return this->value;
}

JTable$GenericEditor::JTable$GenericEditor() {
}

$Class* JTable$GenericEditor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"argTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", 0, $field(JTable$GenericEditor, argTypes)},
		{"constructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", 0, $field(JTable$GenericEditor, constructor)},
		{"value", "Ljava/lang/Object;", nullptr, 0, $field(JTable$GenericEditor, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTable$GenericEditor, init$, void)},
		{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JTable$GenericEditor, getCellEditorValue, $Object*)},
		{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JTable$GenericEditor, getTableCellEditorComponent, $Component*, $JTable*, Object$*, bool, int32_t, int32_t)},
		{"stopCellEditing", "()Z", nullptr, $PUBLIC, $virtualMethod(JTable$GenericEditor, stopCellEditing, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$GenericEditor", "javax.swing.JTable", "GenericEditor", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$GenericEditor",
		"javax.swing.DefaultCellEditor",
		nullptr,
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
	$loadClass(JTable$GenericEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$GenericEditor));
	});
	return class$;
}

$Class* JTable$GenericEditor::class$ = nullptr;

	} // swing
} // javax
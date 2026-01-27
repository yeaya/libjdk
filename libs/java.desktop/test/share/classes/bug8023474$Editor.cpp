#include <bug8023474$Editor.h>

#include <bug8023474.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/CellEditorListener.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JTree = ::javax::swing::JTree;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;

$FieldInfo _bug8023474$Editor_FieldInfo_[] = {
	{"checkbox", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(bug8023474$Editor, checkbox)},
	{}
};

$MethodInfo _bug8023474$Editor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(bug8023474$Editor, init$, void)},
	{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, addCellEditorListener, void, $CellEditorListener*)},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, cancelCellEditing, void)},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, getCellEditorValue, $Object*)},
	{"getTreeCellEditorComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, getTreeCellEditorComponent, $Component*, $JTree*, Object$*, bool, bool, bool, int32_t)},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, isCellEditable, bool, $EventObject*)},
	{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, removeCellEditorListener, void, $CellEditorListener*)},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, shouldSelectCell, bool, $EventObject*)},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC, $virtualMethod(bug8023474$Editor, stopCellEditing, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8023474$Editor_InnerClassesInfo_[] = {
	{"bug8023474$Editor", "bug8023474", "Editor", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8023474$Editor_ClassInfo_ = {
	$ACC_SUPER,
	"bug8023474$Editor",
	"javax.swing.JPanel",
	"javax.swing.tree.TreeCellEditor",
	_bug8023474$Editor_FieldInfo_,
	_bug8023474$Editor_MethodInfo_,
	nullptr,
	nullptr,
	_bug8023474$Editor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8023474"
};

$Object* allocate$bug8023474$Editor($Class* clazz) {
	return $of($alloc(bug8023474$Editor));
}

$String* bug8023474$Editor::toString() {
	 return this->$JPanel::toString();
}

int32_t bug8023474$Editor::hashCode() {
	 return this->$JPanel::hashCode();
}

bool bug8023474$Editor::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* bug8023474$Editor::clone() {
	 return this->$JPanel::clone();
}

void bug8023474$Editor::finalize() {
	this->$JPanel::finalize();
}

void bug8023474$Editor::init$() {
	$JPanel::init$();
	setOpaque(false);
	$set(this, checkbox, $new($JCheckBox));
	add(static_cast<$Component*>(this->checkbox));
}

$Component* bug8023474$Editor::getTreeCellEditorComponent($JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) {
	$nc(this->checkbox)->setText($($nc($of(value))->toString()));
	$nc(this->checkbox)->setSelected(false);
	return this;
}

$Object* bug8023474$Editor::getCellEditorValue() {
	return $of($Boolean::valueOf($nc(this->checkbox)->isSelected()));
}

bool bug8023474$Editor::isCellEditable($EventObject* anEvent) {
	return true;
}

bool bug8023474$Editor::shouldSelectCell($EventObject* anEvent) {
	return true;
}

bool bug8023474$Editor::stopCellEditing() {
	return true;
}

void bug8023474$Editor::cancelCellEditing() {
}

void bug8023474$Editor::addCellEditorListener($CellEditorListener* l) {
}

void bug8023474$Editor::removeCellEditorListener($CellEditorListener* l) {
}

bug8023474$Editor::bug8023474$Editor() {
}

$Class* bug8023474$Editor::load$($String* name, bool initialize) {
	$loadClass(bug8023474$Editor, name, initialize, &_bug8023474$Editor_ClassInfo_, allocate$bug8023474$Editor);
	return class$;
}

$Class* bug8023474$Editor::class$ = nullptr;
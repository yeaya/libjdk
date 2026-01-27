#include <javax/swing/JComboBox$AccessibleJComboBox.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener.h>
#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener.h>
#include <javax/swing/JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener.h>
#include <javax/swing/JComboBox$AccessibleJComboBox$EditorAccessibleContext.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

#undef COLLAPSED
#undef COMBO_BOX
#undef EXPANDED

using $Component = ::java::awt::Component;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener = ::javax::swing::JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener;
using $JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener = ::javax::swing::JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener;
using $JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener = ::javax::swing::JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JList = ::javax::swing::JList;
using $UIManager = ::javax::swing::UIManager;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

namespace javax {
	namespace swing {

$FieldInfo _JComboBox$AccessibleJComboBox_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(JComboBox$AccessibleJComboBox, this$0)},
	{"popupList", "Ljavax/swing/JList;", "Ljavax/swing/JList<*>;", $PRIVATE, $field(JComboBox$AccessibleJComboBox, popupList)},
	{"previousSelectedAccessible", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(JComboBox$AccessibleJComboBox, previousSelectedAccessible)},
	{"editorAccessibleContext", "Ljavax/swing/JComboBox$AccessibleJComboBox$EditorAccessibleContext;", "Ljavax/swing/JComboBox<TE;>.AccessibleJComboBox.EditorAccessibleContext;", $PRIVATE, $field(JComboBox$AccessibleJComboBox, editorAccessibleContext)},
	{}
};

$MethodInfo _JComboBox$AccessibleJComboBox_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComboBox;)V", nullptr, $PUBLIC, $method(JComboBox$AccessibleJComboBox, init$, void, $JComboBox*)},
	{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, addAccessibleSelection, void, int32_t)},
	{"clearAccessibleSelection", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, clearAccessibleSelection, void)},
	{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, doAccessibleAction, bool, int32_t)},
	{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleAction, $AccessibleAction*)},
	{"getAccessibleActionCount", "()I", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleActionCount, int32_t)},
	{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleActionDescription, $String*, int32_t)},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleChild, $Accessible*, int32_t)},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleChildrenCount, int32_t)},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleRole, $AccessibleRole*)},
	{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleSelection, $AccessibleSelection*)},
	{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleSelection, $Accessible*, int32_t)},
	{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleSelectionCount, int32_t)},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, getAccessibleStateSet, $AccessibleStateSet*)},
	{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, isAccessibleChildSelected, bool, int32_t)},
	{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, removeAccessibleSelection, void, int32_t)},
	{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBox$AccessibleJComboBox, selectAllAccessibleSelection, void)},
	{"setEditorNameAndDescription", "()V", nullptr, $PRIVATE, $method(JComboBox$AccessibleJComboBox, setEditorNameAndDescription, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComboBox$AccessibleJComboBox_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JComboBox$AccessibleJComboBox$EditorAccessibleContext", "javax.swing.JComboBox$AccessibleJComboBox", "EditorAccessibleContext", $PRIVATE},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleEditor", $PRIVATE},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxListSelectionListener", $PRIVATE},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxPopupMenuListener", $PRIVATE},
	{"javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener", "javax.swing.JComboBox$AccessibleJComboBox", "AccessibleJComboBoxPropertyChangeListener", $PRIVATE},
	{}
};

$ClassInfo _JComboBox$AccessibleJComboBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JComboBox$AccessibleJComboBox",
	"javax.swing.JComponent$AccessibleJComponent",
	"javax.accessibility.AccessibleAction,javax.accessibility.AccessibleSelection",
	_JComboBox$AccessibleJComboBox_FieldInfo_,
	_JComboBox$AccessibleJComboBox_MethodInfo_,
	nullptr,
	nullptr,
	_JComboBox$AccessibleJComboBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$AccessibleJComboBox($Class* clazz) {
	return $of($alloc(JComboBox$AccessibleJComboBox));
}

int32_t JComboBox$AccessibleJComboBox::hashCode() {
	 return this->$JComponent$AccessibleJComponent::hashCode();
}

bool JComboBox$AccessibleJComboBox::equals(Object$* arg0) {
	 return this->$JComponent$AccessibleJComponent::equals(arg0);
}

$Object* JComboBox$AccessibleJComboBox::clone() {
	 return this->$JComponent$AccessibleJComponent::clone();
}

$String* JComboBox$AccessibleJComboBox::toString() {
	 return this->$JComponent$AccessibleJComponent::toString();
}

void JComboBox$AccessibleJComboBox::finalize() {
	this->$JComponent$AccessibleJComponent::finalize();
}

void JComboBox$AccessibleJComboBox::init$($JComboBox* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
	$set(this, previousSelectedAccessible, nullptr);
	$set(this, editorAccessibleContext, nullptr);
	this$0->addPropertyChangeListener($$new($JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener, this));
	setEditorNameAndDescription();
	$var($Accessible, a, $nc($($cast($ComboBoxUI, this$0->getUI())))->getAccessibleChild(this$0, 0));
	if ($instanceOf($ComboPopup, a)) {
		$set(this, popupList, $nc(($cast($ComboPopup, a)))->getList());
		$nc(this->popupList)->addListSelectionListener($$new($JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener, this));
	}
	this$0->addPopupMenuListener($$new($JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener, this));
}

void JComboBox$AccessibleJComboBox::setEditorNameAndDescription() {
	$useLocalCurrentObjectStackCache();
	$var($ComboBoxEditor, editor, this->this$0->getEditor());
	if (editor != nullptr) {
		$var($Component, comp, editor->getEditorComponent());
		if ($instanceOf($Accessible, comp)) {
			$var($AccessibleContext, ac, $nc(comp)->getAccessibleContext());
			if (ac != nullptr) {
				ac->setAccessibleName($(getAccessibleName()));
				ac->setAccessibleDescription($(getAccessibleDescription()));
			}
		}
	}
}

int32_t JComboBox$AccessibleJComboBox::getAccessibleChildrenCount() {
	if (this->this$0->ui != nullptr) {
		return $nc(this->this$0->ui)->getAccessibleChildrenCount(this->this$0);
	} else {
		return $JComponent$AccessibleJComponent::getAccessibleChildrenCount();
	}
}

$Accessible* JComboBox$AccessibleJComboBox::getAccessibleChild(int32_t i) {
	if (this->this$0->ui != nullptr) {
		return $nc(this->this$0->ui)->getAccessibleChild(this->this$0, i);
	} else {
		return $JComponent$AccessibleJComponent::getAccessibleChild(i);
	}
}

$AccessibleRole* JComboBox$AccessibleJComboBox::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::COMBO_BOX;
}

$AccessibleStateSet* JComboBox$AccessibleJComboBox::getAccessibleStateSet() {
	$var($AccessibleStateSet, ass, $JComponent$AccessibleJComponent::getAccessibleStateSet());
	if (ass == nullptr) {
		$assign(ass, $new($AccessibleStateSet));
	}
	if (this->this$0->isPopupVisible()) {
		$init($AccessibleState);
		$nc(ass)->add($AccessibleState::EXPANDED);
	} else {
		$init($AccessibleState);
		$nc(ass)->add($AccessibleState::COLLAPSED);
	}
	return ass;
}

$AccessibleAction* JComboBox$AccessibleJComboBox::getAccessibleAction() {
	return this;
}

$String* JComboBox$AccessibleJComboBox::getAccessibleActionDescription(int32_t i) {
	if (i == 0) {
		return $UIManager::getString("ComboBox.togglePopupText"_s);
	} else {
		return nullptr;
	}
}

int32_t JComboBox$AccessibleJComboBox::getAccessibleActionCount() {
	return 1;
}

bool JComboBox$AccessibleJComboBox::doAccessibleAction(int32_t i) {
	if (i == 0) {
		this->this$0->setPopupVisible(!this->this$0->isPopupVisible());
		return true;
	} else {
		return false;
	}
}

$AccessibleSelection* JComboBox$AccessibleJComboBox::getAccessibleSelection() {
	return this;
}

int32_t JComboBox$AccessibleJComboBox::getAccessibleSelectionCount() {
	$var($Object, o, this->this$0->getSelectedItem());
	if (o != nullptr) {
		return 1;
	} else {
		return 0;
	}
}

$Accessible* JComboBox$AccessibleJComboBox::getAccessibleSelection(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, a, $nc($($cast($ComboBoxUI, this->this$0->getUI())))->getAccessibleChild(this->this$0, 0));
	if (a != nullptr && $instanceOf($ComboPopup, a)) {
		$var($JList, list, $nc(($cast($ComboPopup, a)))->getList());
		$var($AccessibleContext, ac, $nc(list)->getAccessibleContext());
		if (ac != nullptr) {
			$var($AccessibleSelection, as, ac->getAccessibleSelection());
			if (as != nullptr) {
				return as->getAccessibleSelection(i);
			}
		}
	}
	return nullptr;
}

bool JComboBox$AccessibleJComboBox::isAccessibleChildSelected(int32_t i) {
	return this->this$0->getSelectedIndex() == i;
}

void JComboBox$AccessibleJComboBox::addAccessibleSelection(int32_t i) {
	clearAccessibleSelection();
	this->this$0->setSelectedIndex(i);
}

void JComboBox$AccessibleJComboBox::removeAccessibleSelection(int32_t i) {
	if (this->this$0->getSelectedIndex() == i) {
		clearAccessibleSelection();
	}
}

void JComboBox$AccessibleJComboBox::clearAccessibleSelection() {
	this->this$0->setSelectedIndex(-1);
}

void JComboBox$AccessibleJComboBox::selectAllAccessibleSelection() {
}

JComboBox$AccessibleJComboBox::JComboBox$AccessibleJComboBox() {
}

$Class* JComboBox$AccessibleJComboBox::load$($String* name, bool initialize) {
	$loadClass(JComboBox$AccessibleJComboBox, name, initialize, &_JComboBox$AccessibleJComboBox_ClassInfo_, allocate$JComboBox$AccessibleJComboBox);
	return class$;
}

$Class* JComboBox$AccessibleJComboBox::class$ = nullptr;

	} // swing
} // javax
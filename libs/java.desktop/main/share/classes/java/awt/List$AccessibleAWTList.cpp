#include <java/awt/List$AccessibleAWTList.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/List$AccessibleAWTList$AccessibleAWTListChild.h>
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef LIST
#undef MULTISELECTABLE

using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $List = ::java::awt::List;
using $List$AccessibleAWTList$AccessibleAWTListChild = ::java::awt::List$AccessibleAWTList$AccessibleAWTListChild;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

int32_t List$AccessibleAWTList::hashCode() {
	 return this->$Component$AccessibleAWTComponent::hashCode();
}

bool List$AccessibleAWTList::equals(Object$* arg0) {
	 return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* List$AccessibleAWTList::clone() {
	 return this->$Component$AccessibleAWTComponent::clone();
}

$String* List$AccessibleAWTList::toString() {
	 return this->$Component$AccessibleAWTComponent::toString();
}

void List$AccessibleAWTList::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void List$AccessibleAWTList::init$($List* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
	this$0->addActionListener(this);
	this$0->addItemListener(this);
}

void List$AccessibleAWTList::actionPerformed($ActionEvent* event) {
}

void List$AccessibleAWTList::itemStateChanged($ItemEvent* event) {
}

$AccessibleStateSet* List$AccessibleAWTList::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Component$AccessibleAWTComponent::getAccessibleStateSet());
	if (this->this$0->isMultipleMode()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::MULTISELECTABLE);
	}
	return states;
}

$AccessibleRole* List$AccessibleAWTList::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::LIST;
}

$Accessible* List$AccessibleAWTList::getAccessibleAt($Point* p) {
	return nullptr;
}

int32_t List$AccessibleAWTList::getAccessibleChildrenCount() {
	return this->this$0->getItemCount();
}

$Accessible* List$AccessibleAWTList::getAccessibleChild(int32_t i) {
	$synchronized(this->this$0) {
		if (i >= this->this$0->getItemCount()) {
			return nullptr;
		} else {
			return $new($List$AccessibleAWTList$AccessibleAWTListChild, this, this->this$0, i);
		}
	}
}

$AccessibleSelection* List$AccessibleAWTList::getAccessibleSelection() {
	return this;
}

int32_t List$AccessibleAWTList::getAccessibleSelectionCount() {
	return $nc($(this->this$0->getSelectedIndexes()))->length;
}

$Accessible* List$AccessibleAWTList::getAccessibleSelection(int32_t i) {
	$synchronized(this->this$0) {
		int32_t len = getAccessibleSelectionCount();
		if (i < 0 || i >= len) {
			return nullptr;
		} else {
			return getAccessibleChild($nc($(this->this$0->getSelectedIndexes()))->get(i));
		}
	}
}

bool List$AccessibleAWTList::isAccessibleChildSelected(int32_t i) {
	return this->this$0->isIndexSelected(i);
}

void List$AccessibleAWTList::addAccessibleSelection(int32_t i) {
	this->this$0->select(i);
}

void List$AccessibleAWTList::removeAccessibleSelection(int32_t i) {
	this->this$0->deselect(i);
}

void List$AccessibleAWTList::clearAccessibleSelection() {
	$synchronized(this->this$0) {
		$var($ints, selectedIndexes, this->this$0->getSelectedIndexes());
		if (selectedIndexes == nullptr) {
			return;
		}
		for (int32_t i = $nc(selectedIndexes)->length - 1; i >= 0; --i) {
			this->this$0->deselect(selectedIndexes->get(i));
		}
	}
}

void List$AccessibleAWTList::selectAllAccessibleSelection() {
	$synchronized(this->this$0) {
		for (int32_t i = this->this$0->getItemCount() - 1; i >= 0; --i) {
			this->this$0->select(i);
		}
	}
}

List$AccessibleAWTList::List$AccessibleAWTList() {
}

$Class* List$AccessibleAWTList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/List;", nullptr, $FINAL | $SYNTHETIC, $field(List$AccessibleAWTList, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(List$AccessibleAWTList, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/List;)V", nullptr, $PUBLIC, $method(List$AccessibleAWTList, init$, void, $List*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, actionPerformed, void, $ActionEvent*)},
		{"addAccessibleSelection", "(I)V", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, addAccessibleSelection, void, int32_t)},
		{"clearAccessibleSelection", "()V", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, clearAccessibleSelection, void)},
		{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleAt, $Accessible*, $Point*)},
		{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleChild, $Accessible*, int32_t)},
		{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleChildrenCount, int32_t)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleSelection", "()Ljavax/accessibility/AccessibleSelection;", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleSelection, $AccessibleSelection*)},
		{"getAccessibleSelection", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleSelection, $Accessible*, int32_t)},
		{"getAccessibleSelectionCount", "()I", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleSelectionCount, int32_t)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, getAccessibleStateSet, $AccessibleStateSet*)},
		{"isAccessibleChildSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, isAccessibleChildSelected, bool, int32_t)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, itemStateChanged, void, $ItemEvent*)},
		{"removeAccessibleSelection", "(I)V", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, removeAccessibleSelection, void, int32_t)},
		{"selectAllAccessibleSelection", "()V", nullptr, $PUBLIC, $virtualMethod(List$AccessibleAWTList, selectAllAccessibleSelection, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.List$AccessibleAWTList", "java.awt.List", "AccessibleAWTList", $PROTECTED},
		{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
		{"java.awt.List$AccessibleAWTList$AccessibleAWTListChild", "java.awt.List$AccessibleAWTList", "AccessibleAWTListChild", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.List$AccessibleAWTList",
		"java.awt.Component$AccessibleAWTComponent",
		"javax.accessibility.AccessibleSelection,java.awt.event.ItemListener,java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.List"
	};
	$loadClass(List$AccessibleAWTList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(List$AccessibleAWTList));
	});
	return class$;
}

$Class* List$AccessibleAWTList::class$ = nullptr;

	} // awt
} // java
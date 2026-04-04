#include <javax/swing/DefaultFocusManager.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <javax/swing/FocusManager.h>
#include <javax/swing/LayoutComparator.h>
#include <javax/swing/LegacyGlueFocusTraversalPolicy.h>
#include <javax/swing/LegacyLayoutFocusTraversalPolicy.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FocusManager = ::javax::swing::FocusManager;
using $LayoutComparator = ::javax::swing::LayoutComparator;
using $LegacyGlueFocusTraversalPolicy = ::javax::swing::LegacyGlueFocusTraversalPolicy;
using $LegacyLayoutFocusTraversalPolicy = ::javax::swing::LegacyLayoutFocusTraversalPolicy;

namespace javax {
	namespace swing {

void DefaultFocusManager::init$() {
	$FocusManager::init$();
	$set(this, gluePolicy, $new($LegacyGlueFocusTraversalPolicy, this));
	$set(this, layoutPolicy, $new($LegacyLayoutFocusTraversalPolicy, this));
	$set(this, comparator, $new($LayoutComparator));
	setDefaultFocusTraversalPolicy(this->gluePolicy);
}

$Component* DefaultFocusManager::getComponentAfter($Container* aContainer, $Component* aComponent) {
	$useLocalObjectStack();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : aContainer->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getComponentAfter(root, aComponent);
		}
		this->comparator->setComponentOrientation($(root->getComponentOrientation()));
		return this->layoutPolicy->getComponentAfter(root, aComponent);
	}
	return nullptr;
}

$Component* DefaultFocusManager::getComponentBefore($Container* aContainer, $Component* aComponent) {
	$useLocalObjectStack();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : aContainer->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getComponentBefore(root, aComponent);
		}
		this->comparator->setComponentOrientation($(root->getComponentOrientation()));
		return this->layoutPolicy->getComponentBefore(root, aComponent);
	}
	return nullptr;
}

$Component* DefaultFocusManager::getFirstComponent($Container* aContainer) {
	$useLocalObjectStack();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : aContainer->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getFirstComponent(root);
		}
		this->comparator->setComponentOrientation($(root->getComponentOrientation()));
		return this->layoutPolicy->getFirstComponent(root);
	}
	return nullptr;
}

$Component* DefaultFocusManager::getLastComponent($Container* aContainer) {
	$useLocalObjectStack();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : aContainer->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getLastComponent(root);
		}
		this->comparator->setComponentOrientation($(root->getComponentOrientation()));
		return this->layoutPolicy->getLastComponent(root);
	}
	return nullptr;
}

bool DefaultFocusManager::compareTabOrder($Component* a, $Component* b) {
	return (this->comparator->compare(a, b) < 0);
}

DefaultFocusManager::DefaultFocusManager() {
}

$Class* DefaultFocusManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"gluePolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $FINAL, $field(DefaultFocusManager, gluePolicy)},
		{"layoutPolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $PRIVATE | $FINAL, $field(DefaultFocusManager, layoutPolicy)},
		{"comparator", "Ljavax/swing/LayoutComparator;", nullptr, $PRIVATE | $FINAL, $field(DefaultFocusManager, comparator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultFocusManager, init$, void)},
		{"compareTabOrder", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PUBLIC, $virtualMethod(DefaultFocusManager, compareTabOrder, bool, $Component*, $Component*)},
		{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DefaultFocusManager, getComponentAfter, $Component*, $Container*, $Component*)},
		{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DefaultFocusManager, getComponentBefore, $Component*, $Container*, $Component*)},
		{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DefaultFocusManager, getFirstComponent, $Component*, $Container*)},
		{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(DefaultFocusManager, getLastComponent, $Component*, $Container*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.DefaultFocusManager",
		"javax.swing.FocusManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultFocusManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultFocusManager));
	});
	return class$;
}

$Class* DefaultFocusManager::class$ = nullptr;

	} // swing
} // javax
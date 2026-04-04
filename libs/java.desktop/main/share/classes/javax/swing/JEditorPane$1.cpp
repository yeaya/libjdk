#include <javax/swing/JEditorPane$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;

namespace javax {
	namespace swing {

void JEditorPane$1::init$($JEditorPane* this$0) {
	$set(this, this$0, this$0);
	$LayoutFocusTraversalPolicy::init$();
}

$Component* JEditorPane$1::getComponentAfter($Container* focusCycleRoot, $Component* aComponent) {
	$useLocalObjectStack();
	bool var$0 = !$equals(focusCycleRoot, this->this$0);
	if (!var$0) {
		bool var$1 = !this->this$0->isEditable();
		var$0 = var$1 && this->this$0->getComponentCount() > 0;
	}
	if (var$0) {
		return $LayoutFocusTraversalPolicy::getComponentAfter(focusCycleRoot, aComponent);
	} else {
		$var($Container, rootAncestor, this->this$0->getFocusCycleRootAncestor());
		return (rootAncestor != nullptr) ? $$nc(rootAncestor->getFocusTraversalPolicy())->getComponentAfter(rootAncestor, this->this$0) : ($Component*)nullptr;
	}
}

$Component* JEditorPane$1::getComponentBefore($Container* focusCycleRoot, $Component* aComponent) {
	$useLocalObjectStack();
	bool var$0 = !$equals(focusCycleRoot, this->this$0);
	if (!var$0) {
		bool var$1 = !this->this$0->isEditable();
		var$0 = var$1 && this->this$0->getComponentCount() > 0;
	}
	if (var$0) {
		return $LayoutFocusTraversalPolicy::getComponentBefore(focusCycleRoot, aComponent);
	} else {
		$var($Container, rootAncestor, this->this$0->getFocusCycleRootAncestor());
		return (rootAncestor != nullptr) ? $$nc(rootAncestor->getFocusTraversalPolicy())->getComponentBefore(rootAncestor, this->this$0) : ($Component*)nullptr;
	}
}

$Component* JEditorPane$1::getDefaultComponent($Container* focusCycleRoot) {
	bool var$0 = !$equals(focusCycleRoot, this->this$0);
	if (!var$0) {
		bool var$1 = !this->this$0->isEditable();
		var$0 = var$1 && this->this$0->getComponentCount() > 0;
	}
	return (var$0) ? $LayoutFocusTraversalPolicy::getDefaultComponent(focusCycleRoot) : ($Component*)nullptr;
}

bool JEditorPane$1::accept($Component* aComponent) {
	return (!$equals(aComponent, this->this$0)) ? $LayoutFocusTraversalPolicy::accept(aComponent) : false;
}

JEditorPane$1::JEditorPane$1() {
}

$Class* JEditorPane$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;)V", nullptr, 0, $method(JEditorPane$1, init$, void, $JEditorPane*)},
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED, $virtualMethod(JEditorPane$1, accept, bool, $Component*)},
		{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$1, getComponentAfter, $Component*, $Container*, $Component*)},
		{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$1, getComponentBefore, $Component*, $Container*, $Component*)},
		{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$1, getDefaultComponent, $Component*, $Container*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JEditorPane",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JEditorPane$1",
		"javax.swing.LayoutFocusTraversalPolicy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JEditorPane"
	};
	$loadClass(JEditorPane$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JEditorPane$1));
	});
	return class$;
}

$Class* JEditorPane$1::class$ = nullptr;

	} // swing
} // javax
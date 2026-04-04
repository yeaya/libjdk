#include <javax/swing/JEditorPane$AccessibleJEditorPaneHTML.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Point.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleText.h>
#include <javax/swing/JEditorPane$AccessibleJEditorPane.h>
#include <javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$AccessibleJEditorPane = ::javax::swing::JEditorPane$AccessibleJEditorPane;
using $JEditorPane$JEditorPaneAccessibleHypertextSupport = ::javax::swing::JEditorPane$JEditorPaneAccessibleHypertextSupport;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {

$AccessibleText* JEditorPane$AccessibleJEditorPaneHTML::getAccessibleText() {
	return $cast($JEditorPane$AccessibleJEditorPane, $new($JEditorPane$JEditorPaneAccessibleHypertextSupport, this->this$0));
}

void JEditorPane$AccessibleJEditorPaneHTML::init$($JEditorPane* this$0) {
	$set(this, this$0, this$0);
	$JEditorPane$AccessibleJEditorPane::init$(this$0);
	$var($HTMLEditorKit, kit, $cast($HTMLEditorKit, this$0->getEditorKit()));
	$set(this, accessibleContext, $nc(kit)->getAccessibleContext());
}

int32_t JEditorPane$AccessibleJEditorPaneHTML::getAccessibleChildrenCount() {
	if (this->accessibleContext != nullptr) {
		return this->accessibleContext->getAccessibleChildrenCount();
	} else {
		return 0;
	}
}

$Accessible* JEditorPane$AccessibleJEditorPaneHTML::getAccessibleChild(int32_t i) {
	if (this->accessibleContext != nullptr) {
		return this->accessibleContext->getAccessibleChild(i);
	} else {
		return nullptr;
	}
}

$Accessible* JEditorPane$AccessibleJEditorPaneHTML::getAccessibleAt($Point* p) {
	if (this->accessibleContext != nullptr && p != nullptr) {
		try {
			$var($AccessibleComponent, acomp, this->accessibleContext->getAccessibleComponent());
			if (acomp != nullptr) {
				return acomp->getAccessibleAt(p);
			} else {
				return nullptr;
			}
		} catch ($IllegalComponentStateException& e) {
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

JEditorPane$AccessibleJEditorPaneHTML::JEditorPane$AccessibleJEditorPaneHTML() {
}

$Class* JEditorPane$AccessibleJEditorPaneHTML::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JEditorPane;", nullptr, $FINAL | $SYNTHETIC, $field(JEditorPane$AccessibleJEditorPaneHTML, this$0)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(JEditorPane$AccessibleJEditorPaneHTML, accessibleContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JEditorPane;)V", nullptr, $PROTECTED, $method(JEditorPane$AccessibleJEditorPaneHTML, init$, void, $JEditorPane*)},
		{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$AccessibleJEditorPaneHTML, getAccessibleAt, $Accessible*, $Point*)},
		{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$AccessibleJEditorPaneHTML, getAccessibleChild, $Accessible*, int32_t)},
		{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC, $virtualMethod(JEditorPane$AccessibleJEditorPaneHTML, getAccessibleChildrenCount, int32_t)},
		{"getAccessibleText", "()Ljavax/accessibility/AccessibleText;", nullptr, $PUBLIC, $virtualMethod(JEditorPane$AccessibleJEditorPaneHTML, getAccessibleText, $AccessibleText*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JEditorPane$AccessibleJEditorPaneHTML", "javax.swing.JEditorPane", "AccessibleJEditorPaneHTML", $PROTECTED},
		{"javax.swing.JEditorPane$AccessibleJEditorPane", "javax.swing.JEditorPane", "AccessibleJEditorPane", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JEditorPane$AccessibleJEditorPaneHTML",
		"javax.swing.JEditorPane$AccessibleJEditorPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JEditorPane"
	};
	$loadClass(JEditorPane$AccessibleJEditorPaneHTML, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JEditorPane$AccessibleJEditorPaneHTML));
	});
	return class$;
}

$Class* JEditorPane$AccessibleJEditorPaneHTML::class$ = nullptr;

	} // swing
} // javax
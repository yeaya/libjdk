#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI$ComboBoxLayoutManager.h>
#include <com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <jcpp.h>

using $MotifComboBoxUI = ::com::sun::java::swing::plaf::motif::MotifComboBoxUI;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifComboBoxUI$ComboBoxLayoutManager::init$($MotifComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$ComboBoxLayoutManager::init$(this$0);
}

void MotifComboBoxUI$ComboBoxLayoutManager::layoutContainer($Container* parent) {
	$useLocalObjectStack();
	if (this->this$0->motifGetEditor() != nullptr) {
		$var($Rectangle, cvb, this->this$0->rectangleForCurrentValue());
		$nc(cvb)->x += 1;
		cvb->y += 1;
		cvb->width -= 1;
		cvb->height -= 2;
		$$nc(this->this$0->motifGetEditor())->setBounds(cvb);
	}
}

MotifComboBoxUI$ComboBoxLayoutManager::MotifComboBoxUI$ComboBoxLayoutManager() {
}

$Class* MotifComboBoxUI$ComboBoxLayoutManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifComboBoxUI$ComboBoxLayoutManager, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifComboBoxUI;)V", nullptr, $PUBLIC, $method(MotifComboBoxUI$ComboBoxLayoutManager, init$, void, $MotifComboBoxUI*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(MotifComboBoxUI$ComboBoxLayoutManager, layoutContainer, void, $Container*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager", "com.sun.java.swing.plaf.motif.MotifComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
		{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI$ComboBoxLayoutManager",
		"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifComboBoxUI"
	};
	$loadClass(MotifComboBoxUI$ComboBoxLayoutManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifComboBoxUI$ComboBoxLayoutManager);
	});
	return class$;
}

$Class* MotifComboBoxUI$ComboBoxLayoutManager::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com
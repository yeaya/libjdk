#include <javax/swing/CellRendererPane$AccessibleCellRendererPane.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/CellRendererPane.h>
#include <jcpp.h>

#undef PANEL

using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $CellRendererPane = ::javax::swing::CellRendererPane;

namespace javax {
	namespace swing {

void CellRendererPane$AccessibleCellRendererPane::init$($CellRendererPane* this$0) {
	$set(this, this$0, this$0);
	$Container$AccessibleAWTContainer::init$(this$0);
}

$AccessibleRole* CellRendererPane$AccessibleCellRendererPane::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::PANEL;
}

CellRendererPane$AccessibleCellRendererPane::CellRendererPane$AccessibleCellRendererPane() {
}

$Class* CellRendererPane$AccessibleCellRendererPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/CellRendererPane;", nullptr, $FINAL | $SYNTHETIC, $field(CellRendererPane$AccessibleCellRendererPane, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/CellRendererPane;)V", nullptr, $PROTECTED, $method(CellRendererPane$AccessibleCellRendererPane, init$, void, $CellRendererPane*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(CellRendererPane$AccessibleCellRendererPane, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.CellRendererPane$AccessibleCellRendererPane", "javax.swing.CellRendererPane", "AccessibleCellRendererPane", $PROTECTED},
		{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.CellRendererPane$AccessibleCellRendererPane",
		"java.awt.Container$AccessibleAWTContainer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.CellRendererPane"
	};
	$loadClass(CellRendererPane$AccessibleCellRendererPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CellRendererPane$AccessibleCellRendererPane));
	});
	return class$;
}

$Class* CellRendererPane$AccessibleCellRendererPane::class$ = nullptr;

	} // swing
} // javax
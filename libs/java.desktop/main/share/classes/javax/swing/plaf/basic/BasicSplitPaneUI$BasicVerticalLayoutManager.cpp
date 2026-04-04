#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicVerticalLayoutManager.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI$BasicHorizontalLayoutManager.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $BasicSplitPaneUI$BasicHorizontalLayoutManager = ::javax::swing::plaf::basic::BasicSplitPaneUI$BasicHorizontalLayoutManager;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSplitPaneUI$BasicVerticalLayoutManager::init$($BasicSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSplitPaneUI$BasicHorizontalLayoutManager::init$(this$0, 1);
}

BasicSplitPaneUI$BasicVerticalLayoutManager::BasicSplitPaneUI$BasicVerticalLayoutManager() {
}

$Class* BasicSplitPaneUI$BasicVerticalLayoutManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneUI$BasicVerticalLayoutManager, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneUI;)V", nullptr, $PUBLIC, $method(BasicSplitPaneUI$BasicVerticalLayoutManager, init$, void, $BasicSplitPaneUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicVerticalLayoutManager", $PUBLIC},
		{"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager", "javax.swing.plaf.basic.BasicSplitPaneUI", "BasicHorizontalLayoutManager", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSplitPaneUI$BasicVerticalLayoutManager",
		"javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicSplitPaneUI"
	};
	$loadClass(BasicSplitPaneUI$BasicVerticalLayoutManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSplitPaneUI$BasicVerticalLayoutManager);
	});
	return class$;
}

$Class* BasicSplitPaneUI$BasicVerticalLayoutManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
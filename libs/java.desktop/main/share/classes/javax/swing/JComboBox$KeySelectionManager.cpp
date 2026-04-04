#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;

namespace javax {
	namespace swing {

$Class* JComboBox$KeySelectionManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"selectionForKey", "(CLjavax/swing/ComboBoxModel;)I", "(CLjavax/swing/ComboBoxModel<*>;)I", $PUBLIC | $ABSTRACT, $virtualMethod(JComboBox$KeySelectionManager, selectionForKey, int32_t, char16_t, $ComboBoxModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComboBox$KeySelectionManager", "javax.swing.JComboBox", "KeySelectionManager", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.JComboBox$KeySelectionManager",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComboBox"
	};
	$loadClass(JComboBox$KeySelectionManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBox$KeySelectionManager);
	});
	return class$;
}

$Class* JComboBox$KeySelectionManager::class$ = nullptr;

	} // swing
} // javax
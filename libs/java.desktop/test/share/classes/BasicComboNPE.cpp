#include <BasicComboNPE.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

void BasicComboNPE::init$() {
	$JComboBox::init$();
}

void BasicComboNPE::main($StringArray* args) {
	$init(BasicComboNPE);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		try {
			$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
			$UIManager::setLookAndFeel($(laf->getClassName()));
			$$new(BasicComboNPE)->getModel();
		} catch ($IllegalComponentStateException& e) {
		} catch ($ClassNotFoundException& e) {
		} catch ($InstantiationException& e) {
		} catch ($IllegalAccessException& e) {
		} catch ($UnsupportedLookAndFeelException& e) {
		}
	}
}

$ComboBoxModel* BasicComboNPE::getModel() {
	setPopupVisible(false);
	isPopupVisible();
	return $JComboBox::getModel();
}

BasicComboNPE::BasicComboNPE() {
}

$Class* BasicComboNPE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicComboNPE, init$, void)},
		{"getModel", "()Ljavax/swing/ComboBoxModel;", nullptr, $PUBLIC, $virtualMethod(BasicComboNPE, getModel, $ComboBoxModel*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicComboNPE, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BasicComboNPE",
		"javax.swing.JComboBox",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicComboNPE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicComboNPE));
	});
	return class$;
}

$Class* BasicComboNPE::class$ = nullptr;
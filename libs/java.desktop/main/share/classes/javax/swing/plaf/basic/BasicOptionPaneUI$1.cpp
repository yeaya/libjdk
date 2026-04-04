#include <javax/swing/plaf/basic/BasicOptionPaneUI$1.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicOptionPaneUI$1::init$($BasicOptionPaneUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
}

$Dimension* BasicOptionPaneUI$1::getPreferredSize() {
	$var($Font, f, getFont());
	if (f != nullptr) {
		return $new($Dimension, 1, f->getSize() + 2);
	}
	return $new($Dimension, 0, 0);
}

BasicOptionPaneUI$1::BasicOptionPaneUI$1() {
}

$Class* BasicOptionPaneUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;)V", nullptr, 0, $method(BasicOptionPaneUI$1, init$, void, $BasicOptionPaneUI*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicOptionPaneUI$1, getPreferredSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicOptionPaneUI",
		"addMessageComponents",
		"(Ljava/awt/Container;Ljava/awt/GridBagConstraints;Ljava/lang/Object;IZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$1",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicOptionPaneUI"
	};
	$loadClass(BasicOptionPaneUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicOptionPaneUI$1));
	});
	return class$;
}

$Class* BasicOptionPaneUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
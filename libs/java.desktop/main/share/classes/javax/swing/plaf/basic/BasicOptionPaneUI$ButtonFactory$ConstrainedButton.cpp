#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory$ConstrainedButton.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicOptionPaneUI$ButtonFactory$ConstrainedButton::init$($String* text, int32_t minimumWidth) {
	$JButton::init$(text);
	this->minimumWidth = minimumWidth;
}

$Dimension* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::getMinimumSize() {
	$var($Dimension, min, $JButton::getMinimumSize());
	$nc(min)->width = $Math::max($nc(min)->width, this->minimumWidth);
	return min;
}

$Dimension* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::getPreferredSize() {
	$var($Dimension, pref, $JButton::getPreferredSize());
	$nc(pref)->width = $Math::max($nc(pref)->width, this->minimumWidth);
	return pref;
}

BasicOptionPaneUI$ButtonFactory$ConstrainedButton::BasicOptionPaneUI$ButtonFactory$ConstrainedButton() {
}

$Class* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"minimumWidth", "I", nullptr, 0, $field(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, minimumWidth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, init$, void, $String*, int32_t)},
		{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, getMinimumSize, $Dimension*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, getPreferredSize, $Dimension*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonFactory", $PRIVATE | $STATIC},
		{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton", "javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "ConstrainedButton", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicOptionPaneUI"
	};
	$loadClass(BasicOptionPaneUI$ButtonFactory$ConstrainedButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicOptionPaneUI$ButtonFactory$ConstrainedButton));
	});
	return class$;
}

$Class* BasicOptionPaneUI$ButtonFactory$ConstrainedButton::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
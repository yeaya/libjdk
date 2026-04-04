#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonFactory$ConstrainedButton.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $BasicOptionPaneUI$ButtonFactory$ConstrainedButton = ::javax::swing::plaf::basic::BasicOptionPaneUI$ButtonFactory$ConstrainedButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicOptionPaneUI$ButtonFactory::init$($String* text, int32_t mnemonic, $Icon* icon, int32_t minimumWidth) {
	this->minimumWidth = -1;
	$set(this, text, text);
	this->mnemonic = mnemonic;
	$set(this, icon, icon);
	this->minimumWidth = minimumWidth;
}

$JButton* BasicOptionPaneUI$ButtonFactory::createButton() {
	$var($JButton, button, nullptr);
	if (this->minimumWidth > 0) {
		$assign(button, $new($BasicOptionPaneUI$ButtonFactory$ConstrainedButton, this->text, this->minimumWidth));
	} else {
		$assign(button, $new($JButton, this->text));
	}
	if (this->icon != nullptr) {
		$nc(button)->setIcon(this->icon);
	}
	if (this->mnemonic != 0) {
		$nc(button)->setMnemonic(this->mnemonic);
	}
	return button;
}

BasicOptionPaneUI$ButtonFactory::BasicOptionPaneUI$ButtonFactory() {
}

$Class* BasicOptionPaneUI$ButtonFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, text)},
		{"mnemonic", "I", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, mnemonic)},
		{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, icon)},
		{"minimumWidth", "I", nullptr, $PRIVATE, $field(BasicOptionPaneUI$ButtonFactory, minimumWidth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjavax/swing/Icon;I)V", nullptr, 0, $method(BasicOptionPaneUI$ButtonFactory, init$, void, $String*, int32_t, $Icon*, int32_t)},
		{"createButton", "()Ljavax/swing/JButton;", nullptr, 0, $virtualMethod(BasicOptionPaneUI$ButtonFactory, createButton, $JButton*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonFactory", $PRIVATE | $STATIC},
		{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory$ConstrainedButton", "javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory", "ConstrainedButton", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonFactory",
		"java.lang.Object",
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
	$loadClass(BasicOptionPaneUI$ButtonFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicOptionPaneUI$ButtonFactory);
	});
	return class$;
}

$Class* BasicOptionPaneUI$ButtonFactory::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
#include <javax/swing/AbstractButton$AccessibleAbstractButton$ButtonKeyBinding.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

void AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::init$($AbstractButton$AccessibleAbstractButton* this$1, int32_t mnemonic) {
	$set(this, this$1, this$1);
	this->mnemonic = mnemonic;
}

int32_t AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::getAccessibleKeyBindingCount() {
	return 1;
}

$Object* AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::getAccessibleKeyBinding(int32_t i) {
	if (i != 0) {
		$throwNew($IllegalArgumentException);
	}
	return $KeyStroke::getKeyStroke(this->mnemonic, 0);
}

AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::AbstractButton$AccessibleAbstractButton$ButtonKeyBinding() {
}

$Class* AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/AbstractButton$AccessibleAbstractButton;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, this$1)},
		{"mnemonic", "I", nullptr, 0, $field(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, mnemonic)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/AbstractButton$AccessibleAbstractButton;I)V", nullptr, 0, $method(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, init$, void, $AbstractButton$AccessibleAbstractButton*, int32_t)},
		{"getAccessibleKeyBinding", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, getAccessibleKeyBinding, $Object*, int32_t)},
		{"getAccessibleKeyBindingCount", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, getAccessibleKeyBindingCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
		{"javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding", "javax.swing.AbstractButton$AccessibleAbstractButton", "ButtonKeyBinding", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding",
		"java.lang.Object",
		"javax.accessibility.AccessibleKeyBinding",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.AbstractButton"
	};
	$loadClass(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding);
	});
	return class$;
}

$Class* AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::class$ = nullptr;

	} // swing
} // javax
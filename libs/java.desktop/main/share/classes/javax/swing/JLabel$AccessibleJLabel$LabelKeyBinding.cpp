#include <javax/swing/JLabel$AccessibleJLabel$LabelKeyBinding.h>
#include <javax/swing/JLabel$AccessibleJLabel.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel$AccessibleJLabel = ::javax::swing::JLabel$AccessibleJLabel;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

void JLabel$AccessibleJLabel$LabelKeyBinding::init$($JLabel$AccessibleJLabel* this$1, int32_t mnemonic) {
	$set(this, this$1, this$1);
	this->mnemonic = mnemonic;
}

int32_t JLabel$AccessibleJLabel$LabelKeyBinding::getAccessibleKeyBindingCount() {
	return 1;
}

$Object* JLabel$AccessibleJLabel$LabelKeyBinding::getAccessibleKeyBinding(int32_t i) {
	if (i != 0) {
		$throwNew($IllegalArgumentException);
	}
	return $KeyStroke::getKeyStroke(this->mnemonic, 0);
}

JLabel$AccessibleJLabel$LabelKeyBinding::JLabel$AccessibleJLabel$LabelKeyBinding() {
}

$Class* JLabel$AccessibleJLabel$LabelKeyBinding::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JLabel$AccessibleJLabel;", nullptr, $FINAL | $SYNTHETIC, $field(JLabel$AccessibleJLabel$LabelKeyBinding, this$1)},
		{"mnemonic", "I", nullptr, 0, $field(JLabel$AccessibleJLabel$LabelKeyBinding, mnemonic)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLabel$AccessibleJLabel;I)V", nullptr, 0, $method(JLabel$AccessibleJLabel$LabelKeyBinding, init$, void, $JLabel$AccessibleJLabel*, int32_t)},
		{"getAccessibleKeyBinding", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JLabel$AccessibleJLabel$LabelKeyBinding, getAccessibleKeyBinding, $Object*, int32_t)},
		{"getAccessibleKeyBindingCount", "()I", nullptr, $PUBLIC, $virtualMethod(JLabel$AccessibleJLabel$LabelKeyBinding, getAccessibleKeyBindingCount, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLabel$AccessibleJLabel", "javax.swing.JLabel", "AccessibleJLabel", $PROTECTED},
		{"javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding", "javax.swing.JLabel$AccessibleJLabel", "LabelKeyBinding", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding",
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
		"javax.swing.JLabel"
	};
	$loadClass(JLabel$AccessibleJLabel$LabelKeyBinding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLabel$AccessibleJLabel$LabelKeyBinding);
	});
	return class$;
}

$Class* JLabel$AccessibleJLabel$LabelKeyBinding::class$ = nullptr;

	} // swing
} // javax
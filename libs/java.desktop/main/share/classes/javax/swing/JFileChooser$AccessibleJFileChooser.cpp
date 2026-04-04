#include <javax/swing/JFileChooser$AccessibleJFileChooser.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

#undef FILE_CHOOSER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace javax {
	namespace swing {

void JFileChooser$AccessibleJFileChooser::init$($JFileChooser* this$0) {
	$set(this, this$0, this$0);
	$JComponent$AccessibleJComponent::init$(this$0);
}

$AccessibleRole* JFileChooser$AccessibleJFileChooser::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::FILE_CHOOSER;
}

JFileChooser$AccessibleJFileChooser::JFileChooser$AccessibleJFileChooser() {
}

$Class* JFileChooser$AccessibleJFileChooser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooser$AccessibleJFileChooser, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED, $method(JFileChooser$AccessibleJFileChooser, init$, void, $JFileChooser*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(JFileChooser$AccessibleJFileChooser, getAccessibleRole, $AccessibleRole*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFileChooser$AccessibleJFileChooser", "javax.swing.JFileChooser", "AccessibleJFileChooser", $PROTECTED},
		{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JFileChooser$AccessibleJFileChooser",
		"javax.swing.JComponent$AccessibleJComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JFileChooser"
	};
	$loadClass(JFileChooser$AccessibleJFileChooser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFileChooser$AccessibleJFileChooser));
	});
	return class$;
}

$Class* JFileChooser$AccessibleJFileChooser::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/plaf/metal/MetalFileChooserUI$3.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JTextField = ::javax::swing::JTextField;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$3::init$($MetalFileChooserUI* this$0, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(columns);
}

$Dimension* MetalFileChooserUI$3::getMaximumSize() {
	return $new($Dimension, $Short::MAX_VALUE, $nc($($JTextField::getPreferredSize()))->height);
}

MetalFileChooserUI$3::MetalFileChooserUI$3() {
}

$Class* MetalFileChooserUI$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;I)V", nullptr, 0, $method(MetalFileChooserUI$3, init$, void, $MetalFileChooserUI*, int32_t)},
		{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$3, getMaximumSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$3",
		"javax.swing.JTextField",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalFileChooserUI$3));
	});
	return class$;
}

$Class* MetalFileChooserUI$3::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
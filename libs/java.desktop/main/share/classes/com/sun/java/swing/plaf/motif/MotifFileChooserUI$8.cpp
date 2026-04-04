#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$8.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef MAX_SIZE

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifFileChooserUI$8::init$($MotifFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JButton::init$(text);
}

$Dimension* MotifFileChooserUI$8::getMaximumSize() {
	$init($MotifFileChooserUI);
	return $new($Dimension, $nc($MotifFileChooserUI::MAX_SIZE)->width, $nc($(this->getPreferredSize()))->height);
}

MotifFileChooserUI$8::MotifFileChooserUI$8() {
}

$Class* MotifFileChooserUI$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$8, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(MotifFileChooserUI$8, init$, void, $MotifFileChooserUI*, $String*)},
		{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MotifFileChooserUI$8, getMaximumSize, $Dimension*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI$8",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
	};
	$loadClass(MotifFileChooserUI$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifFileChooserUI$8));
	});
	return class$;
}

$Class* MotifFileChooserUI$8::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com
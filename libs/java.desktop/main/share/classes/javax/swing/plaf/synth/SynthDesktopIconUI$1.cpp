#include <javax/swing/plaf/synth/SynthDesktopIconUI$1.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/synth/SynthDesktopIconUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SynthDesktopIconUI = ::javax::swing::plaf::synth::SynthDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthDesktopIconUI$1::init$($SynthDesktopIconUI* this$0, $String* text, $Icon* icon) {
	$set(this, this$0, this$0);
	$JToggleButton::init$(text, icon);
}

$String* SynthDesktopIconUI$1::getToolTipText() {
	return getText();
}

$JPopupMenu* SynthDesktopIconUI$1::getComponentPopupMenu() {
	return $$nc($SynthDesktopIconUI::access$000(this->this$0))->getComponentPopupMenu();
}

SynthDesktopIconUI$1::SynthDesktopIconUI$1() {
}

$Class* SynthDesktopIconUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthDesktopIconUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, 0, $method(SynthDesktopIconUI$1, init$, void, $SynthDesktopIconUI*, $String*, $Icon*)},
		{"getComponentPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PUBLIC, $virtualMethod(SynthDesktopIconUI$1, getComponentPopupMenu, $JPopupMenu*)},
		{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynthDesktopIconUI$1, getToolTipText, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthDesktopIconUI",
		"installComponents",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthDesktopIconUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthDesktopIconUI$1",
		"javax.swing.JToggleButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthDesktopIconUI"
	};
	$loadClass(SynthDesktopIconUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthDesktopIconUI$1));
	});
	return class$;
}

$Class* SynthDesktopIconUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
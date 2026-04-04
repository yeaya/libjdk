#include <com/apple/laf/AquaFileChooserUI$ScrollPaneCornerPanel.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileChooserUI$ScrollPaneCornerPanel::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, border, $UIManager::getBorder("TableHeader.cellBorder"_s));
}

void AquaFileChooserUI$ScrollPaneCornerPanel::paintComponent($Graphics* g) {
	int32_t var$0 = getWidth() + 1;
	$nc(this->border)->paintBorder(this, g, 0, 0, var$0, getHeight());
}

AquaFileChooserUI$ScrollPaneCornerPanel::AquaFileChooserUI$ScrollPaneCornerPanel() {
}

$Class* AquaFileChooserUI$ScrollPaneCornerPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$ScrollPaneCornerPanel, this$0)},
		{"border", "Ljavax/swing/border/Border;", nullptr, $FINAL, $field(AquaFileChooserUI$ScrollPaneCornerPanel, border)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(AquaFileChooserUI$ScrollPaneCornerPanel, init$, void, $AquaFileChooserUI*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(AquaFileChooserUI$ScrollPaneCornerPanel, paintComponent, void, $Graphics*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel", "com.apple.laf.AquaFileChooserUI", "ScrollPaneCornerPanel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileChooserUI"
	};
	$loadClass(AquaFileChooserUI$ScrollPaneCornerPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaFileChooserUI$ScrollPaneCornerPanel));
	});
	return class$;
}

$Class* AquaFileChooserUI$ScrollPaneCornerPanel::class$ = nullptr;

		} // laf
	} // apple
} // com
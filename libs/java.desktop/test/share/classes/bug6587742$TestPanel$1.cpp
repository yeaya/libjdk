#include <bug6587742$TestPanel$1.h>
#include <bug6587742$TestPanel.h>
#include <bug6587742.h>
#include <java/awt/Component.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

#undef ERROR_MESSAGE

using $bug6587742 = ::bug6587742;
using $bug6587742$TestPanel = ::bug6587742$TestPanel;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

void bug6587742$TestPanel$1::init$($bug6587742$TestPanel* this$1, $bug6587742* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void bug6587742$TestPanel$1::itemStateChanged($ItemEvent* e) {
	$useLocalObjectStack();
	$var($MetalTheme, theme, $cast($MetalTheme, $nc(this->this$1->cbThemes)->getSelectedItem()));
	if (theme != nullptr) {
		$MetalLookAndFeel::setCurrentTheme(theme);
		try {
			$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
		} catch ($UnsupportedLookAndFeelException& e1) {
			$JOptionPane::showMessageDialog(this->this$1, $$str({"Can\'t change theme: "_s, $(e1->getMessage())}), "Error"_s, $JOptionPane::ERROR_MESSAGE);
			return;
		}
		$SwingUtilities::updateComponentTreeUI(this->this$1->this$0);
	}
}

bug6587742$TestPanel$1::bug6587742$TestPanel$1() {
}

$Class* bug6587742$TestPanel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lbug6587742$TestPanel;", nullptr, $FINAL | $SYNTHETIC, $field(bug6587742$TestPanel$1, this$1)},
		{"val$this$0", "Lbug6587742;", nullptr, $FINAL | $SYNTHETIC, $field(bug6587742$TestPanel$1, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6587742$TestPanel;Lbug6587742;)V", "()V", 0, $method(bug6587742$TestPanel$1, init$, void, $bug6587742$TestPanel*, $bug6587742*)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6587742$TestPanel$1, itemStateChanged, void, $ItemEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6587742$TestPanel",
		"<init>",
		"(Lbug6587742;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6587742$TestPanel", "bug6587742", "TestPanel", $PRIVATE},
		{"bug6587742$TestPanel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6587742$TestPanel$1",
		"java.lang.Object",
		"java.awt.event.ItemListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6587742"
	};
	$loadClass(bug6587742$TestPanel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6587742$TestPanel$1);
	});
	return class$;
}

$Class* bug6587742$TestPanel$1::class$ = nullptr;
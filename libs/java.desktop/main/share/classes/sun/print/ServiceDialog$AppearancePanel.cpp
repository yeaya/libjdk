#include <sun/print/ServiceDialog$AppearancePanel.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/JPanel.h>
#include <sun/print/ServiceDialog$ChromaticityPanel.h>
#include <sun/print/ServiceDialog$JobAttributesPanel.h>
#include <sun/print/ServiceDialog$QualityPanel.h>
#include <sun/print/ServiceDialog$SidesPanel.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef RELATIVE
#undef REMAINDER

using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$ChromaticityPanel = ::sun::print::ServiceDialog$ChromaticityPanel;
using $ServiceDialog$JobAttributesPanel = ::sun::print::ServiceDialog$JobAttributesPanel;
using $ServiceDialog$QualityPanel = ::sun::print::ServiceDialog$QualityPanel;
using $ServiceDialog$SidesPanel = ::sun::print::ServiceDialog$SidesPanel;

namespace sun {
	namespace print {

void ServiceDialog$AppearancePanel::init$($ServiceDialog* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	c->fill = $GridBagConstraints::BOTH;
	$init($ServiceDialog);
	$set(c, insets, $ServiceDialog::panelInsets);
	c->weightx = 1.0;
	c->weighty = 1.0;
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$set(this, pnlChromaticity, $new($ServiceDialog$ChromaticityPanel, this$0));
	$ServiceDialog::addToGB(this->pnlChromaticity, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, pnlQuality, $new($ServiceDialog$QualityPanel, this$0));
	$ServiceDialog::addToGB(this->pnlQuality, this, gridbag, c);
	c->gridwidth = 1;
	$set(this, pnlSides, $new($ServiceDialog$SidesPanel, this$0));
	$ServiceDialog::addToGB(this->pnlSides, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, pnlJobAttributes, $new($ServiceDialog$JobAttributesPanel, this$0));
	$ServiceDialog::addToGB(this->pnlJobAttributes, this, gridbag, c);
}

void ServiceDialog$AppearancePanel::updateInfo() {
	$nc(this->pnlChromaticity)->updateInfo();
	$nc(this->pnlQuality)->updateInfo();
	$nc(this->pnlSides)->updateInfo();
	$nc(this->pnlJobAttributes)->updateInfo();
}

ServiceDialog$AppearancePanel::ServiceDialog$AppearancePanel() {
}

$Class* ServiceDialog$AppearancePanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$AppearancePanel, this$0)},
		{"pnlChromaticity", "Lsun/print/ServiceDialog$ChromaticityPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlChromaticity)},
		{"pnlQuality", "Lsun/print/ServiceDialog$QualityPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlQuality)},
		{"pnlJobAttributes", "Lsun/print/ServiceDialog$JobAttributesPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlJobAttributes)},
		{"pnlSides", "Lsun/print/ServiceDialog$SidesPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlSides)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(ServiceDialog$AppearancePanel, init$, void, $ServiceDialog*)},
		{"updateInfo", "()V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$AppearancePanel, updateInfo, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.ServiceDialog$AppearancePanel", "sun.print.ServiceDialog", "AppearancePanel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ServiceDialog$AppearancePanel",
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
		"sun.print.ServiceDialog"
	};
	$loadClass(ServiceDialog$AppearancePanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ServiceDialog$AppearancePanel));
	});
	return class$;
}

$Class* ServiceDialog$AppearancePanel::class$ = nullptr;

	} // print
} // sun
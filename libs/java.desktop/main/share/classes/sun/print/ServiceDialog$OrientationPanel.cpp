#include <sun/print/ServiceDialog$OrientationPanel.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <sun/print/ServiceDialog$IconRadioButton.h>
#include <sun/print/ServiceDialog$MarginsPanel.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef LANDSCAPE
#undef PORTRAIT
#undef REMAINDER
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT

using $OrientationRequestedArray = $Array<::javax::print::attribute::standard::OrientationRequested>;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JPanel = ::javax::swing::JPanel;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$IconRadioButton = ::sun::print::ServiceDialog$IconRadioButton;
using $ServiceDialog$MarginsPanel = ::sun::print::ServiceDialog$MarginsPanel;

namespace sun {
	namespace print {

$String* ServiceDialog$OrientationPanel::toString() {
	return this->$JPanel::toString();
}

int32_t ServiceDialog$OrientationPanel::hashCode() {
	return this->$JPanel::hashCode();
}

bool ServiceDialog$OrientationPanel::equals(Object$* arg0) {
	return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$OrientationPanel::clone() {
	return this->$JPanel::clone();
}

void ServiceDialog$OrientationPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$OrientationPanel::init$($ServiceDialog* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.orientation"_s));
	$set(this, pnlMargins, nullptr);
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::BOTH;
	$set(c, insets, $ServiceDialog::compInsets);
	c->weighty = 1.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$var($ButtonGroup, bg, $new($ButtonGroup));
	$set(this, rbPortrait, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.portrait"_s, "orientPortrait.png"_s, true, bg, this));
	this->rbPortrait->addActionListener(this);
	$ServiceDialog::addToGB(this->rbPortrait, this, gridbag, c);
	$set(this, rbLandscape, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.landscape"_s, "orientLandscape.png"_s, false, bg, this));
	this->rbLandscape->addActionListener(this);
	$ServiceDialog::addToGB(this->rbLandscape, this, gridbag, c);
	$set(this, rbRevPortrait, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.revportrait"_s, "orientRevPortrait.png"_s, false, bg, this));
	this->rbRevPortrait->addActionListener(this);
	$ServiceDialog::addToGB(this->rbRevPortrait, this, gridbag, c);
	$set(this, rbRevLandscape, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.revlandscape"_s, "orientRevLandscape.png"_s, false, bg, this));
	this->rbRevLandscape->addActionListener(this);
	$ServiceDialog::addToGB(this->rbRevLandscape, this, gridbag, c);
}

void ServiceDialog$OrientationPanel::actionPerformed($ActionEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if ($nc(this->rbPortrait)->isSameAs(source)) {
		$init($OrientationRequested);
		$nc(this->this$0->asCurrent)->add($cast($DocAttribute, $OrientationRequested::PORTRAIT));
	} else if ($nc(this->rbLandscape)->isSameAs(source)) {
		$init($OrientationRequested);
		$nc(this->this$0->asCurrent)->add($cast($DocAttribute, $OrientationRequested::LANDSCAPE));
	} else if ($nc(this->rbRevPortrait)->isSameAs(source)) {
		$init($OrientationRequested);
		$nc(this->this$0->asCurrent)->add($cast($DocAttribute, $OrientationRequested::REVERSE_PORTRAIT));
	} else if ($nc(this->rbRevLandscape)->isSameAs(source)) {
		$init($OrientationRequested);
		$nc(this->this$0->asCurrent)->add($cast($DocAttribute, $OrientationRequested::REVERSE_LANDSCAPE));
	}
	if (this->pnlMargins != nullptr) {
		this->pnlMargins->updateInfo();
	}
}

void ServiceDialog$OrientationPanel::addOrientationListener($ServiceDialog$MarginsPanel* pnl) {
	$set(this, pnlMargins, pnl);
}

void ServiceDialog$OrientationPanel::updateInfo() {
	$useLocalObjectStack();
	$load($OrientationRequested);
	$Class* orCategory = $OrientationRequested::class$;
	bool pSupported = false;
	bool lSupported = false;
	bool rpSupported = false;
	bool rlSupported = false;
	if (this->this$0->isAWT) {
		pSupported = true;
		lSupported = true;
	} else if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(orCategory)) {
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(orCategory, this->this$0->docFlavor, $cast($HashAttributeSet, this->this$0->asCurrent)));
		if ($instanceOf($OrientationRequestedArray, values)) {
			$var($OrientationRequestedArray, ovalues, $cast($OrientationRequestedArray, values));
			for (int32_t i = 0; i < ovalues->length; ++i) {
				$var($OrientationRequested, value, ovalues->get(i));
				if (value == $OrientationRequested::PORTRAIT) {
					pSupported = true;
				} else if (value == $OrientationRequested::LANDSCAPE) {
					lSupported = true;
				} else if (value == $OrientationRequested::REVERSE_PORTRAIT) {
					rpSupported = true;
				} else if (value == $OrientationRequested::REVERSE_LANDSCAPE) {
					rlSupported = true;
				}
			}
		}
	}
	$nc(this->rbPortrait)->setEnabled(pSupported);
	$nc(this->rbLandscape)->setEnabled(lSupported);
	$nc(this->rbRevPortrait)->setEnabled(rpSupported);
	$nc(this->rbRevLandscape)->setEnabled(rlSupported);
	$var($OrientationRequested, or$, $cast($OrientationRequested, $nc(this->this$0->asCurrent)->get(orCategory)));
	if (or$ == nullptr || !$nc(this->this$0->psCurrent)->isAttributeValueSupported($cast($DocAttribute, or$), this->this$0->docFlavor, $cast($HashAttributeSet, this->this$0->asCurrent))) {
		$assign(or$, $cast($OrientationRequested, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(orCategory)));
		if ((or$ != nullptr) && !$nc(this->this$0->psCurrent)->isAttributeValueSupported($cast($DocAttribute, or$), this->this$0->docFlavor, $cast($HashAttributeSet, this->this$0->asCurrent))) {
			$assign(or$, nullptr);
			$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(orCategory, this->this$0->docFlavor, $cast($HashAttributeSet, this->this$0->asCurrent)));
			if ($instanceOf($OrientationRequestedArray, values)) {
				$var($OrientationRequestedArray, orValues, $cast($OrientationRequestedArray, values));
				if (orValues->length > 1) {
					$assign(or$, orValues->get(0));
				}
			}
		}
		if (or$ == nullptr) {
			$init($OrientationRequested);
			$assign(or$, $OrientationRequested::PORTRAIT);
		}
		$nc(this->this$0->asCurrent)->add($cast($DocAttribute, or$));
	}
	$init($OrientationRequested);
	if (or$ == $OrientationRequested::PORTRAIT) {
		$nc(this->rbPortrait)->setSelected(true);
	} else if (or$ == $OrientationRequested::LANDSCAPE) {
		$nc(this->rbLandscape)->setSelected(true);
	} else if (or$ == $OrientationRequested::REVERSE_PORTRAIT) {
		$nc(this->rbRevPortrait)->setSelected(true);
	} else {
		$nc(this->rbRevLandscape)->setSelected(true);
	}
}

ServiceDialog$OrientationPanel::ServiceDialog$OrientationPanel() {
}

$Class* ServiceDialog$OrientationPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$OrientationPanel, this$0)},
		{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$OrientationPanel, strTitle)},
		{"rbPortrait", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$OrientationPanel, rbPortrait)},
		{"rbLandscape", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$OrientationPanel, rbLandscape)},
		{"rbRevPortrait", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$OrientationPanel, rbRevPortrait)},
		{"rbRevLandscape", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$OrientationPanel, rbRevLandscape)},
		{"pnlMargins", "Lsun/print/ServiceDialog$MarginsPanel;", nullptr, $PRIVATE, $field(ServiceDialog$OrientationPanel, pnlMargins)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(ServiceDialog$OrientationPanel, init$, void, $ServiceDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$OrientationPanel, actionPerformed, void, $ActionEvent*)},
		{"addOrientationListener", "(Lsun/print/ServiceDialog$MarginsPanel;)V", nullptr, 0, $virtualMethod(ServiceDialog$OrientationPanel, addOrientationListener, void, $ServiceDialog$MarginsPanel*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateInfo", "()V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$OrientationPanel, updateInfo, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.ServiceDialog$OrientationPanel", "sun.print.ServiceDialog", "OrientationPanel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ServiceDialog$OrientationPanel",
		"javax.swing.JPanel",
		"java.awt.event.ActionListener",
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
	$loadClass(ServiceDialog$OrientationPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ServiceDialog$OrientationPanel));
	});
	return class$;
}

$Class* ServiceDialog$OrientationPanel::class$ = nullptr;

	} // print
} // sun
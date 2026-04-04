#include <sun/print/ServiceDialog$JobAttributesPanel.h>
#include <java/awt/Component.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Number.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/standard/JobName.h>
#include <javax/print/attribute/standard/JobPriority.h>
#include <javax/print/attribute/standard/JobSheets.h>
#include <javax/print/attribute/standard/RequestingUserName.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner$NumberEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/event/ChangeEvent.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef CENTER
#undef HORIZONTAL
#undef LINE_END
#undef LINE_START
#undef NONE
#undef REMAINDER
#undef STANDARD
#undef TRAILING

using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $JobName = ::javax::print::attribute::standard::JobName;
using $JobPriority = ::javax::print::attribute::standard::JobPriority;
using $JobSheets = ::javax::print::attribute::standard::JobSheets;
using $RequestingUserName = ::javax::print::attribute::standard::RequestingUserName;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$NumberEditor = ::javax::swing::JSpinner$NumberEditor;
using $JTextField = ::javax::swing::JTextField;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$String* ServiceDialog$JobAttributesPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$JobAttributesPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$JobAttributesPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$JobAttributesPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$JobAttributesPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$JobAttributesPanel::init$($ServiceDialog* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.jobattributes"_s));
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::NONE;
	$set(c, insets, $ServiceDialog::compInsets);
	c->weighty = 1.0;
	$set(this, cbJobSheets, $ServiceDialog::createCheckBox("checkbox.jobsheets"_s, this));
	c->anchor = $GridBagConstraints::LINE_START;
	$ServiceDialog::addToGB(this->cbJobSheets, this, gridbag, c);
	$var($JPanel, pnlTop, $new($JPanel));
	$set(this, lblPriority, $new($JLabel, $($ServiceDialog::getMsg("label.priority"_s)), $JLabel::TRAILING));
	$nc(this->lblPriority)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.priority"_s));
	pnlTop->add(this->lblPriority);
	$set(this, snModel, $new($SpinnerNumberModel, 1, 1, 100, 1));
	$set(this, spinPriority, $new($JSpinner, this->snModel));
	$nc(this->lblPriority)->setLabelFor(this->spinPriority);
	$$nc($$sure($JSpinner$NumberEditor, $nc(this->spinPriority)->getEditor())->getTextField())->setColumns(3);
	$nc(this->spinPriority)->addChangeListener(this);
	pnlTop->add(this->spinPriority);
	c->anchor = $GridBagConstraints::LINE_END;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$$nc(pnlTop->getAccessibleContext())->setAccessibleName($($ServiceDialog::getMsg("label.priority"_s)));
	$ServiceDialog::addToGB(pnlTop, this, gridbag, c);
	c->fill = $GridBagConstraints::HORIZONTAL;
	c->anchor = $GridBagConstraints::CENTER;
	c->weightx = 0.0;
	c->gridwidth = 1;
	char16_t jmnemonic = $ServiceDialog::getMnemonic("label.jobname"_s);
	$set(this, lblJobName, $new($JLabel, $($ServiceDialog::getMsg("label.jobname"_s)), $JLabel::TRAILING));
	$nc(this->lblJobName)->setDisplayedMnemonic(jmnemonic);
	$ServiceDialog::addToGB(this->lblJobName, this, gridbag, c);
	c->weightx = 1.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, tfJobName, $new($JTextField));
	$nc(this->lblJobName)->setLabelFor(this->tfJobName);
	$nc(this->tfJobName)->addFocusListener(this);
	$nc(this->tfJobName)->setFocusAccelerator(jmnemonic);
	$$nc($nc(this->tfJobName)->getAccessibleContext())->setAccessibleName($($ServiceDialog::getMsg("label.jobname"_s)));
	$ServiceDialog::addToGB(this->tfJobName, this, gridbag, c);
	c->weightx = 0.0;
	c->gridwidth = 1;
	char16_t umnemonic = $ServiceDialog::getMnemonic("label.username"_s);
	$set(this, lblUserName, $new($JLabel, $($ServiceDialog::getMsg("label.username"_s)), $JLabel::TRAILING));
	$nc(this->lblUserName)->setDisplayedMnemonic(umnemonic);
	$ServiceDialog::addToGB(this->lblUserName, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, tfUserName, $new($JTextField));
	$nc(this->lblUserName)->setLabelFor(this->tfUserName);
	$nc(this->tfUserName)->addFocusListener(this);
	$nc(this->tfUserName)->setFocusAccelerator(umnemonic);
	$$nc($nc(this->tfUserName)->getAccessibleContext())->setAccessibleName($($ServiceDialog::getMsg("label.username"_s)));
	$ServiceDialog::addToGB(this->tfUserName, this, gridbag, c);
}

void ServiceDialog$JobAttributesPanel::actionPerformed($ActionEvent* e) {
	if ($nc(this->cbJobSheets)->isSelected()) {
		$init($JobSheets);
		$nc(this->this$0->asCurrent)->add($cast($PrintRequestAttribute, $JobSheets::STANDARD));
	} else {
		$init($JobSheets);
		$nc(this->this$0->asCurrent)->add($cast($PrintRequestAttribute, $JobSheets::NONE));
	}
}

void ServiceDialog$JobAttributesPanel::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	$nc(this->this$0->asCurrent)->add($$cast($PrintRequestAttribute, $new($JobPriority, $$nc($nc(this->snModel)->getNumber())->intValue())));
}

void ServiceDialog$JobAttributesPanel::focusLost($FocusEvent* e) {
	$useLocalObjectStack();
	$var($Object, source, $nc(e)->getSource());
	if ($equals(source, this->tfJobName)) {
		$var($String, var$0, $nc(this->tfJobName)->getText());
		$nc(this->this$0->asCurrent)->add($$cast($PrintRequestAttribute, $new($JobName, var$0, $($Locale::getDefault()))));
	} else if ($equals(source, this->tfUserName)) {
		$var($String, var$1, $nc(this->tfUserName)->getText());
		$nc(this->this$0->asCurrent)->add($$new($RequestingUserName, var$1, $($Locale::getDefault())));
	}
}

void ServiceDialog$JobAttributesPanel::focusGained($FocusEvent* e) {
}

void ServiceDialog$JobAttributesPanel::updateInfo() {
	$useLocalObjectStack();
	$load($JobSheets);
	$Class* jsCategory = $JobSheets::class$;
	$load($JobPriority);
	$Class* jpCategory = $JobPriority::class$;
	$load($JobName);
	$Class* jnCategory = $JobName::class$;
	$load($RequestingUserName);
	$Class* unCategory = $RequestingUserName::class$;
	bool jsSupported = false;
	bool jpSupported = false;
	bool jnSupported = false;
	bool unSupported = false;
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(jsCategory)) {
		jsSupported = true;
	}
	$var($JobSheets, js, $cast($JobSheets, $nc(this->this$0->asCurrent)->get(jsCategory)));
	if (js == nullptr) {
		$assign(js, $cast($JobSheets, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(jsCategory)));
		if (js == nullptr) {
			$init($JobSheets);
			$assign(js, $JobSheets::STANDARD);
		}
	}
	$init($JobSheets);
	$nc(this->cbJobSheets)->setSelected(js != $JobSheets::NONE && jsSupported);
	$nc(this->cbJobSheets)->setEnabled(jsSupported);
	if (!this->this$0->isAWT && $nc(this->this$0->psCurrent)->isAttributeCategorySupported(jpCategory)) {
		jpSupported = true;
	}
	$var($JobPriority, jp, $cast($JobPriority, $nc(this->this$0->asCurrent)->get(jpCategory)));
	if (jp == nullptr) {
		$assign(jp, $cast($JobPriority, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(jpCategory)));
		if (jp == nullptr) {
			$assign(jp, $new($JobPriority, 1));
		}
	}
	int32_t value = $nc(jp)->getValue();
	if ((value < 1) || (value > 100)) {
		value = 1;
	}
	$nc(this->snModel)->setValue($($Integer::valueOf(value)));
	$nc(this->lblPriority)->setEnabled(jpSupported);
	$nc(this->spinPriority)->setEnabled(jpSupported);
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(jnCategory)) {
		jnSupported = true;
	}
	$var($JobName, jn, $cast($JobName, $nc(this->this$0->asCurrent)->get(jnCategory)));
	if (jn == nullptr) {
		$assign(jn, $cast($JobName, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(jnCategory)));
		if (jn == nullptr) {
			$assign(jn, $new($JobName, ""_s, $($Locale::getDefault())));
		}
	}
	$nc(this->tfJobName)->setText($($nc(jn)->getValue()));
	$nc(this->tfJobName)->setEnabled(jnSupported);
	$nc(this->lblJobName)->setEnabled(jnSupported);
	if (!this->this$0->isAWT && $nc(this->this$0->psCurrent)->isAttributeCategorySupported(unCategory)) {
		unSupported = true;
	}
	$var($RequestingUserName, un, $cast($RequestingUserName, $nc(this->this$0->asCurrent)->get(unCategory)));
	if (un == nullptr) {
		$assign(un, $cast($RequestingUserName, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(unCategory)));
		if (un == nullptr) {
			$assign(un, $new($RequestingUserName, ""_s, $($Locale::getDefault())));
		}
	}
	$nc(this->tfUserName)->setText($($nc(un)->getValue()));
	$nc(this->tfUserName)->setEnabled(unSupported);
	$nc(this->lblUserName)->setEnabled(unSupported);
}

ServiceDialog$JobAttributesPanel::ServiceDialog$JobAttributesPanel() {
}

$Class* ServiceDialog$JobAttributesPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$JobAttributesPanel, this$0)},
		{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$JobAttributesPanel, strTitle)},
		{"lblPriority", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, lblPriority)},
		{"lblJobName", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, lblJobName)},
		{"lblUserName", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, lblUserName)},
		{"spinPriority", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, spinPriority)},
		{"snModel", "Ljavax/swing/SpinnerNumberModel;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, snModel)},
		{"cbJobSheets", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, cbJobSheets)},
		{"tfJobName", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, tfJobName)},
		{"tfUserName", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(ServiceDialog$JobAttributesPanel, tfUserName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(ServiceDialog$JobAttributesPanel, init$, void, $ServiceDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$JobAttributesPanel, actionPerformed, void, $ActionEvent*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$JobAttributesPanel, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$JobAttributesPanel, focusLost, void, $FocusEvent*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$JobAttributesPanel, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateInfo", "()V", nullptr, $PUBLIC, $virtualMethod(ServiceDialog$JobAttributesPanel, updateInfo, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.ServiceDialog$JobAttributesPanel", "sun.print.ServiceDialog", "JobAttributesPanel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.ServiceDialog$JobAttributesPanel",
		"javax.swing.JPanel",
		"java.awt.event.ActionListener,javax.swing.event.ChangeListener,java.awt.event.FocusListener",
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
	$loadClass(ServiceDialog$JobAttributesPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ServiceDialog$JobAttributesPanel));
	});
	return class$;
}

$Class* ServiceDialog$JobAttributesPanel::class$ = nullptr;

	} // print
} // sun
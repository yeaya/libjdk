#include <javax/swing/ButtonModel.h>

#include <java/awt/event/ActionListener.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$MethodInfo _ButtonModel_MethodInfo_[] = {
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, addActionListener, void, $ActionListener*)},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, addChangeListener, void, $ChangeListener*)},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, getActionCommand, $String*)},
	{"getGroup", "()Ljavax/swing/ButtonGroup;", nullptr, $PUBLIC, $virtualMethod(ButtonModel, getGroup, $ButtonGroup*)},
	{"getMnemonic", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, getMnemonic, int32_t)},
	{"isArmed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, isArmed, bool)},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, isEnabled, bool)},
	{"isPressed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, isPressed, bool)},
	{"isRollover", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, isRollover, bool)},
	{"isSelected", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, isSelected, bool)},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, removeActionListener, void, $ActionListener*)},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, removeChangeListener, void, $ChangeListener*)},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setActionCommand, void, $String*)},
	{"setArmed", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setArmed, void, bool)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setEnabled, void, bool)},
	{"setGroup", "(Ljavax/swing/ButtonGroup;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setGroup, void, $ButtonGroup*)},
	{"setMnemonic", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setMnemonic, void, int32_t)},
	{"setPressed", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setPressed, void, bool)},
	{"setRollover", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setRollover, void, bool)},
	{"setSelected", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ButtonModel, setSelected, void, bool)},
	{}
};

$ClassInfo _ButtonModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ButtonModel",
	nullptr,
	"java.awt.ItemSelectable",
	nullptr,
	_ButtonModel_MethodInfo_
};

$Object* allocate$ButtonModel($Class* clazz) {
	return $of($alloc(ButtonModel));
}

$ButtonGroup* ButtonModel::getGroup() {
	return nullptr;
}

$Class* ButtonModel::load$($String* name, bool initialize) {
	$loadClass(ButtonModel, name, initialize, &_ButtonModel_ClassInfo_, allocate$ButtonModel);
	return class$;
}

$Class* ButtonModel::class$ = nullptr;

	} // swing
} // javax
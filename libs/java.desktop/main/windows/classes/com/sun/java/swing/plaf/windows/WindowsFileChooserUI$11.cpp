#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$11.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ACCESSORY_CHANGED_PROPERTY
#undef APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORY_CHANGED_PROPERTY
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$11::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsFileChooserUI$11::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, s, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(s)->equals($JFileChooser::SELECTED_FILE_CHANGED_PROPERTY)) {
		this->this$0->doSelectedFileChanged(e);
	} else if (s->equals($JFileChooser::SELECTED_FILES_CHANGED_PROPERTY)) {
		this->this$0->doSelectedFilesChanged(e);
	} else if (s->equals($JFileChooser::DIRECTORY_CHANGED_PROPERTY)) {
		this->this$0->doDirectoryChanged(e);
	} else if (s->equals($JFileChooser::FILE_FILTER_CHANGED_PROPERTY)) {
		this->this$0->doFilterChanged(e);
	} else if (s->equals($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY)) {
		this->this$0->doFileSelectionModeChanged(e);
	} else if (s->equals($JFileChooser::ACCESSORY_CHANGED_PROPERTY)) {
		this->this$0->doAccessoryChanged(e);
	} else {
		bool var$0 = s->equals($JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY);
		if (var$0 || s->equals($JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY)) {
			this->this$0->doApproveButtonTextChanged(e);
		} else if (s->equals($JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY)) {
			this->this$0->doDialogTypeChanged(e);
		} else if (s->equals($JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY)) {
			this->this$0->doApproveButtonMnemonicChanged(e);
		} else if (s->equals($JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY)) {
			this->this$0->doControlButtonsChanged(e);
		} else if (s == "FileChooser.useShellFolder"_s) {
			this->this$0->updateUseShellFolder();
			this->this$0->doDirectoryChanged(e);
		} else if (s->equals("componentOrientation"_s)) {
			$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
			$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
			if (!$equals(o, e->getOldValue())) {
				$nc(cc)->applyComponentOrientation(o);
			}
		} else if (s->equals("ancestor"_s)) {
			bool var$1 = e->getOldValue() == nullptr;
			if (var$1 && e->getNewValue() != nullptr) {
				$nc(this->this$0->filenameTextField)->selectAll();
				$nc(this->this$0->filenameTextField)->requestFocus();
			}
		}
	}
}

WindowsFileChooserUI$11::WindowsFileChooserUI$11() {
}

$Class* WindowsFileChooserUI$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$11, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(WindowsFileChooserUI$11, init$, void, $WindowsFileChooserUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$11, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"createPropertyChangeListener",
		"(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileChooserUI$11);
	});
	return class$;
}

$Class* WindowsFileChooserUI$11::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com
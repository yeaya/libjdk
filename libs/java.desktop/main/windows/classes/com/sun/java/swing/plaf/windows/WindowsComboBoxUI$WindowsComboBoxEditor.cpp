#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxEditor.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsComboBoxUI$WindowsComboBoxEditor::init$() {
	$BasicComboBoxEditor$UIResource::init$();
}

$JTextField* WindowsComboBoxUI$WindowsComboBoxEditor::createEditorComponent() {
	$useLocalObjectStack();
	$var($JTextField, editor, $BasicComboBoxEditor$UIResource::createEditorComponent());
	$var($Border, border, $cast($Border, $UIManager::get("ComboBox.editorBorder"_s)));
	if (border != nullptr) {
		$nc(editor)->setBorder(border);
	}
	$nc(editor)->setOpaque(false);
	return editor;
}

void WindowsComboBoxUI$WindowsComboBoxEditor::setItem(Object$* item) {
	$useLocalObjectStack();
	$BasicComboBoxEditor$UIResource::setItem(item);
	$var($Object, focus, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	if (($equals(focus, this->editor)) || ($equals(focus, $nc(this->editor)->getParent()))) {
		$nc(this->editor)->selectAll();
	}
}

WindowsComboBoxUI$WindowsComboBoxEditor::WindowsComboBoxUI$WindowsComboBoxEditor() {
}

$Class* WindowsComboBoxUI$WindowsComboBoxEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsComboBoxUI$WindowsComboBoxEditor, init$, void)},
		{"createEditorComponent", "()Ljavax/swing/JTextField;", nullptr, $PROTECTED, $virtualMethod(WindowsComboBoxUI$WindowsComboBoxEditor, createEditorComponent, $JTextField*)},
		{"setItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxUI$WindowsComboBoxEditor, setItem, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxEditor", $PUBLIC | $STATIC},
		{"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource", "javax.swing.plaf.basic.BasicComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor",
		"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
	};
	$loadClass(WindowsComboBoxUI$WindowsComboBoxEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsComboBoxUI$WindowsComboBoxEditor));
	});
	return class$;
}

$Class* WindowsComboBoxUI$WindowsComboBoxEditor::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com
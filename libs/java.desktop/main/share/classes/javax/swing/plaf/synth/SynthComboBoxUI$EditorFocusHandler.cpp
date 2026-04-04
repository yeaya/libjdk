#include <javax/swing/plaf/synth/SynthComboBoxUI$EditorFocusHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComboBox = ::javax::swing::JComboBox;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthComboBoxUI$EditorFocusHandler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool SynthComboBoxUI$EditorFocusHandler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* SynthComboBoxUI$EditorFocusHandler::clone() {
	 return this->$FocusListener::clone();
}

$String* SynthComboBoxUI$EditorFocusHandler::toString() {
	 return this->$FocusListener::toString();
}

void SynthComboBoxUI$EditorFocusHandler::finalize() {
	this->$FocusListener::finalize();
}

void SynthComboBoxUI$EditorFocusHandler::init$($JComboBox* comboBox) {
	$set(this, editor, nullptr);
	$set(this, editorComponent, nullptr);
	$set(this, comboBox, comboBox);
	$set(this, editor, $nc(comboBox)->getEditor());
	if (this->editor != nullptr) {
		$set(this, editorComponent, this->editor->getEditorComponent());
		if (this->editorComponent != nullptr) {
			this->editorComponent->addFocusListener(this);
		}
	}
	comboBox->addPropertyChangeListener("editor"_s, this);
}

void SynthComboBoxUI$EditorFocusHandler::unregister() {
	$nc(this->comboBox)->removePropertyChangeListener("editor"_s, this);
	if (this->editorComponent != nullptr) {
		this->editorComponent->removeFocusListener(this);
	}
}

void SynthComboBoxUI$EditorFocusHandler::focusGained($FocusEvent* e) {
	$nc(this->comboBox)->repaint();
}

void SynthComboBoxUI$EditorFocusHandler::focusLost($FocusEvent* e) {
	$nc(this->comboBox)->repaint();
}

void SynthComboBoxUI$EditorFocusHandler::propertyChange($PropertyChangeEvent* evt) {
	$var($ComboBoxEditor, newEditor, $nc(this->comboBox)->getEditor());
	if (this->editor != newEditor) {
		if (this->editorComponent != nullptr) {
			this->editorComponent->removeFocusListener(this);
		}
		$set(this, editor, newEditor);
		if (this->editor != nullptr) {
			$set(this, editorComponent, this->editor->getEditorComponent());
			if (this->editorComponent != nullptr) {
				this->editorComponent->addFocusListener(this);
			}
		}
	}
}

SynthComboBoxUI$EditorFocusHandler::SynthComboBoxUI$EditorFocusHandler() {
}

$Class* SynthComboBoxUI$EditorFocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<*>;", $PRIVATE, $field(SynthComboBoxUI$EditorFocusHandler, comboBox)},
		{"editor", "Ljavax/swing/ComboBoxEditor;", nullptr, $PRIVATE, $field(SynthComboBoxUI$EditorFocusHandler, editor)},
		{"editorComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SynthComboBoxUI$EditorFocusHandler, editorComponent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PRIVATE, $method(SynthComboBoxUI$EditorFocusHandler, init$, void, $JComboBox*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$EditorFocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$EditorFocusHandler, focusLost, void, $FocusEvent*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$EditorFocusHandler, propertyChange, void, $PropertyChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"unregister", "()V", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$EditorFocusHandler, unregister, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler", "javax.swing.plaf.synth.SynthComboBoxUI", "EditorFocusHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler",
		"java.lang.Object",
		"java.awt.event.FocusListener,java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthComboBoxUI"
	};
	$loadClass(SynthComboBoxUI$EditorFocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthComboBoxUI$EditorFocusHandler));
	});
	return class$;
}

$Class* SynthComboBoxUI$EditorFocusHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
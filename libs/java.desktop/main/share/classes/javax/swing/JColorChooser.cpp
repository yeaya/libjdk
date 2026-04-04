#include <javax/swing/JColorChooser.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Arrays.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/ColorChooserDialog$DisposeOnClose.h>
#include <javax/swing/ColorChooserDialog.h>
#include <javax/swing/ColorTracker.h>
#include <javax/swing/JColorChooser$AccessibleJColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorChooserComponentFactory.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/colorchooser/DefaultColorSelectionModel.h>
#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef CHOOSER_PANELS_PROPERTY
#undef PREVIEW_PANEL_PROPERTY
#undef SELECTION_MODEL_PROPERTY

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Arrays = ::java::util::Arrays;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;
using $ColorChooserDialog$DisposeOnClose = ::javax::swing::ColorChooserDialog$DisposeOnClose;
using $ColorTracker = ::javax::swing::ColorTracker;
using $JColorChooser$AccessibleJColorChooser = ::javax::swing::JColorChooser$AccessibleJColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIManager = ::javax::swing::UIManager;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorChooserComponentFactory = ::javax::swing::colorchooser::ColorChooserComponentFactory;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $DefaultColorSelectionModel = ::javax::swing::colorchooser::DefaultColorSelectionModel;
using $ColorChooserUI = ::javax::swing::plaf::ColorChooserUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$String* JColorChooser::toString() {
	 return this->$JComponent::toString();
}

int32_t JColorChooser::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JColorChooser::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JColorChooser::clone() {
	 return this->$JComponent::clone();
}

void JColorChooser::finalize() {
	this->$JComponent::finalize();
}

$String* JColorChooser::uiClassID = nullptr;
$String* JColorChooser::SELECTION_MODEL_PROPERTY = nullptr;
$String* JColorChooser::PREVIEW_PANEL_PROPERTY = nullptr;
$String* JColorChooser::CHOOSER_PANELS_PROPERTY = nullptr;

$Color* JColorChooser::showDialog($Component* component, $String* title, $Color* initialColor) {
	$init(JColorChooser);
	return showDialog(component, title, initialColor, true);
}

$Color* JColorChooser::showDialog($Component* component, $String* title, $Color* initialColor, bool colorTransparencySelectionEnabled) {
	$init(JColorChooser);
	$useLocalObjectStack();
	$init($Color);
	$var(JColorChooser, pane, $new(JColorChooser, initialColor != nullptr ? initialColor : $Color::white));
	{
		$var($AbstractColorChooserPanelArray, arr$, pane->getChooserPanels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($AbstractColorChooserPanel, ccPanel, arr$->get(i$));
			{
				$nc(ccPanel)->setColorTransparencySelectionEnabled(colorTransparencySelectionEnabled);
			}
		}
	}
	$var($ColorTracker, ok, $new($ColorTracker, pane));
	$var($JDialog, dialog, createDialog(component, title, true, pane, ok, nullptr));
	$nc(dialog)->addComponentListener($$new($ColorChooserDialog$DisposeOnClose));
	dialog->show();
	return ok->getColor();
}

$JDialog* JColorChooser::createDialog($Component* c, $String* title, bool modal, JColorChooser* chooserPane, $ActionListener* okListener, $ActionListener* cancelListener) {
	$init(JColorChooser);
	$useLocalObjectStack();
	$var($Window, window, $JOptionPane::getWindowForComponent(c));
	$var($ColorChooserDialog, dialog, nullptr);
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($ColorChooserDialog, $cast($Frame, window), title, modal, c, chooserPane, okListener, cancelListener));
	} else {
		$assign(dialog, $new($ColorChooserDialog, $cast($Dialog, window), title, modal, c, chooserPane, okListener, cancelListener));
	}
	$$nc($nc(dialog)->getAccessibleContext())->setAccessibleDescription(title);
	return dialog;
}

void JColorChooser::init$() {
	$init($Color);
	JColorChooser::init$($Color::white);
}

void JColorChooser::init$($Color* initialColor) {
	JColorChooser::init$($$new($DefaultColorSelectionModel, initialColor));
}

void JColorChooser::init$($ColorSelectionModel* model) {
	$JComponent::init$();
	$set(this, previewPanel, $ColorChooserComponentFactory::getPreviewPanel());
	$set(this, chooserPanels, $new($AbstractColorChooserPanelArray, 0));
	$set(this, accessibleContext, nullptr);
	$set(this, selectionModel, model);
	updateUI();
	this->dragEnabled = false;
}

$ComponentUI* JColorChooser::getUI() {
	return $cast($ColorChooserUI, this->ui);
}

void JColorChooser::setUI($ColorChooserUI* ui) {
	$JComponent::setUI(ui);
}

void JColorChooser::updateUI() {
	setUI($$cast($ColorChooserUI, $UIManager::getUI(this)));
}

$String* JColorChooser::getUIClassID() {
	return JColorChooser::uiClassID;
}

$Color* JColorChooser::getColor() {
	return $nc(this->selectionModel)->getSelectedColor();
}

void JColorChooser::setColor($Color* color) {
	$nc(this->selectionModel)->setSelectedColor(color);
}

void JColorChooser::setColor(int32_t r, int32_t g, int32_t b) {
	setColor($$new($Color, r, g, b));
}

void JColorChooser::setColor(int32_t c) {
	setColor((c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff);
}

void JColorChooser::setDragEnabled(bool b) {
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	this->dragEnabled = b;
}

bool JColorChooser::getDragEnabled() {
	return this->dragEnabled;
}

void JColorChooser::setPreviewPanel($JComponent* preview) {
	if (this->previewPanel != preview) {
		$var($JComponent, oldPreview, this->previewPanel);
		$set(this, previewPanel, preview);
		firePropertyChange(JColorChooser::PREVIEW_PANEL_PROPERTY, oldPreview, preview);
	}
}

$JComponent* JColorChooser::getPreviewPanel() {
	return this->previewPanel;
}

void JColorChooser::addChooserPanel($AbstractColorChooserPanel* panel) {
	$useLocalObjectStack();
	$var($AbstractColorChooserPanelArray, oldPanels, getChooserPanels());
	$var($AbstractColorChooserPanelArray, newPanels, $new($AbstractColorChooserPanelArray, $nc(oldPanels)->length + 1));
	$System::arraycopy(oldPanels, 0, newPanels, 0, oldPanels->length);
	newPanels->set(newPanels->length - 1, panel);
	setChooserPanels(newPanels);
}

$AbstractColorChooserPanel* JColorChooser::removeChooserPanel($AbstractColorChooserPanel* panel) {
	int32_t containedAt = -1;
	for (int32_t i = 0; i < $nc(this->chooserPanels)->length; ++i) {
		if (this->chooserPanels->get(i) == panel) {
			containedAt = i;
			break;
		}
	}
	if (containedAt == -1) {
		$throwNew($IllegalArgumentException, "chooser panel not in this chooser"_s);
	}
	$var($AbstractColorChooserPanelArray, newArray, $new($AbstractColorChooserPanelArray, this->chooserPanels->length - 1));
	if (containedAt == this->chooserPanels->length - 1) {
		$System::arraycopy(this->chooserPanels, 0, newArray, 0, newArray->length);
	} else if (containedAt == 0) {
		$System::arraycopy(this->chooserPanels, 1, newArray, 0, newArray->length);
	} else {
		$System::arraycopy(this->chooserPanels, 0, newArray, 0, containedAt);
		$System::arraycopy(this->chooserPanels, containedAt + 1, newArray, containedAt, (this->chooserPanels->length - containedAt - 1));
	}
	setChooserPanels(newArray);
	return panel;
}

void JColorChooser::setChooserPanels($AbstractColorChooserPanelArray* panels) {
	$var($AbstractColorChooserPanelArray, oldValue, this->chooserPanels);
	$set(this, chooserPanels, $cast($AbstractColorChooserPanelArray, $Arrays::copyOf(panels, $nc(panels)->length)));
	firePropertyChange(JColorChooser::CHOOSER_PANELS_PROPERTY, oldValue, panels);
}

$AbstractColorChooserPanelArray* JColorChooser::getChooserPanels() {
	return $cast($AbstractColorChooserPanelArray, $Arrays::copyOf(this->chooserPanels, $nc(this->chooserPanels)->length));
}

$ColorSelectionModel* JColorChooser::getSelectionModel() {
	return this->selectionModel;
}

void JColorChooser::setSelectionModel($ColorSelectionModel* newModel) {
	$var($ColorSelectionModel, oldModel, this->selectionModel);
	$set(this, selectionModel, newModel);
	firePropertyChange(JColorChooser::SELECTION_MODEL_PROPERTY, oldModel, newModel);
}

void JColorChooser::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($$nc(getUIClassID())->equals(JColorChooser::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JColorChooser::paramString() {
	$useLocalObjectStack();
	$var($StringBuilder, chooserPanelsString, $new($StringBuilder));
	{
		$var($AbstractColorChooserPanelArray, arr$, this->chooserPanels);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($AbstractColorChooserPanel, panel, arr$->get(i$));
			{
				chooserPanelsString->append(u'[')->append(panel)->append(u']');
			}
		}
	}
	$var($String, previewPanelString, this->previewPanel != nullptr ? this->previewPanel->toString() : ""_s);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($JComponent::paramString()));
	var$0->append(",chooserPanels="_s);
	var$0->append($(chooserPanelsString->toString()));
	var$0->append(",previewPanel="_s);
	var$0->append(previewPanelString);
	return $str(var$0);
}

$AccessibleContext* JColorChooser::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JColorChooser$AccessibleJColorChooser, this));
	}
	return this->accessibleContext;
}

JColorChooser::JColorChooser() {
}

void JColorChooser::clinit$($Class* clazz) {
	$assignStatic(JColorChooser::uiClassID, "ColorChooserUI"_s);
	$assignStatic(JColorChooser::SELECTION_MODEL_PROPERTY, "selectionModel"_s);
	$assignStatic(JColorChooser::PREVIEW_PANEL_PROPERTY, "previewPanel"_s);
	$assignStatic(JColorChooser::CHOOSER_PANELS_PROPERTY, "chooserPanels"_s);
}

$Class* JColorChooser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JColorChooser, uiClassID)},
		{"selectionModel", "Ljavax/swing/colorchooser/ColorSelectionModel;", nullptr, $PRIVATE, $field(JColorChooser, selectionModel)},
		{"previewPanel", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(JColorChooser, previewPanel)},
		{"chooserPanels", "[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PRIVATE, $field(JColorChooser, chooserPanels)},
		{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JColorChooser, dragEnabled)},
		{"SELECTION_MODEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JColorChooser, SELECTION_MODEL_PROPERTY)},
		{"PREVIEW_PANEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JColorChooser, PREVIEW_PANEL_PROPERTY)},
		{"CHOOSER_PANELS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JColorChooser, CHOOSER_PANELS_PROPERTY)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JColorChooser, accessibleContext)},
		{}
	};
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setChooserPanelsmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "An array of different chooser types."},
		{}
	};
	$CompoundAttribute setChooserPanelsmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setChooserPanelsmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setColormethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "The current color the chooser is to display."},
		{}
	};
	$CompoundAttribute setColormethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setColormethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDragEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "Determines whether automatic drag handling is enabled."},
		{}
	};
	$CompoundAttribute setDragEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDragEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setPreviewPanelmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The UI component which displays the current color."},
		{}
	};
	$CompoundAttribute setPreviewPanelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setPreviewPanelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectionModelmethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The model which contains the currently selected color."},
		{}
	};
	$CompoundAttribute setSelectionModelmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectionModelmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setUImethodAnnotations$$$namedAttribute[] = {
		{"hidden", 'Z', "true"},
		{"description", 's', "The UI object that implements the color chooser\'s LookAndFeel."},
		{}
	};
	$CompoundAttribute setUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setUImethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JColorChooser, init$, void)},
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(JColorChooser, init$, void, $Color*)},
		{"<init>", "(Ljavax/swing/colorchooser/ColorSelectionModel;)V", nullptr, $PUBLIC, $method(JColorChooser, init$, void, $ColorSelectionModel*)},
		{"addChooserPanel", "(Ljavax/swing/colorchooser/AbstractColorChooserPanel;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, addChooserPanel, void, $AbstractColorChooserPanel*)},
		{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;ZLjavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)Ljavax/swing/JDialog;", nullptr, $PUBLIC | $STATIC, $staticMethod(JColorChooser, createDialog, $JDialog*, $Component*, $String*, bool, JColorChooser*, $ActionListener*, $ActionListener*), "java.awt.HeadlessException"},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getChooserPanels", "()[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getChooserPanels, $AbstractColorChooserPanelArray*)},
		{"getColor", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getColor, $Color*)},
		{"getDragEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getDragEnabled, bool)},
		{"getPreviewPanel", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getPreviewPanel, $JComponent*)},
		{"getSelectionModel", "()Ljavax/swing/colorchooser/ColorSelectionModel;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getSelectionModel, $ColorSelectionModel*)},
		{"getUI", "()Ljavax/swing/plaf/ColorChooserUI;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getUI, $ComponentUI*)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JColorChooser, paramString, $String*)},
		{"removeChooserPanel", "(Ljavax/swing/colorchooser/AbstractColorChooserPanel;)Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PUBLIC, $virtualMethod(JColorChooser, removeChooserPanel, $AbstractColorChooserPanel*, $AbstractColorChooserPanel*)},
		{"setChooserPanels", "([Ljavax/swing/colorchooser/AbstractColorChooserPanel;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setChooserPanels, void, $AbstractColorChooserPanelArray*), nullptr, nullptr, setChooserPanelsmethodAnnotations$$},
		{"setColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setColor, void, $Color*), nullptr, nullptr, setColormethodAnnotations$$},
		{"setColor", "(III)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setColor, void, int32_t, int32_t, int32_t)},
		{"setColor", "(I)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setColor, void, int32_t)},
		{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setDragEnabled, void, bool), nullptr, nullptr, setDragEnabledmethodAnnotations$$},
		{"setPreviewPanel", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setPreviewPanel, void, $JComponent*), nullptr, nullptr, setPreviewPanelmethodAnnotations$$},
		{"setSelectionModel", "(Ljavax/swing/colorchooser/ColorSelectionModel;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setSelectionModel, void, $ColorSelectionModel*), nullptr, nullptr, setSelectionModelmethodAnnotations$$},
		{"setUI", "(Ljavax/swing/plaf/ColorChooserUI;)V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, setUI, void, $ColorChooserUI*), nullptr, nullptr, setUImethodAnnotations$$},
		{"showDialog", "(Ljava/awt/Component;Ljava/lang/String;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(JColorChooser, showDialog, $Color*, $Component*, $String*, $Color*), "java.awt.HeadlessException"},
		{"showDialog", "(Ljava/awt/Component;Ljava/lang/String;Ljava/awt/Color;Z)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(JColorChooser, showDialog, $Color*, $Component*, $String*, $Color*, bool), "java.awt.HeadlessException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JColorChooser, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JColorChooser, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JColorChooser$AccessibleJColorChooser", "javax.swing.JColorChooser", "AccessibleJColorChooser", $PROTECTED},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component that supports selecting a Color."},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'Z', "false"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{"Ljavax/swing/SwingContainer;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JColorChooser",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JColorChooser$AccessibleJColorChooser"
	};
	$loadClass(JColorChooser, name, initialize, &classInfo$$, JColorChooser::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JColorChooser));
	});
	return class$;
}

$Class* JColorChooser::class$ = nullptr;

	} // swing
} // javax
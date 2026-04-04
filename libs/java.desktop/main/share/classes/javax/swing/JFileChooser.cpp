#include <javax/swing/JFileChooser.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFileChooser$1.h>
#include <javax/swing/JFileChooser$AccessibleJFileChooser.h>
#include <javax/swing/JFileChooser$FCHierarchyListener.h>
#include <javax/swing/JFileChooser$WeakPCL.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <jcpp.h>

#undef ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY
#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef ACCESSORY_CHANGED_PROPERTY
#undef ACTION_PERFORMED
#undef APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#undef APPROVE_OPTION
#undef APPROVE_SELECTION
#undef CANCEL_OPTION
#undef CANCEL_SELECTION
#undef CENTER
#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef CUSTOM_DIALOG
#undef DIALOG_TITLE_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORIES_ONLY
#undef DIRECTORY_CHANGED_PROPERTY
#undef ERROR_OPTION
#undef FILES_AND_DIRECTORIES
#undef FILES_ONLY
#undef FILE_CHOOSER_DIALOG
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_HIDING_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef FILE_SYSTEM_VIEW_CHANGED_PROPERTY
#undef FILE_VIEW_CHANGED_PROPERTY
#undef MOUSE_EVENT_MASK
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef OPEN_DIALOG
#undef SAVE_DIALOG
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY
#undef SHOW_HIDDEN_PROP

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $FileArray = $Array<::java::io::File>;
using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $File = ::java::io::File;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFileChooser$1 = ::javax::swing::JFileChooser$1;
using $JFileChooser$AccessibleJFileChooser = ::javax::swing::JFileChooser$AccessibleJFileChooser;
using $JFileChooser$FCHierarchyListener = ::javax::swing::JFileChooser$FCHierarchyListener;
using $JFileChooser$WeakPCL = ::javax::swing::JFileChooser$WeakPCL;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JRootPane = ::javax::swing::JRootPane;
using $UIManager = ::javax::swing::UIManager;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;

namespace javax {
	namespace swing {

$String* JFileChooser::toString() {
	 return this->$JComponent::toString();
}

int32_t JFileChooser::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JFileChooser::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JFileChooser::clone() {
	 return this->$JComponent::clone();
}

void JFileChooser::finalize() {
	this->$JComponent::finalize();
}

$String* JFileChooser::uiClassID = nullptr;
$String* JFileChooser::CANCEL_SELECTION = nullptr;
$String* JFileChooser::APPROVE_SELECTION = nullptr;
$String* JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::DIRECTORY_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::SELECTED_FILE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::SELECTED_FILES_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_SYSTEM_VIEW_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_VIEW_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_HIDING_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_FILTER_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::ACCESSORY_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::DIALOG_TITLE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::SHOW_HIDDEN_PROP = nullptr;

void JFileChooser::init$() {
	JFileChooser::init$(($File*)nullptr, ($FileSystemView*)nullptr);
}

void JFileChooser::init$($String* currentDirectoryPath) {
	JFileChooser::init$(currentDirectoryPath, ($FileSystemView*)nullptr);
}

void JFileChooser::init$($File* currentDirectory) {
	JFileChooser::init$(currentDirectory, ($FileSystemView*)nullptr);
}

void JFileChooser::init$($FileSystemView* fsv) {
	JFileChooser::init$(($File*)nullptr, fsv);
}

void JFileChooser::init$($File* currentDirectory, $FileSystemView* fsv) {
	$JComponent::init$();
	$set(this, dialogTitle, nullptr);
	$set(this, approveButtonText, nullptr);
	$set(this, approveButtonToolTipText, nullptr);
	this->approveButtonMnemonic = 0;
	$set(this, filters, $new($Vector, 5));
	$set(this, dialog, nullptr);
	this->dialogType = JFileChooser::OPEN_DIALOG;
	this->returnValue = JFileChooser::ERROR_OPTION;
	$set(this, accessory, nullptr);
	$set(this, fileView, nullptr);
	this->controlsShown = true;
	this->useFileHiding = true;
	$set(this, showFilesListener, nullptr);
	this->fileSelectionMode = JFileChooser::FILES_ONLY;
	this->multiSelectionEnabled = false;
	this->useAcceptAllFileFilter = true;
	this->dragEnabled = false;
	$set(this, fileFilter, nullptr);
	$set(this, fileSystemView, nullptr);
	$set(this, currentDirectory, nullptr);
	$set(this, selectedFile, nullptr);
	$set(this, accessibleContext, nullptr);
	setup(fsv);
	setCurrentDirectory(currentDirectory);
}

void JFileChooser::init$($String* currentDirectoryPath, $FileSystemView* fsv) {
	$JComponent::init$();
	$set(this, dialogTitle, nullptr);
	$set(this, approveButtonText, nullptr);
	$set(this, approveButtonToolTipText, nullptr);
	this->approveButtonMnemonic = 0;
	$set(this, filters, $new($Vector, 5));
	$set(this, dialog, nullptr);
	this->dialogType = JFileChooser::OPEN_DIALOG;
	this->returnValue = JFileChooser::ERROR_OPTION;
	$set(this, accessory, nullptr);
	$set(this, fileView, nullptr);
	this->controlsShown = true;
	this->useFileHiding = true;
	$set(this, showFilesListener, nullptr);
	this->fileSelectionMode = JFileChooser::FILES_ONLY;
	this->multiSelectionEnabled = false;
	this->useAcceptAllFileFilter = true;
	this->dragEnabled = false;
	$set(this, fileFilter, nullptr);
	$set(this, fileSystemView, nullptr);
	$set(this, currentDirectory, nullptr);
	$set(this, selectedFile, nullptr);
	$set(this, accessibleContext, nullptr);
	setup(fsv);
	if (currentDirectoryPath == nullptr) {
		setCurrentDirectory(nullptr);
	} else {
		setCurrentDirectory($($nc(this->fileSystemView)->createFileObject(currentDirectoryPath)));
	}
}

void JFileChooser::setup($FileSystemView* view$renamed) {
	$useLocalObjectStack();
	$var($FileSystemView, view, view$renamed);
	installShowFilesListener();
	installHierarchyListener();
	if (view == nullptr) {
		$assign(view, $FileSystemView::getFileSystemView());
	}
	setFileSystemView(view);
	updateUI();
	if (isAcceptAllFileFilterUsed()) {
		setFileFilter($(getAcceptAllFileFilter()));
	}
	enableEvents($AWTEvent::MOUSE_EVENT_MASK);
}

void JFileChooser::installHierarchyListener() {
	addHierarchyListener($$new($JFileChooser$FCHierarchyListener, this));
}

void JFileChooser::installShowFilesListener() {
	$useLocalObjectStack();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$var($Object, showHiddenProperty, $nc(tk)->getDesktopProperty(JFileChooser::SHOW_HIDDEN_PROP));
	if ($instanceOf($Boolean, showHiddenProperty)) {
		this->useFileHiding = !$cast($Boolean, showHiddenProperty)->booleanValue();
		$set(this, showFilesListener, $new($JFileChooser$WeakPCL, this));
		tk->addPropertyChangeListener(JFileChooser::SHOW_HIDDEN_PROP, this->showFilesListener);
	}
}

void JFileChooser::setDragEnabled(bool b) {
	checkDragEnabled(b);
	this->dragEnabled = b;
}

void JFileChooser::checkDragEnabled(bool b) {
	$init(JFileChooser);
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

bool JFileChooser::getDragEnabled() {
	return this->dragEnabled;
}

$File* JFileChooser::getSelectedFile() {
	return this->selectedFile;
}

void JFileChooser::setSelectedFile($File* file) {
	$useLocalObjectStack();
	$var($File, oldValue, this->selectedFile);
	$set(this, selectedFile, file);
	if (this->selectedFile != nullptr) {
		bool var$0 = $nc(file)->isAbsolute();
		if (var$0 && !$$nc(getFileSystemView())->isParent($(getCurrentDirectory()), this->selectedFile)) {
			setCurrentDirectory($($nc(this->selectedFile)->getParentFile()));
		}
		if (!isMultiSelectionEnabled() || this->selectedFiles == nullptr || this->selectedFiles->length == 1) {
			ensureFileIsVisible(this->selectedFile);
		}
	}
	firePropertyChange(JFileChooser::SELECTED_FILE_CHANGED_PROPERTY, oldValue, this->selectedFile);
}

$FileArray* JFileChooser::getSelectedFiles() {
	if (this->selectedFiles == nullptr) {
		return $new($FileArray, 0);
	} else {
		return $cast($FileArray, this->selectedFiles->clone());
	}
}

void JFileChooser::setSelectedFiles($FileArray* selectedFiles$renamed) {
	$useLocalObjectStack();
	$var($FileArray, selectedFiles, selectedFiles$renamed);
	$var($FileArray, oldValue, this->selectedFiles);
	if (selectedFiles == nullptr || selectedFiles->length == 0) {
		$assign(selectedFiles, nullptr);
		$set(this, selectedFiles, nullptr);
		setSelectedFile(nullptr);
	} else {
		$set(this, selectedFiles, $cast($FileArray, selectedFiles->clone()));
		setSelectedFile(this->selectedFiles->get(0));
	}
	firePropertyChange(JFileChooser::SELECTED_FILES_CHANGED_PROPERTY, oldValue, selectedFiles);
}

$File* JFileChooser::getCurrentDirectory() {
	return this->currentDirectory;
}

void JFileChooser::setCurrentDirectory($File* dir$renamed) {
	$useLocalObjectStack();
	$var($File, dir, dir$renamed);
	$var($File, oldValue, this->currentDirectory);
	if (dir != nullptr && !dir->exists()) {
		$assign(dir, this->currentDirectory);
	}
	if (dir == nullptr) {
		$assign(dir, $$nc(getFileSystemView())->getDefaultDirectory());
	}
	if (this->currentDirectory != nullptr) {
		if ($nc(this->currentDirectory)->equals(dir)) {
			return;
		}
	}
	$var($File, prev, nullptr);
	while (!isTraversable(dir) && prev != dir) {
		$assign(prev, dir);
		$assign(dir, $$nc(getFileSystemView())->getParentDirectory(dir));
	}
	$set(this, currentDirectory, dir);
	firePropertyChange(JFileChooser::DIRECTORY_CHANGED_PROPERTY, oldValue, this->currentDirectory);
}

void JFileChooser::changeToParentDirectory() {
	$useLocalObjectStack();
	$set(this, selectedFile, nullptr);
	$var($File, oldValue, getCurrentDirectory());
	setCurrentDirectory($($$nc(getFileSystemView())->getParentDirectory(oldValue)));
}

void JFileChooser::rescanCurrentDirectory() {
	$$sure($FileChooserUI, getUI())->rescanCurrentDirectory(this);
}

void JFileChooser::ensureFileIsVisible($File* f) {
	$$sure($FileChooserUI, getUI())->ensureFileIsVisible(this, f);
}

int32_t JFileChooser::showOpenDialog($Component* parent) {
	setDialogType(JFileChooser::OPEN_DIALOG);
	return showDialog(parent, nullptr);
}

int32_t JFileChooser::showSaveDialog($Component* parent) {
	setDialogType(JFileChooser::SAVE_DIALOG);
	return showDialog(parent, nullptr);
}

int32_t JFileChooser::showDialog($Component* parent, $String* approveButtonText) {
	$useLocalObjectStack();
	if (this->dialog != nullptr) {
		return JFileChooser::ERROR_OPTION;
	}
	if (approveButtonText != nullptr) {
		setApproveButtonText(approveButtonText);
		setDialogType(JFileChooser::CUSTOM_DIALOG);
	}
	$set(this, dialog, createDialog(parent));
	$nc(this->dialog)->addWindowListener($$new($JFileChooser$1, this));
	this->returnValue = JFileChooser::ERROR_OPTION;
	rescanCurrentDirectory();
	$nc(this->dialog)->show();
	firePropertyChange("JFileChooserDialogIsClosingProperty"_s, this->dialog, nullptr);
	$$nc($nc(this->dialog)->getContentPane())->removeAll();
	$nc(this->dialog)->dispose();
	$set(this, dialog, nullptr);
	return this->returnValue;
}

$JDialog* JFileChooser::createDialog($Component* parent) {
	$useLocalObjectStack();
	$var($FileChooserUI, ui, $cast($FileChooserUI, getUI()));
	$var($String, title, $nc(ui)->getDialogTitle(this));
	$init($AccessibleContext);
	putClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY, title);
	$var($JDialog, dialog, nullptr);
	$var($Window, window, $JOptionPane::getWindowForComponent(parent));
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($JDialog, $cast($Frame, window), title, true));
	} else {
		$assign(dialog, $new($JDialog, $cast($Dialog, window), title, true));
	}
	$nc(dialog)->setComponentOrientation($(this->getComponentOrientation()));
	$var($Container, contentPane, dialog->getContentPane());
	$nc(contentPane)->setLayout($$new($BorderLayout));
	contentPane->add(this, $BorderLayout::CENTER);
	if ($JDialog::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $$nc($UIManager::getLookAndFeel())->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			$$nc(dialog->getRootPane())->setWindowDecorationStyle($JRootPane::FILE_CHOOSER_DIALOG);
		}
	}
	dialog->pack();
	dialog->setLocationRelativeTo(parent);
	return dialog;
}

bool JFileChooser::getControlButtonsAreShown() {
	return this->controlsShown;
}

void JFileChooser::setControlButtonsAreShown(bool b) {
	if (this->controlsShown == b) {
		return;
	}
	bool oldValue = this->controlsShown;
	this->controlsShown = b;
	firePropertyChange(JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY, oldValue, this->controlsShown);
}

int32_t JFileChooser::getDialogType() {
	return this->dialogType;
}

void JFileChooser::setDialogType(int32_t dialogType) {
	if (this->dialogType == dialogType) {
		return;
	}
	checkDialogType(dialogType);
	int32_t oldValue = this->dialogType;
	this->dialogType = dialogType;
	if (dialogType == JFileChooser::OPEN_DIALOG || dialogType == JFileChooser::SAVE_DIALOG) {
		setApproveButtonText(nullptr);
	}
	firePropertyChange(JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY, oldValue, dialogType);
}

void JFileChooser::checkDialogType(int32_t dialogType) {
	$init(JFileChooser);
	$useLocalObjectStack();
	if (!(dialogType == JFileChooser::OPEN_DIALOG || dialogType == JFileChooser::SAVE_DIALOG || dialogType == JFileChooser::CUSTOM_DIALOG)) {
		$throwNew($IllegalArgumentException, $$str({"Incorrect Dialog Type: "_s, $$str(dialogType)}));
	}
}

void JFileChooser::setDialogTitle($String* dialogTitle) {
	$var($String, oldValue, this->dialogTitle);
	$set(this, dialogTitle, dialogTitle);
	if (this->dialog != nullptr) {
		this->dialog->setTitle(dialogTitle);
	}
	firePropertyChange(JFileChooser::DIALOG_TITLE_CHANGED_PROPERTY, oldValue, dialogTitle);
}

$String* JFileChooser::getDialogTitle() {
	return this->dialogTitle;
}

void JFileChooser::setApproveButtonToolTipText($String* toolTipText) {
	if (this->approveButtonToolTipText == toolTipText) {
		return;
	}
	$var($String, oldValue, this->approveButtonToolTipText);
	$set(this, approveButtonToolTipText, toolTipText);
	firePropertyChange(JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY, oldValue, this->approveButtonToolTipText);
}

$String* JFileChooser::getApproveButtonToolTipText() {
	return this->approveButtonToolTipText;
}

int32_t JFileChooser::getApproveButtonMnemonic() {
	return this->approveButtonMnemonic;
}

void JFileChooser::setApproveButtonMnemonic(int32_t mnemonic) {
	if (this->approveButtonMnemonic == mnemonic) {
		return;
	}
	int32_t oldValue = this->approveButtonMnemonic;
	this->approveButtonMnemonic = mnemonic;
	firePropertyChange(JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY, oldValue, this->approveButtonMnemonic);
}

void JFileChooser::setApproveButtonMnemonic(char16_t mnemonic) {
	int32_t vk = (int32_t)mnemonic;
	if (vk >= u'a' && vk <= u'z') {
		vk -= (u'a' - u'A');
	}
	setApproveButtonMnemonic(vk);
}

void JFileChooser::setApproveButtonText($String* approveButtonText) {
	if (this->approveButtonText == approveButtonText) {
		return;
	}
	$var($String, oldValue, this->approveButtonText);
	$set(this, approveButtonText, approveButtonText);
	firePropertyChange(JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY, oldValue, approveButtonText);
}

$String* JFileChooser::getApproveButtonText() {
	return this->approveButtonText;
}

$FileFilterArray* JFileChooser::getChoosableFileFilters() {
	$var($FileFilterArray, filterArray, $new($FileFilterArray, $nc(this->filters)->size()));
	this->filters->copyInto(filterArray);
	return filterArray;
}

void JFileChooser::addChoosableFileFilter($FileFilter* filter) {
	$useLocalObjectStack();
	if (filter != nullptr && !$nc(this->filters)->contains(filter)) {
		$var($FileFilterArray, oldValue, getChoosableFileFilters());
		$nc(this->filters)->addElement(filter);
		firePropertyChange(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, oldValue, $(getChoosableFileFilters()));
		if (this->fileFilter == nullptr && $nc(this->filters)->size() == 1) {
			setFileFilter(filter);
		}
	}
}

bool JFileChooser::removeChoosableFileFilter($FileFilter* f) {
	$useLocalObjectStack();
	int32_t index = $nc(this->filters)->indexOf(f);
	if (index >= 0) {
		if (getFileFilter() == f) {
			$var($FileFilter, aaff, getAcceptAllFileFilter());
			if (isAcceptAllFileFilterUsed() && (aaff != f)) {
				setFileFilter(aaff);
			} else if (index > 0) {
				setFileFilter($$cast($FileFilter, $nc(this->filters)->get(0)));
			} else if ($nc(this->filters)->size() > 1) {
				setFileFilter($$cast($FileFilter, this->filters->get(1)));
			} else {
				setFileFilter(nullptr);
			}
		}
		$var($FileFilterArray, oldValue, getChoosableFileFilters());
		$nc(this->filters)->removeElement(f);
		firePropertyChange(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, oldValue, $(getChoosableFileFilters()));
		return true;
	} else {
		return false;
	}
}

void JFileChooser::resetChoosableFileFilters() {
	$useLocalObjectStack();
	$var($FileFilterArray, oldValue, getChoosableFileFilters());
	setFileFilter(nullptr);
	$nc(this->filters)->removeAllElements();
	if (isAcceptAllFileFilterUsed()) {
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	firePropertyChange(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, oldValue, $(getChoosableFileFilters()));
}

$FileFilter* JFileChooser::getAcceptAllFileFilter() {
	$useLocalObjectStack();
	$var($FileFilter, filter, nullptr);
	if ($cast($FileChooserUI, getUI()) != nullptr) {
		$assign(filter, $$sure($FileChooserUI, getUI())->getAcceptAllFileFilter(this));
	}
	return filter;
}

bool JFileChooser::isAcceptAllFileFilterUsed() {
	return this->useAcceptAllFileFilter;
}

void JFileChooser::setAcceptAllFileFilterUsed(bool b) {
	$useLocalObjectStack();
	bool oldValue = this->useAcceptAllFileFilter;
	this->useAcceptAllFileFilter = b;
	if (!b) {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
	} else {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	firePropertyChange(JFileChooser::ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY, oldValue, this->useAcceptAllFileFilter);
}

$JComponent* JFileChooser::getAccessory() {
	return this->accessory;
}

void JFileChooser::setAccessory($JComponent* newAccessory) {
	$var($JComponent, oldValue, this->accessory);
	$set(this, accessory, newAccessory);
	firePropertyChange(JFileChooser::ACCESSORY_CHANGED_PROPERTY, oldValue, this->accessory);
}

void JFileChooser::setFileSelectionMode(int32_t mode) {
	if (this->fileSelectionMode == mode) {
		return;
	}
	checkFileSelectionMode(mode);
	int32_t oldValue = this->fileSelectionMode;
	this->fileSelectionMode = mode;
	firePropertyChange(JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY, oldValue, this->fileSelectionMode);
}

void JFileChooser::checkFileSelectionMode(int32_t mode) {
	$init(JFileChooser);
	$useLocalObjectStack();
	if ((mode != JFileChooser::FILES_ONLY) && (mode != JFileChooser::DIRECTORIES_ONLY) && (mode != JFileChooser::FILES_AND_DIRECTORIES)) {
		$throwNew($IllegalArgumentException, $$str({"Incorrect Mode for file selection: "_s, $$str(mode)}));
	}
}

int32_t JFileChooser::getFileSelectionMode() {
	return this->fileSelectionMode;
}

bool JFileChooser::isFileSelectionEnabled() {
	return ((this->fileSelectionMode == JFileChooser::FILES_ONLY) || (this->fileSelectionMode == JFileChooser::FILES_AND_DIRECTORIES));
}

bool JFileChooser::isDirectorySelectionEnabled() {
	return ((this->fileSelectionMode == JFileChooser::DIRECTORIES_ONLY) || (this->fileSelectionMode == JFileChooser::FILES_AND_DIRECTORIES));
}

void JFileChooser::setMultiSelectionEnabled(bool b) {
	if (this->multiSelectionEnabled == b) {
		return;
	}
	bool oldValue = this->multiSelectionEnabled;
	this->multiSelectionEnabled = b;
	firePropertyChange(JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY, oldValue, this->multiSelectionEnabled);
}

bool JFileChooser::isMultiSelectionEnabled() {
	return this->multiSelectionEnabled;
}

bool JFileChooser::isFileHidingEnabled() {
	return this->useFileHiding;
}

void JFileChooser::setFileHidingEnabled(bool b) {
	if (this->showFilesListener != nullptr) {
		$$nc($Toolkit::getDefaultToolkit())->removePropertyChangeListener(JFileChooser::SHOW_HIDDEN_PROP, this->showFilesListener);
		$set(this, showFilesListener, nullptr);
	}
	bool oldValue = this->useFileHiding;
	this->useFileHiding = b;
	firePropertyChange(JFileChooser::FILE_HIDING_CHANGED_PROPERTY, oldValue, this->useFileHiding);
}

void JFileChooser::setFileFilter($FileFilter* filter) {
	$useLocalObjectStack();
	$var($FileFilter, oldValue, this->fileFilter);
	$set(this, fileFilter, filter);
	if (filter != nullptr) {
		if (isMultiSelectionEnabled() && this->selectedFiles != nullptr && this->selectedFiles->length > 0) {
			$var($Vector, fList, $new($Vector));
			bool failed = false;
			{
				$var($FileArray, arr$, this->selectedFiles);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($File, file, arr$->get(i$));
					if (filter->accept(file)) {
						fList->add(file);
					} else {
						failed = true;
					}
				}
			}
			if (failed) {
				setSelectedFiles((fList->size() == 0) ? ($FileArray*)nullptr : $$cast($FileArray, fList->toArray($$new($FileArray, fList->size()))));
			}
		} else if (this->selectedFile != nullptr && !filter->accept(this->selectedFile)) {
			setSelectedFile(nullptr);
		}
	}
	firePropertyChange(JFileChooser::FILE_FILTER_CHANGED_PROPERTY, oldValue, this->fileFilter);
}

$FileFilter* JFileChooser::getFileFilter() {
	return this->fileFilter;
}

void JFileChooser::setFileView($FileView* fileView) {
	$var($FileView, oldValue, this->fileView);
	$set(this, fileView, fileView);
	firePropertyChange(JFileChooser::FILE_VIEW_CHANGED_PROPERTY, oldValue, fileView);
}

$FileView* JFileChooser::getFileView() {
	return this->fileView;
}

$String* JFileChooser::getName($File* f) {
	$useLocalObjectStack();
	$var($String, filename, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(filename, $$nc(getFileView())->getName(f));
		}
		$var($FileView, uiFileView, $$sure($FileChooserUI, getUI())->getFileView(this));
		if (filename == nullptr && uiFileView != nullptr) {
			$assign(filename, uiFileView->getName(f));
		}
	}
	return filename;
}

$String* JFileChooser::getDescription($File* f) {
	$useLocalObjectStack();
	$var($String, description, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(description, $$nc(getFileView())->getDescription(f));
		}
		$var($FileView, uiFileView, $$sure($FileChooserUI, getUI())->getFileView(this));
		if (description == nullptr && uiFileView != nullptr) {
			$assign(description, uiFileView->getDescription(f));
		}
	}
	return description;
}

$String* JFileChooser::getTypeDescription($File* f) {
	$useLocalObjectStack();
	$var($String, typeDescription, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(typeDescription, $$nc(getFileView())->getTypeDescription(f));
		}
		$var($FileView, uiFileView, $$sure($FileChooserUI, getUI())->getFileView(this));
		if (typeDescription == nullptr && uiFileView != nullptr) {
			$assign(typeDescription, uiFileView->getTypeDescription(f));
		}
	}
	return typeDescription;
}

$Icon* JFileChooser::getIcon($File* f) {
	$useLocalObjectStack();
	$var($Icon, icon, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(icon, $$nc(getFileView())->getIcon(f));
		}
		$var($FileView, uiFileView, $$sure($FileChooserUI, getUI())->getFileView(this));
		if (icon == nullptr && uiFileView != nullptr) {
			$assign(icon, uiFileView->getIcon(f));
		}
	}
	return icon;
}

bool JFileChooser::isTraversable($File* f) {
	$useLocalObjectStack();
	$var($Boolean, traversable, nullptr);
	if (f != nullptr) {
		$var($FileView, fileView, getFileView());
		if (fileView != nullptr) {
			$assign(traversable, fileView->isTraversable(f));
		}
		$var($FileChooserUI, ui, $cast($FileChooserUI, getUI()));
		if (traversable == nullptr && ui != nullptr) {
			$var($FileView, uiFileView, ui->getFileView(this));
			if (uiFileView != nullptr) {
				$assign(traversable, uiFileView->isTraversable(f));
			}
		}
		$var($FileSystemView, fileSystemView, getFileSystemView());
		if (traversable == nullptr && fileSystemView != nullptr) {
			$assign(traversable, fileSystemView->isTraversable(f));
		}
	}
	return traversable != nullptr && traversable->booleanValue();
}

bool JFileChooser::accept($File* f) {
	$var($FileFilter, filter, this->fileFilter);
	return f == nullptr || filter == nullptr || filter->accept(f);
}

void JFileChooser::setFileSystemView($FileSystemView* fsv) {
	$var($FileSystemView, oldValue, this->fileSystemView);
	$set(this, fileSystemView, fsv);
	firePropertyChange(JFileChooser::FILE_SYSTEM_VIEW_CHANGED_PROPERTY, oldValue, this->fileSystemView);
}

$FileSystemView* JFileChooser::getFileSystemView() {
	return this->fileSystemView;
}

void JFileChooser::approveSelection() {
	this->returnValue = JFileChooser::APPROVE_OPTION;
	if (this->dialog != nullptr) {
		this->dialog->setVisible(false);
	}
	fireActionPerformed(JFileChooser::APPROVE_SELECTION);
}

void JFileChooser::cancelSelection() {
	this->returnValue = JFileChooser::CANCEL_OPTION;
	if (this->dialog != nullptr) {
		this->dialog->setVisible(false);
	}
	fireActionPerformed(JFileChooser::CANCEL_SELECTION);
}

void JFileChooser::addActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, l);
}

void JFileChooser::removeActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->remove($ActionListener::class$, l);
}

$ActionListenerArray* JFileChooser::getActionListeners() {
	$load($ActionListener);
	return $cast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

void JFileChooser::fireActionPerformed($String* command) {
	$useLocalObjectStack();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	int64_t mostRecentEventTime = $EventQueue::getMostRecentEventTime();
	int32_t modifiers = 0;
	$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
	if ($instanceOf($InputEvent, currentEvent)) {
		modifiers = $cast($InputEvent, currentEvent)->getModifiers();
	} else if ($instanceOf($ActionEvent, currentEvent)) {
		modifiers = $cast($ActionEvent, currentEvent)->getModifiers();
	}
	$var($ActionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, command, mostRecentEventTime, modifiers));
			}
			$nc($cast($ActionListener, listeners->get(i + 1)))->actionPerformed(e);
		}
	}
}

void JFileChooser::updateUI() {
	$useLocalObjectStack();
	if (isAcceptAllFileFilterUsed()) {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	$var($FileChooserUI, ui, $cast($FileChooserUI, $UIManager::getUI(this)));
	if (this->fileSystemView == nullptr) {
		setFileSystemView($($FileSystemView::getFileSystemView()));
	}
	setUI(ui);
	if (isAcceptAllFileFilterUsed()) {
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
}

$String* JFileChooser::getUIClassID() {
	return JFileChooser::uiClassID;
}

$ComponentUI* JFileChooser::getUI() {
	return $cast($FileChooserUI, this->ui);
}

void JFileChooser::readObject($ObjectInputStream* in) {
	$useLocalObjectStack();
	$var($ObjectInputStream$GetField, f, $nc(in)->readFields());
	$set(this, dialogTitle, $cast($String, $nc(f)->get("dialogTitle"_s, nullptr)));
	$set(this, approveButtonText, $cast($String, f->get("approveButtonText"_s, nullptr)));
	$set(this, approveButtonToolTipText, $cast($String, f->get("approveButtonToolTipText"_s, nullptr)));
	this->approveButtonMnemonic = f->get("approveButtonMnemonic"_s, 0);
	$var($Vector, newFilters, $cast($Vector, f->get("filters"_s, nullptr)));
	if (newFilters == nullptr) {
		$throwNew($InvalidObjectException, "Null filters"_s);
	}
	$set(this, filters, newFilters);
	$set(this, dialog, $cast($JDialog, f->get("dialog"_s, nullptr)));
	int32_t newDialogType = f->get("dialogType"_s, JFileChooser::OPEN_DIALOG);
	checkDialogType(newDialogType);
	this->dialogType = newDialogType;
	this->returnValue = f->get("returnValue"_s, 0);
	$set(this, accessory, $cast($JComponent, f->get("accessory"_s, nullptr)));
	$set(this, fileView, $cast($FileView, f->get("fileView"_s, nullptr)));
	this->controlsShown = f->get("controlsShown"_s, false);
	this->useFileHiding = f->get("useFileHiding"_s, false);
	int32_t newFileSelectionMode = f->get("fileSelectionMode"_s, JFileChooser::FILES_ONLY);
	checkFileSelectionMode(newFileSelectionMode);
	this->fileSelectionMode = newFileSelectionMode;
	this->multiSelectionEnabled = f->get("multiSelectionEnabled"_s, false);
	this->useAcceptAllFileFilter = f->get("useAcceptAllFileFilter"_s, false);
	bool newDragEnabled = f->get("dragEnabled"_s, false);
	checkDragEnabled(newDragEnabled);
	this->dragEnabled = newDragEnabled;
	$set(this, fileFilter, $cast($FileFilter, f->get("fileFilter"_s, nullptr)));
	$set(this, fileSystemView, $cast($FileSystemView, f->get("fileSystemView"_s, nullptr)));
	$set(this, currentDirectory, $cast($File, f->get("currentDirectory"_s, nullptr)));
	$set(this, selectedFile, $cast($File, f->get("selectedFile"_s, nullptr)));
	$set(this, selectedFiles, $cast($FileArray, f->get("selectedFiles"_s, nullptr)));
	$set(this, accessibleContext, $cast($AccessibleContext, f->get("accessibleContext"_s, nullptr)));
	installShowFilesListener();
}

void JFileChooser::writeObject($ObjectOutputStream* s) {
	$useLocalObjectStack();
	$var($FileSystemView, fsv, nullptr);
	if (isAcceptAllFileFilterUsed()) {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	if ($nc(this->fileSystemView)->equals($($FileSystemView::getFileSystemView()))) {
		$assign(fsv, this->fileSystemView);
		$set(this, fileSystemView, nullptr);
	}
	$nc(s)->defaultWriteObject();
	if (fsv != nullptr) {
		$set(this, fileSystemView, fsv);
	}
	if (isAcceptAllFileFilterUsed()) {
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	if ($$nc(getUIClassID())->equals(JFileChooser::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			this->ui->installUI(this);
		}
	}
}

$String* JFileChooser::paramString() {
	$useLocalObjectStack();
	$var($String, approveButtonTextString, this->approveButtonText != nullptr ? this->approveButtonText : ""_s);
	$var($String, dialogTitleString, this->dialogTitle != nullptr ? this->dialogTitle : ""_s);
	$var($String, dialogTypeString, nullptr);
	if (this->dialogType == JFileChooser::OPEN_DIALOG) {
		$assign(dialogTypeString, "OPEN_DIALOG"_s);
	} else if (this->dialogType == JFileChooser::SAVE_DIALOG) {
		$assign(dialogTypeString, "SAVE_DIALOG"_s);
	} else if (this->dialogType == JFileChooser::CUSTOM_DIALOG) {
		$assign(dialogTypeString, "CUSTOM_DIALOG"_s);
	} else {
		$assign(dialogTypeString, ""_s);
	}
	$var($String, returnValueString, nullptr);
	if (this->returnValue == JFileChooser::CANCEL_OPTION) {
		$assign(returnValueString, "CANCEL_OPTION"_s);
	} else if (this->returnValue == JFileChooser::APPROVE_OPTION) {
		$assign(returnValueString, "APPROVE_OPTION"_s);
	} else if (this->returnValue == JFileChooser::ERROR_OPTION) {
		$assign(returnValueString, "ERROR_OPTION"_s);
	} else {
		$assign(returnValueString, ""_s);
	}
	$var($String, useFileHidingString, this->useFileHiding ? "true"_s : "false"_s);
	$var($String, fileSelectionModeString, nullptr);
	if (this->fileSelectionMode == JFileChooser::FILES_ONLY) {
		$assign(fileSelectionModeString, "FILES_ONLY"_s);
	} else if (this->fileSelectionMode == JFileChooser::DIRECTORIES_ONLY) {
		$assign(fileSelectionModeString, "DIRECTORIES_ONLY"_s);
	} else if (this->fileSelectionMode == JFileChooser::FILES_AND_DIRECTORIES) {
		$assign(fileSelectionModeString, "FILES_AND_DIRECTORIES"_s);
	} else {
		$assign(fileSelectionModeString, ""_s);
	}
	$var($String, currentDirectoryString, this->currentDirectory != nullptr ? this->currentDirectory->toString() : ""_s);
	$var($String, selectedFileString, this->selectedFile != nullptr ? this->selectedFile->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",approveButtonText="_s, approveButtonTextString, ",currentDirectory="_s, currentDirectoryString, ",dialogTitle="_s, dialogTitleString, ",dialogType="_s, dialogTypeString, ",fileSelectionMode="_s, fileSelectionModeString, ",returnValue="_s, returnValueString, ",selectedFile="_s, selectedFileString, ",useFileHiding="_s, 
	useFileHidingString});
}

$AccessibleContext* JFileChooser::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JFileChooser$AccessibleJFileChooser, this));
	}
	return this->accessibleContext;
}

JFileChooser::JFileChooser() {
}

void JFileChooser::clinit$($Class* clazz) {
	$assignStatic(JFileChooser::uiClassID, "FileChooserUI"_s);
	$assignStatic(JFileChooser::CANCEL_SELECTION, "CancelSelection"_s);
	$assignStatic(JFileChooser::APPROVE_SELECTION, "ApproveSelection"_s);
	$assignStatic(JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY, "ApproveButtonTextChangedProperty"_s);
	$assignStatic(JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY, "ApproveButtonToolTipTextChangedProperty"_s);
	$assignStatic(JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY, "ApproveButtonMnemonicChangedProperty"_s);
	$assignStatic(JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY, "ControlButtonsAreShownChangedProperty"_s);
	$assignStatic(JFileChooser::DIRECTORY_CHANGED_PROPERTY, "directoryChanged"_s);
	$assignStatic(JFileChooser::SELECTED_FILE_CHANGED_PROPERTY, "SelectedFileChangedProperty"_s);
	$assignStatic(JFileChooser::SELECTED_FILES_CHANGED_PROPERTY, "SelectedFilesChangedProperty"_s);
	$assignStatic(JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY, "MultiSelectionEnabledChangedProperty"_s);
	$assignStatic(JFileChooser::FILE_SYSTEM_VIEW_CHANGED_PROPERTY, "FileSystemViewChanged"_s);
	$assignStatic(JFileChooser::FILE_VIEW_CHANGED_PROPERTY, "fileViewChanged"_s);
	$assignStatic(JFileChooser::FILE_HIDING_CHANGED_PROPERTY, "FileHidingChanged"_s);
	$assignStatic(JFileChooser::FILE_FILTER_CHANGED_PROPERTY, "fileFilterChanged"_s);
	$assignStatic(JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY, "fileSelectionChanged"_s);
	$assignStatic(JFileChooser::ACCESSORY_CHANGED_PROPERTY, "AccessoryChangedProperty"_s);
	$assignStatic(JFileChooser::ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY, "acceptAllFileFilterUsedChanged"_s);
	$assignStatic(JFileChooser::DIALOG_TITLE_CHANGED_PROPERTY, "DialogTitleChangedProperty"_s);
	$assignStatic(JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY, "DialogTypeChangedProperty"_s);
	$assignStatic(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, "ChoosableFileFilterChangedProperty"_s);
	$assignStatic(JFileChooser::SHOW_HIDDEN_PROP, "awt.file.showHiddenFiles"_s);
}

$Class* JFileChooser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooser, uiClassID)},
		{"OPEN_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, OPEN_DIALOG)},
		{"SAVE_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, SAVE_DIALOG)},
		{"CUSTOM_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, CUSTOM_DIALOG)},
		{"CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, CANCEL_OPTION)},
		{"APPROVE_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, APPROVE_OPTION)},
		{"ERROR_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, ERROR_OPTION)},
		{"FILES_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, FILES_ONLY)},
		{"DIRECTORIES_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, DIRECTORIES_ONLY)},
		{"FILES_AND_DIRECTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, FILES_AND_DIRECTORIES)},
		{"CANCEL_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, CANCEL_SELECTION)},
		{"APPROVE_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_SELECTION)},
		{"APPROVE_BUTTON_TEXT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_BUTTON_TEXT_CHANGED_PROPERTY)},
		{"APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY)},
		{"APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY)},
		{"CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY)},
		{"DIRECTORY_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, DIRECTORY_CHANGED_PROPERTY)},
		{"SELECTED_FILE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, SELECTED_FILE_CHANGED_PROPERTY)},
		{"SELECTED_FILES_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, SELECTED_FILES_CHANGED_PROPERTY)},
		{"MULTI_SELECTION_ENABLED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, MULTI_SELECTION_ENABLED_CHANGED_PROPERTY)},
		{"FILE_SYSTEM_VIEW_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_SYSTEM_VIEW_CHANGED_PROPERTY)},
		{"FILE_VIEW_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_VIEW_CHANGED_PROPERTY)},
		{"FILE_HIDING_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_HIDING_CHANGED_PROPERTY)},
		{"FILE_FILTER_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_FILTER_CHANGED_PROPERTY)},
		{"FILE_SELECTION_MODE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_SELECTION_MODE_CHANGED_PROPERTY)},
		{"ACCESSORY_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, ACCESSORY_CHANGED_PROPERTY)},
		{"ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY)},
		{"DIALOG_TITLE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, DIALOG_TITLE_CHANGED_PROPERTY)},
		{"DIALOG_TYPE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, DIALOG_TYPE_CHANGED_PROPERTY)},
		{"CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY)},
		{"dialogTitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JFileChooser, dialogTitle)},
		{"approveButtonText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JFileChooser, approveButtonText)},
		{"approveButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JFileChooser, approveButtonToolTipText)},
		{"approveButtonMnemonic", "I", nullptr, $PRIVATE, $field(JFileChooser, approveButtonMnemonic)},
		{"filters", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/filechooser/FileFilter;>;", $PRIVATE, $field(JFileChooser, filters)},
		{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(JFileChooser, dialog)},
		{"dialogType", "I", nullptr, $PRIVATE, $field(JFileChooser, dialogType)},
		{"returnValue", "I", nullptr, $PRIVATE, $field(JFileChooser, returnValue)},
		{"accessory", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(JFileChooser, accessory)},
		{"fileView", "Ljavax/swing/filechooser/FileView;", nullptr, $PRIVATE, $field(JFileChooser, fileView)},
		{"controlsShown", "Z", nullptr, $PRIVATE, $field(JFileChooser, controlsShown)},
		{"useFileHiding", "Z", nullptr, $PRIVATE, $field(JFileChooser, useFileHiding)},
		{"SHOW_HIDDEN_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooser, SHOW_HIDDEN_PROP)},
		{"showFilesListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $TRANSIENT, $field(JFileChooser, showFilesListener)},
		{"fileSelectionMode", "I", nullptr, $PRIVATE, $field(JFileChooser, fileSelectionMode)},
		{"multiSelectionEnabled", "Z", nullptr, $PRIVATE, $field(JFileChooser, multiSelectionEnabled)},
		{"useAcceptAllFileFilter", "Z", nullptr, $PRIVATE, $field(JFileChooser, useAcceptAllFileFilter)},
		{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JFileChooser, dragEnabled)},
		{"fileFilter", "Ljavax/swing/filechooser/FileFilter;", nullptr, $PRIVATE, $field(JFileChooser, fileFilter)},
		{"fileSystemView", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $PRIVATE, $field(JFileChooser, fileSystemView)},
		{"currentDirectory", "Ljava/io/File;", nullptr, $PRIVATE, $field(JFileChooser, currentDirectory)},
		{"selectedFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(JFileChooser, selectedFile)},
		{"selectedFiles", "[Ljava/io/File;", nullptr, $PRIVATE, $field(JFileChooser, selectedFiles)},
		{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JFileChooser, accessibleContext)},
		{}
	};
	$NamedAttribute addChoosableFileFiltermethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Adds a filter to the list of user choosable file filters."},
		{}
	};
	$CompoundAttribute addChoosableFileFiltermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", addChoosableFileFiltermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getAcceptAllFileFiltermethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAcceptAllFileFiltermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAcceptAllFileFiltermethodAnnotations$$$namedAttribute},
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
	$NamedAttribute getActionListenersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getActionListenersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getActionListenersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getChoosableFileFiltersmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getChoosableFileFiltersmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getChoosableFileFiltersmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUImethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getUImethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUImethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getUIClassIDmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"expert", 'Z', "true"},
		{"description", 's', "A string that specifies the name of the L&F class."},
		{}
	};
	$CompoundAttribute getUIClassIDmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getUIClassIDmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isDirectorySelectionEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isDirectorySelectionEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isDirectorySelectionEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute isFileSelectionEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute isFileSelectionEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", isFileSelectionEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAcceptAllFileFilterUsedmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets whether the AcceptAll FileFilter is used as an available choice in the choosable filter list."},
		{}
	};
	$CompoundAttribute setAcceptAllFileFilterUsedmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAcceptAllFileFilterUsedmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setAccessorymethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets the accessory component on the JFileChooser."},
		{}
	};
	$CompoundAttribute setAccessorymethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setAccessorymethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setApproveButtonMnemonicmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The mnemonic key accelerator for the ApproveButton."},
		{}
	};
	$CompoundAttribute setApproveButtonMnemonicmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setApproveButtonMnemonicmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setApproveButtonTextmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The text that goes in the ApproveButton."},
		{}
	};
	$CompoundAttribute setApproveButtonTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setApproveButtonTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setApproveButtonToolTipTextmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The tooltip text for the ApproveButton."},
		{}
	};
	$CompoundAttribute setApproveButtonToolTipTextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setApproveButtonToolTipTextmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setControlButtonsAreShownmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets whether the approve & cancel buttons are shown."},
		{}
	};
	$CompoundAttribute setControlButtonsAreShownmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setControlButtonsAreShownmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setCurrentDirectorymethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The directory that the JFileChooser is showing files of."},
		{}
	};
	$CompoundAttribute setCurrentDirectorymethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setCurrentDirectorymethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDialogTitlemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "The title of the JFileChooser dialog window."},
		{}
	};
	$CompoundAttribute setDialogTitlemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDialogTitlemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "JFileChooser.OPEN_DIALOG"},
		{'s', "JFileChooser.SAVE_DIALOG"},
		{'s', "JFileChooser.CUSTOM_DIALOG"},
		{'-'}
	};
	$NamedAttribute setDialogTypemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute},
		{"description", 's', "The type (open, save, custom) of the JFileChooser."},
		{}
	};
	$CompoundAttribute setDialogTypemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDialogTypemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setDragEnabledmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{"description", 's', "determines whether automatic drag handling is enabled"},
		{}
	};
	$CompoundAttribute setDragEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setDragEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFileFiltermethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets the File Filter used to filter out files of type."},
		{}
	};
	$CompoundAttribute setFileFiltermethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFileFiltermethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFileHidingEnabledmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets file hiding on or off."},
		{}
	};
	$CompoundAttribute setFileHidingEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFileHidingEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$1[] = {
		{'s', "JFileChooser.FILES_ONLY"},
		{'s', "JFileChooser.DIRECTORIES_ONLY"},
		{'s', "JFileChooser.FILES_AND_DIRECTORIES"},
		{'-'}
	};
	$NamedAttribute setFileSelectionModemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"enumerationValues", '[', $attribute$1},
		{"description", 's', "Sets the types of files that the JFileChooser can choose."},
		{}
	};
	$CompoundAttribute setFileSelectionModemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFileSelectionModemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFileSystemViewmethodAnnotations$$$namedAttribute[] = {
		{"expert", 'Z', "true"},
		{"description", 's', "Sets the FileSytemView used to get filesystem information."},
		{}
	};
	$CompoundAttribute setFileSystemViewmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFileSystemViewmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setFileViewmethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{"description", 's', "Sets the File View used to get file type information."},
		{}
	};
	$CompoundAttribute setFileViewmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setFileViewmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setMultiSelectionEnabledmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "Sets multiple file selection mode."},
		{}
	};
	$CompoundAttribute setMultiSelectionEnabledmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setMultiSelectionEnabledmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectedFilemethodAnnotations$$$namedAttribute[] = {
		{"preferred", 'Z', "true"},
		{}
	};
	$CompoundAttribute setSelectedFilemethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectedFilemethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setSelectedFilesmethodAnnotations$$$namedAttribute[] = {
		{"description", 's', "The list of selected files if the chooser is in multiple selection mode."},
		{}
	};
	$CompoundAttribute setSelectedFilesmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", setSelectedFilesmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(JFileChooser, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JFileChooser, init$, void, $String*)},
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(JFileChooser, init$, void, $File*)},
		{"<init>", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(JFileChooser, init$, void, $FileSystemView*)},
		{"<init>", "(Ljava/io/File;Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(JFileChooser, init$, void, $File*, $FileSystemView*)},
		{"<init>", "(Ljava/lang/String;Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(JFileChooser, init$, void, $String*, $FileSystemView*)},
		{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, accept, bool, $File*)},
		{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, addActionListener, void, $ActionListener*)},
		{"addChoosableFileFilter", "(Ljavax/swing/filechooser/FileFilter;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, addChoosableFileFilter, void, $FileFilter*), nullptr, nullptr, addChoosableFileFiltermethodAnnotations$$},
		{"approveSelection", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, approveSelection, void)},
		{"cancelSelection", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, cancelSelection, void)},
		{"changeToParentDirectory", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, changeToParentDirectory, void)},
		{"checkDialogType", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooser, checkDialogType, void, int32_t)},
		{"checkDragEnabled", "(Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooser, checkDragEnabled, void, bool)},
		{"checkFileSelectionMode", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JFileChooser, checkFileSelectionMode, void, int32_t)},
		{"createDialog", "(Ljava/awt/Component;)Ljavax/swing/JDialog;", nullptr, $PROTECTED, $virtualMethod(JFileChooser, createDialog, $JDialog*, $Component*), "java.awt.HeadlessException"},
		{"ensureFileIsVisible", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, ensureFileIsVisible, void, $File*)},
		{"fireActionPerformed", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(JFileChooser, fireActionPerformed, void, $String*)},
		{"getAcceptAllFileFilter", "()Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getAcceptAllFileFilter, $FileFilter*), nullptr, nullptr, getAcceptAllFileFiltermethodAnnotations$$},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"getAccessory", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getAccessory, $JComponent*)},
		{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getActionListeners, $ActionListenerArray*), nullptr, nullptr, getActionListenersmethodAnnotations$$},
		{"getApproveButtonMnemonic", "()I", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getApproveButtonMnemonic, int32_t)},
		{"getApproveButtonText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getApproveButtonText, $String*)},
		{"getApproveButtonToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getApproveButtonToolTipText, $String*)},
		{"getChoosableFileFilters", "()[Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getChoosableFileFilters, $FileFilterArray*), nullptr, nullptr, getChoosableFileFiltersmethodAnnotations$$},
		{"getControlButtonsAreShown", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getControlButtonsAreShown, bool)},
		{"getCurrentDirectory", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getCurrentDirectory, $File*)},
		{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getDescription, $String*, $File*)},
		{"getDialogTitle", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getDialogTitle, $String*)},
		{"getDialogType", "()I", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getDialogType, int32_t)},
		{"getDragEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getDragEnabled, bool)},
		{"getFileFilter", "()Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getFileFilter, $FileFilter*)},
		{"getFileSelectionMode", "()I", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getFileSelectionMode, int32_t)},
		{"getFileSystemView", "()Ljavax/swing/filechooser/FileSystemView;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getFileSystemView, $FileSystemView*)},
		{"getFileView", "()Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getFileView, $FileView*)},
		{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getIcon, $Icon*, $File*)},
		{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getName, $String*, $File*)},
		{"getSelectedFile", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getSelectedFile, $File*)},
		{"getSelectedFiles", "()[Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getSelectedFiles, $FileArray*)},
		{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getTypeDescription, $String*, $File*)},
		{"getUI", "()Ljavax/swing/plaf/FileChooserUI;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getUI, $ComponentUI*), nullptr, nullptr, getUImethodAnnotations$$},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JFileChooser, getUIClassID, $String*), nullptr, nullptr, getUIClassIDmethodAnnotations$$},
		{"installHierarchyListener", "()V", nullptr, $PRIVATE, $method(JFileChooser, installHierarchyListener, void)},
		{"installShowFilesListener", "()V", nullptr, $PRIVATE, $method(JFileChooser, installShowFilesListener, void)},
		{"isAcceptAllFileFilterUsed", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, isAcceptAllFileFilterUsed, bool)},
		{"isDirectorySelectionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, isDirectorySelectionEnabled, bool), nullptr, nullptr, isDirectorySelectionEnabledmethodAnnotations$$},
		{"isFileHidingEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, isFileHidingEnabled, bool)},
		{"isFileSelectionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, isFileSelectionEnabled, bool), nullptr, nullptr, isFileSelectionEnabledmethodAnnotations$$},
		{"isMultiSelectionEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, isMultiSelectionEnabled, bool)},
		{"isTraversable", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, isTraversable, bool, $File*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(JFileChooser, paramString, $String*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(JFileChooser, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, removeActionListener, void, $ActionListener*)},
		{"removeChoosableFileFilter", "(Ljavax/swing/filechooser/FileFilter;)Z", nullptr, $PUBLIC, $virtualMethod(JFileChooser, removeChoosableFileFilter, bool, $FileFilter*)},
		{"rescanCurrentDirectory", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, rescanCurrentDirectory, void)},
		{"resetChoosableFileFilters", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, resetChoosableFileFilters, void)},
		{"setAcceptAllFileFilterUsed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setAcceptAllFileFilterUsed, void, bool), nullptr, nullptr, setAcceptAllFileFilterUsedmethodAnnotations$$},
		{"setAccessory", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setAccessory, void, $JComponent*), nullptr, nullptr, setAccessorymethodAnnotations$$},
		{"setApproveButtonMnemonic", "(I)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setApproveButtonMnemonic, void, int32_t), nullptr, nullptr, setApproveButtonMnemonicmethodAnnotations$$},
		{"setApproveButtonMnemonic", "(C)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setApproveButtonMnemonic, void, char16_t)},
		{"setApproveButtonText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setApproveButtonText, void, $String*), nullptr, nullptr, setApproveButtonTextmethodAnnotations$$},
		{"setApproveButtonToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setApproveButtonToolTipText, void, $String*), nullptr, nullptr, setApproveButtonToolTipTextmethodAnnotations$$},
		{"setControlButtonsAreShown", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setControlButtonsAreShown, void, bool), nullptr, nullptr, setControlButtonsAreShownmethodAnnotations$$},
		{"setCurrentDirectory", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setCurrentDirectory, void, $File*), nullptr, nullptr, setCurrentDirectorymethodAnnotations$$},
		{"setDialogTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setDialogTitle, void, $String*), nullptr, nullptr, setDialogTitlemethodAnnotations$$},
		{"setDialogType", "(I)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setDialogType, void, int32_t), nullptr, nullptr, setDialogTypemethodAnnotations$$},
		{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setDragEnabled, void, bool), nullptr, nullptr, setDragEnabledmethodAnnotations$$},
		{"setFileFilter", "(Ljavax/swing/filechooser/FileFilter;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setFileFilter, void, $FileFilter*), nullptr, nullptr, setFileFiltermethodAnnotations$$},
		{"setFileHidingEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setFileHidingEnabled, void, bool), nullptr, nullptr, setFileHidingEnabledmethodAnnotations$$},
		{"setFileSelectionMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setFileSelectionMode, void, int32_t), nullptr, nullptr, setFileSelectionModemethodAnnotations$$},
		{"setFileSystemView", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setFileSystemView, void, $FileSystemView*), nullptr, nullptr, setFileSystemViewmethodAnnotations$$},
		{"setFileView", "(Ljavax/swing/filechooser/FileView;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setFileView, void, $FileView*), nullptr, nullptr, setFileViewmethodAnnotations$$},
		{"setMultiSelectionEnabled", "(Z)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setMultiSelectionEnabled, void, bool), nullptr, nullptr, setMultiSelectionEnabledmethodAnnotations$$},
		{"setSelectedFile", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setSelectedFile, void, $File*), nullptr, nullptr, setSelectedFilemethodAnnotations$$},
		{"setSelectedFiles", "([Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, setSelectedFiles, void, $FileArray*), nullptr, nullptr, setSelectedFilesmethodAnnotations$$},
		{"setup", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PROTECTED, $virtualMethod(JFileChooser, setup, void, $FileSystemView*)},
		{"showDialog", "(Ljava/awt/Component;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(JFileChooser, showDialog, int32_t, $Component*, $String*), "java.awt.HeadlessException"},
		{"showOpenDialog", "(Ljava/awt/Component;)I", nullptr, $PUBLIC, $virtualMethod(JFileChooser, showOpenDialog, int32_t, $Component*), "java.awt.HeadlessException"},
		{"showSaveDialog", "(Ljava/awt/Component;)I", nullptr, $PUBLIC, $virtualMethod(JFileChooser, showSaveDialog, int32_t, $Component*), "java.awt.HeadlessException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(JFileChooser, updateUI, void)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(JFileChooser, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFileChooser$FCHierarchyListener", "javax.swing.JFileChooser", "FCHierarchyListener", $PRIVATE},
		{"javax.swing.JFileChooser$AccessibleJFileChooser", "javax.swing.JFileChooser", "AccessibleJFileChooser", $PROTECTED},
		{"javax.swing.JFileChooser$WeakPCL", "javax.swing.JFileChooser", "WeakPCL", $PRIVATE | $STATIC},
		{"javax.swing.JFileChooser$1", nullptr, nullptr, 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "UI"},
		{"description", 's', "A component which allows for the interactive selection of a file."},
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
		"javax.swing.JFileChooser",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.JFileChooser$FCHierarchyListener,javax.swing.JFileChooser$AccessibleJFileChooser,javax.swing.JFileChooser$WeakPCL,javax.swing.JFileChooser$1"
	};
	$loadClass(JFileChooser, name, initialize, &classInfo$$, JFileChooser::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JFileChooser));
	});
	return class$;
}

$Class* JFileChooser::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/plaf/FileChooserUI.h>

#include <java/io/File.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFileChooser = ::javax::swing::JFileChooser;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileView = ::javax::swing::filechooser::FileView;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _FileChooserUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(FileChooserUI, init$, void)},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileChooserUI, ensureFileIsVisible, void, $JFileChooser*, $File*)},
	{"getAcceptAllFileFilter", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileChooserUI, getAcceptAllFileFilter, $FileFilter*, $JFileChooser*)},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileChooserUI, getApproveButtonText, $String*, $JFileChooser*)},
	{"getDefaultButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PUBLIC, $virtualMethod(FileChooserUI, getDefaultButton, $JButton*, $JFileChooser*)},
	{"getDialogTitle", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileChooserUI, getDialogTitle, $String*, $JFileChooser*)},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileChooserUI, getFileView, $FileView*, $JFileChooser*)},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileChooserUI, rescanCurrentDirectory, void, $JFileChooser*)},
	{}
};

$ClassInfo _FileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.FileChooserUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_FileChooserUI_MethodInfo_
};

$Object* allocate$FileChooserUI($Class* clazz) {
	return $of($alloc(FileChooserUI));
}

void FileChooserUI::init$() {
	$ComponentUI::init$();
}

$JButton* FileChooserUI::getDefaultButton($JFileChooser* fc) {
	return nullptr;
}

FileChooserUI::FileChooserUI() {
}

$Class* FileChooserUI::load$($String* name, bool initialize) {
	$loadClass(FileChooserUI, name, initialize, &_FileChooserUI_ClassInfo_, allocate$FileChooserUI);
	return class$;
}

$Class* FileChooserUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax
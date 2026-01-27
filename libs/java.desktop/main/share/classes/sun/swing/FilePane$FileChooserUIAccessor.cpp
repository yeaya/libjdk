#include <sun/swing/FilePane$FileChooserUIAccessor.h>

#include <java/awt/event/MouseListener.h>
#include <java/io/File.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $MouseListener = ::java::awt::event::MouseListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;

namespace sun {
	namespace swing {

$MethodInfo _FilePane$FileChooserUIAccessor_MethodInfo_[] = {
	{"createDetailsView", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, createDetailsView, $JPanel*)},
	{"createDoubleClickListener", "(Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", "(Ljavax/swing/JList<*>;)Ljava/awt/event/MouseListener;", $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, createDoubleClickListener, $MouseListener*, $JList*)},
	{"createList", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, createList, $JPanel*)},
	{"createListSelectionListener", "()Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, createListSelectionListener, $ListSelectionListener*)},
	{"getApproveSelectionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, getApproveSelectionAction, $Action*)},
	{"getChangeToParentDirectoryAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, getChangeToParentDirectoryAction, $Action*)},
	{"getDirectory", "()Ljava/io/File;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, getDirectory, $File*)},
	{"getFileChooser", "()Ljavax/swing/JFileChooser;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, getFileChooser, $JFileChooser*)},
	{"getModel", "()Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, getModel, $BasicDirectoryModel*)},
	{"getNewFolderAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, getNewFolderAction, $Action*)},
	{"isDirectorySelected", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FilePane$FileChooserUIAccessor, isDirectorySelected, bool)},
	{}
};

$InnerClassInfo _FilePane$FileChooserUIAccessor_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$FileChooserUIAccessor", "sun.swing.FilePane", "FileChooserUIAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FilePane$FileChooserUIAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.FilePane$FileChooserUIAccessor",
	nullptr,
	nullptr,
	nullptr,
	_FilePane$FileChooserUIAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$FileChooserUIAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$FileChooserUIAccessor($Class* clazz) {
	return $of($alloc(FilePane$FileChooserUIAccessor));
}

$Class* FilePane$FileChooserUIAccessor::load$($String* name, bool initialize) {
	$loadClass(FilePane$FileChooserUIAccessor, name, initialize, &_FilePane$FileChooserUIAccessor_ClassInfo_, allocate$FilePane$FileChooserUIAccessor);
	return class$;
}

$Class* FilePane$FileChooserUIAccessor::class$ = nullptr;

	} // swing
} // sun
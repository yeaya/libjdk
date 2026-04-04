#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <java/io/File.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Icon = ::javax::swing::Icon;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$BasicFileView::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FileView::init$();
	$set(this, iconCache, $new($Hashtable));
}

void BasicFileChooserUI$BasicFileView::clearIconCache() {
	$set(this, iconCache, $new($Hashtable));
}

$String* BasicFileChooserUI$BasicFileView::getName($File* f) {
	$useLocalObjectStack();
	$var($String, fileName, nullptr);
	if (f != nullptr) {
		$assign(fileName, $$nc($$nc(this->this$0->getFileChooser())->getFileSystemView())->getSystemDisplayName(f));
	}
	return fileName;
}

$String* BasicFileChooserUI$BasicFileView::getDescription($File* f) {
	return $nc(f)->getName();
}

$String* BasicFileChooserUI$BasicFileView::getTypeDescription($File* f) {
	$useLocalObjectStack();
	$var($String, type, $$nc($$nc(this->this$0->getFileChooser())->getFileSystemView())->getSystemTypeDescription(f));
	if (type == nullptr) {
		if ($nc(f)->isDirectory()) {
			$assign(type, this->this$0->directoryDescriptionText);
		} else {
			$assign(type, this->this$0->fileDescriptionText);
		}
	}
	return type;
}

$Icon* BasicFileChooserUI$BasicFileView::getCachedIcon($File* f) {
	return $cast($Icon, $nc(this->iconCache)->get(f));
}

void BasicFileChooserUI$BasicFileView::cacheIcon($File* f, $Icon* i) {
	if (f == nullptr || i == nullptr) {
		return;
	}
	$nc(this->iconCache)->put(f, i);
}

$Icon* BasicFileChooserUI$BasicFileView::getIcon($File* f) {
	$useLocalObjectStack();
	$var($Icon, icon, getCachedIcon(f));
	if (icon != nullptr) {
		return icon;
	}
	$assign(icon, this->this$0->fileIcon);
	if (f != nullptr) {
		$var($FileSystemView, fsv, $$nc(this->this$0->getFileChooser())->getFileSystemView());
		if ($nc(fsv)->isFloppyDrive(f)) {
			$assign(icon, this->this$0->floppyDriveIcon);
		} else if (fsv->isDrive(f)) {
			$assign(icon, this->this$0->hardDriveIcon);
		} else if (fsv->isComputerNode(f)) {
			$assign(icon, this->this$0->computerIcon);
		} else if (f->isDirectory()) {
			$assign(icon, this->this$0->directoryIcon);
		}
	}
	cacheIcon(f, icon);
	return icon;
}

$Boolean* BasicFileChooserUI$BasicFileView::isHidden($File* f) {
	$var($String, name, $nc(f)->getName());
	if (name != nullptr && name->charAt(0) == u'.') {
		return $Boolean::TRUE;
	} else {
		return $Boolean::FALSE;
	}
}

BasicFileChooserUI$BasicFileView::BasicFileChooserUI$BasicFileView() {
}

$Class* BasicFileChooserUI$BasicFileView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$BasicFileView, this$0)},
		{"iconCache", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/io/File;Ljavax/swing/Icon;>;", $PROTECTED, $field(BasicFileChooserUI$BasicFileView, iconCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PUBLIC, $method(BasicFileChooserUI$BasicFileView, init$, void, $BasicFileChooserUI*)},
		{"cacheIcon", "(Ljava/io/File;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, cacheIcon, void, $File*, $Icon*)},
		{"clearIconCache", "()V", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, clearIconCache, void)},
		{"getCachedIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, getCachedIcon, $Icon*, $File*)},
		{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, getDescription, $String*, $File*)},
		{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, getIcon, $Icon*, $File*)},
		{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, getName, $String*, $File*)},
		{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, getTypeDescription, $String*, $File*)},
		{"isHidden", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$BasicFileView, isHidden, $Boolean*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView", "javax.swing.plaf.basic.BasicFileChooserUI", "BasicFileView", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView",
		"javax.swing.filechooser.FileView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$BasicFileView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicFileChooserUI$BasicFileView);
	});
	return class$;
}

$Class* BasicFileChooserUI$BasicFileView::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
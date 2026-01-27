#include <javax/swing/filechooser/FileView.h>

#include <java/io/File.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace javax {
	namespace swing {
		namespace filechooser {

$MethodInfo _FileView_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(FileView, init$, void)},
	{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileView, getDescription, $String*, $File*)},
	{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(FileView, getIcon, $Icon*, $File*)},
	{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileView, getName, $String*, $File*)},
	{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileView, getTypeDescription, $String*, $File*)},
	{"isTraversable", "(Ljava/io/File;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(FileView, isTraversable, $Boolean*, $File*)},
	{}
};

$ClassInfo _FileView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.filechooser.FileView",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FileView_MethodInfo_
};

$Object* allocate$FileView($Class* clazz) {
	return $of($alloc(FileView));
}

void FileView::init$() {
}

$String* FileView::getName($File* f) {
	return nullptr;
}

$String* FileView::getDescription($File* f) {
	return nullptr;
}

$String* FileView::getTypeDescription($File* f) {
	return nullptr;
}

$Icon* FileView::getIcon($File* f) {
	return nullptr;
}

$Boolean* FileView::isTraversable($File* f) {
	return nullptr;
}

FileView::FileView() {
}

$Class* FileView::load$($String* name, bool initialize) {
	$loadClass(FileView, name, initialize, &_FileView_ClassInfo_, allocate$FileView);
	return class$;
}

$Class* FileView::class$ = nullptr;

		} // filechooser
	} // swing
} // javax
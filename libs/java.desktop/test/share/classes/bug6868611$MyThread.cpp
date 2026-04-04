#include <bug6868611$MyThread.h>
#include <bug6868611.h>
#include <java/io/File.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;

void bug6868611$MyThread::init$($File* dir) {
	$Thread::init$();
	$set(this, dir, dir);
}

void bug6868611$MyThread::run() {
	$var($FileSystemView, fileSystemView, $FileSystemView::getFileSystemView());
	$nc(fileSystemView)->getFiles(this->dir, false);
}

bug6868611$MyThread::bug6868611$MyThread() {
}

$Class* bug6868611$MyThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(bug6868611$MyThread, dir)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(bug6868611$MyThread, init$, void, $File*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6868611$MyThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6868611$MyThread", "bug6868611", "MyThread", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6868611$MyThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6868611"
	};
	$loadClass(bug6868611$MyThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6868611$MyThread);
	});
	return class$;
}

$Class* bug6868611$MyThread::class$ = nullptr;
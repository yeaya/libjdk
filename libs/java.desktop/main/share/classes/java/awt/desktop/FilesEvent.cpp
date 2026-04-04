#include <java/awt/desktop/FilesEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace desktop {

void FilesEvent::init$($List* files) {
	$AppEvent::init$();
	$set(this, files, files);
}

$List* FilesEvent::getFiles() {
	return this->files == nullptr ? ($List*)nullptr : $cast($List, $new($ArrayList, this->files));
}

FilesEvent::FilesEvent() {
}

$Class* FilesEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilesEvent, serialVersionUID)},
		{"files", "Ljava/util/List;", "Ljava/util/List<Ljava/io/File;>;", $FINAL, $field(FilesEvent, files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/io/File;>;)V", 0, $method(FilesEvent, init$, void, $List*)},
		{"getFiles", "()Ljava/util/List;", "()Ljava/util/List<Ljava/io/File;>;", $PUBLIC, $virtualMethod(FilesEvent, getFiles, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.desktop.FilesEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FilesEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilesEvent);
	});
	return class$;
}

$Class* FilesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java
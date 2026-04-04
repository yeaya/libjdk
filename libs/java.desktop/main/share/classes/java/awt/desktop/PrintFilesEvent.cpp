#include <java/awt/desktop/PrintFilesEvent.h>
#include <java/awt/desktop/FilesEvent.h>
#include <java/util/List.h>
#include <jcpp.h>

using $FilesEvent = ::java::awt::desktop::FilesEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace desktop {

void PrintFilesEvent::init$($List* files) {
	$FilesEvent::init$(files);
}

PrintFilesEvent::PrintFilesEvent() {
}

$Class* PrintFilesEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrintFilesEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/io/File;>;)V", $PUBLIC, $method(PrintFilesEvent, init$, void, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.PrintFilesEvent",
		"java.awt.desktop.FilesEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintFilesEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintFilesEvent);
	});
	return class$;
}

$Class* PrintFilesEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java
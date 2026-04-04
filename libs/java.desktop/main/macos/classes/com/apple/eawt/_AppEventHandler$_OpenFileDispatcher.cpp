#include <com/apple/eawt/_AppEventHandler$_OpenFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/OpenFilesEvent.h>
#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppEventHandler$_QueuingAppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher;
using $OpenFilesEvent = ::java::awt::desktop::OpenFilesEvent;
using $OpenFilesHandler = ::java::awt::desktop::OpenFilesHandler;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace apple {
		namespace eawt {

void _AppEventHandler$_OpenFileDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_QueuingAppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_OpenFileDispatcher::performUsing($OpenFilesHandler* handler, $_AppEventHandler$_NativeEvent* event) {
	$useLocalObjectStack();
	$var($List, fileNameList, $cast($List, $nc(event)->get(0)));
	$var($ArrayList, files, $new($ArrayList, $nc(fileNameList)->size()));
	{
		$var($Iterator, i$, fileNameList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, fileName, $cast($String, i$->next()));
			files->add($$new($File, fileName));
		}
	}
	$var($String, searchTerm, $cast($String, event->get(1)));
	$nc(handler)->openFiles($$new($OpenFilesEvent, files, searchTerm));
}

void _AppEventHandler$_OpenFileDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($OpenFilesHandler, handler), event);
}

_AppEventHandler$_OpenFileDispatcher::_AppEventHandler$_OpenFileDispatcher() {
}

$Class* _AppEventHandler$_OpenFileDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_OpenFileDispatcher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_OpenFileDispatcher, init$, void, $_AppEventHandler*)},
		{"performUsing", "(Ljava/awt/desktop/OpenFilesHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_OpenFileDispatcher, performUsing, void, $OpenFilesHandler*, $_AppEventHandler$_NativeEvent*)},
		{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_OpenFileDispatcher, performUsing, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_OpenFileDispatcher", "com.apple.eawt._AppEventHandler", "_OpenFileDispatcher", 0},
		{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_OpenFileDispatcher",
		"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher<Ljava/awt/desktop/OpenFilesHandler;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_OpenFileDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_OpenFileDispatcher);
	});
	return class$;
}

$Class* _AppEventHandler$_OpenFileDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com
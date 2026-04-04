#include <com/apple/eawt/_AppEventHandler$_PrintFileDispatcher.h>
#include <com/apple/eawt/_AppEventHandler$_NativeEvent.h>
#include <com/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher.h>
#include <com/apple/eawt/_AppEventHandler.h>
#include <java/awt/desktop/PrintFilesEvent.h>
#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/io/File.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $_AppEventHandler$_NativeEvent = ::com::apple::eawt::_AppEventHandler$_NativeEvent;
using $_AppEventHandler$_QueuingAppEventDispatcher = ::com::apple::eawt::_AppEventHandler$_QueuingAppEventDispatcher;
using $PrintFilesEvent = ::java::awt::desktop::PrintFilesEvent;
using $PrintFilesHandler = ::java::awt::desktop::PrintFilesHandler;
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

void _AppEventHandler$_PrintFileDispatcher::init$($_AppEventHandler* this$0) {
	$set(this, this$0, this$0);
	$_AppEventHandler$_QueuingAppEventDispatcher::init$(this$0);
}

void _AppEventHandler$_PrintFileDispatcher::performUsing($PrintFilesHandler* handler, $_AppEventHandler$_NativeEvent* event) {
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
	$nc(handler)->printFiles($$new($PrintFilesEvent, files));
}

void _AppEventHandler$_PrintFileDispatcher::performUsing(Object$* handler, $_AppEventHandler$_NativeEvent* event) {
	this->performUsing($cast($PrintFilesHandler, handler), event);
}

_AppEventHandler$_PrintFileDispatcher::_AppEventHandler$_PrintFileDispatcher() {
}

$Class* _AppEventHandler$_PrintFileDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(_AppEventHandler$_PrintFileDispatcher, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(_AppEventHandler$_PrintFileDispatcher, init$, void, $_AppEventHandler*)},
		{"performUsing", "(Ljava/awt/desktop/PrintFilesHandler;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, 0, $virtualMethod(_AppEventHandler$_PrintFileDispatcher, performUsing, void, $PrintFilesHandler*, $_AppEventHandler$_NativeEvent*)},
		{"performUsing", "(Ljava/lang/Object;Lcom/apple/eawt/_AppEventHandler$_NativeEvent;)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(_AppEventHandler$_PrintFileDispatcher, performUsing, void, Object$*, $_AppEventHandler$_NativeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt._AppEventHandler$_PrintFileDispatcher", "com.apple.eawt._AppEventHandler", "_PrintFileDispatcher", 0},
		{"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher", "com.apple.eawt._AppEventHandler", "_QueuingAppEventDispatcher", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.eawt._AppEventHandler$_PrintFileDispatcher",
		"com.apple.eawt._AppEventHandler$_QueuingAppEventDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/eawt/_AppEventHandler$_QueuingAppEventDispatcher<Ljava/awt/desktop/PrintFilesHandler;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.eawt._AppEventHandler"
	};
	$loadClass(_AppEventHandler$_PrintFileDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_AppEventHandler$_PrintFileDispatcher);
	});
	return class$;
}

$Class* _AppEventHandler$_PrintFileDispatcher::class$ = nullptr;

		} // eawt
	} // apple
} // com
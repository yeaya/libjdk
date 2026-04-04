#include <java/awt/ModalEventFilter$ToolkitModalEventFilter.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog$ModalExclusionType.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventFilter$FilterAction.h>
#include <java/awt/ModalEventFilter.h>
#include <java/awt/Window.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ACCEPT
#undef ACCEPT_IMMEDIATELY
#undef REJECT
#undef TOOLKIT_EXCLUDE

using $Dialog = ::java::awt::Dialog;
using $Dialog$ModalExclusionType = ::java::awt::Dialog$ModalExclusionType;
using $EventFilter$FilterAction = ::java::awt::EventFilter$FilterAction;
using $ModalEventFilter = ::java::awt::ModalEventFilter;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void ModalEventFilter$ToolkitModalEventFilter::init$($Dialog* modalDialog) {
	$ModalEventFilter::init$(modalDialog);
	$set(this, appContext, $nc(modalDialog)->appContext);
}

$EventFilter$FilterAction* ModalEventFilter$ToolkitModalEventFilter::acceptWindow($Window* w$renamed) {
	$var($Window, w, w$renamed);
	$init($Dialog$ModalExclusionType);
	if ($nc(w)->isModalExcluded($Dialog$ModalExclusionType::TOOLKIT_EXCLUDE)) {
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::ACCEPT;
	}
	if (w->appContext != this->appContext) {
		$init($EventFilter$FilterAction);
		return $EventFilter$FilterAction::REJECT;
	}
	while (w != nullptr) {
		if ($equals(w, this->modalDialog)) {
			$init($EventFilter$FilterAction);
			return $EventFilter$FilterAction::ACCEPT_IMMEDIATELY;
		}
		$assign(w, w->getOwner());
	}
	$init($EventFilter$FilterAction);
	return $EventFilter$FilterAction::REJECT;
}

ModalEventFilter$ToolkitModalEventFilter::ModalEventFilter$ToolkitModalEventFilter() {
}

$Class* ModalEventFilter$ToolkitModalEventFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"appContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(ModalEventFilter$ToolkitModalEventFilter, appContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Dialog;)V", nullptr, 0, $method(ModalEventFilter$ToolkitModalEventFilter, init$, void, $Dialog*)},
		{"acceptWindow", "(Ljava/awt/Window;)Ljava/awt/EventFilter$FilterAction;", nullptr, $PROTECTED, $virtualMethod(ModalEventFilter$ToolkitModalEventFilter, acceptWindow, $EventFilter$FilterAction*, $Window*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.ModalEventFilter$ToolkitModalEventFilter", "java.awt.ModalEventFilter", "ToolkitModalEventFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.ModalEventFilter$ToolkitModalEventFilter",
		"java.awt.ModalEventFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.ModalEventFilter"
	};
	$loadClass(ModalEventFilter$ToolkitModalEventFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModalEventFilter$ToolkitModalEventFilter);
	});
	return class$;
}

$Class* ModalEventFilter$ToolkitModalEventFilter::class$ = nullptr;

	} // awt
} // java
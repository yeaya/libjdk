#include <java/awt/Window$1DisposeAction.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
#include <java/awt/im/InputContext.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace awt {

void Window$1DisposeAction::init$($Window* this$0) {
	$set(this, this$0, this$0);
}

void Window$1DisposeAction::run() {
	$useLocalObjectStack();
	this->this$0->disposing = true;
	$var($Throwable, var$0, nullptr);
	try {
		$var($GraphicsDevice, gd, $$nc(this->this$0->getGraphicsConfiguration())->getDevice());
		if ($nc(gd)->getFullScreenWindow() == this->this$0) {
			gd->setFullScreenWindow(nullptr);
		}
		$var($ObjectArray, ownedWindowArray, nullptr);
		$synchronized(this->this$0->ownedWindowList) {
			$assign(ownedWindowArray, $new($ObjectArray, this->this$0->ownedWindowList->size()));
			this->this$0->ownedWindowList->copyInto(ownedWindowArray);
		}
		for (int32_t i = 0; i < ownedWindowArray->length; ++i) {
			$var($Window, child, $cast($Window, $nc($cast($WeakReference, ownedWindowArray->get(i)))->get()));
			if (child != nullptr) {
				child->disposeImpl();
			}
		}
		this->this$0->hide();
		this->this$0->beforeFirstShow = true;
		this->this$0->removeNotify();
		$synchronized(this->this$0->inputContextLock) {
			if (this->this$0->inputContext != nullptr) {
				this->this$0->inputContext->dispose();
				$set(this->this$0, inputContext, nullptr);
			}
		}
		this->this$0->clearCurrentFocusCycleRootOnHide();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->this$0->disposing = false;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

Window$1DisposeAction::Window$1DisposeAction() {
}

$Class* Window$1DisposeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(Window$1DisposeAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(Window$1DisposeAction, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Window$1DisposeAction, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Window",
		"doDispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Window$1DisposeAction", nullptr, "DisposeAction", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Window$1DisposeAction",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Window"
	};
	$loadClass(Window$1DisposeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Window$1DisposeAction);
	});
	return class$;
}

$Class* Window$1DisposeAction::class$ = nullptr;

	} // awt
} // java
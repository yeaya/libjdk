#include <sun/awt/X11/XEmbedChildProxy.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XEmbedChildProxyPeer.h>
#include <sun/awt/X11/XEmbeddingContainer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $XEmbeddingContainer = ::sun::awt::X11::XEmbeddingContainer;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

void XEmbedChildProxy::init$($XEmbeddingContainer* container, int64_t handle) {
	$Component::init$();
	this->handle = handle;
	$set(this, container, container);
}

void XEmbedChildProxy::addNotify() {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		if ($$nc($AWTAccessor::getComponentAccessor())->getPeer(this) == nullptr) {
			$$nc($AWTAccessor::getComponentAccessor())->setPeer(this, $($$sure($XToolkit, $Toolkit::getDefaultToolkit())->createEmbedProxy(this)));
		}
		$Component::addNotify();
	}
}

$XEmbeddingContainer* XEmbedChildProxy::getEmbeddingContainer() {
	return this->container;
}

int64_t XEmbedChildProxy::getHandle() {
	return this->handle;
}

XEmbedChildProxy::XEmbedChildProxy() {
}

$Class* XEmbedChildProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handle", "J", nullptr, 0, $field(XEmbedChildProxy, handle)},
		{"container", "Lsun/awt/X11/XEmbeddingContainer;", nullptr, 0, $field(XEmbedChildProxy, container)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/X11/XEmbeddingContainer;J)V", nullptr, $PUBLIC, $method(XEmbedChildProxy, init$, void, $XEmbeddingContainer*, int64_t)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(XEmbedChildProxy, addNotify, void)},
		{"getEmbeddingContainer", "()Lsun/awt/X11/XEmbeddingContainer;", nullptr, 0, $virtualMethod(XEmbedChildProxy, getEmbeddingContainer, $XEmbeddingContainer*)},
		{"getHandle", "()J", nullptr, 0, $virtualMethod(XEmbedChildProxy, getHandle, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XEmbedChildProxy",
		"java.awt.Component",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XEmbedChildProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XEmbedChildProxy));
	});
	return class$;
}

$Class* XEmbedChildProxy::class$ = nullptr;

		} // X11
	} // awt
} // sun
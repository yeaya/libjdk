#include <sun/awt/X11/XDropTargetEventProcessor.h>
#include <java/util/Iterator.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <jcpp.h>

#undef UNKNOWN_MESSAGE
#undef XA_MOTIF_DRAG_RECEIVER_INFO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XEvent = ::sun::awt::X11::XEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;

namespace sun {
	namespace awt {
		namespace X11 {

XDropTargetEventProcessor* XDropTargetEventProcessor::theInstance = nullptr;
bool XDropTargetEventProcessor::active = false;

void XDropTargetEventProcessor::init$() {
	$set(this, protocol, nullptr);
}

bool XDropTargetEventProcessor::doProcessEvent($XEvent* ev) {
	$useLocalObjectStack();
	bool var$0 = $nc(ev)->get_type() == $XConstants::DestroyNotify && this->protocol != nullptr;
	if (var$0) {
		int64_t var$1 = $$nc(ev->get_xany())->get_window();
		var$0 = var$1 == this->protocol->getSourceWindow();
	}
	if (var$0) {
		$nc(this->protocol)->cleanup();
		$set(this, protocol, nullptr);
		return false;
	}
	if (ev->get_type() == $XConstants::PropertyNotify) {
		$var($XPropertyEvent, xproperty, ev->get_xproperty());
		int64_t var$2 = $nc(xproperty)->get_atom();
		$init($MotifDnDConstants);
		if (var$2 == $nc($MotifDnDConstants::XA_MOTIF_DRAG_RECEIVER_INFO)->getAtom()) {
			$$nc($XDropTargetRegistry::getRegistry())->updateEmbedderDropSite(xproperty->get_window());
		}
	}
	if (ev->get_type() != $XConstants::ClientMessage) {
		return false;
	}
	bool processed = false;
	$var($XClientMessageEvent, xclient, ev->get_xclient());
	$var($XDropTargetProtocol, curProtocol, this->protocol);
	if (this->protocol != nullptr) {
		if (this->protocol->getMessageType(xclient) != $XDropTargetProtocol::UNKNOWN_MESSAGE) {
			processed = $nc(this->protocol)->processClientMessage(xclient);
		} else {
			$set(this, protocol, nullptr);
		}
	}
	if (this->protocol == nullptr) {
		$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
		while ($nc(dropTargetProtocols)->hasNext()) {
			$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
			if (dropTargetProtocol == curProtocol) {
				continue;
			}
			if ($nc(dropTargetProtocol)->getMessageType(xclient) == $XDropTargetProtocol::UNKNOWN_MESSAGE) {
				continue;
			}
			$set(this, protocol, dropTargetProtocol);
			processed = this->protocol->processClientMessage(xclient);
			break;
		}
	}
	return processed;
}

void XDropTargetEventProcessor::reset() {
	$init(XDropTargetEventProcessor);
	$set(XDropTargetEventProcessor::theInstance, protocol, nullptr);
}

void XDropTargetEventProcessor::activate() {
	$init(XDropTargetEventProcessor);
	XDropTargetEventProcessor::active = true;
}

bool XDropTargetEventProcessor::processEvent($XEvent* ev) {
	$init(XDropTargetEventProcessor);
	return XDropTargetEventProcessor::active ? XDropTargetEventProcessor::theInstance->doProcessEvent(ev) : false;
}

void XDropTargetEventProcessor::clinit$($Class* clazz) {
	$assignStatic(XDropTargetEventProcessor::theInstance, $new(XDropTargetEventProcessor));
	XDropTargetEventProcessor::active = false;
}

XDropTargetEventProcessor::XDropTargetEventProcessor() {
}

$Class* XDropTargetEventProcessor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lsun/awt/X11/XDropTargetEventProcessor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetEventProcessor, theInstance)},
		{"active", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XDropTargetEventProcessor, active)},
		{"protocol", "Lsun/awt/X11/XDropTargetProtocol;", nullptr, $PRIVATE, $field(XDropTargetEventProcessor, protocol)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XDropTargetEventProcessor, init$, void)},
		{"activate", "()V", nullptr, $STATIC, $staticMethod(XDropTargetEventProcessor, activate, void)},
		{"doProcessEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $PRIVATE, $method(XDropTargetEventProcessor, doProcessEvent, bool, $XEvent*)},
		{"processEvent", "(Lsun/awt/X11/XEvent;)Z", nullptr, $STATIC, $staticMethod(XDropTargetEventProcessor, processEvent, bool, $XEvent*)},
		{"reset", "()V", nullptr, $STATIC, $staticMethod(XDropTargetEventProcessor, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XDropTargetEventProcessor",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XDropTargetEventProcessor, name, initialize, &classInfo$$, XDropTargetEventProcessor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XDropTargetEventProcessor);
	});
	return class$;
}

$Class* XDropTargetEventProcessor::class$ = nullptr;

		} // X11
	} // awt
} // sun
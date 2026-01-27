#include <sun/swing/LightweightContent.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JComponent = ::javax::swing::JComponent;

namespace sun {
	namespace swing {

$NamedAttribute LightweightContent_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _LightweightContent_MethodAnnotations_imageBufferReset6[] = {
	{"Ljava/lang/Deprecated;", LightweightContent_Attribute_var$0},
	{}
};

$MethodInfo _LightweightContent_MethodInfo_[] = {
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(LightweightContent, addDropTarget, void, $DropTarget*)},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC, $virtualMethod(LightweightContent, createDragGestureRecognizer, $DragGestureRecognizer*, $Class*, $DragSource*, $Component*, int32_t, $DragGestureListener*)},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, $virtualMethod(LightweightContent, createDragSourceContextPeer, $DragSourceContextPeer*, $DragGestureEvent*), "java.awt.dnd.InvalidDnDOperationException"},
	{"focusGrabbed", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, focusGrabbed, void)},
	{"focusUngrabbed", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, focusUngrabbed, void)},
	{"getComponent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, getComponent, $JComponent*)},
	{"imageBufferReset", "([IIIIIII)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(LightweightContent, imageBufferReset, void, $ints*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t), nullptr, nullptr, _LightweightContent_MethodAnnotations_imageBufferReset6},
	{"imageBufferReset", "([IIIIIIDD)V", nullptr, $PUBLIC, $virtualMethod(LightweightContent, imageBufferReset, void, $ints*, int32_t, int32_t, int32_t, int32_t, int32_t, double, double)},
	{"imageBufferReset", "([IIIIII)V", nullptr, $PUBLIC, $virtualMethod(LightweightContent, imageBufferReset, void, $ints*, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"imageReshaped", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, imageReshaped, void, int32_t, int32_t, int32_t, int32_t)},
	{"imageUpdated", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, imageUpdated, void, int32_t, int32_t, int32_t, int32_t)},
	{"maximumSizeChanged", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, maximumSizeChanged, void, int32_t, int32_t)},
	{"minimumSizeChanged", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, minimumSizeChanged, void, int32_t, int32_t)},
	{"paintLock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, paintLock, void)},
	{"paintUnlock", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, paintUnlock, void)},
	{"preferredSizeChanged", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LightweightContent, preferredSizeChanged, void, int32_t, int32_t)},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC, $virtualMethod(LightweightContent, removeDropTarget, void, $DropTarget*)},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, $virtualMethod(LightweightContent, setCursor, void, $Cursor*)},
	{}
};

$ClassInfo _LightweightContent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.LightweightContent",
	nullptr,
	nullptr,
	nullptr,
	_LightweightContent_MethodInfo_
};

$Object* allocate$LightweightContent($Class* clazz) {
	return $of($alloc(LightweightContent));
}

void LightweightContent::imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride, int32_t scale) {
	imageBufferReset(data, x, y, width, height, linestride);
}

void LightweightContent::imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride, double scaleX, double scaleY) {
	imageBufferReset(data, x, y, width, height, linestride, (int32_t)$Math::round(scaleX));
}

void LightweightContent::imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride) {
	imageBufferReset(data, x, y, width, height, linestride, 1);
}

void LightweightContent::setCursor($Cursor* cursor) {
}

$DragGestureRecognizer* LightweightContent::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	return nullptr;
}

$DragSourceContextPeer* LightweightContent::createDragSourceContextPeer($DragGestureEvent* dge) {
	return nullptr;
}

void LightweightContent::addDropTarget($DropTarget* dt) {
}

void LightweightContent::removeDropTarget($DropTarget* dt) {
}

$Class* LightweightContent::load$($String* name, bool initialize) {
	$loadClass(LightweightContent, name, initialize, &_LightweightContent_ClassInfo_, allocate$LightweightContent);
	return class$;
}

$Class* LightweightContent::class$ = nullptr;

	} // swing
} // sun
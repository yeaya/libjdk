#include <java/awt/peer/TaskbarPeer.h>

#include <java/awt/Image.h>
#include <java/awt/PopupMenu.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/awt/Taskbar$State.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $PopupMenu = ::java::awt::PopupMenu;
using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $Taskbar$State = ::java::awt::Taskbar$State;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TaskbarPeer_MethodInfo_[] = {
	{"getIconImage", "()Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, getIconImage, $Image*)},
	{"getMenu", "()Ljava/awt/PopupMenu;", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, getMenu, $PopupMenu*)},
	{"isSupported", "(Ljava/awt/Taskbar$Feature;)Z", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, isSupported, bool, $Taskbar$Feature*)},
	{"requestUserAttention", "(ZZ)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, requestUserAttention, void, bool, bool)},
	{"requestWindowUserAttention", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, requestWindowUserAttention, void, $Window*)},
	{"setIconBadge", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setIconBadge, void, $String*)},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setIconImage, void, $Image*)},
	{"setMenu", "(Ljava/awt/PopupMenu;)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setMenu, void, $PopupMenu*)},
	{"setProgressValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setProgressValue, void, int32_t)},
	{"setWindowIconBadge", "(Ljava/awt/Window;Ljava/awt/Image;)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setWindowIconBadge, void, $Window*, $Image*)},
	{"setWindowProgressState", "(Ljava/awt/Window;Ljava/awt/Taskbar$State;)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setWindowProgressState, void, $Window*, $Taskbar$State*)},
	{"setWindowProgressValue", "(Ljava/awt/Window;I)V", nullptr, $PUBLIC, $virtualMethod(TaskbarPeer, setWindowProgressValue, void, $Window*, int32_t)},
	{}
};

$ClassInfo _TaskbarPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TaskbarPeer",
	nullptr,
	nullptr,
	nullptr,
	_TaskbarPeer_MethodInfo_
};

$Object* allocate$TaskbarPeer($Class* clazz) {
	return $of($alloc(TaskbarPeer));
}

void TaskbarPeer::requestUserAttention(bool enabled, bool critical) {
}

void TaskbarPeer::requestWindowUserAttention($Window* w) {
}

void TaskbarPeer::setMenu($PopupMenu* menu) {
}

$PopupMenu* TaskbarPeer::getMenu() {
	return nullptr;
}

void TaskbarPeer::setIconImage($Image* image) {
}

$Image* TaskbarPeer::getIconImage() {
	return nullptr;
}

void TaskbarPeer::setIconBadge($String* badge) {
}

void TaskbarPeer::setWindowIconBadge($Window* w, $Image* badge) {
}

void TaskbarPeer::setWindowProgressValue($Window* w, int32_t value) {
}

void TaskbarPeer::setWindowProgressState($Window* w, $Taskbar$State* state) {
}

void TaskbarPeer::setProgressValue(int32_t value) {
}

bool TaskbarPeer::isSupported($Taskbar$Feature* f) {
	return false;
}

$Class* TaskbarPeer::load$($String* name, bool initialize) {
	$loadClass(TaskbarPeer, name, initialize, &_TaskbarPeer_ClassInfo_, allocate$TaskbarPeer);
	return class$;
}

$Class* TaskbarPeer::class$ = nullptr;

		} // peer
	} // awt
} // java